#ifndef MLABEL_H
#define MLABEL_H
#include <QLabel>


class MLabel : public QLabel
{
    Q_OBJECT
public:
    MLabel(QWidget *parent= NULL);
protected:
    void mousePressEvent(QMouseEvent *event);
signals:

    void clicked();
};

#endif // MLABEL_H
