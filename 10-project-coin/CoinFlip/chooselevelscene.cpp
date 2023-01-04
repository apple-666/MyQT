#include "chooselevelscene.h"
#include <QMenuBar>
#include <QMenu>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QLabel>
#include "playscene.h"
#include <QSound>

ChooseLevelScene::ChooseLevelScene(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(480,720); // this是我创建的MainWindow类
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    this->setWindowTitle("选择关卡");

    QMenuBar * bar = this->menuBar();
    this->setMenuBar(bar);

    QMenu * startMenu = bar->addMenu("开始");
    QAction * quitAction = startMenu->addAction("退出");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });

    MyPushButton * backBtn = new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()/2-backBtn->width()/2,this->height()*0.9-backBtn->height());

    QSound *backSound = new QSound(":/res/BackButtonSound.wav");
    connect(backBtn,&MyPushButton::clicked,[=](){
        QTimer::singleShot(500,this,[=](){
            backSound->play();
            this->hide();
            emit this->chooseSceneBack(); // 触发自定义信号
        });
    });

    playScene = NULL;



    for(int i=0;i<20;i++){
        MyPushButton * menuBtn = new MyPushButton(":/res/LevelIcon.png");
        menuBtn->setParent(this);
        menuBtn->move(50+(i%4)*100,150+(i/4)*80);

        QLabel * label = new QLabel;
        label->setParent(this);
        label->setFixedSize(menuBtn->width(),menuBtn->height());
        label->setText(QString::number(i+1));
        label->setAlignment(Qt::AlignCenter);

        // 鼠标穿透，使得不响应鼠标事件
        label->setAttribute(Qt::WA_TransparentForMouseEvents,true);
        label->move(50+(i%4)*100,150+(i/4)*80);

        QSound *chooseSceneSound = new QSound(":/res/TapButtonSound.wav");

        connect(menuBtn,&MyPushButton::clicked,[=](){
            chooseSceneSound->play();
            if(playScene==NULL) {
                this->hide();
                playScene = new PlayScene(i+1);
                playScene->setGeometry(this->geometry());
                playScene->show();

                //（） 对象new之后才能使用，在show之前也行，返回信号
                connect(playScene,&PlayScene::chooseSceneBack,[=](){
                    this->setGeometry(playScene->geometry());
                    this->show();
                    delete playScene;
                    playScene = NULL;
                });

            }
        });
    }


}

void ChooseLevelScene::paintEvent(QPaintEvent *){
    int width = this->width();//获取窗口宽度
    int height = this->height();

    QPainter pt(this); // this是QPaintDevice *device
    pt.drawPixmap(0,0,width,height,QPixmap(":/res/OtherSceneBg.png"));

    QPixmap pxTitle;
    pxTitle.load(":/res/Title.png");
    pt.drawPixmap(10,30,pxTitle.width(),pxTitle.height(),pxTitle);

}
