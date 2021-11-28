/****************************************************************************
** Meta object code from reading C++ file 'GUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlockInfo_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockInfo_t qt_meta_stringdata_BlockInfo = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BlockInfo"
QT_MOC_LITERAL(1, 10, 17), // "on_tx_cellClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "on_backspace_clicked"
QT_MOC_LITERAL(4, 50, 22) // "on_backspace_3_clicked"

    },
    "BlockInfo\0on_tx_cellClicked\0\0"
    "on_backspace_clicked\0on_backspace_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BlockInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlockInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tx_cellClicked(); break;
        case 1: _t->on_backspace_clicked(); break;
        case 2: _t->on_backspace_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BlockInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BlockInfo.data,
    qt_meta_data_BlockInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlockInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockInfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BlockInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_GUI_t {
    QByteArrayData data[52];
    char stringdata0[1430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUI_t qt_meta_stringdata_GUI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "GUI"
QT_MOC_LITERAL(1, 4, 23), // "on_WalletButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "on_TransactionButton_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_MiningButton_clicked"
QT_MOC_LITERAL(5, 82, 26), // "on_DashBoardButton_clicked"
QT_MOC_LITERAL(6, 109, 21), // "on_amount_textChanged"
QT_MOC_LITERAL(7, 131, 19), // "on_addr_textChanged"
QT_MOC_LITERAL(8, 151, 29), // "on_CreateWalletButton_clicked"
QT_MOC_LITERAL(9, 181, 33), // "on_RightButtonTransaction_cli..."
QT_MOC_LITERAL(10, 215, 32), // "on_LeftButtonTransaction_clicked"
QT_MOC_LITERAL(11, 248, 28), // "on_RightButtonMining_clicked"
QT_MOC_LITERAL(12, 277, 27), // "on_LeftButtonMining_clicked"
QT_MOC_LITERAL(13, 305, 31), // "on_RightButtonDashboard_clicked"
QT_MOC_LITERAL(14, 337, 30), // "on_LeftButtonDashboard_clicked"
QT_MOC_LITERAL(15, 368, 24), // "on_WalletRefresh_clicked"
QT_MOC_LITERAL(16, 393, 20), // "on_GetMining_clicked"
QT_MOC_LITERAL(17, 414, 21), // "on_SendButton_clicked"
QT_MOC_LITERAL(18, 436, 18), // "on_resettx_clicked"
QT_MOC_LITERAL(19, 455, 22), // "on_resetmining_clicked"
QT_MOC_LITERAL(20, 478, 25), // "on_resetdashboard_clicked"
QT_MOC_LITERAL(21, 504, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(22, 527, 31), // "on_dashboard_table1_cellClicked"
QT_MOC_LITERAL(23, 559, 31), // "on_dashboard_table2_cellClicked"
QT_MOC_LITERAL(24, 591, 31), // "on_dashboard_table3_cellClicked"
QT_MOC_LITERAL(25, 623, 31), // "on_dashboard_table4_cellClicked"
QT_MOC_LITERAL(26, 655, 31), // "on_dashboard_table5_cellClicked"
QT_MOC_LITERAL(27, 687, 31), // "on_dashboard_table6_cellClicked"
QT_MOC_LITERAL(28, 719, 31), // "on_dashboard_table7_cellClicked"
QT_MOC_LITERAL(29, 751, 31), // "on_dashboard_table8_cellClicked"
QT_MOC_LITERAL(30, 783, 31), // "on_dashboard_table9_cellClicked"
QT_MOC_LITERAL(31, 815, 32), // "on_dashboard_table10_cellClicked"
QT_MOC_LITERAL(32, 848, 28), // "on_mining_table1_cellClicked"
QT_MOC_LITERAL(33, 877, 28), // "on_mining_table2_cellClicked"
QT_MOC_LITERAL(34, 906, 28), // "on_mining_table3_cellClicked"
QT_MOC_LITERAL(35, 935, 28), // "on_mining_table4_cellClicked"
QT_MOC_LITERAL(36, 964, 28), // "on_mining_table5_cellClicked"
QT_MOC_LITERAL(37, 993, 28), // "on_mining_table6_cellClicked"
QT_MOC_LITERAL(38, 1022, 28), // "on_mining_table7_cellClicked"
QT_MOC_LITERAL(39, 1051, 28), // "on_mining_table8_cellClicked"
QT_MOC_LITERAL(40, 1080, 28), // "on_mining_table9_cellClicked"
QT_MOC_LITERAL(41, 1109, 29), // "on_mining_table10_cellClicked"
QT_MOC_LITERAL(42, 1139, 28), // "on_tableWidget_1_cellClicked"
QT_MOC_LITERAL(43, 1168, 28), // "on_tableWidget_2_cellClicked"
QT_MOC_LITERAL(44, 1197, 28), // "on_tableWidget_3_cellClicked"
QT_MOC_LITERAL(45, 1226, 28), // "on_tableWidget_4_cellClicked"
QT_MOC_LITERAL(46, 1255, 28), // "on_tableWidget_5_cellClicked"
QT_MOC_LITERAL(47, 1284, 28), // "on_tableWidget_6_cellClicked"
QT_MOC_LITERAL(48, 1313, 28), // "on_tableWidget_7_cellClicked"
QT_MOC_LITERAL(49, 1342, 28), // "on_tableWidget_8_cellClicked"
QT_MOC_LITERAL(50, 1371, 28), // "on_tableWidget_9_cellClicked"
QT_MOC_LITERAL(51, 1400, 29) // "on_tableWidget_10_cellClicked"

    },
    "GUI\0on_WalletButton_clicked\0\0"
    "on_TransactionButton_clicked\0"
    "on_MiningButton_clicked\0"
    "on_DashBoardButton_clicked\0"
    "on_amount_textChanged\0on_addr_textChanged\0"
    "on_CreateWalletButton_clicked\0"
    "on_RightButtonTransaction_clicked\0"
    "on_LeftButtonTransaction_clicked\0"
    "on_RightButtonMining_clicked\0"
    "on_LeftButtonMining_clicked\0"
    "on_RightButtonDashboard_clicked\0"
    "on_LeftButtonDashboard_clicked\0"
    "on_WalletRefresh_clicked\0on_GetMining_clicked\0"
    "on_SendButton_clicked\0on_resettx_clicked\0"
    "on_resetmining_clicked\0on_resetdashboard_clicked\0"
    "on_closeButton_clicked\0"
    "on_dashboard_table1_cellClicked\0"
    "on_dashboard_table2_cellClicked\0"
    "on_dashboard_table3_cellClicked\0"
    "on_dashboard_table4_cellClicked\0"
    "on_dashboard_table5_cellClicked\0"
    "on_dashboard_table6_cellClicked\0"
    "on_dashboard_table7_cellClicked\0"
    "on_dashboard_table8_cellClicked\0"
    "on_dashboard_table9_cellClicked\0"
    "on_dashboard_table10_cellClicked\0"
    "on_mining_table1_cellClicked\0"
    "on_mining_table2_cellClicked\0"
    "on_mining_table3_cellClicked\0"
    "on_mining_table4_cellClicked\0"
    "on_mining_table5_cellClicked\0"
    "on_mining_table6_cellClicked\0"
    "on_mining_table7_cellClicked\0"
    "on_mining_table8_cellClicked\0"
    "on_mining_table9_cellClicked\0"
    "on_mining_table10_cellClicked\0"
    "on_tableWidget_1_cellClicked\0"
    "on_tableWidget_2_cellClicked\0"
    "on_tableWidget_3_cellClicked\0"
    "on_tableWidget_4_cellClicked\0"
    "on_tableWidget_5_cellClicked\0"
    "on_tableWidget_6_cellClicked\0"
    "on_tableWidget_7_cellClicked\0"
    "on_tableWidget_8_cellClicked\0"
    "on_tableWidget_9_cellClicked\0"
    "on_tableWidget_10_cellClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x08 /* Private */,
       3,    0,  265,    2, 0x08 /* Private */,
       4,    0,  266,    2, 0x08 /* Private */,
       5,    0,  267,    2, 0x08 /* Private */,
       6,    0,  268,    2, 0x08 /* Private */,
       7,    0,  269,    2, 0x08 /* Private */,
       8,    0,  270,    2, 0x08 /* Private */,
       9,    0,  271,    2, 0x08 /* Private */,
      10,    0,  272,    2, 0x08 /* Private */,
      11,    0,  273,    2, 0x08 /* Private */,
      12,    0,  274,    2, 0x08 /* Private */,
      13,    0,  275,    2, 0x08 /* Private */,
      14,    0,  276,    2, 0x08 /* Private */,
      15,    0,  277,    2, 0x08 /* Private */,
      16,    0,  278,    2, 0x08 /* Private */,
      17,    0,  279,    2, 0x08 /* Private */,
      18,    0,  280,    2, 0x08 /* Private */,
      19,    0,  281,    2, 0x08 /* Private */,
      20,    0,  282,    2, 0x08 /* Private */,
      21,    0,  283,    2, 0x08 /* Private */,
      22,    0,  284,    2, 0x08 /* Private */,
      23,    0,  285,    2, 0x08 /* Private */,
      24,    0,  286,    2, 0x08 /* Private */,
      25,    0,  287,    2, 0x08 /* Private */,
      26,    0,  288,    2, 0x08 /* Private */,
      27,    0,  289,    2, 0x08 /* Private */,
      28,    0,  290,    2, 0x08 /* Private */,
      29,    0,  291,    2, 0x08 /* Private */,
      30,    0,  292,    2, 0x08 /* Private */,
      31,    0,  293,    2, 0x08 /* Private */,
      32,    0,  294,    2, 0x08 /* Private */,
      33,    0,  295,    2, 0x08 /* Private */,
      34,    0,  296,    2, 0x08 /* Private */,
      35,    0,  297,    2, 0x08 /* Private */,
      36,    0,  298,    2, 0x08 /* Private */,
      37,    0,  299,    2, 0x08 /* Private */,
      38,    0,  300,    2, 0x08 /* Private */,
      39,    0,  301,    2, 0x08 /* Private */,
      40,    0,  302,    2, 0x08 /* Private */,
      41,    0,  303,    2, 0x08 /* Private */,
      42,    0,  304,    2, 0x08 /* Private */,
      43,    0,  305,    2, 0x08 /* Private */,
      44,    0,  306,    2, 0x08 /* Private */,
      45,    0,  307,    2, 0x08 /* Private */,
      46,    0,  308,    2, 0x08 /* Private */,
      47,    0,  309,    2, 0x08 /* Private */,
      48,    0,  310,    2, 0x08 /* Private */,
      49,    0,  311,    2, 0x08 /* Private */,
      50,    0,  312,    2, 0x08 /* Private */,
      51,    0,  313,    2, 0x08 /* Private */,

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

       0        // eod
};

void GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_WalletButton_clicked(); break;
        case 1: _t->on_TransactionButton_clicked(); break;
        case 2: _t->on_MiningButton_clicked(); break;
        case 3: _t->on_DashBoardButton_clicked(); break;
        case 4: _t->on_amount_textChanged(); break;
        case 5: _t->on_addr_textChanged(); break;
        case 6: _t->on_CreateWalletButton_clicked(); break;
        case 7: _t->on_RightButtonTransaction_clicked(); break;
        case 8: _t->on_LeftButtonTransaction_clicked(); break;
        case 9: _t->on_RightButtonMining_clicked(); break;
        case 10: _t->on_LeftButtonMining_clicked(); break;
        case 11: _t->on_RightButtonDashboard_clicked(); break;
        case 12: _t->on_LeftButtonDashboard_clicked(); break;
        case 13: _t->on_WalletRefresh_clicked(); break;
        case 14: _t->on_GetMining_clicked(); break;
        case 15: _t->on_SendButton_clicked(); break;
        case 16: _t->on_resettx_clicked(); break;
        case 17: _t->on_resetmining_clicked(); break;
        case 18: _t->on_resetdashboard_clicked(); break;
        case 19: _t->on_closeButton_clicked(); break;
        case 20: _t->on_dashboard_table1_cellClicked(); break;
        case 21: _t->on_dashboard_table2_cellClicked(); break;
        case 22: _t->on_dashboard_table3_cellClicked(); break;
        case 23: _t->on_dashboard_table4_cellClicked(); break;
        case 24: _t->on_dashboard_table5_cellClicked(); break;
        case 25: _t->on_dashboard_table6_cellClicked(); break;
        case 26: _t->on_dashboard_table7_cellClicked(); break;
        case 27: _t->on_dashboard_table8_cellClicked(); break;
        case 28: _t->on_dashboard_table9_cellClicked(); break;
        case 29: _t->on_dashboard_table10_cellClicked(); break;
        case 30: _t->on_mining_table1_cellClicked(); break;
        case 31: _t->on_mining_table2_cellClicked(); break;
        case 32: _t->on_mining_table3_cellClicked(); break;
        case 33: _t->on_mining_table4_cellClicked(); break;
        case 34: _t->on_mining_table5_cellClicked(); break;
        case 35: _t->on_mining_table6_cellClicked(); break;
        case 36: _t->on_mining_table7_cellClicked(); break;
        case 37: _t->on_mining_table8_cellClicked(); break;
        case 38: _t->on_mining_table9_cellClicked(); break;
        case 39: _t->on_mining_table10_cellClicked(); break;
        case 40: _t->on_tableWidget_1_cellClicked(); break;
        case 41: _t->on_tableWidget_2_cellClicked(); break;
        case 42: _t->on_tableWidget_3_cellClicked(); break;
        case 43: _t->on_tableWidget_4_cellClicked(); break;
        case 44: _t->on_tableWidget_5_cellClicked(); break;
        case 45: _t->on_tableWidget_6_cellClicked(); break;
        case 46: _t->on_tableWidget_7_cellClicked(); break;
        case 47: _t->on_tableWidget_8_cellClicked(); break;
        case 48: _t->on_tableWidget_9_cellClicked(); break;
        case 49: _t->on_tableWidget_10_cellClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GUI.data,
    qt_meta_data_GUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
