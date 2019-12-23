#include "widget.h"
#include "ui_widget.h"
#include "mlabel.h"
#include <QKeyEvent>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("武汉理工大学");

    ui->label->installEventFilter(this);
//    connect(ui->label_2,&MLabel::clicked,[=](){
//        ui->label_2->setStyleSheet("background-color: rgb(255, 0, 0);");
//    });
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::event(QEvent *event)
{
    if(event->type()==QEvent::KeyPress){
        QKeyEvent *keyEvent = (QKeyEvent*)event;
        if(keyEvent->key()==Qt::Key_0){
            qDebug()<<"you press 0";
            return true;
        }

    }
    return QWidget::event(event);
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_1:
        qDebug()<<"你按下了1";
        break;
    case Qt::Key_2:
        qDebug()<<"你按下了2";
        break;
    case Qt::Key_3:
        qDebug()<<"你按下了3";
        break;
    case Qt::Key_4:
        qDebug()<<"你按下了4";
        break;
    case Qt::Key_5:
        qDebug()<<"你按下了5";
        break;
    case Qt::Key_6:
        qDebug()<<"你按下了6";
        break;
    case Qt::Key_7:
        qDebug()<<"你按下了7";
        break;
    case Qt::Key_8:
        qDebug()<<"你按下了8";
        break;
    default:
        break;
    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->label){
        if(event->type()==QEvent::MouseButtonPress){
            QMouseEvent *mousePress = (QMouseEvent*)event;
            if(mousePress->button() == Qt::LeftButton){
                qDebug()<<"你按下了左键";
                return true;
            }
        }
    }
    return QWidget::eventFilter(watched,event);
}


