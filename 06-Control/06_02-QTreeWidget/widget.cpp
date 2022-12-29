#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"介绍");

    QTreeWidgetItem * item1 = new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem * item2 = new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem * item3 = new QTreeWidgetItem(QStringList()<<"智力");

    ui->treeWidget->addTopLevelItem(item1);
    ui->treeWidget->addTopLevelItem(item2);
    ui->treeWidget->addTopLevelItem(item3);

    QStringList l1_1;
    l1_1<<"刚被猪"<< "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    QStringList l1_2;
    l1_2<<"船长"<< "前排坦克，能肉能输出能控场的全能英雄";

    QStringList l2_1;
    l2_1<<"月骑"<<  "中排物理输出，可以使用分裂利刃攻击多个目标";
    QStringList l2_2;
    l2_2<<"小鱼人"<< "前排战士，擅长偷取敌人的属性来增强自身战力";

    QStringList l3_1;
    l3_1<<"死灵法师"<< "前排法师坦克，魔法抗性较高，拥有治疗技能";
    QStringList l3_2;
    l3_2<<"巫医"<< "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";

    QTreeWidgetItem * l1d1 = new QTreeWidgetItem(l1_1);
    item1->addChild(l1d1);
    QTreeWidgetItem * l1d2 = new QTreeWidgetItem(l1_2);
    item1->addChild(l1d2);

    QTreeWidgetItem * l2d1 = new QTreeWidgetItem(l2_1);
    item2->addChild(l2d1);
    QTreeWidgetItem * l2d2 = new QTreeWidgetItem(l2_2);
    item2->addChild(l2d2);

    QTreeWidgetItem * l3d1 = new QTreeWidgetItem(l3_1);
    item3->addChild(l3d1);
    QTreeWidgetItem * l3d2 = new QTreeWidgetItem(l3_2);
    item3->addChild(l3d2);

}

Widget::~Widget()
{
    delete ui;
}
