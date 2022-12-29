/********************************************************************************
** Form generated from reading UI file 'mylabel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLABEL_H
#define UI_MYLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLabel
{
public:

    void setupUi(QWidget *MyLabel)
    {
        if (MyLabel->objectName().isEmpty())
            MyLabel->setObjectName(QStringLiteral("MyLabel"));
        MyLabel->resize(244, 97);

        retranslateUi(MyLabel);

        QMetaObject::connectSlotsByName(MyLabel);
    } // setupUi

    void retranslateUi(QWidget *MyLabel)
    {
        MyLabel->setWindowTitle(QApplication::translate("MyLabel", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MyLabel: public Ui_MyLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLABEL_H
