#include "playscene.h"
#include <QPainter>
#include <QMenu>
#include <QMenuBar>
#include "mypushbutton.h"
#include "QTimer"
#include <QLabel>
#include "mycoin.h"
#include "dataconfig.h"
#include <QDebug>
#include <QPropertyAnimation>
#include <QSound>

//PlayScene::PlayScene(QWidget *parent) : QMainWindow(parent)
//{

//}
PlayScene::PlayScene(int levelIndex){
    this->levelIndex = levelIndex;
    this->setFixedSize(480,720); // this是我创建的MainWindow类
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    this->setWindowTitle("翻金币");

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

    QSound * backSound = new QSound(":/res/BackButtonSound.wav");


    connect(backBtn,&MyPushButton::clicked,[=](){
        backSound->play();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            emit this->chooseSceneBack(); // 触发自定义信号
        });
    });

    QLabel * label = new QLabel(this);
    QFont font;
    font.setFamily("华文琥珀");
    font.setPointSize(30);
    label->setFont(font);
    QString str = QString("level %1").arg(levelIndex);
    label->setText(str);
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    label->setGeometry(25,this->height()*0.85,140,40);

    dataConfig config;
    for(int i=0;i<4;i++){
        QString oneLine;
        for(int j=0;j<4;j++){
            gameArray[i][j] = config.mData[this->levelIndex][i][j];
            oneLine += " " + QString::number(gameArray[i][j]);
            if(gameArray[i][j]==0) cnt++;
        }
        qDebug()<<oneLine;
    }


    QLabel * winLabel = new QLabel(this);
    QPixmap winP;
    winP.load(":/res/LevelCompletedDialogBg.png");
    winLabel->setGeometry(0,0,400,200);
    winLabel->setPixmap(winP);
    winLabel->setScaledContents(true);
    winLabel->move(this->width()/2-winLabel->width()/2,-this->height());



    QSound * coinFlipSound = new QSound(":/res/ConFlipSound.wav");
    QSound * winSound = new QSound(":/res/LevelWinSound.wav");

    for(int i = 0;i<4;i++){ // 第i行
        for(int j = 0;j<4;j++){
            QLabel * label = new QLabel(this);
            label->setGeometry(0,0,80,80);
            label->setScaledContents(true);
            label->setPixmap(QPixmap(":/res/BoardNode.png"));
            label->move(80+j*80,200+i*80);

            QString img;
            if(gameArray[i][j]){ // 正面
                img = ":/res/Coin0001.png";
            }else{
                img = ":/res/Coin0008.png";
            }

            MyCoin * coin = new MyCoin(img);
            coin->setParent(this);
            coin->move(80+j*80,200+i*80);
            coin->posX = i;
            coin->posY = j;
            coin->flag = gameArray[i][j];
            coinBtn[i][j] = coin;

            connect(coin,&MyCoin::clicked,[=](){
                coinFlipSound->play();
                coin->changeFlag();
                gameArray[i][j] = !gameArray[i][j];
                cnt += gameArray[i][j]==1?-1:1;

                QTimer::singleShot(500,this,[=](){
                    int nowX = coin->posX;
                    int nowY = coin->posY;
                     //延时翻动周围金币
                    int newX = nowX-1;
                    int newY = nowY;
                    if(newX>=0){ // 上
                        coinBtn[newX][newY]->changeFlag();
                        gameArray[newX][newY] = !gameArray[newX][newY];
                        cnt += gameArray[newX][newY]==1?-1:1;
                    }

                    newX = nowX+1;
                    newY = nowY;
                    if(newX<4){ // 下
                        coinBtn[newX][newY]->changeFlag();
                        gameArray[newX][newY] = !gameArray[newX][newY];
                        cnt += gameArray[newX][newY]==1?-1:1;

                    }

                    newX = nowX;
                    newY = nowY-1;
                    if(newY>=0){ // 左
                        coinBtn[newX][newY]->changeFlag();
                        gameArray[newX][newY] = !gameArray[newX][newY];
                        cnt += gameArray[newX][newY]==1?-1:1;

                    }

                    newX = nowX;
                    newY = nowY+1;
                    if(newY<4){ // 右
                        coinBtn[newX][newY]->changeFlag();
                        gameArray[newX][newY] = !gameArray[newX][newY];
                        cnt += gameArray[newX][newY]==1?-1:1;

                    }

                    this->isWin = cnt==0?true:false;
//                    for(int i=0;i<4;i++){
//                        QString oneLine = "";
//                        for(int j=0;j<4;j++){
//                            oneLine += " "+QString::number(coinBtn[i][j]?1:0);
//                            if(coinBtn[i][j]->flag==false){
//                                this->isWin = false;
//                                break;
//                            }
//                        }
//                        qDebug()<<oneLine;
//                    }
                    if(this->isWin){
                        QTimer::singleShot(500,this,[=](){
                            winSound->play();
                            qDebug()<<"you have won!";
                            for(int i=0;i<4;i++){
                                for(int j=0;j<4;j++){
                                    coinBtn[i][j]->isWin = true;
                                }
                            }
                            winLabel->raise();
                            QPropertyAnimation * animation = new QPropertyAnimation(winLabel,"geometry");
                            animation->setDuration(500);
                            animation->setStartValue(QRect(winLabel->x(),winLabel->y(),winLabel->width(),winLabel->height()));
                            animation->setEndValue(QRect(winLabel->x(),(this->height()-winLabel->height())*0.5,winLabel->width(),winLabel->height()));
                            animation->setEasingCurve(QEasingCurve::OutBounce); // 动画为弹跳效果
                            animation->start();
                        });
                    }
                });

            });
        }
    }

}

void PlayScene::paintEvent(QPaintEvent *){
    int width = this->width();//获取窗口宽度
    int height = this->height();

    QPainter pt(this); // this是QPaintDevice *device
    pt.drawPixmap(0,0,width,height,QPixmap(":/res/PlayLevelSceneBg.png"));

    QPixmap pxTitle;
    pxTitle.load(":/res/Title.png");
    pt.drawPixmap(10,30,pxTitle.width(),pxTitle.height(),pxTitle);
}

