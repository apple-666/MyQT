#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->myTableWidget->setColumnCount(3);

    ui->myTableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");
    ui->myTableWidget->setRowCount(4);

    QList<QString> nameList;
    nameList <<"亚瑟"<<"妲己"<<"安其拉"<<"赵子龙";
    QList<QString> sexList;
    sexList <<"男"<<"女"<<"女"<<"男";
    QList<QString> yearList;
    yearList <<"21"<<"22"<<"32"<<"33";
    for(int i=0;i<4;i++){
        int j = 0;
        ui->myTableWidget->setItem(i,j++,new QTableWidgetItem(nameList[i]));
        ui->myTableWidget->setItem(i,j++,new QTableWidgetItem(sexList[i]));
        ui->myTableWidget->setItem(i,j,new QTableWidgetItem(yearList[i]));
    }
//    ui->myTableWidget->setItem(0,0,new QTableWidgetItem("亚瑟"));
//    ui->myTableWidget->setItem(0,1,new QTableWidgetItem("男"));
//    ui->myTableWidget->setItem(0,2,new QTableWidgetItem("21"));

//    ui->myTableWidget->setItem(1,0,new QTableWidgetItem("妲己"));
//    ui->myTableWidget->setItem(1,1,new QTableWidgetItem("女"));
//    ui->myTableWidget->setItem(1,2,new QTableWidgetItem("21"));

//    ui->myTableWidget->setItem(2,0,new QTableWidgetItem("安其拉"));
//    ui->myTableWidget->setItem(2,1,new QTableWidgetItem("女"));
//    ui->myTableWidget->setItem(2,2,new QTableWidgetItem("20"));

//    ui->myTableWidget->setItem(3,0,new QTableWidgetItem("赵子龙"));
//    ui->myTableWidget->setItem(3,1,new QTableWidgetItem("女"));
//    ui->myTableWidget->setItem(3,2,new QTableWidgetItem("22"));


}


Widget::~Widget()
{
    delete ui;
}
