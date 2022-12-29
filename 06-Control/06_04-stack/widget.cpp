#include "widget.h"
#include "ui_widget.h"
#include <QMovie>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnSearch,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btnShow,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    ui->comboBox->addItem("apple");
    ui->comboBox->addItem("pear");
    ui->comboBox->addItem("water");
    ui->comboBox->setCurrentIndex(2);

    ui->label_img->setPixmap(QPixmap(":/小软件/robot.png"));

    QMovie * mv = new QMovie(":/小软件/mario.gif");
    ui->label_gif->setMovie(mv);
    mv->start();

}

Widget::~Widget()
{
    delete ui;
}
