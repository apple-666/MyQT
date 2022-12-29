#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPicture>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QPixmap pix(300,300);
//    pix.fill(Qt::white);
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::blue));
//    painter.drawEllipse(QPoint(150,150),150,150);
//    pix.save("D:\\apple\\apple的文档\\唯美图片\\小软件\\aa.jpg");

//    QImage img(300,300,QImage::Format_ARGB32);//
//    img.fill(Qt::white);
//    QPainter painter(&img);
//    painter.setPen(QPen(Qt::blue));
//    painter.drawEllipse(QPoint(150,150),150,150);
//    img.save("D:\\apple\\apple的文档\\唯美图片\\小软件\\bb.jpg");

      QPicture pic;
      QPainter painter;
      painter.begin(&pic);
      painter.setPen(QPen(Qt::blue));
      painter.drawEllipse(QPoint(150,150),150,150);
      painter.end();
      // 使用zzz的后缀，封闭
      pic.save("D:\\apple\\apple的文档\\唯美图片\\小软件\\dd.zzz");

}
void Widget::paintEvent(QPaintEvent *){
//    QPainter painter(this);
//    QImage img;
//    img.load(":/小软件/apple.png");
//    for(int i=100;i<150;i++){
//        for(int j = 100;j<150;j++){
//            QRgb value = qRgb(0,0,255);
//            img.setPixel(i,j,value);
//        }
//    }
//    painter.drawImage(0,0,img);

    QPainter pt(this);
    QPicture pic;
    pic.load("D:\\apple\\apple的文档\\唯美图片\\小软件\\dd.zzz");
    pt.drawPicture(0,0,pic);
}


Widget::~Widget()
{
    delete ui;
}
