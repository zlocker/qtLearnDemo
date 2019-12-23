#ifndef WIDGET_H
#define WIDGET_H
#include "mythread.h"
#include <QWidget>
#include <QDebug>
#include <QThread>
#include <QTimer>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
   void     opensThread();
   void     closeThread();
   void finishedThread();
private:
    Ui::Widget *ui;
    QThread *firstThread;
    MyThread *myObjectThread;
    QTimer *timer1;
};

#endif // WIDGET_H
