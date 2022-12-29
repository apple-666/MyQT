#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //    ui->actionNew->setIcon(QIcon("D:\\apple\\apple的文档\\唯美图片\\小软件\\羽毛球.png"));
    ui->actionNew->setIcon(QIcon(":/小软件/羽毛球.png"));
    ui->actionW1->setIcon(QIcon(":/小软件/羽毛球.png"));
    ui->actionOpen->setIcon(QIcon(":\\小软件\\羽毛球.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
