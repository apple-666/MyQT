#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    resize(600,800);

    // 1，菜单栏 只有一个
    QMenuBar * bar = menuBar();
    setMenuBar(bar);

    // 多个菜单
    QMenu * fileMenu = bar->addMenu("文件");
    QMenu * editMenu = bar->addMenu("编辑");

    // 菜单里的菜单项
    QAction* newAction = fileMenu->addAction("新建文件");

    fileMenu->addSeparator(); // 两个菜单项之间的分界线

    QAction* openAction = fileMenu->addAction("打开文件");


    // 2，工具栏 可以有多个
    QToolBar * toolBar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolBar);

    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);

    toolBar->setFloatable(false); // 一般都是不浮动

//    toolBar->setMovable(false);
    toolBar->addAction(newAction);
    toolBar->addSeparator();
    toolBar->addAction(openAction);



    // 3,状态栏 只有一个
    QStatusBar * stBar = statusBar();
    setStatusBar(stBar);
    QLabel * label1 = new QLabel("左侧提示信息",this);
    stBar->addWidget(label1);
    QLabel * label2 = new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);


    // 4,铆接部件（浮动窗口） 可以有多个
    QDockWidget * dock = new QDockWidget("aaa",this);
    addDockWidget(Qt::BottomDockWidgetArea,dock);

    dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);


    // 5,核心部件 只有一个
    QTextEdit * edit = new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{

}
