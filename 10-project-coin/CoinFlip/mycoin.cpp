#include "mycoin.h"
#include <QDebug>
//MyCoin::MyCoin(QWidget *parent) : QWidget(parent)
//{

//}

MyCoin::MyCoin(QString butImg){
    QPixmap pixmap;
    bool ret = pixmap.load(butImg);
    if(!ret){
        qDebug()<<"图片加载失败："<<butImg;
    }
    this->setFixedSize(80,80); // MyCoin自身的大小
    this->setStyleSheet("QPushButton{border:0px;}"); // style
    this->setIcon(pixmap); // Icon：用来装图片的容积的。大小
    this->setIconSize(QSize(80,80));


    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    connect(timer1,&QTimer::timeout,[=](){
            QPixmap pixmap;
            QString img=QString(":/res/Coin000%1.png").arg(this->min++);
            pixmap.load(img);
            this->setFixedSize(80,80); // MyCoin自身的大小
            this->setStyleSheet("QPushButton{border:0px;}"); // style
            this->setIcon(pixmap); // Icon：用来装图片的容积的。大小
            this->setIconSize(QSize(80,80));
            if(this->min>this->max){
                this->min = 1;
                timer1->stop();
                this->isAnimation = false;
            }
    });

    connect(timer2,&QTimer::timeout,[=](){
            QPixmap pixmap;
            QString img=QString(":/res/Coin000%1.png").arg(this->max--);
            pixmap.load(img);
            this->setFixedSize(80,80); // MyCoin自身的大小
            this->setStyleSheet("QPushButton{border:0px;}"); // style
            this->setIcon(pixmap); // Icon：用来装图片的容积的。大小
            this->setIconSize(QSize(80,80));
            if(this->min>this->max){
                this->max = 8;
                timer2->stop();
                this->isAnimation = false;
            }
    });
}

void MyCoin::mousePressEvent(QMouseEvent *e){
    if(this->isAnimation || this->isWin){
        return;// 停止接收动作
    }
    return QPushButton::mousePressEvent(e);
}


// 调用后，会启动对应的timer，timer每50ms结束会发送timeout信号
void MyCoin::changeFlag(){

    if(this->flag){
        timer1->start(50);  //ms 不会阻塞
        this->isAnimation = true;
        this->flag = false;
    }else{
        timer2->start(50);
        this->isAnimation = true;
        this->flag = true;
    }
}
