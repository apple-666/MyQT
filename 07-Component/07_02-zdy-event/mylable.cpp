#include "mylable.h"
#include "ui_mylable.h"
#include <QDebug>
#include <QMouseEvent>

MyLable::MyLable(QWidget *parent) :
    QLabel(parent),
    ui(new Ui::MyLable)
{
    ui->setupUi(this);
}

void MyLable::enterEvent(QEvent *){
    qDebug()<<"进入视线";
}


void MyLable::leaveEvent(QEvent *){
    qDebug()<<"离开视线";
}

void MyLable::mousePressEvent(QMouseEvent *ev){
    qDebug()<<QString("鼠标电机了：（%1，%2）").arg(ev->x()).arg(ev->y());
}

void MyLable::mouseReleaseEvent(QMouseEvent *ev){
    qDebug()<<QString("鼠标释放（%1，%2）").arg(ev->x()).arg(ev->y());
}

void MyLable::mouseMoveEvent(QMouseEvent *ev){
    qDebug()<<QString("鼠标移动到了（%1，%2）").arg(ev->x()).arg(ev->y());
}

// 事件分发器
bool MyLable::event(QEvent *e){
    if(e->type() == QEvent::MouseButtonPress){
        // 拦截后，不再向下分发
        QMouseEvent *ev = static_cast<QMouseEvent *> (e);
        qDebug()<<QString("鼠标点击了（%1，%2）").arg(ev->x()).arg(ev->y());
        return true;
    }
    return QLabel::event(e);
}


MyLable::~MyLable()
{
    delete ui;
}
