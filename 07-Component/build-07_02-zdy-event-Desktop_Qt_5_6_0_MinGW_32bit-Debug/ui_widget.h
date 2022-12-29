/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylable.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    MyLable *label;
    QLabel *label_2;
    QLabel *c1;
    QLabel *c2;
    QLabel *label_5;
    QPushButton *btnStop;
    QPushButton *btnCont;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label = new MyLable(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 221, 81));
        label->setFrameShape(QFrame::WinPanel);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 170, 54, 12));
        c1 = new QLabel(Widget);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setGeometry(QRect(40, 200, 54, 12));
        c1->setFrameShape(QFrame::Box);
        c2 = new QLabel(Widget);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setGeometry(QRect(110, 210, 54, 12));
        c2->setFrameShape(QFrame::WinPanel);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 210, 54, 12));
        label_5->setFrameShape(QFrame::StyledPanel);
        btnStop = new QPushButton(Widget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(40, 240, 75, 23));
        btnCont = new QPushButton(Widget);
        btnCont->setObjectName(QStringLiteral("btnCont"));
        btnCont->setGeometry(QRect(120, 240, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_2->setText(QApplication::translate("Widget", "\350\256\241\346\227\266\345\231\250\357\274\232", 0));
        c1->setText(QApplication::translate("Widget", "0", 0));
        c2->setText(QApplication::translate("Widget", "0", 0));
        label_5->setText(QApplication::translate("Widget", "0", 0));
        btnStop->setText(QApplication::translate("Widget", "\346\232\202\345\201\234\350\256\241\346\227\266", 0));
        btnCont->setText(QApplication::translate("Widget", "\347\273\247\347\273\255\350\256\241\346\227\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
