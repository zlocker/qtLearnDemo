/****************************************************************************
** Meta object code from reading C++ file 'scanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccessPointScanner_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessPointScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessPointScanner_t qt_meta_stringdata_AccessPointScanner = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AccessPointScanner"
QT_MOC_LITERAL(1, 19, 14), // "newAccessPoint"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "AccessPoint*"
QT_MOC_LITERAL(4, 48, 2), // "ap"
QT_MOC_LITERAL(5, 51, 12), // "scanFinished"
QT_MOC_LITERAL(6, 64, 25) // "onDiscoverSocketDestroyed"

    },
    "AccessPointScanner\0newAccessPoint\0\0"
    "AccessPoint*\0ap\0scanFinished\0"
    "onDiscoverSocketDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessPointScanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AccessPointScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccessPointScanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newAccessPoint((*reinterpret_cast< AccessPoint*(*)>(_a[1]))); break;
        case 1: _t->scanFinished(); break;
        case 2: _t->onDiscoverSocketDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccessPointScanner::*)(AccessPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessPointScanner::newAccessPoint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccessPointScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessPointScanner::scanFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AccessPointScanner::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AccessPointScanner.data,
    qt_meta_data_AccessPointScanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccessPointScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessPointScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessPointScanner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccessPointScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AccessPointScanner::newAccessPoint(AccessPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccessPointScanner::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
