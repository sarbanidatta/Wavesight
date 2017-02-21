/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "home.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Home_t {
    QByteArrayData data[18];
    char stringdata[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Home_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Home_t qt_meta_stringdata_Home = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 7),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 26),
QT_MOC_LITERAL(4, 41, 27),
QT_MOC_LITERAL(5, 69, 28),
QT_MOC_LITERAL(6, 98, 35),
QT_MOC_LITERAL(7, 134, 33),
QT_MOC_LITERAL(8, 168, 34),
QT_MOC_LITERAL(9, 203, 27),
QT_MOC_LITERAL(10, 231, 42),
QT_MOC_LITERAL(11, 274, 4),
QT_MOC_LITERAL(12, 279, 4),
QT_MOC_LITERAL(13, 284, 36),
QT_MOC_LITERAL(14, 321, 29),
QT_MOC_LITERAL(15, 351, 31),
QT_MOC_LITERAL(16, 383, 30),
QT_MOC_LITERAL(17, 414, 31)
    },
    "Home\0message\0\0on_pushButton_snmp_clicked\0"
    "on_pushButton_login_clicked\0"
    "on_pushButton_logout_clicked\0"
    "on_pushButton_commissioning_clicked\0"
    "on_pushButton_diagnostics_clicked\0"
    "on_pushButton_multidevices_clicked\0"
    "on_pushButton_reset_clicked\0"
    "on_lineEdit_password_cursorPositionChanged\0"
    "arg1\0arg2\0on_lineEdit_password_editingFinished\0"
    "on_pushbutton_profile_clicked\0"
    "on_pushButton_selectall_clicked\0"
    "on_pushButton_deselect_clicked\0"
    "on_pushButton_adminSave_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Home[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    0,   88,    2, 0x08,
       7,    0,   89,    2, 0x08,
       8,    0,   90,    2, 0x08,
       9,    0,   91,    2, 0x08,
      10,    2,   92,    2, 0x08,
      13,    0,   97,    2, 0x08,
      14,    0,   98,    2, 0x08,
      15,    0,   99,    2, 0x08,
      16,    0,  100,    2, 0x08,
      17,    0,  101,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Home *_t = static_cast<Home *>(_o);
        switch (_id) {
        case 0: _t->message(); break;
        case 1: _t->on_pushButton_snmp_clicked(); break;
        case 2: _t->on_pushButton_login_clicked(); break;
        case 3: _t->on_pushButton_logout_clicked(); break;
        case 4: _t->on_pushButton_commissioning_clicked(); break;
        case 5: _t->on_pushButton_diagnostics_clicked(); break;
        case 6: _t->on_pushButton_multidevices_clicked(); break;
        case 7: _t->on_pushButton_reset_clicked(); break;
        case 8: _t->on_lineEdit_password_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_lineEdit_password_editingFinished(); break;
        case 10: _t->on_pushbutton_profile_clicked(); break;
        case 11: _t->on_pushButton_selectall_clicked(); break;
        case 12: _t->on_pushButton_deselect_clicked(); break;
        case 13: _t->on_pushButton_adminSave_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Home::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Home.data,
      qt_meta_data_Home,  qt_static_metacall, 0, 0}
};


const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Home.stringdata))
        return static_cast<void*>(const_cast< Home*>(this));
    return QWidget::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
