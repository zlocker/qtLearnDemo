#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QDebug>
class MyThread : public QObject
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = nullptr);

    void closeThread();
    static int a ;
signals:

public slots:
    void startThreadSlot();
    void timerWork();
private:
    volatile bool isstop;


};

#endif // MYTHREAD_H
