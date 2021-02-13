/****************************************************************************
** Meta object code from reading C++ file 'cmd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DEPLOYQT/cmd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMD_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMD_t qt_meta_stringdata_CMD = {
    {
QT_MOC_LITERAL(0, 0, 3), // "CMD"
QT_MOC_LITERAL(1, 4, 13), // "sendCmdOutput"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "sendCmdErrors"
QT_MOC_LITERAL(4, 33, 10), // "runCommand"
QT_MOC_LITERAL(5, 44, 7), // "command"
QT_MOC_LITERAL(6, 52, 9), // "cmdOutput"
QT_MOC_LITERAL(7, 62, 9) // "cmdErrors"

    },
    "CMD\0sendCmdOutput\0\0sendCmdErrors\0"
    "runCommand\0command\0cmdOutput\0cmdErrors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void CMD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCmdOutput(); break;
        case 1: _t->sendCmdErrors(); break;
        case 2: _t->runCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->cmdOutput();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->cmdErrors();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CMD::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CMD::sendCmdOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CMD::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CMD::sendCmdErrors)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMD::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CMD.data,
    qt_meta_data_CMD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CMD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CMD::sendCmdOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CMD::sendCmdErrors()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
