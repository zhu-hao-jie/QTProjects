/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[56];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 17), // "do_camera_changed"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 5), // "index"
QT_MOC_LITERAL(36, 23), // "do_camera_activeChanged"
QT_MOC_LITERAL(60, 6), // "active"
QT_MOC_LITERAL(67, 24), // "do_image_readyForCapture"
QT_MOC_LITERAL(92, 5), // "ready"
QT_MOC_LITERAL(98, 17), // "do_image_captured"
QT_MOC_LITERAL(116, 2), // "id"
QT_MOC_LITERAL(119, 7), // "preview"
QT_MOC_LITERAL(127, 14), // "do_image_saved"
QT_MOC_LITERAL(142, 8), // "fileName"
QT_MOC_LITERAL(151, 20), // "do_recorder_duration"
QT_MOC_LITERAL(172, 8), // "duration"
QT_MOC_LITERAL(181, 24), // "do_recorder_stateChanged"
QT_MOC_LITERAL(206, 29), // "QMediaRecorder::RecorderState"
QT_MOC_LITERAL(236, 5), // "state"
QT_MOC_LITERAL(242, 17), // "do_recorder_error"
QT_MOC_LITERAL(260, 21), // "QMediaRecorder::Error"
QT_MOC_LITERAL(282, 5), // "error"
QT_MOC_LITERAL(288, 11), // "errorString"
QT_MOC_LITERAL(300, 27), // "on_actStartCamera_triggered"
QT_MOC_LITERAL(328, 26), // "on_actStopCamera_triggered"
QT_MOC_LITERAL(355, 23), // "on_actCapture_triggered"
QT_MOC_LITERAL(379, 27), // "on_actVideoRecord_triggered"
QT_MOC_LITERAL(407, 25), // "on_actVideoStop_triggered"
QT_MOC_LITERAL(433, 23) // "on_btnVideoFile_clicked"

    },
    "MainWindow\0do_camera_changed\0\0index\0"
    "do_camera_activeChanged\0active\0"
    "do_image_readyForCapture\0ready\0"
    "do_image_captured\0id\0preview\0"
    "do_image_saved\0fileName\0do_recorder_duration\0"
    "duration\0do_recorder_stateChanged\0"
    "QMediaRecorder::RecorderState\0state\0"
    "do_recorder_error\0QMediaRecorder::Error\0"
    "error\0errorString\0on_actStartCamera_triggered\0"
    "on_actStopCamera_triggered\0"
    "on_actCapture_triggered\0"
    "on_actVideoRecord_triggered\0"
    "on_actVideoStop_triggered\0"
    "on_btnVideoFile_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x08,    1 /* Private */,
       4,    1,  101,    2, 0x08,    3 /* Private */,
       6,    1,  104,    2, 0x08,    5 /* Private */,
       8,    2,  107,    2, 0x08,    7 /* Private */,
      11,    2,  112,    2, 0x08,   10 /* Private */,
      13,    1,  117,    2, 0x08,   13 /* Private */,
      15,    1,  120,    2, 0x08,   15 /* Private */,
      18,    2,  123,    2, 0x08,   17 /* Private */,
      22,    0,  128,    2, 0x08,   20 /* Private */,
      23,    0,  129,    2, 0x08,   21 /* Private */,
      24,    0,  130,    2, 0x08,   22 /* Private */,
      25,    0,  131,    2, 0x08,   23 /* Private */,
      26,    0,  132,    2, 0x08,   24 /* Private */,
      27,    0,  133,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   12,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->do_camera_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->do_camera_activeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->do_image_readyForCapture((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->do_image_captured((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 4: _t->do_image_saved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->do_recorder_duration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->do_recorder_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaRecorder::RecorderState>>(_a[1]))); break;
        case 7: _t->do_recorder_error((*reinterpret_cast< std::add_pointer_t<QMediaRecorder::Error>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->on_actStartCamera_triggered(); break;
        case 9: _t->on_actStopCamera_triggered(); break;
        case 10: _t->on_actCapture_triggered(); break;
        case 11: _t->on_actVideoRecord_triggered(); break;
        case 12: _t->on_actVideoStop_triggered(); break;
        case 13: _t->on_btnVideoFile_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMediaRecorder::RecorderState, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMediaRecorder::Error, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
