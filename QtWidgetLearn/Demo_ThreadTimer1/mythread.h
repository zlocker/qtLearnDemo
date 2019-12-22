#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTimer>
typedef struct worker{
    int d;
    QString e;
    void set(int x){
        d = x;
    }

    int get(){
        return d;
    }
}MWorker;
class Worker : public QObject
{
    Q_OBJECT
public:
    Worker();
    ~Worker();
    static int a;
    static int b;
//    static MWorker *c;
public slots:
    void doWork();
    void closeThread();
    void doTimeWork();
signals:
private:
    bool isstop;
//    QTimer timer1;
//    QThread thread;
};




class MyThread : public QObject
{
    Q_OBJECT

public:
    explicit MyThread(QObject *parent = nullptr);

    ~MyThread();
public slots:
    void Start();
    void Close();
signals:
    operate();
private:
    QThread *workerThread;
    Worker *worker;
    QTimer *m_timer;
    QTimer *m_timer1;

};
#endif // MYTHREAD_H
