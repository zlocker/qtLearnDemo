#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    FramelessHelper *pHelper = new FramelessHelper(this);
    pHelper->activateOn(this);  //激活当前窗体
    pHelper->setTitleHeight(ui->horizontalWidget->height());  //设置窗体的标题栏高度
    pHelper->setWidgetMovable(true);  //设置窗体可移动
    pHelper->setWidgetResizable(true);  //设置窗体可缩放
    pHelper->setRubberBandOnMove(true);  //设置橡皮筋效果-可移动
    pHelper->setRubberBandOnResize(true);  //设置橡皮筋效果-可缩放
    ui->groupBox->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<"66666";
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->groupBox)
    {
        if(event->type()==QMouseEvent::MouseButtonPress)
        {
            QMouseEvent *mouseEvent=(QMouseEvent*)event;
            if(mouseEvent->button()==Qt::LeftButton)
            {
                qDebug()<<"输出错误";
            }
        }
     //   return true;
    }
    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::on_groupBox_clicked()
{
    ui->label->setText("6666");
}
