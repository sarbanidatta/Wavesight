/****************************************************************************
** Meta object code from reading C++ file 'userprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "userprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserProfile_t {
    QByteArrayData data[9];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UserProfile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UserProfile_t qt_meta_stringdata_UserProfile = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 32),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 4),
QT_MOC_LITERAL(4, 51, 34),
QT_MOC_LITERAL(5, 86, 35),
QT_MOC_LITERAL(6, 122, 34),
QT_MOC_LITERAL(7, 157, 36),
QT_MOC_LITERAL(8, 194, 38)
    },
    "UserProfile\0on_label_EmailEdit_linkActivated\0"
    "\0link\0on_label_ContactEdit_linkActivated\0"
    "on_label_PasswordEdit_linkActivated\0"
    "on_label_EmailUpdate_linkActivated\0"
    "on_label_ContactUpdate_linkActivated\0"
    "on_label_CPasswordUpdate_linkActivated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08,
       4,    1,   47,    2, 0x08,
       5,    1,   50,    2, 0x08,
       6,    1,   53,    2, 0x08,
       7,    1,   56,    2, 0x08,
       8,    1,   59,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void UserProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserProfile *_t = static_cast<UserProfile *>(_o);
        switch (_id) {
        case 0: _t->on_label_EmailEdit_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_label_ContactEdit_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_label_PasswordEdit_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_label_EmailUpdate_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_label_ContactUpdate_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_label_CPasswordUpdate_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UserProfile::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserProfile.data,
      qt_meta_data_UserProfile,  qt_static_metacall, 0, 0}
};


const QMetaObject *UserProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserProfile.stringdata))
        return static_cast<void*>(const_cast< UserProfile*>(this));
    return QWidget::qt_metacast(_clname);
}

int UserProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
