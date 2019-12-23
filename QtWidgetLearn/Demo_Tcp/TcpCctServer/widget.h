#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "tcpservercontro.h"
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
    void displayForm(char*msg);
    void displayForm(QString str);
    void on_pushButton_2_clicked();
signals:
    void m_Order(char*,QString,QString);
private:
    Ui::Widget *ui;
    int port;
    TcpServerContro *server;
};

#endif // WIDGET_H
