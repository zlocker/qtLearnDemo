#include "mlabel.h"
#include <QMouseEvent>
MLabel::MLabel(QWidget *parent):QLabel(parent)
{
}

void MLabel::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    this->setStyleSheet("background-color :rgb(205,0,0)");
    emit clicked();
}
