#ifndef BOXSILDER_H
#define BOXSILDER_H

#include <QWidget>

namespace Ui {
class BoxSilder;
}

class BoxSilder : public QWidget
{
    Q_OBJECT

public:
    explicit BoxSilder(QWidget *parent = 0);
    ~BoxSilder();

    // 加入set和get数据方法
    void setData(int val);
    int getData();

private:
    Ui::BoxSilder *ui;
};

#endif // BOXSILDER_H
