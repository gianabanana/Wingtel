/****************************************************************************
** Meta object code from reading C++ file 'registration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../registration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_registration_t {
    QByteArrayData data[72];
    char stringdata0[1419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_registration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_registration_t qt_meta_stringdata_registration = {
    {
QT_MOC_LITERAL(0, 0, 12), // "registration"
QT_MOC_LITERAL(1, 13, 15), // "connectDatabase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "connClose"
QT_MOC_LITERAL(4, 40, 14), // "insertToEnroll"
QT_MOC_LITERAL(5, 55, 9), // "scanScard"
QT_MOC_LITERAL(6, 65, 9), // "newNumber"
QT_MOC_LITERAL(7, 75, 8), // "cardName"
QT_MOC_LITERAL(8, 84, 13), // "insertSection"
QT_MOC_LITERAL(9, 98, 13), // "insertYrLevel"
QT_MOC_LITERAL(10, 112, 8), // "selectId"
QT_MOC_LITERAL(11, 121, 12), // "viewSubjList"
QT_MOC_LITERAL(12, 134, 12), // "insertSecSub"
QT_MOC_LITERAL(13, 147, 12), // "viewTeachers"
QT_MOC_LITERAL(14, 160, 14), // "loadComboBoxes"
QT_MOC_LITERAL(15, 175, 12), // "getIDsection"
QT_MOC_LITERAL(16, 188, 9), // "getIDdays"
QT_MOC_LITERAL(17, 198, 13), // "filterSection"
QT_MOC_LITERAL(18, 212, 9), // "setDesign"
QT_MOC_LITERAL(19, 222, 15), // "getIDdepartment"
QT_MOC_LITERAL(20, 238, 8), // "showTime"
QT_MOC_LITERAL(21, 247, 8), // "showDate"
QT_MOC_LITERAL(22, 256, 19), // "on_addStaff_clicked"
QT_MOC_LITERAL(23, 276, 21), // "on_addRecords_clicked"
QT_MOC_LITERAL(24, 298, 24), // "on_addDepartment_clicked"
QT_MOC_LITERAL(25, 323, 15), // "on_main_clicked"
QT_MOC_LITERAL(26, 339, 26), // "on_firstname_2_textChanged"
QT_MOC_LITERAL(27, 366, 27), // "on_secondname_2_textChanged"
QT_MOC_LITERAL(28, 394, 26), // "on_thirdname_2_textChanged"
QT_MOC_LITERAL(29, 421, 27), // "on_middlename_2_textChanged"
QT_MOC_LITERAL(30, 449, 25), // "on_lastname_2_textChanged"
QT_MOC_LITERAL(31, 475, 32), // "on_department_currentTextChanged"
QT_MOC_LITERAL(32, 508, 23), // "on_street_2_textChanged"
QT_MOC_LITERAL(33, 532, 21), // "on_brgy_2_textChanged"
QT_MOC_LITERAL(34, 554, 21), // "on_city_2_textChanged"
QT_MOC_LITERAL(35, 576, 25), // "on_province_2_textChanged"
QT_MOC_LITERAL(36, 602, 25), // "on_emailadd_2_textChanged"
QT_MOC_LITERAL(37, 628, 27), // "on_contactnum_2_textChanged"
QT_MOC_LITERAL(38, 656, 23), // "on_username_textChanged"
QT_MOC_LITERAL(39, 680, 17), // "on_pw_textChanged"
QT_MOC_LITERAL(40, 698, 22), // "on_rtypepw_textChanged"
QT_MOC_LITERAL(41, 721, 16), // "on_add_2_clicked"
QT_MOC_LITERAL(42, 738, 19), // "on_cancel_2_clicked"
QT_MOC_LITERAL(43, 758, 24), // "on_subject_4_textChanged"
QT_MOC_LITERAL(44, 783, 28), // "on_description_2_textChanged"
QT_MOC_LITERAL(45, 812, 29), // "on_units_2_currentTextChanged"
QT_MOC_LITERAL(46, 842, 29), // "on_prerequisite_2_textChanged"
QT_MOC_LITERAL(47, 872, 34), // "on_subjectfor_2_currentTextCh..."
QT_MOC_LITERAL(48, 907, 35), // "on_subjecttype_2_currentTextC..."
QT_MOC_LITERAL(49, 943, 16), // "on_add_3_clicked"
QT_MOC_LITERAL(50, 960, 19), // "on_cancel_3_clicked"
QT_MOC_LITERAL(51, 980, 21), // "on_addsection_clicked"
QT_MOC_LITERAL(52, 1002, 29), // "on_section_currentTextChanged"
QT_MOC_LITERAL(53, 1032, 16), // "on_add_4_clicked"
QT_MOC_LITERAL(54, 1049, 19), // "on_cancel_4_clicked"
QT_MOC_LITERAL(55, 1069, 25), // "on_courseedit_textChanged"
QT_MOC_LITERAL(56, 1095, 16), // "on_add_5_clicked"
QT_MOC_LITERAL(57, 1112, 19), // "on_cancel_5_clicked"
QT_MOC_LITERAL(58, 1132, 17), // "on_male_2_clicked"
QT_MOC_LITERAL(59, 1150, 19), // "on_female_2_clicked"
QT_MOC_LITERAL(60, 1170, 17), // "on_scanID_clicked"
QT_MOC_LITERAL(61, 1188, 15), // "on_okID_clicked"
QT_MOC_LITERAL(62, 1204, 16), // "on_admin_clicked"
QT_MOC_LITERAL(63, 1221, 18), // "on_student_clicked"
QT_MOC_LITERAL(64, 1240, 23), // "on_timeEdit_timeChanged"
QT_MOC_LITERAL(65, 1264, 25), // "on_timeEdit_2_timeChanged"
QT_MOC_LITERAL(66, 1290, 19), // "on_room_textChanged"
QT_MOC_LITERAL(67, 1310, 26), // "on_days_currentTextChanged"
QT_MOC_LITERAL(68, 1337, 31), // "on_yearlevel_currentTextChanged"
QT_MOC_LITERAL(69, 1369, 20), // "on_clickSubj_clicked"
QT_MOC_LITERAL(70, 1390, 5), // "index"
QT_MOC_LITERAL(71, 1396, 22) // "on_teacherList_clicked"

    },
    "registration\0connectDatabase\0\0connClose\0"
    "insertToEnroll\0scanScard\0newNumber\0"
    "cardName\0insertSection\0insertYrLevel\0"
    "selectId\0viewSubjList\0insertSecSub\0"
    "viewTeachers\0loadComboBoxes\0getIDsection\0"
    "getIDdays\0filterSection\0setDesign\0"
    "getIDdepartment\0showTime\0showDate\0"
    "on_addStaff_clicked\0on_addRecords_clicked\0"
    "on_addDepartment_clicked\0on_main_clicked\0"
    "on_firstname_2_textChanged\0"
    "on_secondname_2_textChanged\0"
    "on_thirdname_2_textChanged\0"
    "on_middlename_2_textChanged\0"
    "on_lastname_2_textChanged\0"
    "on_department_currentTextChanged\0"
    "on_street_2_textChanged\0on_brgy_2_textChanged\0"
    "on_city_2_textChanged\0on_province_2_textChanged\0"
    "on_emailadd_2_textChanged\0"
    "on_contactnum_2_textChanged\0"
    "on_username_textChanged\0on_pw_textChanged\0"
    "on_rtypepw_textChanged\0on_add_2_clicked\0"
    "on_cancel_2_clicked\0on_subject_4_textChanged\0"
    "on_description_2_textChanged\0"
    "on_units_2_currentTextChanged\0"
    "on_prerequisite_2_textChanged\0"
    "on_subjectfor_2_currentTextChanged\0"
    "on_subjecttype_2_currentTextChanged\0"
    "on_add_3_clicked\0on_cancel_3_clicked\0"
    "on_addsection_clicked\0"
    "on_section_currentTextChanged\0"
    "on_add_4_clicked\0on_cancel_4_clicked\0"
    "on_courseedit_textChanged\0on_add_5_clicked\0"
    "on_cancel_5_clicked\0on_male_2_clicked\0"
    "on_female_2_clicked\0on_scanID_clicked\0"
    "on_okID_clicked\0on_admin_clicked\0"
    "on_student_clicked\0on_timeEdit_timeChanged\0"
    "on_timeEdit_2_timeChanged\0on_room_textChanged\0"
    "on_days_currentTextChanged\0"
    "on_yearlevel_currentTextChanged\0"
    "on_clickSubj_clicked\0index\0"
    "on_teacherList_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_registration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  354,    2, 0x0a /* Public */,
       3,    0,  355,    2, 0x0a /* Public */,
       4,    0,  356,    2, 0x0a /* Public */,
       5,    0,  357,    2, 0x0a /* Public */,
       6,    1,  358,    2, 0x0a /* Public */,
       8,    0,  361,    2, 0x0a /* Public */,
       9,    0,  362,    2, 0x0a /* Public */,
      10,    0,  363,    2, 0x0a /* Public */,
      11,    0,  364,    2, 0x0a /* Public */,
      12,    0,  365,    2, 0x0a /* Public */,
      13,    0,  366,    2, 0x0a /* Public */,
      14,    0,  367,    2, 0x0a /* Public */,
      15,    0,  368,    2, 0x0a /* Public */,
      16,    0,  369,    2, 0x0a /* Public */,
      17,    0,  370,    2, 0x0a /* Public */,
      18,    0,  371,    2, 0x0a /* Public */,
      19,    0,  372,    2, 0x0a /* Public */,
      20,    0,  373,    2, 0x0a /* Public */,
      21,    0,  374,    2, 0x0a /* Public */,
      22,    0,  375,    2, 0x08 /* Private */,
      23,    0,  376,    2, 0x08 /* Private */,
      24,    0,  377,    2, 0x08 /* Private */,
      25,    0,  378,    2, 0x08 /* Private */,
      26,    0,  379,    2, 0x08 /* Private */,
      27,    0,  380,    2, 0x08 /* Private */,
      28,    0,  381,    2, 0x08 /* Private */,
      29,    0,  382,    2, 0x08 /* Private */,
      30,    0,  383,    2, 0x08 /* Private */,
      31,    0,  384,    2, 0x08 /* Private */,
      32,    0,  385,    2, 0x08 /* Private */,
      33,    0,  386,    2, 0x08 /* Private */,
      34,    0,  387,    2, 0x08 /* Private */,
      35,    0,  388,    2, 0x08 /* Private */,
      36,    0,  389,    2, 0x08 /* Private */,
      37,    0,  390,    2, 0x08 /* Private */,
      38,    0,  391,    2, 0x08 /* Private */,
      39,    0,  392,    2, 0x08 /* Private */,
      40,    0,  393,    2, 0x08 /* Private */,
      41,    0,  394,    2, 0x08 /* Private */,
      42,    0,  395,    2, 0x08 /* Private */,
      43,    0,  396,    2, 0x08 /* Private */,
      44,    0,  397,    2, 0x08 /* Private */,
      45,    0,  398,    2, 0x08 /* Private */,
      46,    0,  399,    2, 0x08 /* Private */,
      47,    0,  400,    2, 0x08 /* Private */,
      48,    0,  401,    2, 0x08 /* Private */,
      49,    0,  402,    2, 0x08 /* Private */,
      50,    0,  403,    2, 0x08 /* Private */,
      51,    0,  404,    2, 0x08 /* Private */,
      52,    0,  405,    2, 0x08 /* Private */,
      53,    0,  406,    2, 0x08 /* Private */,
      54,    0,  407,    2, 0x08 /* Private */,
      55,    0,  408,    2, 0x08 /* Private */,
      56,    0,  409,    2, 0x08 /* Private */,
      57,    0,  410,    2, 0x08 /* Private */,
      58,    0,  411,    2, 0x08 /* Private */,
      59,    0,  412,    2, 0x08 /* Private */,
      60,    0,  413,    2, 0x08 /* Private */,
      61,    0,  414,    2, 0x08 /* Private */,
      62,    0,  415,    2, 0x08 /* Private */,
      63,    0,  416,    2, 0x08 /* Private */,
      64,    0,  417,    2, 0x08 /* Private */,
      65,    0,  418,    2, 0x08 /* Private */,
      66,    0,  419,    2, 0x08 /* Private */,
      67,    0,  420,    2, 0x08 /* Private */,
      68,    0,  421,    2, 0x08 /* Private */,
      69,    1,  422,    2, 0x08 /* Private */,
      71,    1,  425,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   70,
    QMetaType::Void, QMetaType::QModelIndex,   70,

       0        // eod
};

