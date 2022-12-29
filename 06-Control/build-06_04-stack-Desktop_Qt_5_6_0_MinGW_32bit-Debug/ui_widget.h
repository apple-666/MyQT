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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *tab_2;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QPushButton *btnSearch;
    QPushButton *btnShow;
    QComboBox *comboBox;
    QLabel *label_img;
    QLabel *label_gif;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(416, 409);
        Widget->setAutoFillBackground(false);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 40, 211, 141));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 191, 111));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 121, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 40, 113, 20));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(40, 10, 153, 144));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 151, 142));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_2);
        btnSearch = new QPushButton(Widget);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        btnSearch->setGeometry(QRect(300, 60, 75, 23));
        btnShow = new QPushButton(Widget);
        btnShow->setObjectName(QStringLiteral("btnShow"));
        btnShow->setGeometry(QRect(300, 100, 75, 23));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 200, 69, 22));
        label_img = new QLabel(Widget);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(60, 260, 81, 71));
        label_img->setAutoFillBackground(false);
        label_gif = new QLabel(Widget);
        label_gif->setObjectName(QStringLiteral("label_gif"));
        label_gif->setGeometry(QRect(200, 250, 191, 131));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\347\231\276\345\272\246\347\232\204\346\220\234\347\264\242\345\206\205\345\256\271", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\347\231\276\345\272\246", 0));
        lineEdit->setText(QApplication::translate("Widget", "\344\270\271\350\241\214\347\272\277", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\346\220\234\347\213\227", 0));
        lineEdit_3->setText(QApplication::translate("Widget", "\344\270\200\350\241\214\345\206\205\345\256\271", 0));
        lineEdit_2->setText(QApplication::translate("Widget", "\344\270\200\350\241\214\345\206\205\345\256\271", 0));
        lineEdit_4->setText(QApplication::translate("Widget", "\344\270\200\350\241\214\345\206\205\345\256\271", 0));
        lineEdit_6->setText(QApplication::translate("Widget", "\344\270\200\350\241\214\345\206\205\345\256\271", 0));
        lineEdit_5->setText(QApplication::translate("Widget", "\344\270\200\350\241\214\345\206\205\345\256\271", 0));
        btnSearch->setText(QApplication::translate("Widget", "\346\220\234\347\264\242\351\241\265\351\235\242", 0));
        btnShow->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\351\241\265\351\235\242", 0));
        label_img->setText(QApplication::translate("Widget", "\345\244\264\345\203\217", 0));
        label_gif->setText(QApplication::translate("Widget", "gif", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
