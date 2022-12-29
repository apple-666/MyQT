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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QToolButton *toolButton;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QRadioButton *rbtnWoman;
    QRadioButton *rbtnMan;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QGroupBox *checkBox;
    QCheckBox *cBox1;
    QCheckBox *cBox2;
    QCheckBox *cBox3;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(549, 373);
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(170, 100, 37, 18));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 20, 75, 23));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 120, 80));
        rbtnWoman = new QRadioButton(groupBox);
        rbtnWoman->setObjectName(QStringLiteral("rbtnWoman"));
        rbtnWoman->setGeometry(QRect(20, 50, 89, 16));
        rbtnMan = new QRadioButton(groupBox);
        rbtnMan->setObjectName(QStringLiteral("rbtnMan"));
        rbtnMan->setGeometry(QRect(20, 20, 89, 16));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(240, 30, 120, 80));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 20, 89, 16));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 50, 89, 16));
        checkBox = new QGroupBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 150, 121, 141));
        cBox1 = new QCheckBox(checkBox);
        cBox1->setObjectName(QStringLiteral("cBox1"));
        cBox1->setGeometry(QRect(30, 30, 71, 16));
        cBox2 = new QCheckBox(checkBox);
        cBox2->setObjectName(QStringLiteral("cBox2"));
        cBox2->setGeometry(QRect(30, 60, 71, 16));
        cBox3 = new QCheckBox(checkBox);
        cBox3->setObjectName(QStringLiteral("cBox3"));
        cBox3->setGeometry(QRect(30, 90, 71, 16));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(170, 150, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        toolButton->setText(QApplication::translate("Widget", "1", 0));
        pushButton->setText(QApplication::translate("Widget", "12", 0));
        groupBox->setTitle(QApplication::translate("Widget", "\346\200\247\345\210\253", 0));
        rbtnWoman->setText(QApplication::translate("Widget", "nv", 0));
        rbtnMan->setText(QApplication::translate("Widget", "nan", 0));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\230\257\345\220\246", 0));
        radioButton_4->setText(QApplication::translate("Widget", "\346\230\257", 0));
        radioButton_3->setText(QApplication::translate("Widget", "\345\220\246", 0));
        checkBox->setTitle(QApplication::translate("Widget", "GroupBox", 0));
        cBox1->setText(QApplication::translate("Widget", "1", 0));
        cBox2->setText(QApplication::translate("Widget", "2", 0));
        cBox3->setText(QApplication::translate("Widget", "3", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
