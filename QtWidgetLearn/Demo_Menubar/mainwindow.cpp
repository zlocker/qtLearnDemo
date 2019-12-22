#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QMenuBar>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *popupMenu = new QMenu(this);
    popupMenu->setTitle("nishi");
    popupMenu->setStyleSheet("QMenu::item{ padding:5px;}");

    QMenuBar *menuBar = new QMenuBar(this);
    menuBar->addMenu(popupMenu);

    QAction *action1 = new QAction(tr("&New1"), this);
    QAction *action2 = new QAction(tr("&New2"), this);
    QAction *action3 = new QAction(tr("&New3"), this);
    //QAction *action4 = new QAction(QIcon("./load.png"), tr("Bookstore"), this);
     popupMenu->addAction(action1);
     popupMenu->addAction(action2);
     popupMenu->addAction(action3);
    // popupMenu->addAction(action4);
     //popupMenu->exec();
     QPoint p = this->rect().topRight();
     p.setX(p.x() - 225);
     p.setY(p.y() + 27);
     QMenu *radarMenu = new QMenu (this);
     radarMenu->setTitle("dasd");
     menuBar->addMenu(radarMenu);

     //radarMenu->exec(this->mapToGlobal(p));
 //    radarMenu->setProperty("menu", true);
  //   radarMenu->addSeparator();  //下划线
 //    radarMenu->addAction(ModeEditAction);
  //   radarMenu->addSeparator();  //下划线
 //    radarMenu->addAction(TaskEditAction);
  //   radarMenu->addSeparator();  //下划线

}

MainWindow::~MainWindow()
{
    delete ui;
}
