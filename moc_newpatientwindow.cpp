/****************************************************************************
** Meta object code from reading C++ file 'newpatientwindow.h'
**
** Created: Sun Apr 3 22:21:54 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "newpatientwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpatientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewPatientWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      34,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewPatientWindow[] = {
    "NewPatientWindow\0\0okBtn_clicked()\0"
    "cancelBtn_clicked()\0"
};

const QMetaObject NewPatientWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NewPatientWindow,
      qt_meta_data_NewPatientWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewPatientWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewPatientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewPatientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewPatientWindow))
        return static_cast<void*>(const_cast< NewPatientWindow*>(this));
    if (!strcmp(_clname, "genUI"))
        return static_cast< genUI*>(const_cast< NewPatientWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NewPatientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: okBtn_clicked(); break;
        case 1: cancelBtn_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
