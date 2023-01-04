#include "mypushbutton.h"
#include <QDebug>
#include <QPropertyAnimation>
#include <QTime>
#include <QCoreApplication>
#include <QDebug>
#include <QPushButton>

//MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
//{

//}

MyPushButton::MyPushButton(QString normalImg,QString pressImg ){
    normalImgPath = normalImg;
    pressedImgPath = pressImg;

    QPixmap px;
    bool ret = px.load(normalImgPath);
    if(!ret){
        qDebug()<<normalImgPath<<"图片加载失败";
    }
    this->setFixedSize(px.width(),px.height());
    this->setStyleSheet("QPushButton{border:0px}"); // 让btn无间距
    this->setIcon(px);
    this->setIconSize(QSize(px.width(),px.height()));
}

void MyPushButton::zoom1(){ // up
    QPropertyAnimation * animation1 = new QPropertyAnimation(this,"geometry");
    animation1->setDuration(100);

    animation1->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation1->setEndValue(QRect(this->x(),this->y()-this->height()*0.1,this->width(),this->height()));
    animation1->setEasingCurve(QEasingCurve::OutBounce); // 动画为弹跳效果

    animation1->start();

//    QTime time;
//    time.start();
//    while(time.elapsed()<2000){
//        QCoreApplication::processEvents();   //处理事件
//    }


}

void MyPushButton::zoom2(){ // down
    QPropertyAnimation * animation1 = new QPropertyAnimation(this,"geometry");
    animation1->setDuration(100);

    animation1->setStartValue(QRect(this->x(),this->y()-this->height()*0.1,this->width(),this->height()));
    animation1->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation1->setEasingCurve(QEasingCurve::OutBounce); // 动画为弹跳效果
    animation1->start();
}


void MyPushButton::mousePressEvent(QMouseEvent *e){
    if(pressedImgPath!=""){
        QPixmap px;
        bool ret = px.load(pressedImgPath);
        if(!ret){
            qDebug()<<pressedImgPath<<"图片加载失败";
        }
        this->setFixedSize(px.width(),px.height());
        this->setStyleSheet("QPushButton{border:0px}"); // 让btn无间距
        this->setIcon(px);
        this->setIconSize(QSize(px.width(),px.height()));
    }
    return QPushButton::mousePressEvent(e);
}

void MyPushButton::mouseReleaseEvent(QMouseEvent *e){
    if(normalImgPath!=""){
        QPixmap px;
        bool ret = px.load(normalImgPath);
        if(!ret){
            qDebug()<<normalImgPath<<"图片加载失败";
        }
        this->setFixedSize(px.width(),px.height());
        this->setStyleSheet("QPushButton{border:0px}"); // 让btn无间距
        this->setIcon(px);
        this->setIconSize(QSize(px.width(),px.height()));
    }
    return QPushButton::mouseReleaseEvent(e);
}


