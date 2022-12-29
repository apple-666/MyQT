#include "student.h"
#include "QDebug"
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat()
{
    qDebug()<<"学生请老师吃饭";
}

void Student::treat(QString foodName){
    qDebug()<<"学生请客，老师想吃："<<foodName;
    qDebug()<<"学生请客，老师想吃："<<foodName.toUtf8().data();
}
