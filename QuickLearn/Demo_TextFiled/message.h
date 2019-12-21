#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
class MessageBody : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ text WRITE SetText NOTIFY textChanged)
public:
    explicit MessageBody(QObject *parent = nullptr);

    QString text();
    void SetText(const QString &text);
private:
    QString m_text;
signals:
    void textChanged();
};
class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(MessageBody* body READ body WRITE setBody NOTIFY bodyChanged)
public:
    explicit Message(QObject *parent = nullptr);
    MessageBody* body() const;
    void setBody(MessageBody* body);
signals:
    void bodyChanged();
private:
    MessageBody* m_body;
};



#endif // MESSAGE_H
