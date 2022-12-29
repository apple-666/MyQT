#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTimer * t1 = new QTimer(this);
    t1->start(1000);
    connect(t1,&QTimer::timeout,[=](){
        static int n = 1;
        ui->c1->setText(QString::number(n++));

    });

    connect(ui->btnStop,&QPushButton::clicked,[=](){
        t1->stop();
    });

    connect(ui->btnCont,&QPushButton::clicked,[=](){
        t1->start();
    });

    ui->label->installEventFilter(this);
}

bool Widget::eventFilter(QObject* obj,QEvent* e){
    if(obj == ui->label){
        if(e->type()==QEvent::MouseButtonPress){
            QMouseEvent *ev = static_cast<QMouseEvent *> (e);
            qDebug()<<QString("在filter中，鼠标点击了（%1，%2）").arg(ev->x()).arg(ev->y());
            return true;
        }
    }
    return QWidget::eventFilter(obj,e);
}


Widget::~Widget()
{
    delete ui;
}
