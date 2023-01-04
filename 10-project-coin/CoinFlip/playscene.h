#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include "mycoin.h"
class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
//    explicit PlayScene(QWidget *parent = 0);
    PlayScene(int levelIndex);

    int levelIndex;

    int gameArray[4][4];

    void paintEvent(QPaintEvent *);

    MyCoin * coinBtn[4][4];

    int cnt = 0; // 剩余的硬币数量
    bool isWin = true; // 全部翻正（金色面）则对


signals:
    void chooseSceneBack();
public slots:
};

#endif // PLAYSCENE_H
