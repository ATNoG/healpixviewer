/****************************************************************************
** Meta object code from reading C++ file 'mapviewport.h'
**
** Created: Thu Jun 9 13:55:10 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mapviewport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapviewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapViewport[] = {

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
      22,   13,   12,   12, 0x0a,
      63,   45,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MapViewport[] = {
    "MapViewport\0\0selected\0selectionChanged(bool)\0"
    "event,type,source\0"
    "synchronizeView(QEvent*,int,MapViewer*)\0"
};

const QMetaObject MapViewport::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapViewport,
      qt_meta_data_MapViewport, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapViewport::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapViewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapViewport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapViewport))
        return static_cast<void*>(const_cast< MapViewport*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapViewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: synchronizeView((*reinterpret_cast< QEvent*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< MapViewer*(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
