/****************************************************************************
** Meta object code from reading C++ file 'dutviewform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/PlugIns/DutViewPlugin/dutviewform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dutviewform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DutViewForm_t {
    QByteArrayData data[15];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DutViewForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DutViewForm_t qt_meta_stringdata_DutViewForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DutViewForm"
QT_MOC_LITERAL(1, 12, 8), // "onConfig"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "onStart"
QT_MOC_LITERAL(4, 30, 6), // "onStop"
QT_MOC_LITERAL(5, 37, 7), // "onClear"
QT_MOC_LITERAL(6, 45, 6), // "onSend"
QT_MOC_LITERAL(7, 52, 12), // "onDutRecvMsg"
QT_MOC_LITERAL(8, 65, 5), // "index"
QT_MOC_LITERAL(9, 71, 3), // "msg"
QT_MOC_LITERAL(10, 75, 12), // "onAppendText"
QT_MOC_LITERAL(11, 88, 4), // "text"
QT_MOC_LITERAL(12, 93, 5), // "state"
QT_MOC_LITERAL(13, 99, 10), // "onClearCmd"
QT_MOC_LITERAL(14, 110, 10) // "onShowForm"

    },
    "DutViewForm\0onConfig\0\0onStart\0onStop\0"
    "onClear\0onSend\0onDutRecvMsg\0index\0msg\0"
    "onAppendText\0text\0state\0onClearCmd\0"
    "onShowForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DutViewForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    2,   64,    2, 0x08 /* Private */,
      10,    2,   69,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DutViewForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DutViewForm *_t = static_cast<DutViewForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConfig(); break;
        case 1: _t->onStart(); break;
        case 2: _t->onStop(); break;
        case 3: _t->onClear(); break;
        case 4: _t->onSend(); break;
        case 5: _t->onDutRecvMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->onAppendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->onClearCmd(); break;
        case 8: _t->onShowForm(); break;
        default: ;
        }
    }
}

const QMetaObject DutViewForm::staticMetaObject = {
    { &IModuleForm::staticMetaObject, qt_meta_stringdata_DutViewForm.data,
      qt_meta_data_DutViewForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DutViewForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DutViewForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DutViewForm.stringdata0))
        return static_cast<void*>(const_cast< DutViewForm*>(this));
    return IModuleForm::qt_metacast(_clname);
}

int DutViewForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IModuleForm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
