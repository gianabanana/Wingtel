/****************************************************************************
** Meta object code from reading C++ file 'scanid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/SCHOOL STUFFS/CpE 60/rfid-edacams-0/rfid-edacams/scanid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scanid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scanID_t {
    QByteArrayData data[17];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scanID_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scanID_t qt_meta_stringdata_scanID = {
    {
QT_MOC_LITERAL(0, 0, 6), // "scanID"
QT_MOC_LITERAL(1, 7, 9), // "on_number"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "cardName"
QT_MOC_LITERAL(4, 27, 4), // "stop"
QT_MOC_LITERAL(5, 32, 20), // "CardEstablishContext"
QT_MOC_LITERAL(6, 53, 15), // "CardListReaders"
QT_MOC_LITERAL(7, 69, 11), // "CardConnect"
QT_MOC_LITERAL(8, 81, 1), // "s"
QT_MOC_LITERAL(9, 83, 20), // "CardListReaderGroups"
QT_MOC_LITERAL(10, 104, 13), // "CardListCards"
QT_MOC_LITERAL(11, 118, 21), // "CardIntroduceCardType"
QT_MOC_LITERAL(12, 140, 18), // "CardReleaseContext"
QT_MOC_LITERAL(13, 159, 10), // "CardStatus"
QT_MOC_LITERAL(14, 170, 12), // "CardTransmit"
QT_MOC_LITERAL(15, 183, 14), // "CardDisconnect"
QT_MOC_LITERAL(16, 198, 14) // "CardFreeMemory"

    },
    "scanID\0on_number\0\0cardName\0stop\0"
    "CardEstablishContext\0CardListReaders\0"
    "CardConnect\0s\0CardListReaderGroups\0"
    "CardListCards\0CardIntroduceCardType\0"
    "CardReleaseContext\0CardStatus\0"
    "CardTransmit\0CardDisconnect\0CardFreeMemory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scanID[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    0,   84,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       9,    0,   88,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void scanID::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        scanID *_t = static_cast<scanID *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_number((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: _t->CardEstablishContext(); break;
        case 3: _t->CardListReaders(); break;
        case 4: _t->CardConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->CardListReaderGroups(); break;
        case 6: _t->CardListCards(); break;
        case 7: _t->CardIntroduceCardType(); break;
        case 8: _t->CardReleaseContext(); break;
        case 9: _t->CardStatus(); break;
        case 10: _t->CardTransmit(); break;
        case 11: _t->CardDisconnect(); break;
        case 12: _t->CardFreeMemory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (scanID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&scanID::on_number)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject scanID::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_scanID.data,
      qt_meta_data_scanID,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scanID::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scanID::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scanID.stringdata0))
        return static_cast<void*>(const_cast< scanID*>(this));
    return QWidget::qt_metacast(_clname);
}

int scanID::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void scanID::on_number(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
