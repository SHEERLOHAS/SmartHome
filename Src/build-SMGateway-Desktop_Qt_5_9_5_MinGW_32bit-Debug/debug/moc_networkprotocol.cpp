/****************************************************************************
** Meta object code from reading C++ file 'networkprotocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SMGateway/NetWork/networkprotocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkprotocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetWorkProtocol_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetWorkProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetWorkProtocol_t qt_meta_stringdata_NetWorkProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NetWorkProtocol"
QT_MOC_LITERAL(1, 16, 12), // "readDataSlot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "data"
QT_MOC_LITERAL(4, 35, 22) // "updateTimerTimeoutSlot"

    },
    "NetWorkProtocol\0readDataSlot\0\0data\0"
    "updateTimerTimeoutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetWorkProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,

       0        // eod
};

void NetWorkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetWorkProtocol *_t = static_cast<NetWorkProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readDataSlot((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->updateTimerTimeoutSlot(); break;
        default: ;
        }
    }
}

const QMetaObject NetWorkProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetWorkProtocol.data,
      qt_meta_data_NetWorkProtocol,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetWorkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetWorkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetWorkProtocol.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetWorkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
