#include "widget.h"
#include <QApplication>

// Teacher老师类
// Student学生类
// 下课后  老师会触发一个 饿了 的信号
// 学生响应这个信号 并且 请老师吃饭


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
