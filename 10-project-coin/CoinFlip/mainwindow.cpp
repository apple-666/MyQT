#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPainter>
#include <QDebug>
#include <QTimer>
#include "mypushbutton.h"
#include "chooselevelscene.h"
#include <QSound>
/* 刚进入的主页
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); // ui管理 各个ui空间，信号，槽


    this->setFixedSize(480,720); // this是我创建的MainWindow类
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    this->setWindowTitle("一起来玩翻金币");

    connect(ui->actionQuit,&QAction::triggered,[=](){
        this->close();
    });

    MyPushButton * startBtn = new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5,this->height()*0.8);

    ChooseLevelScene *chooseScene = new ChooseLevelScene;



    QSound *startSound = new QSound(":/res/TapButtonSound.wav");
    connect(startBtn,&MyPushButton::clicked,[=](){
        startSound->play();
        startBtn->zoom1();
        startBtn->zoom2();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            chooseScene->setGeometry(this->geometry());
            chooseScene->show();

            connect(chooseScene,&ChooseLevelScene::chooseSceneBack,[=](){
                this->setGeometry(chooseScene->geometry());
                this->show();
            });
        });
    });




}

void MainWindow::paintEvent(QPaintEvent *){
    int width = this->width();//获取窗口宽度
    int height = this->height();

    QPainter pt(this); // this是QPaintDevice *device
    pt.drawPixmap(0,0,width,height,QPixmap(":/res/PlayLevelSceneBg.png"));

    QPixmap pxTitle;
    pxTitle.load(":/res/Title.png");
    pt.drawPixmap(10,30,pxTitle.width(),pxTitle.height(),pxTitle);


}


MainWindow::~MainWindow()
{
    delete ui;
}
