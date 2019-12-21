/****************************************************************************
** Meta object code from reading C++ file 'messengerManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../messengerManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messengerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessengerManager_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessengerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessengerManager_t qt_meta_stringdata_MessengerManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MessengerManager"
QT_MOC_LITERAL(1, 17, 12), // "newMessenger"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 13), // "portraitIndex"
QT_MOC_LITERAL(5, 50, 7), // "address"
QT_MOC_LITERAL(6, 58, 12), // "chatAccepted"
QT_MOC_LITERAL(7, 71, 12), // "chatRejected"
QT_MOC_LITERAL(8, 84, 19), // "voiceMessageArrived"
QT_MOC_LITERAL(9, 104, 8), // "fileName"
QT_MOC_LITERAL(10, 113, 8), // "duration"
QT_MOC_LITERAL(11, 122, 8), // "peerGone"
QT_MOC_LITERAL(12, 131, 15), // "onNewConnection"
QT_MOC_LITERAL(13, 147, 19), // "onIncomingMessenger"
QT_MOC_LITERAL(14, 167, 5), // "Peer*"
QT_MOC_LITERAL(15, 173, 4), // "peer"
QT_MOC_LITERAL(16, 178, 18), // "acceptNewMessenger"
QT_MOC_LITERAL(17, 197, 18), // "rejectNewMessenger"
QT_MOC_LITERAL(18, 216, 19), // "closeCurrentSession"
QT_MOC_LITERAL(19, 236, 5), // "start"
QT_MOC_LITERAL(20, 242, 8), // "nickName"
QT_MOC_LITERAL(21, 251, 16) // "sendVoiceMessage"

    },
    "MessengerManager\0newMessenger\0\0name\0"
    "portraitIndex\0address\0chatAccepted\0"
    "chatRejected\0voiceMessageArrived\0"
    "fileName\0duration\0peerGone\0onNewConnection\0"
    "onIncomingMessenger\0Peer*\0peer\0"
    "acceptNewMessenger\0rejectNewMessenger\0"
    "closeCurrentSession\0start\0nickName\0"
    "sendVoiceMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessengerManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       6,    0,   81,    2, 0x06 /* Public */,
       7,    0,   82,    2, 0x06 /* Public */,
       8,    2,   83,    2, 0x06 /* Public */,
      11,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    1,   90,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   93,    2, 0x02 /* Public */,
      17,    0,   94,    2, 0x02 /* Public */,
      18,    0,   95,    2, 0x02 /* Public */,
      19,    2,   96,    2, 0x02 /* Public */,
      21,    2,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    9,   10,

       0        // eod
};

void MessengerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessengerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessenger((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->chatAccepted(); break;
        case 2: _t->chatRejected(); break;
        case 3: _t->voiceMessageArrived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->peerGone(); break;
        case 5: _t->onNewConnection(); break;
        case 6: _t->onIncomingMessenger((*reinterpret_cast< Peer*(*)>(_a[1]))); break;
        case 7: _t->acceptNewMessenger(); break;
        case 8: _t->rejectNewMessenger(); break;
        case 9: _t->closeCurrentSession(); break;
        case 10: _t->start((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->sendVoiceMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessengerManager::*)(QString , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessengerManager::newMessenger)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessengerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessengerManager::chatAccepted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessengerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessengerManager::chatRejected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MessengerManager::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessengerManager::voiceMessageArrived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MessengerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessengerManager::peerGone)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessengerManager::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_MessengerManager.data,
    qt_meta_data_MessengerManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessengerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessengerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessengerManager.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int MessengerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MessengerManager::newMessenger(QString _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessengerManager::chatAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MessengerManager::chatRejected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MessengerManager::voiceMessageArrived(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessengerManager::peerGone()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
