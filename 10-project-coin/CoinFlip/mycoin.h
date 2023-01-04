#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QTimer>
#include <QMouseEvent>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
//    explicit MyCoin(QWidget *parent = 0); // 必须用显示转换static_cast
    MyCoin(QString butImg);

    int posX;// 代表第几行 。0开始
    int posY;// 代表第几列 。0开始
    int flag;// 正反(1 为正)

    void changeFlag();
    QTimer * timer1; //正->反的 定时器
    QTimer * timer2; //
    int min = 1;// 1->8 是正->反的图片顺序
    int max = 8;
    bool isAnimation = false;//true为在做反转运动

    bool isWin = false; // 全部翻正（金色面）则对


    void mousePressEvent(QMouseEvent *e);

signals:

public slots:
};

#endif // MYCOIN_H
