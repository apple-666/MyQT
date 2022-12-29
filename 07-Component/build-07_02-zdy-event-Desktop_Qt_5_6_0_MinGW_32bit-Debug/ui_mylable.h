/********************************************************************************
** Form generated from reading UI file 'mylable.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLABLE_H
#define UI_MYLABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLable
{
public:

    void setupUi(QWidget *MyLable)
    {
        if (MyLable->objectName().isEmpty())
            MyLable->setObjectName(QStringLiteral("MyLable"));
        MyLable->resize(400, 300);

        retranslateUi(MyLable);

        QMetaObject::connectSlotsByName(MyLable);
    } // setupUi

    void retranslateUi(QWidget *MyLable)
    {
        MyLable->setWindowTitle(QApplication::translate("MyLable", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MyLable: public Ui_MyLable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLABLE_H
