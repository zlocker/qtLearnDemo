#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

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
    void resizeEvent(QResizeEvent *);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void showEvent(QShowEvent* event);

private:
    int countFlag(QPoint p, int row);
    void setCursorType(int flag);
    int countRow(QPoint p);

private:
    Ui::MainWindow *ui;

    int m_curPos;
    QPoint pLast;

    bool m_bPressed;
};

#endif // MAINWINDOW_H
