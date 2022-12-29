#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionNew,&QAction::triggered,this,[=](){

        // 两种对话框
        // 模拟对话框
//        QDialog dlg(this);
//        dlg.resize(200,80);
//        dlg.exec();


        // 非模拟对话框
//        QDialog *dlg2 = new QDialog(this);
//        dlg2->resize(200,30);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose); // 在内部会删除对象，更干净

        //消息对话框
//        QMessageBox::critical(this,"出现错误"," 正文内容：xxx");
//        QMessageBox::information(this,"出现信息"," 正文内容：xxx");
//        QMessageBox::warning(this,"出现警告"," 正文内容：xxx");
//        if(QMessageBox::Save == QMessageBox::question(this,"title:请问","text:question",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel)){
//            qDebug()<<"保存";
//        }else{
//            qDebug()<<"取消";
//        }

//        // 颜色对话框
//        QColor color = QColorDialog::getColor(Qt::red);
//        // 获取颜色的三原色数据
//        qDebug()<<color.red()<<color.green()<<color.blue();

//        QString file = QFileDialog::getOpenFileName(this,"打开文件","D:\\apple\\apple的文档\\唯美图片","(*.*)");
//        qDebug()<<file;

//        bool flag; // 默认为 true
//        qDebug()<<flag;
//        QFont font = QFontDialog::getFont(&flag);
//        qDebug() << "字体" << font.family().toUtf8().data()<< "字号"<< font.pointSize()
//                 << "是否加粗"<<font.bold() << "是否倾斜" << font.italic();



//          QDialog l1(this);
//          l1.setWindowTitle("信息");
          //l1.exec();

        // 使用对象的形式，是在堆上建立，提高窗口的生命周期
        //QDialog* l2 = new QDialog(this); // 将对象挂在对象树上，防止内存泄露
        //l2->show();

        // 最好的写法：点击close则delete对象
        QDialog* l3 = new QDialog;
        l3->setAttribute(Qt::WA_DeleteOnClose);
        l3->show();

    });


}

MainWindow::~MainWindow()
{
    delete ui;
}
