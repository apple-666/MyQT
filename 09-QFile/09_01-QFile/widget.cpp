#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QByteArray>
#include <QTextCodec>
#include <QFileInfo>
#include <QDateTime>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString fPath = QFileDialog::getOpenFileName(this,"打开文件","D:\\apple\\workspace\\QT_WS\\project1");
        qDebug()<<fPath;

        if(fPath.isEmpty()){
            QMessageBox::warning(this,"警告","文件路径不能为空");
            return;
        }else{
            ui->lineEdit->setText(fPath);
            //QTextCodec * codec = QTextCodec::codecForName("gbk");
            QFile file(fPath);
            file.open(QIODevice::ReadOnly);
            QByteArray array;

//            while(!file.atEnd()){
//                array += file.readLine();
//            }
            array = file.readAll();

            ui->plainTextEdit->setPlainText(array);
            //ui->plainTextEdit->setPlainText(codec->toUnicode(array));
            file.close();

            file.open(QIODevice::Append);
            file.write("刷新一下");
            file.close();

            QFileInfo info(fPath);
            qDebug()<<info.suffix()<<" "<<info.size()<<" "<<info.fileName()<<" "<<info.filePath();
            qDebug()<<"创建时期:"<<info.created().toString("yyyy-MM-dd ")<<"最后修改日期:"<<info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
        }

    });
}

Widget::~Widget()
{
    delete ui;
}
