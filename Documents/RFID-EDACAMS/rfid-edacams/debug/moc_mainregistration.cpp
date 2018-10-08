/****************************************************************************
** Meta object code from reading C++ file 'mainregistration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainregistration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainregistration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainregistration_t {
    QByteArrayData data[12];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainregistration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainregistration_t qt_meta_stringdata_mainregistration = {
    {
QT_MOC_LITERAL(0, 0, 16), // "mainregistration"
QT_MOC_LITERAL(1, 17, 21), // "on_addSubject_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_addStudent_clicked"
QT_MOC_LITERAL(4, 62, 19), // "on_addStaff_clicked"
QT_MOC_LITERAL(5, 82, 21), // "on_addRecords_clicked"
QT_MOC_LITERAL(6, 104, 24), // "on_addDepartment_clicked"
QT_MOC_LITERAL(7, 129, 15), // "on_main_clicked"
QT_MOC_LITERAL(8, 145, 14), // "on_add_clicked"
QT_MOC_LITERAL(9, 160, 26), // "on_year_currentTextChanged"
QT_MOC_LITERAL(10, 187, 4), // "arg1"
QT_MOC_LITERAL(11, 192, 30) // "on_semester_currentTextChanged"

    },
    "mainregistration\0on_addSubject_clicked\0"
    "\0on_addStudent_clicked\0on_addStaff_clicked\0"
    "on_addRecords_clicked\0on_addDepartment_clicked\0"
    "on_main_clicked\0on_add_clicked\0"
    "on_year_currentTextChanged\0arg1\0"
    "on_semester_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainregistration[] = {

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
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void mainregistration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainregistration *_t = static_cast<mainregistration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addSubject_clicked(); break;
        case 1: _t->on_addStudent_clicked(); break;
        case 2: _t->on_addStaff_clicked(); break;
        case 3: _t->on_addRecords_clicked(); break;
        case 4: _t->on_addDepartment_clicked(); break;
        case 5: _t->on_main_clicked(); break;
        case 6: _t->on_add_clicked(); break;
        case 7: _t->on_year_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_semester_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject mainregistration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainregistration.data,
      qt_meta_data_mainregistration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mainregistration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainregistration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainregistration.stringdata0))
        return static_cast<void*>(const_cast< mainregistration*>(this));
    return QWidget::qt_metacast(_clname);
}

int mainregistration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
