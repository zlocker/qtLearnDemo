#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "frameless_helper.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_groupBox_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
