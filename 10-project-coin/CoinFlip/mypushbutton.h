#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QString normalImg,QString pressImg="");

    QString normalImgPath;
    QString pressedImgPath;

    void zoom1();

    void zoom2();

    void mousePressEvent(QMouseEvent *e);

    void mouseReleaseEvent(QMouseEvent *e);



signals:

public slots:
};

#endif // MYPUSHBUTTON_H
