/********************************************************************************
** Form generated from reading UI file 'boxsilder.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXSILDER_H
#define UI_BOXSILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoxSilder
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *BoxSilder)
    {
        if (BoxSilder->objectName().isEmpty())
            BoxSilder->setObjectName(QStringLiteral("BoxSilder"));
        BoxSilder->resize(193, 43);
        horizontalLayout = new QHBoxLayout(BoxSilder);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinBox = new QSpinBox(BoxSilder);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(BoxSilder);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(BoxSilder);

        QMetaObject::connectSlotsByName(BoxSilder);
    } // setupUi

    void retranslateUi(QWidget *BoxSilder)
    {
        BoxSilder->setWindowTitle(QApplication::translate("BoxSilder", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BoxSilder: public Ui_BoxSilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXSILDER_H
