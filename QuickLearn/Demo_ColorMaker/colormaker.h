#ifndef COLORMAKER_H
#define COLORMAKER_H

#include <QObject>
#include <QColor>
class ColorMaker : public QObject
{
    Q_OBJECT
    Q_ENUMS(GenerateAlogorithm)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(QColor timeColor READ timeColor)
public:
    explicit ColorMaker(QObject *parent = nullptr);
    ~ColorMaker();
    enum GenerateAlogorithm{
        RandomRGB,
        RandomRed,
        RandomGreen,
        RandomBlue,
        LinearIncrease
    };
   QColor  color() const;
   void setColor(const QColor & color);
   QColor    timeColor()    const;

   Q_INVOKABLE GenerateAlogorithm  alogorithm() const;
   Q_INVOKABLE void setAlogorithm(GenerateAlogorithm alogorithm);
signals:
    void colorChanged(const QColor & color);
    void currentTime(const QString &strTime);
public slots:
    void start();
    void stop();
protected:
    void timerEvent(QTimerEvent *event);
private:
    GenerateAlogorithm m_algorithm;
    QColor m_currentColor;
    int m_nColorTimer;
};

#endif // COLORMAKER_H
