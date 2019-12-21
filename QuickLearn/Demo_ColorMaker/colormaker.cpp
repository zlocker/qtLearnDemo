#include "colormaker.h"
#include <QTimerEvent>
#include <QDateTime>
ColorMaker::ColorMaker(QObject *parent)
    : QObject(parent)
    , m_algorithm(RandomRGB)
    , m_currentColor(Qt::black)
    , m_nColorTimer(0)
{
    qsrand(QDateTime::currentDateTime().toTime_t());
}

ColorMaker::~ColorMaker()
{

}

QColor ColorMaker::color() const
{
    return m_currentColor;
}

void ColorMaker::setColor(const QColor &color)
{
    m_currentColor = color;
    emit  colorChanged(m_currentColor);
}

QColor ColorMaker::timeColor() const
{
    QTime time = QTime::currentTime();
    int r = time.hour();
    int g = time.minute()*2;
    int b = time.second()*4;
    return QColor::fromRgb(r,g,b);
}

ColorMaker::GenerateAlogorithm ColorMaker::alogorithm() const
{
    return m_algorithm;
}

void ColorMaker::setAlogorithm(ColorMaker::GenerateAlogorithm alogorithm)
{
    m_algorithm = alogorithm;
}

void ColorMaker::start()
{
    if(m_nColorTimer == 0)
    {
        m_nColorTimer = startTimer(1000);
    }
}

void ColorMaker::stop()
{
    if(m_nColorTimer > 0)
    {
        killTimer(m_nColorTimer);
        m_nColorTimer = 0;
    }
}

void ColorMaker::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == m_nColorTimer)
    {
        switch (m_algorithm) {
        case RandomRGB:
            m_currentColor.setRgb(qrand()%255,qrand()%255,qrand()%255);
            break;
        case RandomRed:
            m_currentColor.setRed(qrand()%255);
            break;
        case RandomBlue:
            m_currentColor.setBlue(qrand()%255);
            break;
        case    RandomGreen:
            m_currentColor.setGreen(qrand()%255);
            break;
        case  LinearIncrease:
            {
                int r = m_currentColor.red() + 10;
                int g = m_currentColor.green() + 10;
                int b = m_currentColor.black() + 10;
                m_currentColor.setRgb(r % 255, g %255, b%255);
            }
            break;
        }
        emit colorChanged(m_currentColor);
        emit currentTime(QDateTime::currentDateTime()
                         .toString("yyyy-MM-dd hh:mm:ss"));
    }
    else
    {
        QObject::timerEvent(event);
    }
}
