#ifndef MYLABLE_H
#define MYLABLE_H

#include <QLabel>

namespace Ui {
class MyLable;
}

class MyLable : public QLabel
{
    Q_OBJECT

public:
    explicit MyLable(QWidget *parent = 0);
    ~MyLable();

    void enterEvent(QEvent *);

    void leaveEvent(QEvent *);
    void mousePressEvent(QMouseEvent *ev);

    void mouseReleaseEvent(QMouseEvent *ev);

    void mouseMoveEvent(QMouseEvent *ev);

    bool event(QEvent *e);


private:
    Ui::MyLable *ui;
};

#endif // MYLABLE_H
