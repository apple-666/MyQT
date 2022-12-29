#include "boxsilder.h"
#include "ui_boxsilder.h"

BoxSilder::BoxSilder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BoxSilder)
{qt
    ui->setupUi(this);

    // 两个空间相互依赖
    void(QSpinBox:: *spinBoxp)(int) = &QSpinBox::valueChanged;

    connect(ui->spinBox,spinBoxp,[=](int val){
        ui->horizontalSlider->setValue(val);
    });


    connect(ui->horizontalSlider,&QSlider::valueChanged,[=](int val){
        ui->spinBox->setValue(val);
    });
    //void
}


void BoxSilder::setData(int val){
    ui->horizontalSlider->setValue(val);
}

int BoxSilder::getData(){
    return ui->horizontalSlider->value();
}


BoxSilder::~BoxSilder()
{
    delete ui;
}
