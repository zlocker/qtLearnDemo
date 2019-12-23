#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "server.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void slotupdateserver(QString, int);//接收到server发过来的信号就更新界面的信息


private slots:
    void on_pushButtonCreateChattingRoom_clicked();

private:
    Ui::MainWindow *ui;
    int port;
    Server *server;
};

#endif // MAINWINDOW_H


