#include "message.h"
#include <QDebug>
Message::Message(QObject *parent) : QObject(parent)
{

}

MessageBody *Message::body() const
{
    return m_body;
}

void Message::setBody(MessageBody *body)
{
    m_body = body;
}

QString MessageBody::text()
{
    return m_text;
}

void MessageBody::SetText(const QString &text)
{
    if (m_text == text)
        return;

    m_text = text;
    qDebug()<<m_text;
    emit textChanged();
}
