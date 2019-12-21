/****************************************************************************
** Meta object code from reading C++ file 'messengerConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../messengerConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messengerConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiscoverConnection_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiscoverConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiscoverConnection_t qt_meta_stringdata_DiscoverConnection = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DiscoverConnection"
QT_MOC_LITERAL(1, 19, 14), // "newAccessPoint"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "AccessPoint*"
QT_MOC_LITERAL(4, 48, 2), // "ap"
QT_MOC_LITERAL(5, 51, 11), // "onConnected"
QT_MOC_LITERAL(6, 63, 11) // "onReadyRead"

    },
    "DiscoverConnection\0newAccessPoint\0\0"
    "AccessPoint*\0ap\0onConnected\0onReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiscoverConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x09 /* Protected */,
       6,    0,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DiscoverConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoverConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newAccessPoint((*reinterpret_cast< AccessPoint*(*)>(_a[1]))); break;
        case 1: _t->onConnected(); break;
        case 2: _t->onReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiscoverConnection::*)(AccessPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverConnection::newAccessPoint)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiscoverConnection::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_DiscoverConnection.data,
    qt_meta_data_DiscoverConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DiscoverConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscoverConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoverConnection.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int DiscoverConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DiscoverConnection::newAccessPoint(AccessPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TalkingConnection_t {
    QByteArrayData data[17];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TalkingConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TalkingConnection_t qt_meta_stringdata_TalkingConnection = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TalkingConnection"
QT_MOC_LITERAL(1, 18, 15), // "talkingAccepted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "talkingRejected"
QT_MOC_LITERAL(4, 51, 17), // "incomingMessenger"
QT_MOC_LITERAL(5, 69, 5), // "Peer*"
QT_MOC_LITERAL(6, 75, 4), // "peer"
QT_MOC_LITERAL(7, 80, 13), // "incomingVoice"
QT_MOC_LITERAL(8, 94, 8), // "fileName"
QT_MOC_LITERAL(9, 103, 8), // "duration"
QT_MOC_LITERAL(10, 112, 8), // "peerGone"
QT_MOC_LITERAL(11, 121, 8), // "peerAddr"
QT_MOC_LITERAL(12, 130, 11), // "onConnected"
QT_MOC_LITERAL(13, 142, 11), // "onReadyRead"
QT_MOC_LITERAL(14, 154, 7), // "onError"
QT_MOC_LITERAL(15, 162, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(16, 191, 4) // "code"

    },
    "TalkingConnection\0talkingAccepted\0\0"
    "talkingRejected\0incomingMessenger\0"
    "Peer*\0peer\0incomingVoice\0fileName\0"
    "duration\0peerGone\0peerAddr\0onConnected\0"
    "onReadyRead\0onError\0QAbstractSocket::SocketError\0"
    "code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TalkingConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       7,    2,   59,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   67,    2, 0x09 /* Protected */,
      13,    0,   68,    2, 0x09 /* Protected */,
      14,    1,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::UInt,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void TalkingConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TalkingConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->talkingAccepted(); break;
        case 1: _t->talkingRejected(); break;
        case 2: _t->incomingMessenger((*reinterpret_cast< Peer*(*)>(_a[1]))); break;
        case 3: _t->incomingVoice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->peerGone((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->onConnected(); break;
        case 6: _t->onReadyRead(); break;
        case 7: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TalkingConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TalkingConnection::talkingAccepted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TalkingConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TalkingConnection::talkingRejected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TalkingConnection::*)(Peer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TalkingConnection::incomingMessenger)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TalkingConnection::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TalkingConnection::incomingVoice)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TalkingConnection::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TalkingConnection::peerGone)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TalkingConnection::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TalkingConnection.data,
    qt_meta_data_TalkingConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TalkingConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TalkingConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TalkingConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TalkingConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TalkingConnection::talkingAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TalkingConnection::talkingRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TalkingConnection::incomingMessenger(Peer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TalkingConnection::incomingVoice(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TalkingConnection::peerGone(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
