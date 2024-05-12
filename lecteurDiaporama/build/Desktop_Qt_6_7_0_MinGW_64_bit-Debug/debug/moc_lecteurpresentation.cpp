/****************************************************************************
** Meta object code from reading C++ file 'lecteurpresentation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lecteurpresentation.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurpresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLecteurPresentationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLecteurPresentationENDCLASS = QtMocHelpers::stringData(
    "LecteurPresentation",
    "btnSuivantClicked",
    "",
    "btnPrecedentClicked",
    "btnLancerClicked",
    "btnArreterClicked",
    "actionAProposDeTriggered",
    "actionChargerDiaporamaTriggered",
    "actionModifierVitesseTriggered",
    "actionEnleverDiaporamaTriggered",
    "actionQuitterTriggered",
    "actionFiltrerTriggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLecteurPresentationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x0a,    4 /* Public */,
       6,    0,   78,    2, 0x0a,    5 /* Public */,
       7,    0,   79,    2, 0x0a,    6 /* Public */,
       8,    0,   80,    2, 0x0a,    7 /* Public */,
       9,    0,   81,    2, 0x0a,    8 /* Public */,
      10,    0,   82,    2, 0x0a,    9 /* Public */,
      11,    0,   83,    2, 0x0a,   10 /* Public */,

 // slots: parameters
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

       0        // eod
};

Q_CONSTINIT const QMetaObject LecteurPresentation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLecteurPresentationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLecteurPresentationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLecteurPresentationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LecteurPresentation, std::true_type>,
        // method 'btnSuivantClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'btnPrecedentClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'btnLancerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'btnArreterClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionAProposDeTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionChargerDiaporamaTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionModifierVitesseTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionEnleverDiaporamaTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionQuitterTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionFiltrerTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LecteurPresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurPresentation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->btnSuivantClicked(); break;
        case 1: _t->btnPrecedentClicked(); break;
        case 2: _t->btnLancerClicked(); break;
        case 3: _t->btnArreterClicked(); break;
        case 4: _t->actionAProposDeTriggered(); break;
        case 5: _t->actionChargerDiaporamaTriggered(); break;
        case 6: _t->actionModifierVitesseTriggered(); break;
        case 7: _t->actionEnleverDiaporamaTriggered(); break;
        case 8: _t->actionQuitterTriggered(); break;
        case 9: _t->actionFiltrerTriggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *LecteurPresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurPresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLecteurPresentationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LecteurPresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
