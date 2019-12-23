#include "widget.h"
#include "ui_widget.h"
#include <QTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_timer.setInterval(1000);
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(rgbColor()));
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()==timerID)
        rgbColor();
}

void Widget::on_pushButton_clicked()
{
//    m_timer.start();
    timerID = this->startTimer(500);
}

void Widget::on_pushButton_2_clicked()
{
//    m_timer.stop();
    killTimer(timerID);
}

void Widget::rgbColor()
{
    QString bgColor = QString("background-color: rgb(%1,%2,%3)")
            .arg(qrand()%255).arg(qrand()%255).arg(qrand()%255);
    ui->label->setStyleSheet(bgColor);
}
