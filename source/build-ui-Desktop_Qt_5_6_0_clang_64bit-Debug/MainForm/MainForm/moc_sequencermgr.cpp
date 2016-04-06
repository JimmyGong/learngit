/****************************************************************************
** Meta object code from reading C++ file 'sequencermgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/ZmqCtrl/sequencermgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sequencermgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SequencerMgr_t {
    QByteArrayData data[14];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SequencerMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SequencerMgr_t qt_meta_stringdata_SequencerMgr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SequencerMgr"
QT_MOC_LITERAL(1, 13, 13), // "isAliveSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "id"
QT_MOC_LITERAL(4, 31, 7), // "isAlive"
QT_MOC_LITERAL(5, 39, 6), // "isShow"
QT_MOC_LITERAL(6, 46, 11), // "eventSignal"
QT_MOC_LITERAL(7, 58, 5), // "index"
QT_MOC_LITERAL(8, 64, 3), // "evt"
QT_MOC_LITERAL(9, 68, 4), // "item"
QT_MOC_LITERAL(10, 73, 21), // "showLoadingInfoSignal"
QT_MOC_LITERAL(11, 95, 4), // "text"
QT_MOC_LITERAL(12, 100, 5), // "state"
QT_MOC_LITERAL(13, 106, 18) // "loadCompleteSignal"

    },
    "SequencerMgr\0isAliveSignal\0\0id\0isAlive\0"
    "isShow\0eventSignal\0index\0evt\0item\0"
    "showLoadingInfoSignal\0text\0state\0"
    "loadCompleteSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SequencerMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    3,   41,    2, 0x06 /* Public */,
      10,    2,   48,    2, 0x06 /* Public */,
      13,    0,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,
    QMetaType::Void,

       0        // eod
};

void SequencerMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SequencerMgr *_t = static_cast<SequencerMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isAliveSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->eventSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->showLoadingInfoSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->loadCompleteSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SequencerMgr::*_t)(int , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerMgr::isAliveSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SequencerMgr::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerMgr::eventSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SequencerMgr::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerMgr::showLoadingInfoSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SequencerMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SequencerMgr::loadCompleteSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SequencerMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SequencerMgr.data,
      qt_meta_data_SequencerMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SequencerMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequencerMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SequencerMgr.stringdata0))
        return static_cast<void*>(const_cast< SequencerMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int SequencerMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SequencerMgr::isAliveSignal(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SequencerMgr::eventSignal(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SequencerMgr::showLoadingInfoSignal(const QString & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SequencerMgr::loadCompleteSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
