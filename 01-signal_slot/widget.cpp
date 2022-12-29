#include "widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->zt = new Teacher(this);
    this->st = new Student(this);

    // 无参的信号
//    connect(zt,&Teacher::hungry,st,&Student::treat);
//    classOver();

    // 有参的信号,使用函数指针修改 函数地址(相当于转换指针)
//    void(Teacher::*teaSignal)(QString)  = &Teacher::hungry;
//    void(Student::*stuSlot)(QString) = &Student::treat;
//    connect(zt,teaSignal,st,stuSlot);
//    classOver();

    // 使用button
//    QPushButton *btn = new QPushButton("下课",this);
//    void(Teacher::*teaSignal)()  = &Teacher::hungry;
//    void(Student::*stuSlot)() = &Student::treat;
//    connect(btn,&QPushButton::clicked,zt,teaSignal);
//    connect(zt,teaSignal,st,stuSlot);

//    classOver();

//    QPushButton *btn = new QPushButton("下课",this);
//    void(Teacher::*teaSignal)()  = &Teacher::hungry;
//    void(Student::*stuSlot)() = &Student::treat;
//    connect(btn,&QPushButton::clicked,this,Widget::classOver);
//    connect(zt,teaSignal,st,stuSlot);

    // 常用的lambda [=](){}   后面再加()表示调用
    QPushButton * btn2 = new QPushButton("aaa",this);
    QPushButton * btn3 = new QPushButton("aaa",this);
    btn3->move(50,50);
    [=](){
        btn2->setText("bbb");
        btn3->setText("bbb");
    }();
    // 使用连接时，控件内部会锁上，所以用&不起作用（表示本身），用=起作用（表示再一次克隆，再指向）
    connect(btn3,&QPushButton::clicked,this,[=](){
        btn3->setText("111");
    });

    QPushButton * b1 = new QPushButton(this);
    QPushButton * b2 = new QPushButton(this);
    b1->move(100,0);
    int m = 10;
    connect(b1,&QPushButton::clicked,this,[m]()mutable{
        m = 20;
        qDebug()<<"1:"<< m;
    });
    connect(b2,&QPushButton::clicked,this,[=](){
        qDebug()<<"2:"<< m;
    });
    qDebug()<<"3:"<< m;

    // 具有返回值的lambda
    int num = []()->int{
        return 111;
    }();
    qDebug()<<num;

    // 关闭窗口
    QPushButton * b4 = new QPushButton("关闭窗口",this);
    b4->move(200,0);
    //connect(b4,&QPushButton::clicked,this,this->close);
    connect(b4,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

void Widget::classOver()
{
    // 无参的
    emit this->zt->hungry();

    // 有参的
    //emit this->zt->hungry("apple");
}

Widget::~Widget()
{

}
