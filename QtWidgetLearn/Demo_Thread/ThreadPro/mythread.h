#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
class QTimer;
class MyThread : public QObject
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

    //线程处理函数
    void myTimeout();
    void startTimer();
    void setFlag(bool flag = true);

signals:
    void mySignal();

public slots:
    void dealMessage();
    void dealMessage(int);
    void dealTimer();
private:
    bool isStop;
    QTimer *mTimer;

};

#endif // MYTHREAD_H
