/****************************************************************************
** Meta object code from reading C++ file 'MainView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Classes/MainView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   38,    9,    9, 0x08,
      69,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainView[] = {
    "MainView\0\0sigDisplayDataOnWidget(int)\0"
    "data\0slotUpdateDataOnView(int)\0"
    "slotActionValid()\0"
};

void MainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainView *_t = static_cast<MainView *>(_o);
        switch (_id) {
        case 0: _t->sigDisplayDataOnWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotUpdateDataOnView((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->slotActionValid(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainView,
      qt_meta_data_MainView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainView))
        return static_cast<void*>(const_cast< MainView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MainView::sigDisplayDataOnWidget(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
