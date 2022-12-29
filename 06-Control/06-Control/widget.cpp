#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

#include <QListWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->rbtnWoman->setChecked(true);

    connect(ui->rbtnWoman,&QRadioButton::clicked,[=](){
        qDebug()<<"选中了woman";
    });


//    connect(ui->checkBox_1,&QCheckBox::stateChanged,[=](int state){
//             qDebug() << state;
//        });

//    QListWidgetItem * item = new QListWidgetItem("1111");
//    ui->listWidget->addItem(item);
//    item->setTextAlignment(Qt::AlignHCenter);

    QStringList list;
    list<<"1111"<<"2222"<<"3333";
    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}