void registration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        registration *_t = static_cast<registration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectDatabase(); break;
        case 1: _t->connClose(); break;
        case 2: _t->insertToEnroll(); break;
        case 3: _t->scanScard(); break;
        case 4: _t->newNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->insertSection(); break;
        case 6: _t->insertYrLevel(); break;
        case 7: _t->selectId(); break;
        case 8: _t->viewSubjList(); break;
        case 9: _t->insertSecSub(); break;
        case 10: _t->viewTeachers(); break;
        case 11: _t->loadComboBoxes(); break;
        case 12: _t->getIDsection(); break;
        case 13: _t->getIDdays(); break;
        case 14: _t->filterSection(); break;
        case 15: _t->setDesign(); break;
        case 16: _t->getIDdepartment(); break;
        case 17: _t->showTime(); break;
        case 18: _t->showDate(); break;
        case 19: _t->on_addStaff_clicked(); break;
        case 20: _t->on_addRecords_clicked(); break;
        case 21: _t->on_addDepartment_clicked(); break;
        case 22: _t->on_main_clicked(); break;
        case 23: _t->on_firstname_2_textChanged(); break;
        case 24: _t->on_secondname_2_textChanged(); break;
        case 25: _t->on_thirdname_2_textChanged(); break;
        case 26: _t->on_middlename_2_textChanged(); break;
        case 27: _t->on_lastname_2_textChanged(); break;
        case 28: _t->on_department_currentTextChanged(); break;
        case 29: _t->on_street_2_textChanged(); break;
        case 30: _t->on_brgy_2_textChanged(); break;
        case 31: _t->on_city_2_textChanged(); break;
        case 32: _t->on_province_2_textChanged(); break;
        case 33: _t->on_emailadd_2_textChanged(); break;
        case 34: _t->on_contactnum_2_textChanged(); break;
        case 35: _t->on_username_textChanged(); break;
        case 36: _t->on_pw_textChanged(); break;
        case 37: _t->on_rtypepw_textChanged(); break;
        case 38: _t->on_add_2_clicked(); break;
        case 39: _t->on_cancel_2_clicked(); break;
        case 40: _t->on_subject_4_textChanged(); break;
        case 41: _t->on_description_2_textChanged(); break;
        case 42: _t->on_units_2_currentTextChanged(); break;
        case 43: _t->on_prerequisite_2_textChanged(); break;
        case 44: _t->on_subjectfor_2_currentTextChanged(); break;
        case 45: _t->on_subjecttype_2_currentTextChanged(); break;
        case 46: _t->on_add_3_clicked(); break;
        case 47: _t->on_cancel_3_clicked(); break;
        case 48: _t->on_addsection_clicked(); break;
        case 49: _t->on_section_currentTextChanged(); break;
        case 50: _t->on_add_4_clicked(); break;
        case 51: _t->on_cancel_4_clicked(); break;
        case 52: _t->on_courseedit_textChanged(); break;
        case 53: _t->on_add_5_clicked(); break;
        case 54: _t->on_cancel_5_clicked(); break;
        case 55: _t->on_male_2_clicked(); break;
        case 56: _t->on_female_2_clicked(); break;
        case 57: _t->on_scanID_clicked(); break;
        case 58: _t->on_okID_clicked(); break;
        case 59: _t->on_admin_clicked(); break;
        case 60: _t->on_student_clicked(); break;
        case 61: _t->on_timeEdit_timeChanged(); break;
        case 62: _t->on_timeEdit_2_timeChanged(); break;
        case 63: _t->on_room_textChanged(); break;
        case 64: _t->on_days_currentTextChanged(); break;
        case 65: _t->on_yearlevel_currentTextChanged(); break;
        case 66: _t->on_clickSubj_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 67: _t->on_teacherList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject registration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_registration.data,
      qt_meta_data_registration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *registration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *registration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_registration.stringdata0))
        return static_cast<void*>(const_cast< registration*>(this));
    return QWidget::qt_metacast(_clname);
}

int registration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 68;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
