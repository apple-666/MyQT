#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(960,240);

    posX = 0;
    connect(ui->btnMv,&QPushButton::clicked,[=](){
        posX += 200;
        update();
    });
}

void Widget::paintEvent(QPaintEvent *){
    // 1,基础 设置
    //    QPainter painter(this);
    //    QPen pen(QColor(0,0,255));
    //    painter.setPen(pen);
    //    pen.setWidth(5);
    //    pen.setStyle(Qt::DashLine);

    //    QBrush brush(Qt::green);
    //    painter.setBrush(brush);

    //    painter.drawLine(QPoint(1,1),QPoint(100,100));
    //    painter.drawRect(QRect(QPoint(1,1),QPoint(100,100)));
    //    painter.drawEllipse(QPoint(100,100),99,99);
    //    painter.drawText(QPoint(0,200),"史努比是天秤男");
    //    painter.drawText(QRect(QPoint(200,100),QPoint(400,200)),"不是他，真正的凶手另有其人");

    // 高级设置
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawEllipse(QPoint(100,100),99,99);

    painter.save();// 保存现在状态
    painter.translate(300,0);
    painter.drawEllipse(QPoint(100,100),99,99);
    painter.drawEllipse(QPoint(150,100),99,99);


    painter.restore();
    painter.drawEllipse(QPoint(150,100),99,99);

    //
    QPixmap pix(":/小软件/0羽毛球.ico");
    if(posX > this->width()){
//        posX = -pix.width();
        posX = 0;
    }
    painter.drawPixmap(posX,0,QPixmap(":/小软件/0羽毛球.ico"));



}


Widget::~Widget()
{
    delete ui;
}
