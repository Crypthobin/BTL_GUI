/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *WalletButton;
    QPushButton *TransactionButton;
    QPushButton *MiningButton;
    QPushButton *DashBoardButton;
    QLabel *WalletName;
    QLabel *cat;
    QPushButton *closeButton;
    QStackedWidget *stackedWidget;
    QWidget *loading_page;
    QLabel *loading_label;
    QLabel *label_2;
    QWidget *start_page;
    QTextEdit *WalletNameInput;
    QPushButton *CreateWalletButton;
    QWidget *page_1;
    QTextBrowser *address_info;
    QLabel *tol;
    QPushButton *WalletRefresh;
    QLabel *getbalance_info;
    QStackedWidget *transactionBoard;
    QWidget *transaction_page1;
    QTableWidget *tableWidget_1;
    QWidget *transaction_page2;
    QTableWidget *tableWidget_2;
    QWidget *transaction_page3;
    QTableWidget *tableWidget_3;
    QWidget *transaction_page4;
    QTableWidget *tableWidget_4;
    QWidget *transaction_page5;
    QTableWidget *tableWidget_5;
    QWidget *transaction_page6;
    QTableWidget *tableWidget_6;
    QWidget *transaction_page7;
    QTableWidget *tableWidget_7;
    QWidget *transaction_page8;
    QTableWidget *tableWidget_8;
    QWidget *transaction_page9;
    QTableWidget *tableWidget_9;
    QWidget *transaction_page10;
    QTableWidget *tableWidget_10;
    QPushButton *LeftButtonTransaction;
    QPushButton *RightButtonTransaction;
    QPushButton *resettx;
    QLabel *miningresult_label_2;
    QWidget *page_2;
    QTextEdit *addr;
    QLabel *TOL_label;
    QPushButton *SendButton;
    QLabel *addrstatus;
    QLabel *amountstatus;
    QLineEdit *amount;
    QTextBrowser *send_result;
    QWidget *page_3;
    QLabel *miningresult_label;
    QLabel *mining_label;
    QPushButton *GetMining;
    QStackedWidget *miningBoard;
    QWidget *mining_page1;
    QTableWidget *mining_table1;
    QWidget *mining_page2;
    QTableWidget *mining_table2;
    QWidget *mining_page3;
    QTableWidget *mining_table3;
    QWidget *mining_page4;
    QTableWidget *mining_table4;
    QWidget *mining_page5;
    QTableWidget *mining_table5;
    QWidget *mining_page6;
    QTableWidget *mining_table6;
    QWidget *mining_page7;
    QTableWidget *mining_table7;
    QWidget *mining_page8;
    QTableWidget *mining_table8;
    QWidget *mining_page9;
    QTableWidget *mining_table9;
    QWidget *mining_page10;
    QTableWidget *mining_table10;
    QPushButton *RightButtonMining;
    QPushButton *LeftButtonMining;
    QPushButton *resetmining;
    QTextBrowser *mining_result;
    QWidget *page_4;
    QLabel *blockcount;
    QLabel *usercount;
    QStackedWidget *dashboard;
    QWidget *dashboard_page1;
    QTableWidget *dashboard_table1;
    QWidget *dashboard_page2;
    QTableWidget *dashboard_table2;
    QWidget *dashboard_page3;
    QTableWidget *dashboard_table3;
    QWidget *dashboard_page4;
    QTableWidget *dashboard_table4;
    QWidget *dashboard_page5;
    QTableWidget *dashboard_table5;
    QWidget *dashboard_page6;
    QTableWidget *dashboard_table6;
    QWidget *dashboard_page7;
    QTableWidget *dashboard_table7;
    QWidget *dashboard_page8;
    QTableWidget *dashboard_table8;
    QWidget *dashboard_page9;
    QTableWidget *dashboard_table9;
    QWidget *dashboard_page10;
    QTableWidget *dashboard_table10;
    QPushButton *RightButtonDashboard;
    QPushButton *LeftButtonDashboard;
    QPushButton *resetdashboard;
    QLabel *label;
    QLabel *blockcount_2;
    QLabel *usercount_2;
    QWidget *page_5;
    QTableWidget *txlist;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
        GUIClass->resize(1588, 896);
        centralWidget = new QWidget(GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 0, 1521, 841));
        widget->setStyleSheet(QString::fromUtf8("border-radius: 50px;\n"
"background : rgb(36,42,50)"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 30, 241, 761));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background : rgb(64,75,87)"));
        WalletButton = new QPushButton(widget_2);
        WalletButton->setObjectName(QString::fromUtf8("WalletButton"));
        WalletButton->setGeometry(QRect(10, 290, 231, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font.setPointSize(14);
        WalletButton->setFont(font);
        WalletButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Wallet-pre/image/Walletpre.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Wallet/image/Wallet.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        TransactionButton = new QPushButton(widget_2);
        TransactionButton->setObjectName(QString::fromUtf8("TransactionButton"));
        TransactionButton->setGeometry(QRect(10, 380, 231, 81));
        TransactionButton->setFont(font);
        TransactionButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Transaction-pre/image/Transactionpre.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Transaction/image/Transaction.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        MiningButton = new QPushButton(widget_2);
        MiningButton->setObjectName(QString::fromUtf8("MiningButton"));
        MiningButton->setGeometry(QRect(10, 470, 231, 81));
        MiningButton->setFont(font);
        MiningButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-image:url(:/Mining-pre/image/Miningpre.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Mining/image/Mining.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        DashBoardButton = new QPushButton(widget_2);
        DashBoardButton->setObjectName(QString::fromUtf8("DashBoardButton"));
        DashBoardButton->setGeometry(QRect(10, 560, 231, 81));
        DashBoardButton->setFont(font);
        DashBoardButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-image:url(:/DashBoard-pre/image/DashBoardpre.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/DashBoard/image/DashBoardComplete.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        WalletName = new QLabel(widget_2);
        WalletName->setObjectName(QString::fromUtf8("WalletName"));
        WalletName->setGeometry(QRect(0, 160, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font1.setPointSize(20);
        WalletName->setFont(font1);
        WalletName->setStyleSheet(QString::fromUtf8("color : white"));
        WalletName->setAlignment(Qt::AlignCenter);
        cat = new QLabel(widget_2);
        cat->setObjectName(QString::fromUtf8("cat"));
        cat->setGeometry(QRect(10, 40, 221, 111));
        cat->setStyleSheet(QString::fromUtf8("border-image:url(:/cat/image/cat.png);\n"
""));
        closeButton = new QPushButton(widget_2);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(70, 680, 91, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font2.setPointSize(12);
        closeButton->setFont(font2);
        closeButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"background : rgb(55,65,87);\n"
"color :white;\n"
"border-radius: 50px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background : rgb(71,83,99);\n"
"color :white;\n"
"border-radius: 50px;\n"
"\n"
"\n"
"	\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(300, 30, 1201, 751));
        loading_page = new QWidget();
        loading_page->setObjectName(QString::fromUtf8("loading_page"));
        loading_label = new QLabel(loading_page);
        loading_label->setObjectName(QString::fromUtf8("loading_label"));
        loading_label->setGeometry(QRect(170, 550, 581, 161));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font3.setPointSize(37);
        loading_label->setFont(font3);
        loading_label->setStyleSheet(QString::fromUtf8("color : white;"));
        loading_label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(loading_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 861, 441));
        stackedWidget->addWidget(loading_page);
        start_page = new QWidget();
        start_page->setObjectName(QString::fromUtf8("start_page"));
        WalletNameInput = new QTextEdit(start_page);
        WalletNameInput->setObjectName(QString::fromUtf8("WalletNameInput"));
        WalletNameInput->setGeometry(QRect(280, 330, 391, 61));
        WalletNameInput->setFont(font1);
        WalletNameInput->setStyleSheet(QString::fromUtf8("color : white;\n"
"border-bottom : 1px solid rgb(255,255,10);"));
        CreateWalletButton = new QPushButton(start_page);
        CreateWalletButton->setObjectName(QString::fromUtf8("CreateWalletButton"));
        CreateWalletButton->setGeometry(QRect(380, 420, 181, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font4.setPointSize(15);
        CreateWalletButton->setFont(font4);
        CreateWalletButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"background : rgb(55,65,87);\n"
"color :white;\n"
"border-radius: 20px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background : rgb(71,83,99);\n"
"color :white;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"	\n"
"}\n"
""));
        stackedWidget->addWidget(start_page);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        address_info = new QTextBrowser(page_1);
        address_info->setObjectName(QString::fromUtf8("address_info"));
        address_info->setGeometry(QRect(330, 130, 611, 41));
        address_info->setFont(font2);
        address_info->setStyleSheet(QString::fromUtf8("color : white;\n"
"\n"
"border-bottom : 1px solid rgb(255,255,10);"));
        tol = new QLabel(page_1);
        tol->setObjectName(QString::fromUtf8("tol"));
        tol->setGeometry(QRect(710, 30, 101, 81));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font5.setPointSize(25);
        tol->setFont(font5);
        tol->setStyleSheet(QString::fromUtf8("color : white;"));
        WalletRefresh = new QPushButton(page_1);
        WalletRefresh->setObjectName(QString::fromUtf8("WalletRefresh"));
        WalletRefresh->setGeometry(QRect(830, 50, 41, 41));
        WalletRefresh->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Refresh/image/Refreshpre.png)\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Refresh/image/Refresh.png)\n"
"}"));
        getbalance_info = new QLabel(page_1);
        getbalance_info->setObjectName(QString::fromUtf8("getbalance_info"));
        getbalance_info->setGeometry(QRect(330, 30, 351, 81));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font6.setPointSize(28);
        getbalance_info->setFont(font6);
        getbalance_info->setStyleSheet(QString::fromUtf8("color : rgb(255,255,10);"));
        getbalance_info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        transactionBoard = new QStackedWidget(page_1);
        transactionBoard->setObjectName(QString::fromUtf8("transactionBoard"));
        transactionBoard->setGeometry(QRect(0, 220, 1211, 491));
        transaction_page1 = new QWidget();
        transaction_page1->setObjectName(QString::fromUtf8("transaction_page1"));
        tableWidget_1 = new QTableWidget(transaction_page1);
        if (tableWidget_1->columnCount() < 5)
            tableWidget_1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_1->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_1->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_1->rowCount() < 10)
            tableWidget_1->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_1->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget_1->setObjectName(QString::fromUtf8("tableWidget_1"));
        tableWidget_1->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_1->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_1->setDragEnabled(true);
        tableWidget_1->setDragDropOverwriteMode(false);
        transactionBoard->addWidget(transaction_page1);
        transaction_page2 = new QWidget();
        transaction_page2->setObjectName(QString::fromUtf8("transaction_page2"));
        tableWidget_2 = new QTableWidget(transaction_page2);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        if (tableWidget_2->rowCount() < 10)
            tableWidget_2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem29);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_2->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        transactionBoard->addWidget(transaction_page2);
        transaction_page3 = new QWidget();
        transaction_page3->setObjectName(QString::fromUtf8("transaction_page3"));
        tableWidget_3 = new QTableWidget(transaction_page3);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem34);
        if (tableWidget_3->rowCount() < 10)
            tableWidget_3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(9, __qtablewidgetitem44);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_3->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_3->setDragDropOverwriteMode(false);
        transactionBoard->addWidget(transaction_page3);
        transaction_page4 = new QWidget();
        transaction_page4->setObjectName(QString::fromUtf8("transaction_page4"));
        tableWidget_4 = new QTableWidget(transaction_page4);
        if (tableWidget_4->columnCount() < 5)
            tableWidget_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem49);
        if (tableWidget_4->rowCount() < 10)
            tableWidget_4->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(4, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(5, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(6, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(7, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(8, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(9, __qtablewidgetitem59);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_4->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_4->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page4);
        transaction_page5 = new QWidget();
        transaction_page5->setObjectName(QString::fromUtf8("transaction_page5"));
        tableWidget_5 = new QTableWidget(transaction_page5);
        if (tableWidget_5->columnCount() < 5)
            tableWidget_5->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem64);
        if (tableWidget_5->rowCount() < 10)
            tableWidget_5->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(3, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(4, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(5, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(6, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(7, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(8, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(9, __qtablewidgetitem74);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_5->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_5->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page5);
        transaction_page6 = new QWidget();
        transaction_page6->setObjectName(QString::fromUtf8("transaction_page6"));
        tableWidget_6 = new QTableWidget(transaction_page6);
        if (tableWidget_6->columnCount() < 5)
            tableWidget_6->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(3, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(4, __qtablewidgetitem79);
        if (tableWidget_6->rowCount() < 10)
            tableWidget_6->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(2, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(3, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(4, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(5, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(6, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(7, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(8, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget_6->setVerticalHeaderItem(9, __qtablewidgetitem89);
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_6->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_6->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page6);
        transaction_page7 = new QWidget();
        transaction_page7->setObjectName(QString::fromUtf8("transaction_page7"));
        tableWidget_7 = new QTableWidget(transaction_page7);
        if (tableWidget_7->columnCount() < 5)
            tableWidget_7->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem94);
        if (tableWidget_7->rowCount() < 10)
            tableWidget_7->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(0, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(1, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(2, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(3, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(4, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(5, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(6, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(7, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(8, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableWidget_7->setVerticalHeaderItem(9, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableWidget_7->setItem(0, 0, __qtablewidgetitem105);
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_7->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
""
                        "background:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_7->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page7);
        transaction_page8 = new QWidget();
        transaction_page8->setObjectName(QString::fromUtf8("transaction_page8"));
        tableWidget_8 = new QTableWidget(transaction_page8);
        if (tableWidget_8->columnCount() < 5)
            tableWidget_8->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(0, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(1, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(2, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(3, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(4, __qtablewidgetitem110);
        if (tableWidget_8->rowCount() < 10)
            tableWidget_8->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(0, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(1, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(2, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(3, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(4, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(5, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(6, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(7, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(8, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        tableWidget_8->setVerticalHeaderItem(9, __qtablewidgetitem120);
        tableWidget_8->setObjectName(QString::fromUtf8("tableWidget_8"));
        tableWidget_8->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_8->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_8->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page8);
        transaction_page9 = new QWidget();
        transaction_page9->setObjectName(QString::fromUtf8("transaction_page9"));
        tableWidget_9 = new QTableWidget(transaction_page9);
        if (tableWidget_9->columnCount() < 5)
            tableWidget_9->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(0, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(1, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(2, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(3, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(4, __qtablewidgetitem125);
        if (tableWidget_9->rowCount() < 10)
            tableWidget_9->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(0, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(1, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(2, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(3, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(4, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(5, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(6, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(7, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(8, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        tableWidget_9->setVerticalHeaderItem(9, __qtablewidgetitem135);
        tableWidget_9->setObjectName(QString::fromUtf8("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_9->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_9->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page9);
        transaction_page10 = new QWidget();
        transaction_page10->setObjectName(QString::fromUtf8("transaction_page10"));
        tableWidget_10 = new QTableWidget(transaction_page10);
        if (tableWidget_10->columnCount() < 5)
            tableWidget_10->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        tableWidget_10->setHorizontalHeaderItem(0, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        tableWidget_10->setHorizontalHeaderItem(1, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        tableWidget_10->setHorizontalHeaderItem(2, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        tableWidget_10->setHorizontalHeaderItem(3, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        tableWidget_10->setHorizontalHeaderItem(4, __qtablewidgetitem140);
        if (tableWidget_10->rowCount() < 10)
            tableWidget_10->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(0, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(1, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(2, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(3, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(4, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(5, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(6, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(7, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(8, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        tableWidget_10->setVerticalHeaderItem(9, __qtablewidgetitem150);
        tableWidget_10->setObjectName(QString::fromUtf8("tableWidget_10"));
        tableWidget_10->setGeometry(QRect(0, 10, 1191, 471));
        tableWidget_10->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        tableWidget_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_10->setDragDropOverwriteMode(true);
        transactionBoard->addWidget(transaction_page10);
        LeftButtonTransaction = new QPushButton(page_1);
        LeftButtonTransaction->setObjectName(QString::fromUtf8("LeftButtonTransaction"));
        LeftButtonTransaction->setGeometry(QRect(520, 720, 31, 31));
        LeftButtonTransaction->setStyleSheet(QString::fromUtf8("border-image:url(:/LeftButton/image/left.png)\n"
""));
        RightButtonTransaction = new QPushButton(page_1);
        RightButtonTransaction->setObjectName(QString::fromUtf8("RightButtonTransaction"));
        RightButtonTransaction->setGeometry(QRect(620, 720, 31, 31));
        RightButtonTransaction->setStyleSheet(QString::fromUtf8("border-image:url(:/RightButton/image/right.png)\n"
""));
        resettx = new QPushButton(page_1);
        resettx->setObjectName(QString::fromUtf8("resettx"));
        resettx->setGeometry(QRect(170, 170, 41, 41));
        resettx->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Refresh/image/Refreshpre.png)\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Refresh/image/Refresh.png)\n"
"}"));
        miningresult_label_2 = new QLabel(page_1);
        miningresult_label_2->setObjectName(QString::fromUtf8("miningresult_label_2"));
        miningresult_label_2->setGeometry(QRect(10, 170, 141, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font7.setPointSize(22);
        miningresult_label_2->setFont(font7);
        miningresult_label_2->setStyleSheet(QString::fromUtf8("color : white;\n"
"border-radius: 0px;"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        addr = new QTextEdit(page_2);
        addr->setObjectName(QString::fromUtf8("addr"));
        addr->setGeometry(QRect(200, 230, 811, 61));
        addr->setFont(font1);
        addr->setStyleSheet(QString::fromUtf8("color : white;\n"
"\n"
"border-bottom : 1px solid rgb(255,255,10);;"));
        TOL_label = new QLabel(page_2);
        TOL_label->setObjectName(QString::fromUtf8("TOL_label"));
        TOL_label->setGeometry(QRect(830, 350, 81, 71));
        TOL_label->setFont(font7);
        TOL_label->setStyleSheet(QString::fromUtf8("color : white;"));
        SendButton = new QPushButton(page_2);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        SendButton->setGeometry(QRect(440, 480, 251, 61));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font8.setPointSize(18);
        SendButton->setFont(font8);
        SendButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background : rgb(36,42,50);\n"
"border: 1px solid  rgb(255,255,10);\n"
"color : white;\n"
"border-radius: 30px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background : rgb(71,83,99);\n"
"border: 1px solid  rgb(255,255,10);\n"
"color : white;\n"
"border-radius: 30px;\n"
"\n"
"\n"
"\n"
"	\n"
"}\n"
""));
        addrstatus = new QLabel(page_2);
        addrstatus->setObjectName(QString::fromUtf8("addrstatus"));
        addrstatus->setGeometry(QRect(200, 300, 401, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font9.setPointSize(16);
        addrstatus->setFont(font9);
        addrstatus->setStyleSheet(QString::fromUtf8("color : red;"));
        amountstatus = new QLabel(page_2);
        amountstatus->setObjectName(QString::fromUtf8("amountstatus"));
        amountstatus->setGeometry(QRect(200, 430, 401, 31));
        amountstatus->setFont(font9);
        amountstatus->setStyleSheet(QString::fromUtf8("color : red;"));
        amount = new QLineEdit(page_2);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(200, 360, 571, 61));
        amount->setFont(font1);
        amount->setStyleSheet(QString::fromUtf8("color : white;\n"
"\n"
"border-bottom : 1px solid rgb(255,255,10);;\n"
""));
        send_result = new QTextBrowser(page_2);
        send_result->setObjectName(QString::fromUtf8("send_result"));
        send_result->setGeometry(QRect(200, 150, 571, 61));
        send_result->setFont(font1);
        send_result->setStyleSheet(QString::fromUtf8("color : red;"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        miningresult_label = new QLabel(page_3);
        miningresult_label->setObjectName(QString::fromUtf8("miningresult_label"));
        miningresult_label->setGeometry(QRect(10, 170, 151, 51));
        miningresult_label->setFont(font7);
        miningresult_label->setStyleSheet(QString::fromUtf8("color : white;\n"
"border-radius: 0px;"));
        miningresult_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mining_label = new QLabel(page_3);
        mining_label->setObjectName(QString::fromUtf8("mining_label"));
        mining_label->setGeometry(QRect(10, 20, 81, 51));
        mining_label->setFont(font7);
        mining_label->setStyleSheet(QString::fromUtf8("color : white;"));
        GetMining = new QPushButton(page_3);
        GetMining->setObjectName(QString::fromUtf8("GetMining"));
        GetMining->setGeometry(QRect(10, 90, 141, 51));
        GetMining->setFont(font8);
        GetMining->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background : rgb(36,42,50);\n"
"border: 1px solid  rgb(255,255,10);\n"
"color : white;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background : rgb(71,83,99);\n"
"border: 1px solid  rgb(255,255,10);\n"
"color : white;\n"
"border-radius: 20px;\n"
"\n"
"\n"
"\n"
"	\n"
"}\n"
""));
        miningBoard = new QStackedWidget(page_3);
        miningBoard->setObjectName(QString::fromUtf8("miningBoard"));
        miningBoard->setGeometry(QRect(0, 220, 1211, 491));
        mining_page1 = new QWidget();
        mining_page1->setObjectName(QString::fromUtf8("mining_page1"));
        mining_table1 = new QTableWidget(mining_page1);
        if (mining_table1->columnCount() < 3)
            mining_table1->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        mining_table1->setHorizontalHeaderItem(0, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        mining_table1->setHorizontalHeaderItem(1, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        mining_table1->setHorizontalHeaderItem(2, __qtablewidgetitem153);
        if (mining_table1->rowCount() < 10)
            mining_table1->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(0, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(1, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(2, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(3, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(4, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(5, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(6, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(7, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(8, __qtablewidgetitem162);
        QTableWidgetItem *__qtablewidgetitem163 = new QTableWidgetItem();
        mining_table1->setVerticalHeaderItem(9, __qtablewidgetitem163);
        mining_table1->setObjectName(QString::fromUtf8("mining_table1"));
        mining_table1->setGeometry(QRect(0, 10, 1191, 471));
        mining_table1->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page1);
        mining_page2 = new QWidget();
        mining_page2->setObjectName(QString::fromUtf8("mining_page2"));
        mining_table2 = new QTableWidget(mining_page2);
        if (mining_table2->columnCount() < 3)
            mining_table2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem164 = new QTableWidgetItem();
        mining_table2->setHorizontalHeaderItem(0, __qtablewidgetitem164);
        QTableWidgetItem *__qtablewidgetitem165 = new QTableWidgetItem();
        mining_table2->setHorizontalHeaderItem(1, __qtablewidgetitem165);
        QTableWidgetItem *__qtablewidgetitem166 = new QTableWidgetItem();
        mining_table2->setHorizontalHeaderItem(2, __qtablewidgetitem166);
        if (mining_table2->rowCount() < 10)
            mining_table2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem167 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(0, __qtablewidgetitem167);
        QTableWidgetItem *__qtablewidgetitem168 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(1, __qtablewidgetitem168);
        QTableWidgetItem *__qtablewidgetitem169 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(2, __qtablewidgetitem169);
        QTableWidgetItem *__qtablewidgetitem170 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(3, __qtablewidgetitem170);
        QTableWidgetItem *__qtablewidgetitem171 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(4, __qtablewidgetitem171);
        QTableWidgetItem *__qtablewidgetitem172 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(5, __qtablewidgetitem172);
        QTableWidgetItem *__qtablewidgetitem173 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(6, __qtablewidgetitem173);
        QTableWidgetItem *__qtablewidgetitem174 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(7, __qtablewidgetitem174);
        QTableWidgetItem *__qtablewidgetitem175 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(8, __qtablewidgetitem175);
        QTableWidgetItem *__qtablewidgetitem176 = new QTableWidgetItem();
        mining_table2->setVerticalHeaderItem(9, __qtablewidgetitem176);
        mining_table2->setObjectName(QString::fromUtf8("mining_table2"));
        mining_table2->setGeometry(QRect(0, 10, 1191, 471));
        mining_table2->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page2);
        mining_page3 = new QWidget();
        mining_page3->setObjectName(QString::fromUtf8("mining_page3"));
        mining_table3 = new QTableWidget(mining_page3);
        if (mining_table3->columnCount() < 3)
            mining_table3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem177 = new QTableWidgetItem();
        mining_table3->setHorizontalHeaderItem(0, __qtablewidgetitem177);
        QTableWidgetItem *__qtablewidgetitem178 = new QTableWidgetItem();
        mining_table3->setHorizontalHeaderItem(1, __qtablewidgetitem178);
        QTableWidgetItem *__qtablewidgetitem179 = new QTableWidgetItem();
        mining_table3->setHorizontalHeaderItem(2, __qtablewidgetitem179);
        if (mining_table3->rowCount() < 10)
            mining_table3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem180 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(0, __qtablewidgetitem180);
        QTableWidgetItem *__qtablewidgetitem181 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(1, __qtablewidgetitem181);
        QTableWidgetItem *__qtablewidgetitem182 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(2, __qtablewidgetitem182);
        QTableWidgetItem *__qtablewidgetitem183 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(3, __qtablewidgetitem183);
        QTableWidgetItem *__qtablewidgetitem184 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(4, __qtablewidgetitem184);
        QTableWidgetItem *__qtablewidgetitem185 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(5, __qtablewidgetitem185);
        QTableWidgetItem *__qtablewidgetitem186 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(6, __qtablewidgetitem186);
        QTableWidgetItem *__qtablewidgetitem187 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(7, __qtablewidgetitem187);
        QTableWidgetItem *__qtablewidgetitem188 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(8, __qtablewidgetitem188);
        QTableWidgetItem *__qtablewidgetitem189 = new QTableWidgetItem();
        mining_table3->setVerticalHeaderItem(9, __qtablewidgetitem189);
        mining_table3->setObjectName(QString::fromUtf8("mining_table3"));
        mining_table3->setGeometry(QRect(0, 10, 1191, 471));
        mining_table3->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page3);
        mining_page4 = new QWidget();
        mining_page4->setObjectName(QString::fromUtf8("mining_page4"));
        mining_table4 = new QTableWidget(mining_page4);
        if (mining_table4->columnCount() < 3)
            mining_table4->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem190 = new QTableWidgetItem();
        mining_table4->setHorizontalHeaderItem(0, __qtablewidgetitem190);
        QTableWidgetItem *__qtablewidgetitem191 = new QTableWidgetItem();
        mining_table4->setHorizontalHeaderItem(1, __qtablewidgetitem191);
        QTableWidgetItem *__qtablewidgetitem192 = new QTableWidgetItem();
        mining_table4->setHorizontalHeaderItem(2, __qtablewidgetitem192);
        if (mining_table4->rowCount() < 10)
            mining_table4->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem193 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(0, __qtablewidgetitem193);
        QTableWidgetItem *__qtablewidgetitem194 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(1, __qtablewidgetitem194);
        QTableWidgetItem *__qtablewidgetitem195 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(2, __qtablewidgetitem195);
        QTableWidgetItem *__qtablewidgetitem196 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(3, __qtablewidgetitem196);
        QTableWidgetItem *__qtablewidgetitem197 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(4, __qtablewidgetitem197);
        QTableWidgetItem *__qtablewidgetitem198 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(5, __qtablewidgetitem198);
        QTableWidgetItem *__qtablewidgetitem199 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(6, __qtablewidgetitem199);
        QTableWidgetItem *__qtablewidgetitem200 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(7, __qtablewidgetitem200);
        QTableWidgetItem *__qtablewidgetitem201 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(8, __qtablewidgetitem201);
        QTableWidgetItem *__qtablewidgetitem202 = new QTableWidgetItem();
        mining_table4->setVerticalHeaderItem(9, __qtablewidgetitem202);
        mining_table4->setObjectName(QString::fromUtf8("mining_table4"));
        mining_table4->setGeometry(QRect(0, 10, 1191, 471));
        mining_table4->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page4);
        mining_page5 = new QWidget();
        mining_page5->setObjectName(QString::fromUtf8("mining_page5"));
        mining_table5 = new QTableWidget(mining_page5);
        if (mining_table5->columnCount() < 3)
            mining_table5->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem203 = new QTableWidgetItem();
        mining_table5->setHorizontalHeaderItem(0, __qtablewidgetitem203);
        QTableWidgetItem *__qtablewidgetitem204 = new QTableWidgetItem();
        mining_table5->setHorizontalHeaderItem(1, __qtablewidgetitem204);
        QTableWidgetItem *__qtablewidgetitem205 = new QTableWidgetItem();
        mining_table5->setHorizontalHeaderItem(2, __qtablewidgetitem205);
        if (mining_table5->rowCount() < 10)
            mining_table5->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem206 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(0, __qtablewidgetitem206);
        QTableWidgetItem *__qtablewidgetitem207 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(1, __qtablewidgetitem207);
        QTableWidgetItem *__qtablewidgetitem208 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(2, __qtablewidgetitem208);
        QTableWidgetItem *__qtablewidgetitem209 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(3, __qtablewidgetitem209);
        QTableWidgetItem *__qtablewidgetitem210 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(4, __qtablewidgetitem210);
        QTableWidgetItem *__qtablewidgetitem211 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(5, __qtablewidgetitem211);
        QTableWidgetItem *__qtablewidgetitem212 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(6, __qtablewidgetitem212);
        QTableWidgetItem *__qtablewidgetitem213 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(7, __qtablewidgetitem213);
        QTableWidgetItem *__qtablewidgetitem214 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(8, __qtablewidgetitem214);
        QTableWidgetItem *__qtablewidgetitem215 = new QTableWidgetItem();
        mining_table5->setVerticalHeaderItem(9, __qtablewidgetitem215);
        mining_table5->setObjectName(QString::fromUtf8("mining_table5"));
        mining_table5->setGeometry(QRect(0, 10, 1191, 471));
        mining_table5->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page5);
        mining_page6 = new QWidget();
        mining_page6->setObjectName(QString::fromUtf8("mining_page6"));
        mining_table6 = new QTableWidget(mining_page6);
        if (mining_table6->columnCount() < 3)
            mining_table6->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem216 = new QTableWidgetItem();
        mining_table6->setHorizontalHeaderItem(0, __qtablewidgetitem216);
        QTableWidgetItem *__qtablewidgetitem217 = new QTableWidgetItem();
        mining_table6->setHorizontalHeaderItem(1, __qtablewidgetitem217);
        QTableWidgetItem *__qtablewidgetitem218 = new QTableWidgetItem();
        mining_table6->setHorizontalHeaderItem(2, __qtablewidgetitem218);
        if (mining_table6->rowCount() < 10)
            mining_table6->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem219 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(0, __qtablewidgetitem219);
        QTableWidgetItem *__qtablewidgetitem220 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(1, __qtablewidgetitem220);
        QTableWidgetItem *__qtablewidgetitem221 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(2, __qtablewidgetitem221);
        QTableWidgetItem *__qtablewidgetitem222 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(3, __qtablewidgetitem222);
        QTableWidgetItem *__qtablewidgetitem223 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(4, __qtablewidgetitem223);
        QTableWidgetItem *__qtablewidgetitem224 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(5, __qtablewidgetitem224);
        QTableWidgetItem *__qtablewidgetitem225 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(6, __qtablewidgetitem225);
        QTableWidgetItem *__qtablewidgetitem226 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(7, __qtablewidgetitem226);
        QTableWidgetItem *__qtablewidgetitem227 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(8, __qtablewidgetitem227);
        QTableWidgetItem *__qtablewidgetitem228 = new QTableWidgetItem();
        mining_table6->setVerticalHeaderItem(9, __qtablewidgetitem228);
        mining_table6->setObjectName(QString::fromUtf8("mining_table6"));
        mining_table6->setGeometry(QRect(0, 10, 1191, 471));
        mining_table6->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page6);
        mining_page7 = new QWidget();
        mining_page7->setObjectName(QString::fromUtf8("mining_page7"));
        mining_table7 = new QTableWidget(mining_page7);
        if (mining_table7->columnCount() < 3)
            mining_table7->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem229 = new QTableWidgetItem();
        mining_table7->setHorizontalHeaderItem(0, __qtablewidgetitem229);
        QTableWidgetItem *__qtablewidgetitem230 = new QTableWidgetItem();
        mining_table7->setHorizontalHeaderItem(1, __qtablewidgetitem230);
        QTableWidgetItem *__qtablewidgetitem231 = new QTableWidgetItem();
        mining_table7->setHorizontalHeaderItem(2, __qtablewidgetitem231);
        if (mining_table7->rowCount() < 10)
            mining_table7->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem232 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(0, __qtablewidgetitem232);
        QTableWidgetItem *__qtablewidgetitem233 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(1, __qtablewidgetitem233);
        QTableWidgetItem *__qtablewidgetitem234 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(2, __qtablewidgetitem234);
        QTableWidgetItem *__qtablewidgetitem235 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(3, __qtablewidgetitem235);
        QTableWidgetItem *__qtablewidgetitem236 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(4, __qtablewidgetitem236);
        QTableWidgetItem *__qtablewidgetitem237 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(5, __qtablewidgetitem237);
        QTableWidgetItem *__qtablewidgetitem238 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(6, __qtablewidgetitem238);
        QTableWidgetItem *__qtablewidgetitem239 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(7, __qtablewidgetitem239);
        QTableWidgetItem *__qtablewidgetitem240 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(8, __qtablewidgetitem240);
        QTableWidgetItem *__qtablewidgetitem241 = new QTableWidgetItem();
        mining_table7->setVerticalHeaderItem(9, __qtablewidgetitem241);
        mining_table7->setObjectName(QString::fromUtf8("mining_table7"));
        mining_table7->setGeometry(QRect(0, 10, 1191, 471));
        mining_table7->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page7);
        mining_page8 = new QWidget();
        mining_page8->setObjectName(QString::fromUtf8("mining_page8"));
        mining_table8 = new QTableWidget(mining_page8);
        if (mining_table8->columnCount() < 3)
            mining_table8->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem242 = new QTableWidgetItem();
        mining_table8->setHorizontalHeaderItem(0, __qtablewidgetitem242);
        QTableWidgetItem *__qtablewidgetitem243 = new QTableWidgetItem();
        mining_table8->setHorizontalHeaderItem(1, __qtablewidgetitem243);
        QTableWidgetItem *__qtablewidgetitem244 = new QTableWidgetItem();
        mining_table8->setHorizontalHeaderItem(2, __qtablewidgetitem244);
        if (mining_table8->rowCount() < 10)
            mining_table8->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem245 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(0, __qtablewidgetitem245);
        QTableWidgetItem *__qtablewidgetitem246 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(1, __qtablewidgetitem246);
        QTableWidgetItem *__qtablewidgetitem247 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(2, __qtablewidgetitem247);
        QTableWidgetItem *__qtablewidgetitem248 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(3, __qtablewidgetitem248);
        QTableWidgetItem *__qtablewidgetitem249 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(4, __qtablewidgetitem249);
        QTableWidgetItem *__qtablewidgetitem250 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(5, __qtablewidgetitem250);
        QTableWidgetItem *__qtablewidgetitem251 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(6, __qtablewidgetitem251);
        QTableWidgetItem *__qtablewidgetitem252 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(7, __qtablewidgetitem252);
        QTableWidgetItem *__qtablewidgetitem253 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(8, __qtablewidgetitem253);
        QTableWidgetItem *__qtablewidgetitem254 = new QTableWidgetItem();
        mining_table8->setVerticalHeaderItem(9, __qtablewidgetitem254);
        mining_table8->setObjectName(QString::fromUtf8("mining_table8"));
        mining_table8->setGeometry(QRect(0, 10, 1191, 471));
        mining_table8->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page8);
        mining_page9 = new QWidget();
        mining_page9->setObjectName(QString::fromUtf8("mining_page9"));
        mining_table9 = new QTableWidget(mining_page9);
        if (mining_table9->columnCount() < 3)
            mining_table9->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem255 = new QTableWidgetItem();
        mining_table9->setHorizontalHeaderItem(0, __qtablewidgetitem255);
        QTableWidgetItem *__qtablewidgetitem256 = new QTableWidgetItem();
        mining_table9->setHorizontalHeaderItem(1, __qtablewidgetitem256);
        QTableWidgetItem *__qtablewidgetitem257 = new QTableWidgetItem();
        mining_table9->setHorizontalHeaderItem(2, __qtablewidgetitem257);
        if (mining_table9->rowCount() < 10)
            mining_table9->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem258 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(0, __qtablewidgetitem258);
        QTableWidgetItem *__qtablewidgetitem259 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(1, __qtablewidgetitem259);
        QTableWidgetItem *__qtablewidgetitem260 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(2, __qtablewidgetitem260);
        QTableWidgetItem *__qtablewidgetitem261 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(3, __qtablewidgetitem261);
        QTableWidgetItem *__qtablewidgetitem262 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(4, __qtablewidgetitem262);
        QTableWidgetItem *__qtablewidgetitem263 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(5, __qtablewidgetitem263);
        QTableWidgetItem *__qtablewidgetitem264 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(6, __qtablewidgetitem264);
        QTableWidgetItem *__qtablewidgetitem265 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(7, __qtablewidgetitem265);
        QTableWidgetItem *__qtablewidgetitem266 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(8, __qtablewidgetitem266);
        QTableWidgetItem *__qtablewidgetitem267 = new QTableWidgetItem();
        mining_table9->setVerticalHeaderItem(9, __qtablewidgetitem267);
        mining_table9->setObjectName(QString::fromUtf8("mining_table9"));
        mining_table9->setGeometry(QRect(0, 10, 1191, 471));
        mining_table9->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page9);
        mining_page10 = new QWidget();
        mining_page10->setObjectName(QString::fromUtf8("mining_page10"));
        mining_table10 = new QTableWidget(mining_page10);
        if (mining_table10->columnCount() < 3)
            mining_table10->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem268 = new QTableWidgetItem();
        mining_table10->setHorizontalHeaderItem(0, __qtablewidgetitem268);
        QTableWidgetItem *__qtablewidgetitem269 = new QTableWidgetItem();
        mining_table10->setHorizontalHeaderItem(1, __qtablewidgetitem269);
        QTableWidgetItem *__qtablewidgetitem270 = new QTableWidgetItem();
        mining_table10->setHorizontalHeaderItem(2, __qtablewidgetitem270);
        if (mining_table10->rowCount() < 10)
            mining_table10->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem271 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(0, __qtablewidgetitem271);
        QTableWidgetItem *__qtablewidgetitem272 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(1, __qtablewidgetitem272);
        QTableWidgetItem *__qtablewidgetitem273 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(2, __qtablewidgetitem273);
        QTableWidgetItem *__qtablewidgetitem274 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(3, __qtablewidgetitem274);
        QTableWidgetItem *__qtablewidgetitem275 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(4, __qtablewidgetitem275);
        QTableWidgetItem *__qtablewidgetitem276 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(5, __qtablewidgetitem276);
        QTableWidgetItem *__qtablewidgetitem277 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(6, __qtablewidgetitem277);
        QTableWidgetItem *__qtablewidgetitem278 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(7, __qtablewidgetitem278);
        QTableWidgetItem *__qtablewidgetitem279 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(8, __qtablewidgetitem279);
        QTableWidgetItem *__qtablewidgetitem280 = new QTableWidgetItem();
        mining_table10->setVerticalHeaderItem(9, __qtablewidgetitem280);
        mining_table10->setObjectName(QString::fromUtf8("mining_table10"));
        mining_table10->setGeometry(QRect(0, 10, 1191, 471));
        mining_table10->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        miningBoard->addWidget(mining_page10);
        RightButtonMining = new QPushButton(page_3);
        RightButtonMining->setObjectName(QString::fromUtf8("RightButtonMining"));
        RightButtonMining->setGeometry(QRect(590, 720, 31, 31));
        RightButtonMining->setStyleSheet(QString::fromUtf8("border-image:url(:/RightButton/image/right.png)\n"
""));
        LeftButtonMining = new QPushButton(page_3);
        LeftButtonMining->setObjectName(QString::fromUtf8("LeftButtonMining"));
        LeftButtonMining->setGeometry(QRect(490, 720, 31, 31));
        LeftButtonMining->setStyleSheet(QString::fromUtf8("border-image:url(:/LeftButton/image/left.png)\n"
""));
        resetmining = new QPushButton(page_3);
        resetmining->setObjectName(QString::fromUtf8("resetmining"));
        resetmining->setGeometry(QRect(180, 170, 41, 41));
        resetmining->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Refresh/image/Refreshpre.png)\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Refresh/image/Refresh.png)\n"
"}"));
        mining_result = new QTextBrowser(page_3);
        mining_result->setObjectName(QString::fromUtf8("mining_result"));
        mining_result->setGeometry(QRect(270, 20, 921, 151));
        mining_result->setFont(font9);
        mining_result->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background : rgb(36,42,50);\n"
"color : white;"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        blockcount = new QLabel(page_4);
        blockcount->setObjectName(QString::fromUtf8("blockcount"));
        blockcount->setGeometry(QRect(230, 90, 141, 51));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font10.setPointSize(26);
        blockcount->setFont(font10);
        blockcount->setStyleSheet(QString::fromUtf8("color : white;"));
        usercount = new QLabel(page_4);
        usercount->setObjectName(QString::fromUtf8("usercount"));
        usercount->setGeometry(QRect(230, 30, 141, 51));
        usercount->setFont(font10);
        usercount->setStyleSheet(QString::fromUtf8("color : white;"));
        dashboard = new QStackedWidget(page_4);
        dashboard->setObjectName(QString::fromUtf8("dashboard"));
        dashboard->setGeometry(QRect(0, 220, 1131, 491));
        dashboard_page1 = new QWidget();
        dashboard_page1->setObjectName(QString::fromUtf8("dashboard_page1"));
        dashboard_table1 = new QTableWidget(dashboard_page1);
        if (dashboard_table1->columnCount() < 2)
            dashboard_table1->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem281 = new QTableWidgetItem();
        dashboard_table1->setHorizontalHeaderItem(0, __qtablewidgetitem281);
        QTableWidgetItem *__qtablewidgetitem282 = new QTableWidgetItem();
        dashboard_table1->setHorizontalHeaderItem(1, __qtablewidgetitem282);
        if (dashboard_table1->rowCount() < 10)
            dashboard_table1->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem283 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(0, __qtablewidgetitem283);
        QTableWidgetItem *__qtablewidgetitem284 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(1, __qtablewidgetitem284);
        QTableWidgetItem *__qtablewidgetitem285 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(2, __qtablewidgetitem285);
        QTableWidgetItem *__qtablewidgetitem286 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(3, __qtablewidgetitem286);
        QTableWidgetItem *__qtablewidgetitem287 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(4, __qtablewidgetitem287);
        QTableWidgetItem *__qtablewidgetitem288 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(5, __qtablewidgetitem288);
        QTableWidgetItem *__qtablewidgetitem289 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(6, __qtablewidgetitem289);
        QTableWidgetItem *__qtablewidgetitem290 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(7, __qtablewidgetitem290);
        QTableWidgetItem *__qtablewidgetitem291 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(8, __qtablewidgetitem291);
        QTableWidgetItem *__qtablewidgetitem292 = new QTableWidgetItem();
        dashboard_table1->setVerticalHeaderItem(9, __qtablewidgetitem292);
        dashboard_table1->setObjectName(QString::fromUtf8("dashboard_table1"));
        dashboard_table1->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table1->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"b"
                        "ackground:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page1);
        dashboard_page2 = new QWidget();
        dashboard_page2->setObjectName(QString::fromUtf8("dashboard_page2"));
        dashboard_table2 = new QTableWidget(dashboard_page2);
        if (dashboard_table2->columnCount() < 2)
            dashboard_table2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem293 = new QTableWidgetItem();
        dashboard_table2->setHorizontalHeaderItem(0, __qtablewidgetitem293);
        QTableWidgetItem *__qtablewidgetitem294 = new QTableWidgetItem();
        dashboard_table2->setHorizontalHeaderItem(1, __qtablewidgetitem294);
        if (dashboard_table2->rowCount() < 10)
            dashboard_table2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem295 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(0, __qtablewidgetitem295);
        QTableWidgetItem *__qtablewidgetitem296 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(1, __qtablewidgetitem296);
        QTableWidgetItem *__qtablewidgetitem297 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(2, __qtablewidgetitem297);
        QTableWidgetItem *__qtablewidgetitem298 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(3, __qtablewidgetitem298);
        QTableWidgetItem *__qtablewidgetitem299 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(4, __qtablewidgetitem299);
        QTableWidgetItem *__qtablewidgetitem300 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(5, __qtablewidgetitem300);
        QTableWidgetItem *__qtablewidgetitem301 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(6, __qtablewidgetitem301);
        QTableWidgetItem *__qtablewidgetitem302 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(7, __qtablewidgetitem302);
        QTableWidgetItem *__qtablewidgetitem303 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(8, __qtablewidgetitem303);
        QTableWidgetItem *__qtablewidgetitem304 = new QTableWidgetItem();
        dashboard_table2->setVerticalHeaderItem(9, __qtablewidgetitem304);
        dashboard_table2->setObjectName(QString::fromUtf8("dashboard_table2"));
        dashboard_table2->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table2->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page2);
        dashboard_page3 = new QWidget();
        dashboard_page3->setObjectName(QString::fromUtf8("dashboard_page3"));
        dashboard_table3 = new QTableWidget(dashboard_page3);
        if (dashboard_table3->columnCount() < 2)
            dashboard_table3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem305 = new QTableWidgetItem();
        dashboard_table3->setHorizontalHeaderItem(0, __qtablewidgetitem305);
        QTableWidgetItem *__qtablewidgetitem306 = new QTableWidgetItem();
        dashboard_table3->setHorizontalHeaderItem(1, __qtablewidgetitem306);
        if (dashboard_table3->rowCount() < 10)
            dashboard_table3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem307 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(0, __qtablewidgetitem307);
        QTableWidgetItem *__qtablewidgetitem308 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(1, __qtablewidgetitem308);
        QTableWidgetItem *__qtablewidgetitem309 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(2, __qtablewidgetitem309);
        QTableWidgetItem *__qtablewidgetitem310 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(3, __qtablewidgetitem310);
        QTableWidgetItem *__qtablewidgetitem311 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(4, __qtablewidgetitem311);
        QTableWidgetItem *__qtablewidgetitem312 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(5, __qtablewidgetitem312);
        QTableWidgetItem *__qtablewidgetitem313 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(6, __qtablewidgetitem313);
        QTableWidgetItem *__qtablewidgetitem314 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(7, __qtablewidgetitem314);
        QTableWidgetItem *__qtablewidgetitem315 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(8, __qtablewidgetitem315);
        QTableWidgetItem *__qtablewidgetitem316 = new QTableWidgetItem();
        dashboard_table3->setVerticalHeaderItem(9, __qtablewidgetitem316);
        dashboard_table3->setObjectName(QString::fromUtf8("dashboard_table3"));
        dashboard_table3->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table3->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page3);
        dashboard_page4 = new QWidget();
        dashboard_page4->setObjectName(QString::fromUtf8("dashboard_page4"));
        dashboard_table4 = new QTableWidget(dashboard_page4);
        if (dashboard_table4->columnCount() < 2)
            dashboard_table4->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem317 = new QTableWidgetItem();
        dashboard_table4->setHorizontalHeaderItem(0, __qtablewidgetitem317);
        QTableWidgetItem *__qtablewidgetitem318 = new QTableWidgetItem();
        dashboard_table4->setHorizontalHeaderItem(1, __qtablewidgetitem318);
        if (dashboard_table4->rowCount() < 10)
            dashboard_table4->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem319 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(0, __qtablewidgetitem319);
        QTableWidgetItem *__qtablewidgetitem320 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(1, __qtablewidgetitem320);
        QTableWidgetItem *__qtablewidgetitem321 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(2, __qtablewidgetitem321);
        QTableWidgetItem *__qtablewidgetitem322 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(3, __qtablewidgetitem322);
        QTableWidgetItem *__qtablewidgetitem323 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(4, __qtablewidgetitem323);
        QTableWidgetItem *__qtablewidgetitem324 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(5, __qtablewidgetitem324);
        QTableWidgetItem *__qtablewidgetitem325 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(6, __qtablewidgetitem325);
        QTableWidgetItem *__qtablewidgetitem326 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(7, __qtablewidgetitem326);
        QTableWidgetItem *__qtablewidgetitem327 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(8, __qtablewidgetitem327);
        QTableWidgetItem *__qtablewidgetitem328 = new QTableWidgetItem();
        dashboard_table4->setVerticalHeaderItem(9, __qtablewidgetitem328);
        dashboard_table4->setObjectName(QString::fromUtf8("dashboard_table4"));
        dashboard_table4->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table4->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page4);
        dashboard_page5 = new QWidget();
        dashboard_page5->setObjectName(QString::fromUtf8("dashboard_page5"));
        dashboard_table5 = new QTableWidget(dashboard_page5);
        if (dashboard_table5->columnCount() < 2)
            dashboard_table5->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem329 = new QTableWidgetItem();
        dashboard_table5->setHorizontalHeaderItem(0, __qtablewidgetitem329);
        QTableWidgetItem *__qtablewidgetitem330 = new QTableWidgetItem();
        dashboard_table5->setHorizontalHeaderItem(1, __qtablewidgetitem330);
        if (dashboard_table5->rowCount() < 10)
            dashboard_table5->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem331 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(0, __qtablewidgetitem331);
        QTableWidgetItem *__qtablewidgetitem332 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(1, __qtablewidgetitem332);
        QTableWidgetItem *__qtablewidgetitem333 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(2, __qtablewidgetitem333);
        QTableWidgetItem *__qtablewidgetitem334 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(3, __qtablewidgetitem334);
        QTableWidgetItem *__qtablewidgetitem335 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(4, __qtablewidgetitem335);
        QTableWidgetItem *__qtablewidgetitem336 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(5, __qtablewidgetitem336);
        QTableWidgetItem *__qtablewidgetitem337 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(6, __qtablewidgetitem337);
        QTableWidgetItem *__qtablewidgetitem338 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(7, __qtablewidgetitem338);
        QTableWidgetItem *__qtablewidgetitem339 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(8, __qtablewidgetitem339);
        QTableWidgetItem *__qtablewidgetitem340 = new QTableWidgetItem();
        dashboard_table5->setVerticalHeaderItem(9, __qtablewidgetitem340);
        dashboard_table5->setObjectName(QString::fromUtf8("dashboard_table5"));
        dashboard_table5->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table5->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page5);
        dashboard_page6 = new QWidget();
        dashboard_page6->setObjectName(QString::fromUtf8("dashboard_page6"));
        dashboard_table6 = new QTableWidget(dashboard_page6);
        if (dashboard_table6->columnCount() < 2)
            dashboard_table6->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem341 = new QTableWidgetItem();
        dashboard_table6->setHorizontalHeaderItem(0, __qtablewidgetitem341);
        QTableWidgetItem *__qtablewidgetitem342 = new QTableWidgetItem();
        dashboard_table6->setHorizontalHeaderItem(1, __qtablewidgetitem342);
        if (dashboard_table6->rowCount() < 10)
            dashboard_table6->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem343 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(0, __qtablewidgetitem343);
        QTableWidgetItem *__qtablewidgetitem344 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(1, __qtablewidgetitem344);
        QTableWidgetItem *__qtablewidgetitem345 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(2, __qtablewidgetitem345);
        QTableWidgetItem *__qtablewidgetitem346 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(3, __qtablewidgetitem346);
        QTableWidgetItem *__qtablewidgetitem347 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(4, __qtablewidgetitem347);
        QTableWidgetItem *__qtablewidgetitem348 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(5, __qtablewidgetitem348);
        QTableWidgetItem *__qtablewidgetitem349 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(6, __qtablewidgetitem349);
        QTableWidgetItem *__qtablewidgetitem350 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(7, __qtablewidgetitem350);
        QTableWidgetItem *__qtablewidgetitem351 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(8, __qtablewidgetitem351);
        QTableWidgetItem *__qtablewidgetitem352 = new QTableWidgetItem();
        dashboard_table6->setVerticalHeaderItem(9, __qtablewidgetitem352);
        dashboard_table6->setObjectName(QString::fromUtf8("dashboard_table6"));
        dashboard_table6->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table6->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page6);
        dashboard_page7 = new QWidget();
        dashboard_page7->setObjectName(QString::fromUtf8("dashboard_page7"));
        dashboard_table7 = new QTableWidget(dashboard_page7);
        if (dashboard_table7->columnCount() < 2)
            dashboard_table7->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem353 = new QTableWidgetItem();
        dashboard_table7->setHorizontalHeaderItem(0, __qtablewidgetitem353);
        QTableWidgetItem *__qtablewidgetitem354 = new QTableWidgetItem();
        dashboard_table7->setHorizontalHeaderItem(1, __qtablewidgetitem354);
        if (dashboard_table7->rowCount() < 10)
            dashboard_table7->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem355 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(0, __qtablewidgetitem355);
        QTableWidgetItem *__qtablewidgetitem356 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(1, __qtablewidgetitem356);
        QTableWidgetItem *__qtablewidgetitem357 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(2, __qtablewidgetitem357);
        QTableWidgetItem *__qtablewidgetitem358 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(3, __qtablewidgetitem358);
        QTableWidgetItem *__qtablewidgetitem359 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(4, __qtablewidgetitem359);
        QTableWidgetItem *__qtablewidgetitem360 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(5, __qtablewidgetitem360);
        QTableWidgetItem *__qtablewidgetitem361 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(6, __qtablewidgetitem361);
        QTableWidgetItem *__qtablewidgetitem362 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(7, __qtablewidgetitem362);
        QTableWidgetItem *__qtablewidgetitem363 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(8, __qtablewidgetitem363);
        QTableWidgetItem *__qtablewidgetitem364 = new QTableWidgetItem();
        dashboard_table7->setVerticalHeaderItem(9, __qtablewidgetitem364);
        dashboard_table7->setObjectName(QString::fromUtf8("dashboard_table7"));
        dashboard_table7->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table7->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page7);
        dashboard_page8 = new QWidget();
        dashboard_page8->setObjectName(QString::fromUtf8("dashboard_page8"));
        dashboard_table8 = new QTableWidget(dashboard_page8);
        if (dashboard_table8->columnCount() < 2)
            dashboard_table8->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem365 = new QTableWidgetItem();
        dashboard_table8->setHorizontalHeaderItem(0, __qtablewidgetitem365);
        QTableWidgetItem *__qtablewidgetitem366 = new QTableWidgetItem();
        dashboard_table8->setHorizontalHeaderItem(1, __qtablewidgetitem366);
        if (dashboard_table8->rowCount() < 10)
            dashboard_table8->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem367 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(0, __qtablewidgetitem367);
        QTableWidgetItem *__qtablewidgetitem368 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(1, __qtablewidgetitem368);
        QTableWidgetItem *__qtablewidgetitem369 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(2, __qtablewidgetitem369);
        QTableWidgetItem *__qtablewidgetitem370 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(3, __qtablewidgetitem370);
        QTableWidgetItem *__qtablewidgetitem371 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(4, __qtablewidgetitem371);
        QTableWidgetItem *__qtablewidgetitem372 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(5, __qtablewidgetitem372);
        QTableWidgetItem *__qtablewidgetitem373 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(6, __qtablewidgetitem373);
        QTableWidgetItem *__qtablewidgetitem374 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(7, __qtablewidgetitem374);
        QTableWidgetItem *__qtablewidgetitem375 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(8, __qtablewidgetitem375);
        QTableWidgetItem *__qtablewidgetitem376 = new QTableWidgetItem();
        dashboard_table8->setVerticalHeaderItem(9, __qtablewidgetitem376);
        dashboard_table8->setObjectName(QString::fromUtf8("dashboard_table8"));
        dashboard_table8->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table8->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page8);
        dashboard_page9 = new QWidget();
        dashboard_page9->setObjectName(QString::fromUtf8("dashboard_page9"));
        dashboard_table9 = new QTableWidget(dashboard_page9);
        if (dashboard_table9->columnCount() < 2)
            dashboard_table9->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem377 = new QTableWidgetItem();
        dashboard_table9->setHorizontalHeaderItem(0, __qtablewidgetitem377);
        QTableWidgetItem *__qtablewidgetitem378 = new QTableWidgetItem();
        dashboard_table9->setHorizontalHeaderItem(1, __qtablewidgetitem378);
        if (dashboard_table9->rowCount() < 10)
            dashboard_table9->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem379 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(0, __qtablewidgetitem379);
        QTableWidgetItem *__qtablewidgetitem380 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(1, __qtablewidgetitem380);
        QTableWidgetItem *__qtablewidgetitem381 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(2, __qtablewidgetitem381);
        QTableWidgetItem *__qtablewidgetitem382 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(3, __qtablewidgetitem382);
        QTableWidgetItem *__qtablewidgetitem383 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(4, __qtablewidgetitem383);
        QTableWidgetItem *__qtablewidgetitem384 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(5, __qtablewidgetitem384);
        QTableWidgetItem *__qtablewidgetitem385 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(6, __qtablewidgetitem385);
        QTableWidgetItem *__qtablewidgetitem386 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(7, __qtablewidgetitem386);
        QTableWidgetItem *__qtablewidgetitem387 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(8, __qtablewidgetitem387);
        QTableWidgetItem *__qtablewidgetitem388 = new QTableWidgetItem();
        dashboard_table9->setVerticalHeaderItem(9, __qtablewidgetitem388);
        dashboard_table9->setObjectName(QString::fromUtf8("dashboard_table9"));
        dashboard_table9->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table9->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard->addWidget(dashboard_page9);
        dashboard_page10 = new QWidget();
        dashboard_page10->setObjectName(QString::fromUtf8("dashboard_page10"));
        dashboard_table10 = new QTableWidget(dashboard_page10);
        if (dashboard_table10->columnCount() < 2)
            dashboard_table10->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem389 = new QTableWidgetItem();
        dashboard_table10->setHorizontalHeaderItem(0, __qtablewidgetitem389);
        QTableWidgetItem *__qtablewidgetitem390 = new QTableWidgetItem();
        dashboard_table10->setHorizontalHeaderItem(1, __qtablewidgetitem390);
        if (dashboard_table10->rowCount() < 10)
            dashboard_table10->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem391 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(0, __qtablewidgetitem391);
        QTableWidgetItem *__qtablewidgetitem392 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(1, __qtablewidgetitem392);
        QTableWidgetItem *__qtablewidgetitem393 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(2, __qtablewidgetitem393);
        QTableWidgetItem *__qtablewidgetitem394 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(3, __qtablewidgetitem394);
        QTableWidgetItem *__qtablewidgetitem395 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(4, __qtablewidgetitem395);
        QTableWidgetItem *__qtablewidgetitem396 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(5, __qtablewidgetitem396);
        QTableWidgetItem *__qtablewidgetitem397 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(6, __qtablewidgetitem397);
        QTableWidgetItem *__qtablewidgetitem398 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(7, __qtablewidgetitem398);
        QTableWidgetItem *__qtablewidgetitem399 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(8, __qtablewidgetitem399);
        QTableWidgetItem *__qtablewidgetitem400 = new QTableWidgetItem();
        dashboard_table10->setVerticalHeaderItem(9, __qtablewidgetitem400);
        dashboard_table10->setObjectName(QString::fromUtf8("dashboard_table10"));
        dashboard_table10->setGeometry(QRect(0, 10, 1131, 471));
        dashboard_table10->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"border:1px solid #242424;\n"
"alternate-background-color:rgb(36,42,50);\n"
"gridline-color:#242424;\n"
"border-radius: 0px;\n"
"color : white;\n"
"}\n"
" \n"
"QTableWidget::item:selected{\n"
"color:#DCDCDC;\n"
"background:rgb(36,42,50);\n"
"}\n"
" \n"
"QTableWidget::item:hover{\n"
"background:rgb(36,42,50);;\n"
"color:#DCDCDC;\n"
"\n"
"}\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#5E5E5E;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"}\n"
" \n"
"QScrollBar:vertical{\n"
"background:#484848;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
" \n"
" \n"
"QScrollBar::handle:vertical{\n"
"background:#CCCCCC;\n"
"}\n"
" \n"
"QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{\n"
"background:#A7A7A7;\n"
"}\n"
"QScrollBar::sub-page:vertical{\n"
"background:444444;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical{\n"
"backg"
                        "round:5B5B5B;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"background:none;\n"
"}"));
        dashboard_table10->setDragDropOverwriteMode(false);
        dashboard->addWidget(dashboard_page10);
        RightButtonDashboard = new QPushButton(page_4);
        RightButtonDashboard->setObjectName(QString::fromUtf8("RightButtonDashboard"));
        RightButtonDashboard->setGeometry(QRect(590, 720, 31, 31));
        RightButtonDashboard->setStyleSheet(QString::fromUtf8("border-image:url(:/RightButton/image/right.png)\n"
""));
        LeftButtonDashboard = new QPushButton(page_4);
        LeftButtonDashboard->setObjectName(QString::fromUtf8("LeftButtonDashboard"));
        LeftButtonDashboard->setGeometry(QRect(490, 720, 31, 31));
        LeftButtonDashboard->setStyleSheet(QString::fromUtf8("border-image:url(:/LeftButton/image/left.png)\n"
""));
        resetdashboard = new QPushButton(page_4);
        resetdashboard->setObjectName(QString::fromUtf8("resetdashboard"));
        resetdashboard->setGeometry(QRect(170, 170, 41, 41));
        resetdashboard->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-image:url(:/Refresh/image/Refreshpre.png)\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Refresh/image/Refresh.png)\n"
"}"));
        label = new QLabel(page_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 141, 41));
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("color : white;"));
        blockcount_2 = new QLabel(page_4);
        blockcount_2->setObjectName(QString::fromUtf8("blockcount_2"));
        blockcount_2->setGeometry(QRect(10, 90, 211, 51));
        QFont font11;
        font11.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font11.setPointSize(17);
        blockcount_2->setFont(font11);
        blockcount_2->setStyleSheet(QString::fromUtf8("color : white;"));
        usercount_2 = new QLabel(page_4);
        usercount_2->setObjectName(QString::fromUtf8("usercount_2"));
        usercount_2->setGeometry(QRect(10, 30, 211, 51));
        usercount_2->setFont(font11);
        usercount_2->setStyleSheet(QString::fromUtf8("color : white;"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        txlist = new QTableWidget(page_5);
        if (txlist->columnCount() < 1)
            txlist->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem401 = new QTableWidgetItem();
        txlist->setHorizontalHeaderItem(0, __qtablewidgetitem401);
        if (txlist->rowCount() < 99)
            txlist->setRowCount(99);
        QTableWidgetItem *__qtablewidgetitem402 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(0, __qtablewidgetitem402);
        QTableWidgetItem *__qtablewidgetitem403 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(1, __qtablewidgetitem403);
        QTableWidgetItem *__qtablewidgetitem404 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(2, __qtablewidgetitem404);
        QTableWidgetItem *__qtablewidgetitem405 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(3, __qtablewidgetitem405);
        QTableWidgetItem *__qtablewidgetitem406 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(4, __qtablewidgetitem406);
        QTableWidgetItem *__qtablewidgetitem407 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(5, __qtablewidgetitem407);
        QTableWidgetItem *__qtablewidgetitem408 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(6, __qtablewidgetitem408);
        QTableWidgetItem *__qtablewidgetitem409 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(7, __qtablewidgetitem409);
        QTableWidgetItem *__qtablewidgetitem410 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(8, __qtablewidgetitem410);
        QTableWidgetItem *__qtablewidgetitem411 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(9, __qtablewidgetitem411);
        QTableWidgetItem *__qtablewidgetitem412 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(10, __qtablewidgetitem412);
        QTableWidgetItem *__qtablewidgetitem413 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(11, __qtablewidgetitem413);
        QTableWidgetItem *__qtablewidgetitem414 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(12, __qtablewidgetitem414);
        QTableWidgetItem *__qtablewidgetitem415 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(13, __qtablewidgetitem415);
        QTableWidgetItem *__qtablewidgetitem416 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(14, __qtablewidgetitem416);
        QTableWidgetItem *__qtablewidgetitem417 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(15, __qtablewidgetitem417);
        QTableWidgetItem *__qtablewidgetitem418 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(16, __qtablewidgetitem418);
        QTableWidgetItem *__qtablewidgetitem419 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(17, __qtablewidgetitem419);
        QTableWidgetItem *__qtablewidgetitem420 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(18, __qtablewidgetitem420);
        QTableWidgetItem *__qtablewidgetitem421 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(19, __qtablewidgetitem421);
        QTableWidgetItem *__qtablewidgetitem422 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(20, __qtablewidgetitem422);
        QTableWidgetItem *__qtablewidgetitem423 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(21, __qtablewidgetitem423);
        QTableWidgetItem *__qtablewidgetitem424 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(22, __qtablewidgetitem424);
        QTableWidgetItem *__qtablewidgetitem425 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(23, __qtablewidgetitem425);
        QTableWidgetItem *__qtablewidgetitem426 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(24, __qtablewidgetitem426);
        QTableWidgetItem *__qtablewidgetitem427 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(25, __qtablewidgetitem427);
        QTableWidgetItem *__qtablewidgetitem428 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(26, __qtablewidgetitem428);
        QTableWidgetItem *__qtablewidgetitem429 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(27, __qtablewidgetitem429);
        QTableWidgetItem *__qtablewidgetitem430 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(28, __qtablewidgetitem430);
        QTableWidgetItem *__qtablewidgetitem431 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(29, __qtablewidgetitem431);
        QTableWidgetItem *__qtablewidgetitem432 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(30, __qtablewidgetitem432);
        QTableWidgetItem *__qtablewidgetitem433 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(31, __qtablewidgetitem433);
        QTableWidgetItem *__qtablewidgetitem434 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(32, __qtablewidgetitem434);
        QTableWidgetItem *__qtablewidgetitem435 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(33, __qtablewidgetitem435);
        QTableWidgetItem *__qtablewidgetitem436 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(34, __qtablewidgetitem436);
        QTableWidgetItem *__qtablewidgetitem437 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(35, __qtablewidgetitem437);
        QTableWidgetItem *__qtablewidgetitem438 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(36, __qtablewidgetitem438);
        QTableWidgetItem *__qtablewidgetitem439 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(37, __qtablewidgetitem439);
        QTableWidgetItem *__qtablewidgetitem440 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(38, __qtablewidgetitem440);
        QTableWidgetItem *__qtablewidgetitem441 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(39, __qtablewidgetitem441);
        QTableWidgetItem *__qtablewidgetitem442 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(40, __qtablewidgetitem442);
        QTableWidgetItem *__qtablewidgetitem443 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(41, __qtablewidgetitem443);
        QTableWidgetItem *__qtablewidgetitem444 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(42, __qtablewidgetitem444);
        QTableWidgetItem *__qtablewidgetitem445 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(43, __qtablewidgetitem445);
        QTableWidgetItem *__qtablewidgetitem446 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(44, __qtablewidgetitem446);
        QTableWidgetItem *__qtablewidgetitem447 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(45, __qtablewidgetitem447);
        QTableWidgetItem *__qtablewidgetitem448 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(46, __qtablewidgetitem448);
        QTableWidgetItem *__qtablewidgetitem449 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(47, __qtablewidgetitem449);
        QTableWidgetItem *__qtablewidgetitem450 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(48, __qtablewidgetitem450);
        QTableWidgetItem *__qtablewidgetitem451 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(49, __qtablewidgetitem451);
        QTableWidgetItem *__qtablewidgetitem452 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(50, __qtablewidgetitem452);
        QTableWidgetItem *__qtablewidgetitem453 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(51, __qtablewidgetitem453);
        QTableWidgetItem *__qtablewidgetitem454 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(52, __qtablewidgetitem454);
        QTableWidgetItem *__qtablewidgetitem455 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(53, __qtablewidgetitem455);
        QTableWidgetItem *__qtablewidgetitem456 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(54, __qtablewidgetitem456);
        QTableWidgetItem *__qtablewidgetitem457 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(55, __qtablewidgetitem457);
        QTableWidgetItem *__qtablewidgetitem458 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(56, __qtablewidgetitem458);
        QTableWidgetItem *__qtablewidgetitem459 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(57, __qtablewidgetitem459);
        QTableWidgetItem *__qtablewidgetitem460 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(58, __qtablewidgetitem460);
        QTableWidgetItem *__qtablewidgetitem461 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(59, __qtablewidgetitem461);
        QTableWidgetItem *__qtablewidgetitem462 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(60, __qtablewidgetitem462);
        QTableWidgetItem *__qtablewidgetitem463 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(61, __qtablewidgetitem463);
        QTableWidgetItem *__qtablewidgetitem464 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(62, __qtablewidgetitem464);
        QTableWidgetItem *__qtablewidgetitem465 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(63, __qtablewidgetitem465);
        QTableWidgetItem *__qtablewidgetitem466 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(64, __qtablewidgetitem466);
        QTableWidgetItem *__qtablewidgetitem467 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(65, __qtablewidgetitem467);
        QTableWidgetItem *__qtablewidgetitem468 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(66, __qtablewidgetitem468);
        QTableWidgetItem *__qtablewidgetitem469 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(67, __qtablewidgetitem469);
        QTableWidgetItem *__qtablewidgetitem470 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(68, __qtablewidgetitem470);
        QTableWidgetItem *__qtablewidgetitem471 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(69, __qtablewidgetitem471);
        QTableWidgetItem *__qtablewidgetitem472 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(70, __qtablewidgetitem472);
        QTableWidgetItem *__qtablewidgetitem473 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(71, __qtablewidgetitem473);
        QTableWidgetItem *__qtablewidgetitem474 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(72, __qtablewidgetitem474);
        QTableWidgetItem *__qtablewidgetitem475 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(73, __qtablewidgetitem475);
        QTableWidgetItem *__qtablewidgetitem476 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(74, __qtablewidgetitem476);
        QTableWidgetItem *__qtablewidgetitem477 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(75, __qtablewidgetitem477);
        QTableWidgetItem *__qtablewidgetitem478 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(76, __qtablewidgetitem478);
        QTableWidgetItem *__qtablewidgetitem479 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(77, __qtablewidgetitem479);
        QTableWidgetItem *__qtablewidgetitem480 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(78, __qtablewidgetitem480);
        QTableWidgetItem *__qtablewidgetitem481 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(79, __qtablewidgetitem481);
        QTableWidgetItem *__qtablewidgetitem482 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(80, __qtablewidgetitem482);
        QTableWidgetItem *__qtablewidgetitem483 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(81, __qtablewidgetitem483);
        QTableWidgetItem *__qtablewidgetitem484 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(82, __qtablewidgetitem484);
        QTableWidgetItem *__qtablewidgetitem485 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(83, __qtablewidgetitem485);
        QTableWidgetItem *__qtablewidgetitem486 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(84, __qtablewidgetitem486);
        QTableWidgetItem *__qtablewidgetitem487 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(85, __qtablewidgetitem487);
        QTableWidgetItem *__qtablewidgetitem488 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(86, __qtablewidgetitem488);
        QTableWidgetItem *__qtablewidgetitem489 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(87, __qtablewidgetitem489);
        QTableWidgetItem *__qtablewidgetitem490 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(88, __qtablewidgetitem490);
        QTableWidgetItem *__qtablewidgetitem491 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(89, __qtablewidgetitem491);
        QTableWidgetItem *__qtablewidgetitem492 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(90, __qtablewidgetitem492);
        QTableWidgetItem *__qtablewidgetitem493 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(91, __qtablewidgetitem493);
        QTableWidgetItem *__qtablewidgetitem494 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(92, __qtablewidgetitem494);
        QTableWidgetItem *__qtablewidgetitem495 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(93, __qtablewidgetitem495);
        QTableWidgetItem *__qtablewidgetitem496 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(94, __qtablewidgetitem496);
        QTableWidgetItem *__qtablewidgetitem497 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(95, __qtablewidgetitem497);
        QTableWidgetItem *__qtablewidgetitem498 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(96, __qtablewidgetitem498);
        QTableWidgetItem *__qtablewidgetitem499 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(97, __qtablewidgetitem499);
        QTableWidgetItem *__qtablewidgetitem500 = new QTableWidgetItem();
        txlist->setVerticalHeaderItem(98, __qtablewidgetitem500);
        txlist->setObjectName(QString::fromUtf8("txlist"));
        txlist->setGeometry(QRect(210, 120, 361, 411));
        stackedWidget->addWidget(page_5);
        GUIClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUIClass->setStatusBar(statusBar);

        retranslateUi(GUIClass);

        stackedWidget->setCurrentIndex(2);
        transactionBoard->setCurrentIndex(7);
        miningBoard->setCurrentIndex(8);
        dashboard->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIClass)
    {
        GUIClass->setWindowTitle(QCoreApplication::translate("GUIClass", "GUI", nullptr));
        WalletButton->setText(QCoreApplication::translate("GUIClass", "         \354\247\200\352\260\221", nullptr));
        TransactionButton->setText(QCoreApplication::translate("GUIClass", "         \354\206\241\352\270\210", nullptr));
        MiningButton->setText(QCoreApplication::translate("GUIClass", "         \354\261\204\352\265\264", nullptr));
        DashBoardButton->setText(QCoreApplication::translate("GUIClass", "                \353\214\200\354\213\234\353\263\264\353\223\234", nullptr));
        WalletName->setText(QCoreApplication::translate("GUIClass", "Wallet name", nullptr));
        cat->setText(QString());
        closeButton->setText(QCoreApplication::translate("GUIClass", "\354\242\205\353\243\214", nullptr));
        loading_label->setText(QCoreApplication::translate("GUIClass", "\354\247\200\352\260\221 \353\241\234\353\224\251\354\244\221....", nullptr));
        label_2->setText(QCoreApplication::translate("GUIClass", "<html><head/><body><p><img src=\":/cat/image/maincat.png\"/></p></body></html>", nullptr));
        WalletNameInput->setHtml(QCoreApplication::translate("GUIClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\271\231\352\267\270\353\240\210\354\262\264'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        CreateWalletButton->setText(QCoreApplication::translate("GUIClass", "\354\247\200\352\260\221 \354\203\235\354\204\261\355\225\230\352\270\260", nullptr));
        address_info->setHtml(QCoreApplication::translate("GUIClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\271\231\352\267\270\353\240\210\354\262\264'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        tol->setText(QCoreApplication::translate("GUIClass", "TOL", nullptr));
        WalletRefresh->setText(QString());
        getbalance_info->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_1->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_1->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_1->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("GUIClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_1->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("GUIClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_1->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("GUIClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_1->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("GUIClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_1->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("GUIClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_1->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("GUIClass", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_1->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("GUIClass", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_1->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("GUIClass", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_1->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("GUIClass", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_1->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("GUIClass", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("GUIClass", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("GUIClass", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("GUIClass", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("GUIClass", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("GUIClass", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("GUIClass", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->verticalHeaderItem(6);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("GUIClass", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->verticalHeaderItem(7);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("GUIClass", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->verticalHeaderItem(8);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("GUIClass", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->verticalHeaderItem(9);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("GUIClass", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("GUIClass", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("GUIClass", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("GUIClass", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("GUIClass", "24", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("GUIClass", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("GUIClass", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("GUIClass", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("GUIClass", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_3->verticalHeaderItem(8);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("GUIClass", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_3->verticalHeaderItem(9);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("GUIClass", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("GUIClass", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("GUIClass", "32", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("GUIClass", "33", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_4->verticalHeaderItem(3);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("GUIClass", "34", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_4->verticalHeaderItem(4);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("GUIClass", "35", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_4->verticalHeaderItem(5);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("GUIClass", "36", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_4->verticalHeaderItem(6);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("GUIClass", "37", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_4->verticalHeaderItem(7);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("GUIClass", "38", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_4->verticalHeaderItem(8);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("GUIClass", "39", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_4->verticalHeaderItem(9);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("GUIClass", "40", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_5->verticalHeaderItem(0);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("GUIClass", "41", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_5->verticalHeaderItem(1);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("GUIClass", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget_5->verticalHeaderItem(2);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("GUIClass", "43", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget_5->verticalHeaderItem(3);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("GUIClass", "44", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget_5->verticalHeaderItem(4);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("GUIClass", "45", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget_5->verticalHeaderItem(5);
        ___qtablewidgetitem70->setText(QCoreApplication::translate("GUIClass", "46", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget_5->verticalHeaderItem(6);
        ___qtablewidgetitem71->setText(QCoreApplication::translate("GUIClass", "47", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget_5->verticalHeaderItem(7);
        ___qtablewidgetitem72->setText(QCoreApplication::translate("GUIClass", "48", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget_5->verticalHeaderItem(8);
        ___qtablewidgetitem73->setText(QCoreApplication::translate("GUIClass", "49", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget_5->verticalHeaderItem(9);
        ___qtablewidgetitem74->setText(QCoreApplication::translate("GUIClass", "50", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem75->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem76->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem77->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem78->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem79->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget_6->verticalHeaderItem(0);
        ___qtablewidgetitem80->setText(QCoreApplication::translate("GUIClass", "51", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget_6->verticalHeaderItem(1);
        ___qtablewidgetitem81->setText(QCoreApplication::translate("GUIClass", "52", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget_6->verticalHeaderItem(2);
        ___qtablewidgetitem82->setText(QCoreApplication::translate("GUIClass", "53", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget_6->verticalHeaderItem(3);
        ___qtablewidgetitem83->setText(QCoreApplication::translate("GUIClass", "54", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget_6->verticalHeaderItem(4);
        ___qtablewidgetitem84->setText(QCoreApplication::translate("GUIClass", "55", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget_6->verticalHeaderItem(5);
        ___qtablewidgetitem85->setText(QCoreApplication::translate("GUIClass", "56", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget_6->verticalHeaderItem(6);
        ___qtablewidgetitem86->setText(QCoreApplication::translate("GUIClass", "57", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget_6->verticalHeaderItem(7);
        ___qtablewidgetitem87->setText(QCoreApplication::translate("GUIClass", "58", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget_6->verticalHeaderItem(8);
        ___qtablewidgetitem88->setText(QCoreApplication::translate("GUIClass", "59", nullptr));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget_6->verticalHeaderItem(9);
        ___qtablewidgetitem89->setText(QCoreApplication::translate("GUIClass", "60", nullptr));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem90->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem91->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem92->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem93->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem94->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidget_7->verticalHeaderItem(0);
        ___qtablewidgetitem95->setText(QCoreApplication::translate("GUIClass", "61", nullptr));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidget_7->verticalHeaderItem(1);
        ___qtablewidgetitem96->setText(QCoreApplication::translate("GUIClass", "62", nullptr));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidget_7->verticalHeaderItem(2);
        ___qtablewidgetitem97->setText(QCoreApplication::translate("GUIClass", "63", nullptr));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidget_7->verticalHeaderItem(3);
        ___qtablewidgetitem98->setText(QCoreApplication::translate("GUIClass", "64", nullptr));
        QTableWidgetItem *___qtablewidgetitem99 = tableWidget_7->verticalHeaderItem(4);
        ___qtablewidgetitem99->setText(QCoreApplication::translate("GUIClass", "65", nullptr));
        QTableWidgetItem *___qtablewidgetitem100 = tableWidget_7->verticalHeaderItem(5);
        ___qtablewidgetitem100->setText(QCoreApplication::translate("GUIClass", "66", nullptr));
        QTableWidgetItem *___qtablewidgetitem101 = tableWidget_7->verticalHeaderItem(6);
        ___qtablewidgetitem101->setText(QCoreApplication::translate("GUIClass", "67", nullptr));
        QTableWidgetItem *___qtablewidgetitem102 = tableWidget_7->verticalHeaderItem(7);
        ___qtablewidgetitem102->setText(QCoreApplication::translate("GUIClass", "68", nullptr));
        QTableWidgetItem *___qtablewidgetitem103 = tableWidget_7->verticalHeaderItem(8);
        ___qtablewidgetitem103->setText(QCoreApplication::translate("GUIClass", "69", nullptr));
        QTableWidgetItem *___qtablewidgetitem104 = tableWidget_7->verticalHeaderItem(9);
        ___qtablewidgetitem104->setText(QCoreApplication::translate("GUIClass", "70", nullptr));

        const bool __sortingEnabled = tableWidget_7->isSortingEnabled();
        tableWidget_7->setSortingEnabled(false);
        tableWidget_7->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem105 = tableWidget_8->horizontalHeaderItem(0);
        ___qtablewidgetitem105->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem106 = tableWidget_8->horizontalHeaderItem(1);
        ___qtablewidgetitem106->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem107 = tableWidget_8->horizontalHeaderItem(2);
        ___qtablewidgetitem107->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem108 = tableWidget_8->horizontalHeaderItem(3);
        ___qtablewidgetitem108->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem109 = tableWidget_8->horizontalHeaderItem(4);
        ___qtablewidgetitem109->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem110 = tableWidget_8->verticalHeaderItem(0);
        ___qtablewidgetitem110->setText(QCoreApplication::translate("GUIClass", "71", nullptr));
        QTableWidgetItem *___qtablewidgetitem111 = tableWidget_8->verticalHeaderItem(1);
        ___qtablewidgetitem111->setText(QCoreApplication::translate("GUIClass", "72", nullptr));
        QTableWidgetItem *___qtablewidgetitem112 = tableWidget_8->verticalHeaderItem(2);
        ___qtablewidgetitem112->setText(QCoreApplication::translate("GUIClass", "73", nullptr));
        QTableWidgetItem *___qtablewidgetitem113 = tableWidget_8->verticalHeaderItem(3);
        ___qtablewidgetitem113->setText(QCoreApplication::translate("GUIClass", "74", nullptr));
        QTableWidgetItem *___qtablewidgetitem114 = tableWidget_8->verticalHeaderItem(4);
        ___qtablewidgetitem114->setText(QCoreApplication::translate("GUIClass", "75", nullptr));
        QTableWidgetItem *___qtablewidgetitem115 = tableWidget_8->verticalHeaderItem(5);
        ___qtablewidgetitem115->setText(QCoreApplication::translate("GUIClass", "76", nullptr));
        QTableWidgetItem *___qtablewidgetitem116 = tableWidget_8->verticalHeaderItem(6);
        ___qtablewidgetitem116->setText(QCoreApplication::translate("GUIClass", "77", nullptr));
        QTableWidgetItem *___qtablewidgetitem117 = tableWidget_8->verticalHeaderItem(7);
        ___qtablewidgetitem117->setText(QCoreApplication::translate("GUIClass", "78", nullptr));
        QTableWidgetItem *___qtablewidgetitem118 = tableWidget_8->verticalHeaderItem(8);
        ___qtablewidgetitem118->setText(QCoreApplication::translate("GUIClass", "79", nullptr));
        QTableWidgetItem *___qtablewidgetitem119 = tableWidget_8->verticalHeaderItem(9);
        ___qtablewidgetitem119->setText(QCoreApplication::translate("GUIClass", "80", nullptr));
        QTableWidgetItem *___qtablewidgetitem120 = tableWidget_9->horizontalHeaderItem(0);
        ___qtablewidgetitem120->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem121 = tableWidget_9->horizontalHeaderItem(1);
        ___qtablewidgetitem121->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem122 = tableWidget_9->horizontalHeaderItem(2);
        ___qtablewidgetitem122->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem123 = tableWidget_9->horizontalHeaderItem(3);
        ___qtablewidgetitem123->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem124 = tableWidget_9->horizontalHeaderItem(4);
        ___qtablewidgetitem124->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem125 = tableWidget_9->verticalHeaderItem(0);
        ___qtablewidgetitem125->setText(QCoreApplication::translate("GUIClass", "81", nullptr));
        QTableWidgetItem *___qtablewidgetitem126 = tableWidget_9->verticalHeaderItem(1);
        ___qtablewidgetitem126->setText(QCoreApplication::translate("GUIClass", "82", nullptr));
        QTableWidgetItem *___qtablewidgetitem127 = tableWidget_9->verticalHeaderItem(2);
        ___qtablewidgetitem127->setText(QCoreApplication::translate("GUIClass", "83", nullptr));
        QTableWidgetItem *___qtablewidgetitem128 = tableWidget_9->verticalHeaderItem(3);
        ___qtablewidgetitem128->setText(QCoreApplication::translate("GUIClass", "84", nullptr));
        QTableWidgetItem *___qtablewidgetitem129 = tableWidget_9->verticalHeaderItem(4);
        ___qtablewidgetitem129->setText(QCoreApplication::translate("GUIClass", "85", nullptr));
        QTableWidgetItem *___qtablewidgetitem130 = tableWidget_9->verticalHeaderItem(5);
        ___qtablewidgetitem130->setText(QCoreApplication::translate("GUIClass", "86", nullptr));
        QTableWidgetItem *___qtablewidgetitem131 = tableWidget_9->verticalHeaderItem(6);
        ___qtablewidgetitem131->setText(QCoreApplication::translate("GUIClass", "87", nullptr));
        QTableWidgetItem *___qtablewidgetitem132 = tableWidget_9->verticalHeaderItem(7);
        ___qtablewidgetitem132->setText(QCoreApplication::translate("GUIClass", "88", nullptr));
        QTableWidgetItem *___qtablewidgetitem133 = tableWidget_9->verticalHeaderItem(8);
        ___qtablewidgetitem133->setText(QCoreApplication::translate("GUIClass", "89", nullptr));
        QTableWidgetItem *___qtablewidgetitem134 = tableWidget_9->verticalHeaderItem(9);
        ___qtablewidgetitem134->setText(QCoreApplication::translate("GUIClass", "90", nullptr));
        QTableWidgetItem *___qtablewidgetitem135 = tableWidget_10->horizontalHeaderItem(0);
        ___qtablewidgetitem135->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem136 = tableWidget_10->horizontalHeaderItem(1);
        ___qtablewidgetitem136->setText(QCoreApplication::translate("GUIClass", "\352\270\210\354\225\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem137 = tableWidget_10->horizontalHeaderItem(2);
        ___qtablewidgetitem137->setText(QCoreApplication::translate("GUIClass", "\354\206\241/\354\210\230\354\213\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem138 = tableWidget_10->horizontalHeaderItem(3);
        ___qtablewidgetitem138->setText(QCoreApplication::translate("GUIClass", "\354\243\274\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem139 = tableWidget_10->horizontalHeaderItem(4);
        ___qtablewidgetitem139->setText(QCoreApplication::translate("GUIClass", "\352\262\200\354\246\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem140 = tableWidget_10->verticalHeaderItem(0);
        ___qtablewidgetitem140->setText(QCoreApplication::translate("GUIClass", "91", nullptr));
        QTableWidgetItem *___qtablewidgetitem141 = tableWidget_10->verticalHeaderItem(1);
        ___qtablewidgetitem141->setText(QCoreApplication::translate("GUIClass", "92", nullptr));
        QTableWidgetItem *___qtablewidgetitem142 = tableWidget_10->verticalHeaderItem(2);
        ___qtablewidgetitem142->setText(QCoreApplication::translate("GUIClass", "93", nullptr));
        QTableWidgetItem *___qtablewidgetitem143 = tableWidget_10->verticalHeaderItem(3);
        ___qtablewidgetitem143->setText(QCoreApplication::translate("GUIClass", "94", nullptr));
        QTableWidgetItem *___qtablewidgetitem144 = tableWidget_10->verticalHeaderItem(4);
        ___qtablewidgetitem144->setText(QCoreApplication::translate("GUIClass", "95", nullptr));
        QTableWidgetItem *___qtablewidgetitem145 = tableWidget_10->verticalHeaderItem(5);
        ___qtablewidgetitem145->setText(QCoreApplication::translate("GUIClass", "96", nullptr));
        QTableWidgetItem *___qtablewidgetitem146 = tableWidget_10->verticalHeaderItem(6);
        ___qtablewidgetitem146->setText(QCoreApplication::translate("GUIClass", "97", nullptr));
        QTableWidgetItem *___qtablewidgetitem147 = tableWidget_10->verticalHeaderItem(7);
        ___qtablewidgetitem147->setText(QCoreApplication::translate("GUIClass", "98", nullptr));
        QTableWidgetItem *___qtablewidgetitem148 = tableWidget_10->verticalHeaderItem(8);
        ___qtablewidgetitem148->setText(QCoreApplication::translate("GUIClass", "99", nullptr));
        QTableWidgetItem *___qtablewidgetitem149 = tableWidget_10->verticalHeaderItem(9);
        ___qtablewidgetitem149->setText(QCoreApplication::translate("GUIClass", "100", nullptr));
        LeftButtonTransaction->setText(QString());
        RightButtonTransaction->setText(QString());
        resettx->setText(QString());
        miningresult_label_2->setText(QCoreApplication::translate("GUIClass", "\352\261\260\353\236\230\353\202\264\354\227\255", nullptr));
        addr->setHtml(QCoreApplication::translate("GUIClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\271\231\352\267\270\353\240\210\354\262\264'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        TOL_label->setText(QCoreApplication::translate("GUIClass", "TOL", nullptr));
        SendButton->setText(QCoreApplication::translate("GUIClass", "Send", nullptr));
        addrstatus->setText(QString());
        amountstatus->setText(QString());
        miningresult_label->setText(QCoreApplication::translate("GUIClass", "\354\261\204\352\265\264\352\262\260\352\263\274", nullptr));
        mining_label->setText(QCoreApplication::translate("GUIClass", "\354\261\204\352\265\264", nullptr));
        GetMining->setText(QCoreApplication::translate("GUIClass", "\354\261\204\352\265\264\355\225\230\352\270\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem150 = mining_table1->horizontalHeaderItem(0);
        ___qtablewidgetitem150->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem151 = mining_table1->horizontalHeaderItem(1);
        ___qtablewidgetitem151->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem152 = mining_table1->horizontalHeaderItem(2);
        ___qtablewidgetitem152->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem153 = mining_table1->verticalHeaderItem(0);
        ___qtablewidgetitem153->setText(QCoreApplication::translate("GUIClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem154 = mining_table1->verticalHeaderItem(1);
        ___qtablewidgetitem154->setText(QCoreApplication::translate("GUIClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem155 = mining_table1->verticalHeaderItem(2);
        ___qtablewidgetitem155->setText(QCoreApplication::translate("GUIClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem156 = mining_table1->verticalHeaderItem(3);
        ___qtablewidgetitem156->setText(QCoreApplication::translate("GUIClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem157 = mining_table1->verticalHeaderItem(4);
        ___qtablewidgetitem157->setText(QCoreApplication::translate("GUIClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem158 = mining_table1->verticalHeaderItem(5);
        ___qtablewidgetitem158->setText(QCoreApplication::translate("GUIClass", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem159 = mining_table1->verticalHeaderItem(6);
        ___qtablewidgetitem159->setText(QCoreApplication::translate("GUIClass", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem160 = mining_table1->verticalHeaderItem(7);
        ___qtablewidgetitem160->setText(QCoreApplication::translate("GUIClass", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem161 = mining_table1->verticalHeaderItem(8);
        ___qtablewidgetitem161->setText(QCoreApplication::translate("GUIClass", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem162 = mining_table1->verticalHeaderItem(9);
        ___qtablewidgetitem162->setText(QCoreApplication::translate("GUIClass", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem163 = mining_table2->horizontalHeaderItem(0);
        ___qtablewidgetitem163->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem164 = mining_table2->horizontalHeaderItem(1);
        ___qtablewidgetitem164->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem165 = mining_table2->horizontalHeaderItem(2);
        ___qtablewidgetitem165->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem166 = mining_table2->verticalHeaderItem(0);
        ___qtablewidgetitem166->setText(QCoreApplication::translate("GUIClass", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem167 = mining_table2->verticalHeaderItem(1);
        ___qtablewidgetitem167->setText(QCoreApplication::translate("GUIClass", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem168 = mining_table2->verticalHeaderItem(2);
        ___qtablewidgetitem168->setText(QCoreApplication::translate("GUIClass", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem169 = mining_table2->verticalHeaderItem(3);
        ___qtablewidgetitem169->setText(QCoreApplication::translate("GUIClass", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem170 = mining_table2->verticalHeaderItem(4);
        ___qtablewidgetitem170->setText(QCoreApplication::translate("GUIClass", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem171 = mining_table2->verticalHeaderItem(5);
        ___qtablewidgetitem171->setText(QCoreApplication::translate("GUIClass", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem172 = mining_table2->verticalHeaderItem(6);
        ___qtablewidgetitem172->setText(QCoreApplication::translate("GUIClass", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem173 = mining_table2->verticalHeaderItem(7);
        ___qtablewidgetitem173->setText(QCoreApplication::translate("GUIClass", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem174 = mining_table2->verticalHeaderItem(8);
        ___qtablewidgetitem174->setText(QCoreApplication::translate("GUIClass", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem175 = mining_table2->verticalHeaderItem(9);
        ___qtablewidgetitem175->setText(QCoreApplication::translate("GUIClass", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem176 = mining_table3->horizontalHeaderItem(0);
        ___qtablewidgetitem176->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem177 = mining_table3->horizontalHeaderItem(1);
        ___qtablewidgetitem177->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem178 = mining_table3->horizontalHeaderItem(2);
        ___qtablewidgetitem178->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem179 = mining_table3->verticalHeaderItem(0);
        ___qtablewidgetitem179->setText(QCoreApplication::translate("GUIClass", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem180 = mining_table3->verticalHeaderItem(1);
        ___qtablewidgetitem180->setText(QCoreApplication::translate("GUIClass", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem181 = mining_table3->verticalHeaderItem(2);
        ___qtablewidgetitem181->setText(QCoreApplication::translate("GUIClass", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem182 = mining_table3->verticalHeaderItem(3);
        ___qtablewidgetitem182->setText(QCoreApplication::translate("GUIClass", "24", nullptr));
        QTableWidgetItem *___qtablewidgetitem183 = mining_table3->verticalHeaderItem(4);
        ___qtablewidgetitem183->setText(QCoreApplication::translate("GUIClass", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem184 = mining_table3->verticalHeaderItem(5);
        ___qtablewidgetitem184->setText(QCoreApplication::translate("GUIClass", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem185 = mining_table3->verticalHeaderItem(6);
        ___qtablewidgetitem185->setText(QCoreApplication::translate("GUIClass", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem186 = mining_table3->verticalHeaderItem(7);
        ___qtablewidgetitem186->setText(QCoreApplication::translate("GUIClass", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem187 = mining_table3->verticalHeaderItem(8);
        ___qtablewidgetitem187->setText(QCoreApplication::translate("GUIClass", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem188 = mining_table3->verticalHeaderItem(9);
        ___qtablewidgetitem188->setText(QCoreApplication::translate("GUIClass", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem189 = mining_table4->horizontalHeaderItem(0);
        ___qtablewidgetitem189->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem190 = mining_table4->horizontalHeaderItem(1);
        ___qtablewidgetitem190->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem191 = mining_table4->horizontalHeaderItem(2);
        ___qtablewidgetitem191->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem192 = mining_table4->verticalHeaderItem(0);
        ___qtablewidgetitem192->setText(QCoreApplication::translate("GUIClass", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem193 = mining_table4->verticalHeaderItem(1);
        ___qtablewidgetitem193->setText(QCoreApplication::translate("GUIClass", "32", nullptr));
        QTableWidgetItem *___qtablewidgetitem194 = mining_table4->verticalHeaderItem(2);
        ___qtablewidgetitem194->setText(QCoreApplication::translate("GUIClass", "33", nullptr));
        QTableWidgetItem *___qtablewidgetitem195 = mining_table4->verticalHeaderItem(3);
        ___qtablewidgetitem195->setText(QCoreApplication::translate("GUIClass", "34", nullptr));
        QTableWidgetItem *___qtablewidgetitem196 = mining_table4->verticalHeaderItem(4);
        ___qtablewidgetitem196->setText(QCoreApplication::translate("GUIClass", "35", nullptr));
        QTableWidgetItem *___qtablewidgetitem197 = mining_table4->verticalHeaderItem(5);
        ___qtablewidgetitem197->setText(QCoreApplication::translate("GUIClass", "36", nullptr));
        QTableWidgetItem *___qtablewidgetitem198 = mining_table4->verticalHeaderItem(6);
        ___qtablewidgetitem198->setText(QCoreApplication::translate("GUIClass", "37", nullptr));
        QTableWidgetItem *___qtablewidgetitem199 = mining_table4->verticalHeaderItem(7);
        ___qtablewidgetitem199->setText(QCoreApplication::translate("GUIClass", "38", nullptr));
        QTableWidgetItem *___qtablewidgetitem200 = mining_table4->verticalHeaderItem(8);
        ___qtablewidgetitem200->setText(QCoreApplication::translate("GUIClass", "39", nullptr));
        QTableWidgetItem *___qtablewidgetitem201 = mining_table4->verticalHeaderItem(9);
        ___qtablewidgetitem201->setText(QCoreApplication::translate("GUIClass", "40", nullptr));
        QTableWidgetItem *___qtablewidgetitem202 = mining_table5->horizontalHeaderItem(0);
        ___qtablewidgetitem202->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem203 = mining_table5->horizontalHeaderItem(1);
        ___qtablewidgetitem203->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem204 = mining_table5->horizontalHeaderItem(2);
        ___qtablewidgetitem204->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem205 = mining_table5->verticalHeaderItem(0);
        ___qtablewidgetitem205->setText(QCoreApplication::translate("GUIClass", "41", nullptr));
        QTableWidgetItem *___qtablewidgetitem206 = mining_table5->verticalHeaderItem(1);
        ___qtablewidgetitem206->setText(QCoreApplication::translate("GUIClass", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem207 = mining_table5->verticalHeaderItem(2);
        ___qtablewidgetitem207->setText(QCoreApplication::translate("GUIClass", "43", nullptr));
        QTableWidgetItem *___qtablewidgetitem208 = mining_table5->verticalHeaderItem(3);
        ___qtablewidgetitem208->setText(QCoreApplication::translate("GUIClass", "44", nullptr));
        QTableWidgetItem *___qtablewidgetitem209 = mining_table5->verticalHeaderItem(4);
        ___qtablewidgetitem209->setText(QCoreApplication::translate("GUIClass", "45", nullptr));
        QTableWidgetItem *___qtablewidgetitem210 = mining_table5->verticalHeaderItem(5);
        ___qtablewidgetitem210->setText(QCoreApplication::translate("GUIClass", "46", nullptr));
        QTableWidgetItem *___qtablewidgetitem211 = mining_table5->verticalHeaderItem(6);
        ___qtablewidgetitem211->setText(QCoreApplication::translate("GUIClass", "47", nullptr));
        QTableWidgetItem *___qtablewidgetitem212 = mining_table5->verticalHeaderItem(7);
        ___qtablewidgetitem212->setText(QCoreApplication::translate("GUIClass", "48", nullptr));
        QTableWidgetItem *___qtablewidgetitem213 = mining_table5->verticalHeaderItem(8);
        ___qtablewidgetitem213->setText(QCoreApplication::translate("GUIClass", "49", nullptr));
        QTableWidgetItem *___qtablewidgetitem214 = mining_table5->verticalHeaderItem(9);
        ___qtablewidgetitem214->setText(QCoreApplication::translate("GUIClass", "50", nullptr));
        QTableWidgetItem *___qtablewidgetitem215 = mining_table6->horizontalHeaderItem(0);
        ___qtablewidgetitem215->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem216 = mining_table6->horizontalHeaderItem(1);
        ___qtablewidgetitem216->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem217 = mining_table6->horizontalHeaderItem(2);
        ___qtablewidgetitem217->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem218 = mining_table6->verticalHeaderItem(0);
        ___qtablewidgetitem218->setText(QCoreApplication::translate("GUIClass", "51", nullptr));
        QTableWidgetItem *___qtablewidgetitem219 = mining_table6->verticalHeaderItem(1);
        ___qtablewidgetitem219->setText(QCoreApplication::translate("GUIClass", "52", nullptr));
        QTableWidgetItem *___qtablewidgetitem220 = mining_table6->verticalHeaderItem(2);
        ___qtablewidgetitem220->setText(QCoreApplication::translate("GUIClass", "53", nullptr));
        QTableWidgetItem *___qtablewidgetitem221 = mining_table6->verticalHeaderItem(3);
        ___qtablewidgetitem221->setText(QCoreApplication::translate("GUIClass", "54", nullptr));
        QTableWidgetItem *___qtablewidgetitem222 = mining_table6->verticalHeaderItem(4);
        ___qtablewidgetitem222->setText(QCoreApplication::translate("GUIClass", "55", nullptr));
        QTableWidgetItem *___qtablewidgetitem223 = mining_table6->verticalHeaderItem(5);
        ___qtablewidgetitem223->setText(QCoreApplication::translate("GUIClass", "56", nullptr));
        QTableWidgetItem *___qtablewidgetitem224 = mining_table6->verticalHeaderItem(6);
        ___qtablewidgetitem224->setText(QCoreApplication::translate("GUIClass", "57", nullptr));
        QTableWidgetItem *___qtablewidgetitem225 = mining_table6->verticalHeaderItem(7);
        ___qtablewidgetitem225->setText(QCoreApplication::translate("GUIClass", "58", nullptr));
        QTableWidgetItem *___qtablewidgetitem226 = mining_table6->verticalHeaderItem(8);
        ___qtablewidgetitem226->setText(QCoreApplication::translate("GUIClass", "59", nullptr));
        QTableWidgetItem *___qtablewidgetitem227 = mining_table6->verticalHeaderItem(9);
        ___qtablewidgetitem227->setText(QCoreApplication::translate("GUIClass", "60", nullptr));
        QTableWidgetItem *___qtablewidgetitem228 = mining_table7->horizontalHeaderItem(0);
        ___qtablewidgetitem228->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem229 = mining_table7->horizontalHeaderItem(1);
        ___qtablewidgetitem229->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem230 = mining_table7->horizontalHeaderItem(2);
        ___qtablewidgetitem230->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem231 = mining_table7->verticalHeaderItem(0);
        ___qtablewidgetitem231->setText(QCoreApplication::translate("GUIClass", "61", nullptr));
        QTableWidgetItem *___qtablewidgetitem232 = mining_table7->verticalHeaderItem(1);
        ___qtablewidgetitem232->setText(QCoreApplication::translate("GUIClass", "62", nullptr));
        QTableWidgetItem *___qtablewidgetitem233 = mining_table7->verticalHeaderItem(2);
        ___qtablewidgetitem233->setText(QCoreApplication::translate("GUIClass", "63", nullptr));
        QTableWidgetItem *___qtablewidgetitem234 = mining_table7->verticalHeaderItem(3);
        ___qtablewidgetitem234->setText(QCoreApplication::translate("GUIClass", "64", nullptr));
        QTableWidgetItem *___qtablewidgetitem235 = mining_table7->verticalHeaderItem(4);
        ___qtablewidgetitem235->setText(QCoreApplication::translate("GUIClass", "65", nullptr));
        QTableWidgetItem *___qtablewidgetitem236 = mining_table7->verticalHeaderItem(5);
        ___qtablewidgetitem236->setText(QCoreApplication::translate("GUIClass", "66", nullptr));
        QTableWidgetItem *___qtablewidgetitem237 = mining_table7->verticalHeaderItem(6);
        ___qtablewidgetitem237->setText(QCoreApplication::translate("GUIClass", "67", nullptr));
        QTableWidgetItem *___qtablewidgetitem238 = mining_table7->verticalHeaderItem(7);
        ___qtablewidgetitem238->setText(QCoreApplication::translate("GUIClass", "68", nullptr));
        QTableWidgetItem *___qtablewidgetitem239 = mining_table7->verticalHeaderItem(8);
        ___qtablewidgetitem239->setText(QCoreApplication::translate("GUIClass", "69", nullptr));
        QTableWidgetItem *___qtablewidgetitem240 = mining_table7->verticalHeaderItem(9);
        ___qtablewidgetitem240->setText(QCoreApplication::translate("GUIClass", "70", nullptr));
        QTableWidgetItem *___qtablewidgetitem241 = mining_table8->horizontalHeaderItem(0);
        ___qtablewidgetitem241->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem242 = mining_table8->horizontalHeaderItem(1);
        ___qtablewidgetitem242->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem243 = mining_table8->horizontalHeaderItem(2);
        ___qtablewidgetitem243->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem244 = mining_table8->verticalHeaderItem(0);
        ___qtablewidgetitem244->setText(QCoreApplication::translate("GUIClass", "71", nullptr));
        QTableWidgetItem *___qtablewidgetitem245 = mining_table8->verticalHeaderItem(1);
        ___qtablewidgetitem245->setText(QCoreApplication::translate("GUIClass", "72", nullptr));
        QTableWidgetItem *___qtablewidgetitem246 = mining_table8->verticalHeaderItem(2);
        ___qtablewidgetitem246->setText(QCoreApplication::translate("GUIClass", "73", nullptr));
        QTableWidgetItem *___qtablewidgetitem247 = mining_table8->verticalHeaderItem(3);
        ___qtablewidgetitem247->setText(QCoreApplication::translate("GUIClass", "74", nullptr));
        QTableWidgetItem *___qtablewidgetitem248 = mining_table8->verticalHeaderItem(4);
        ___qtablewidgetitem248->setText(QCoreApplication::translate("GUIClass", "75", nullptr));
        QTableWidgetItem *___qtablewidgetitem249 = mining_table8->verticalHeaderItem(5);
        ___qtablewidgetitem249->setText(QCoreApplication::translate("GUIClass", "76", nullptr));
        QTableWidgetItem *___qtablewidgetitem250 = mining_table8->verticalHeaderItem(6);
        ___qtablewidgetitem250->setText(QCoreApplication::translate("GUIClass", "77", nullptr));
        QTableWidgetItem *___qtablewidgetitem251 = mining_table8->verticalHeaderItem(7);
        ___qtablewidgetitem251->setText(QCoreApplication::translate("GUIClass", "78", nullptr));
        QTableWidgetItem *___qtablewidgetitem252 = mining_table8->verticalHeaderItem(8);
        ___qtablewidgetitem252->setText(QCoreApplication::translate("GUIClass", "79", nullptr));
        QTableWidgetItem *___qtablewidgetitem253 = mining_table8->verticalHeaderItem(9);
        ___qtablewidgetitem253->setText(QCoreApplication::translate("GUIClass", "80", nullptr));
        QTableWidgetItem *___qtablewidgetitem254 = mining_table9->horizontalHeaderItem(0);
        ___qtablewidgetitem254->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem255 = mining_table9->horizontalHeaderItem(1);
        ___qtablewidgetitem255->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem256 = mining_table9->horizontalHeaderItem(2);
        ___qtablewidgetitem256->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem257 = mining_table9->verticalHeaderItem(0);
        ___qtablewidgetitem257->setText(QCoreApplication::translate("GUIClass", "81", nullptr));
        QTableWidgetItem *___qtablewidgetitem258 = mining_table9->verticalHeaderItem(1);
        ___qtablewidgetitem258->setText(QCoreApplication::translate("GUIClass", "82", nullptr));
        QTableWidgetItem *___qtablewidgetitem259 = mining_table9->verticalHeaderItem(2);
        ___qtablewidgetitem259->setText(QCoreApplication::translate("GUIClass", "83", nullptr));
        QTableWidgetItem *___qtablewidgetitem260 = mining_table9->verticalHeaderItem(3);
        ___qtablewidgetitem260->setText(QCoreApplication::translate("GUIClass", "84", nullptr));
        QTableWidgetItem *___qtablewidgetitem261 = mining_table9->verticalHeaderItem(4);
        ___qtablewidgetitem261->setText(QCoreApplication::translate("GUIClass", "85", nullptr));
        QTableWidgetItem *___qtablewidgetitem262 = mining_table9->verticalHeaderItem(5);
        ___qtablewidgetitem262->setText(QCoreApplication::translate("GUIClass", "86", nullptr));
        QTableWidgetItem *___qtablewidgetitem263 = mining_table9->verticalHeaderItem(6);
        ___qtablewidgetitem263->setText(QCoreApplication::translate("GUIClass", "87", nullptr));
        QTableWidgetItem *___qtablewidgetitem264 = mining_table9->verticalHeaderItem(7);
        ___qtablewidgetitem264->setText(QCoreApplication::translate("GUIClass", "88", nullptr));
        QTableWidgetItem *___qtablewidgetitem265 = mining_table9->verticalHeaderItem(8);
        ___qtablewidgetitem265->setText(QCoreApplication::translate("GUIClass", "89", nullptr));
        QTableWidgetItem *___qtablewidgetitem266 = mining_table9->verticalHeaderItem(9);
        ___qtablewidgetitem266->setText(QCoreApplication::translate("GUIClass", "90", nullptr));
        QTableWidgetItem *___qtablewidgetitem267 = mining_table10->horizontalHeaderItem(0);
        ___qtablewidgetitem267->setText(QCoreApplication::translate("GUIClass", "\354\213\234\352\260\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem268 = mining_table10->horizontalHeaderItem(1);
        ___qtablewidgetitem268->setText(QCoreApplication::translate("GUIClass", "\353\263\264\354\203\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem269 = mining_table10->horizontalHeaderItem(2);
        ___qtablewidgetitem269->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem270 = mining_table10->verticalHeaderItem(0);
        ___qtablewidgetitem270->setText(QCoreApplication::translate("GUIClass", "91", nullptr));
        QTableWidgetItem *___qtablewidgetitem271 = mining_table10->verticalHeaderItem(1);
        ___qtablewidgetitem271->setText(QCoreApplication::translate("GUIClass", "92", nullptr));
        QTableWidgetItem *___qtablewidgetitem272 = mining_table10->verticalHeaderItem(2);
        ___qtablewidgetitem272->setText(QCoreApplication::translate("GUIClass", "93", nullptr));
        QTableWidgetItem *___qtablewidgetitem273 = mining_table10->verticalHeaderItem(3);
        ___qtablewidgetitem273->setText(QCoreApplication::translate("GUIClass", "94", nullptr));
        QTableWidgetItem *___qtablewidgetitem274 = mining_table10->verticalHeaderItem(4);
        ___qtablewidgetitem274->setText(QCoreApplication::translate("GUIClass", "95", nullptr));
        QTableWidgetItem *___qtablewidgetitem275 = mining_table10->verticalHeaderItem(5);
        ___qtablewidgetitem275->setText(QCoreApplication::translate("GUIClass", "96", nullptr));
        QTableWidgetItem *___qtablewidgetitem276 = mining_table10->verticalHeaderItem(6);
        ___qtablewidgetitem276->setText(QCoreApplication::translate("GUIClass", "97", nullptr));
        QTableWidgetItem *___qtablewidgetitem277 = mining_table10->verticalHeaderItem(7);
        ___qtablewidgetitem277->setText(QCoreApplication::translate("GUIClass", "98", nullptr));
        QTableWidgetItem *___qtablewidgetitem278 = mining_table10->verticalHeaderItem(8);
        ___qtablewidgetitem278->setText(QCoreApplication::translate("GUIClass", "99", nullptr));
        QTableWidgetItem *___qtablewidgetitem279 = mining_table10->verticalHeaderItem(9);
        ___qtablewidgetitem279->setText(QCoreApplication::translate("GUIClass", "100", nullptr));
        RightButtonMining->setText(QString());
        LeftButtonMining->setText(QString());
        resetmining->setText(QString());
        blockcount->setText(QString());
        usercount->setText(QString());
        QTableWidgetItem *___qtablewidgetitem280 = dashboard_table1->horizontalHeaderItem(0);
        ___qtablewidgetitem280->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem281 = dashboard_table1->horizontalHeaderItem(1);
        ___qtablewidgetitem281->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem282 = dashboard_table1->verticalHeaderItem(0);
        ___qtablewidgetitem282->setText(QCoreApplication::translate("GUIClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem283 = dashboard_table1->verticalHeaderItem(1);
        ___qtablewidgetitem283->setText(QCoreApplication::translate("GUIClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem284 = dashboard_table1->verticalHeaderItem(2);
        ___qtablewidgetitem284->setText(QCoreApplication::translate("GUIClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem285 = dashboard_table1->verticalHeaderItem(3);
        ___qtablewidgetitem285->setText(QCoreApplication::translate("GUIClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem286 = dashboard_table1->verticalHeaderItem(4);
        ___qtablewidgetitem286->setText(QCoreApplication::translate("GUIClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem287 = dashboard_table1->verticalHeaderItem(5);
        ___qtablewidgetitem287->setText(QCoreApplication::translate("GUIClass", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem288 = dashboard_table1->verticalHeaderItem(6);
        ___qtablewidgetitem288->setText(QCoreApplication::translate("GUIClass", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem289 = dashboard_table1->verticalHeaderItem(7);
        ___qtablewidgetitem289->setText(QCoreApplication::translate("GUIClass", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem290 = dashboard_table1->verticalHeaderItem(8);
        ___qtablewidgetitem290->setText(QCoreApplication::translate("GUIClass", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem291 = dashboard_table1->verticalHeaderItem(9);
        ___qtablewidgetitem291->setText(QCoreApplication::translate("GUIClass", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem292 = dashboard_table2->horizontalHeaderItem(0);
        ___qtablewidgetitem292->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem293 = dashboard_table2->horizontalHeaderItem(1);
        ___qtablewidgetitem293->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem294 = dashboard_table2->verticalHeaderItem(0);
        ___qtablewidgetitem294->setText(QCoreApplication::translate("GUIClass", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem295 = dashboard_table2->verticalHeaderItem(1);
        ___qtablewidgetitem295->setText(QCoreApplication::translate("GUIClass", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem296 = dashboard_table2->verticalHeaderItem(2);
        ___qtablewidgetitem296->setText(QCoreApplication::translate("GUIClass", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem297 = dashboard_table2->verticalHeaderItem(3);
        ___qtablewidgetitem297->setText(QCoreApplication::translate("GUIClass", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem298 = dashboard_table2->verticalHeaderItem(4);
        ___qtablewidgetitem298->setText(QCoreApplication::translate("GUIClass", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem299 = dashboard_table2->verticalHeaderItem(5);
        ___qtablewidgetitem299->setText(QCoreApplication::translate("GUIClass", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem300 = dashboard_table2->verticalHeaderItem(6);
        ___qtablewidgetitem300->setText(QCoreApplication::translate("GUIClass", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem301 = dashboard_table2->verticalHeaderItem(7);
        ___qtablewidgetitem301->setText(QCoreApplication::translate("GUIClass", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem302 = dashboard_table2->verticalHeaderItem(8);
        ___qtablewidgetitem302->setText(QCoreApplication::translate("GUIClass", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem303 = dashboard_table2->verticalHeaderItem(9);
        ___qtablewidgetitem303->setText(QCoreApplication::translate("GUIClass", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem304 = dashboard_table3->horizontalHeaderItem(0);
        ___qtablewidgetitem304->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem305 = dashboard_table3->horizontalHeaderItem(1);
        ___qtablewidgetitem305->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem306 = dashboard_table3->verticalHeaderItem(0);
        ___qtablewidgetitem306->setText(QCoreApplication::translate("GUIClass", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem307 = dashboard_table3->verticalHeaderItem(1);
        ___qtablewidgetitem307->setText(QCoreApplication::translate("GUIClass", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem308 = dashboard_table3->verticalHeaderItem(2);
        ___qtablewidgetitem308->setText(QCoreApplication::translate("GUIClass", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem309 = dashboard_table3->verticalHeaderItem(3);
        ___qtablewidgetitem309->setText(QCoreApplication::translate("GUIClass", "24", nullptr));
        QTableWidgetItem *___qtablewidgetitem310 = dashboard_table3->verticalHeaderItem(4);
        ___qtablewidgetitem310->setText(QCoreApplication::translate("GUIClass", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem311 = dashboard_table3->verticalHeaderItem(5);
        ___qtablewidgetitem311->setText(QCoreApplication::translate("GUIClass", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem312 = dashboard_table3->verticalHeaderItem(6);
        ___qtablewidgetitem312->setText(QCoreApplication::translate("GUIClass", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem313 = dashboard_table3->verticalHeaderItem(7);
        ___qtablewidgetitem313->setText(QCoreApplication::translate("GUIClass", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem314 = dashboard_table3->verticalHeaderItem(8);
        ___qtablewidgetitem314->setText(QCoreApplication::translate("GUIClass", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem315 = dashboard_table3->verticalHeaderItem(9);
        ___qtablewidgetitem315->setText(QCoreApplication::translate("GUIClass", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem316 = dashboard_table4->horizontalHeaderItem(0);
        ___qtablewidgetitem316->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem317 = dashboard_table4->horizontalHeaderItem(1);
        ___qtablewidgetitem317->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem318 = dashboard_table4->verticalHeaderItem(0);
        ___qtablewidgetitem318->setText(QCoreApplication::translate("GUIClass", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem319 = dashboard_table4->verticalHeaderItem(1);
        ___qtablewidgetitem319->setText(QCoreApplication::translate("GUIClass", "32", nullptr));
        QTableWidgetItem *___qtablewidgetitem320 = dashboard_table4->verticalHeaderItem(2);
        ___qtablewidgetitem320->setText(QCoreApplication::translate("GUIClass", "33", nullptr));
        QTableWidgetItem *___qtablewidgetitem321 = dashboard_table4->verticalHeaderItem(3);
        ___qtablewidgetitem321->setText(QCoreApplication::translate("GUIClass", "34", nullptr));
        QTableWidgetItem *___qtablewidgetitem322 = dashboard_table4->verticalHeaderItem(4);
        ___qtablewidgetitem322->setText(QCoreApplication::translate("GUIClass", "35", nullptr));
        QTableWidgetItem *___qtablewidgetitem323 = dashboard_table4->verticalHeaderItem(5);
        ___qtablewidgetitem323->setText(QCoreApplication::translate("GUIClass", "36", nullptr));
        QTableWidgetItem *___qtablewidgetitem324 = dashboard_table4->verticalHeaderItem(6);
        ___qtablewidgetitem324->setText(QCoreApplication::translate("GUIClass", "37", nullptr));
        QTableWidgetItem *___qtablewidgetitem325 = dashboard_table4->verticalHeaderItem(7);
        ___qtablewidgetitem325->setText(QCoreApplication::translate("GUIClass", "38", nullptr));
        QTableWidgetItem *___qtablewidgetitem326 = dashboard_table4->verticalHeaderItem(8);
        ___qtablewidgetitem326->setText(QCoreApplication::translate("GUIClass", "39", nullptr));
        QTableWidgetItem *___qtablewidgetitem327 = dashboard_table4->verticalHeaderItem(9);
        ___qtablewidgetitem327->setText(QCoreApplication::translate("GUIClass", "40", nullptr));
        QTableWidgetItem *___qtablewidgetitem328 = dashboard_table5->horizontalHeaderItem(0);
        ___qtablewidgetitem328->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem329 = dashboard_table5->horizontalHeaderItem(1);
        ___qtablewidgetitem329->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem330 = dashboard_table5->verticalHeaderItem(0);
        ___qtablewidgetitem330->setText(QCoreApplication::translate("GUIClass", "41", nullptr));
        QTableWidgetItem *___qtablewidgetitem331 = dashboard_table5->verticalHeaderItem(1);
        ___qtablewidgetitem331->setText(QCoreApplication::translate("GUIClass", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem332 = dashboard_table5->verticalHeaderItem(2);
        ___qtablewidgetitem332->setText(QCoreApplication::translate("GUIClass", "43", nullptr));
        QTableWidgetItem *___qtablewidgetitem333 = dashboard_table5->verticalHeaderItem(3);
        ___qtablewidgetitem333->setText(QCoreApplication::translate("GUIClass", "44", nullptr));
        QTableWidgetItem *___qtablewidgetitem334 = dashboard_table5->verticalHeaderItem(4);
        ___qtablewidgetitem334->setText(QCoreApplication::translate("GUIClass", "45", nullptr));
        QTableWidgetItem *___qtablewidgetitem335 = dashboard_table5->verticalHeaderItem(5);
        ___qtablewidgetitem335->setText(QCoreApplication::translate("GUIClass", "46", nullptr));
        QTableWidgetItem *___qtablewidgetitem336 = dashboard_table5->verticalHeaderItem(6);
        ___qtablewidgetitem336->setText(QCoreApplication::translate("GUIClass", "47", nullptr));
        QTableWidgetItem *___qtablewidgetitem337 = dashboard_table5->verticalHeaderItem(7);
        ___qtablewidgetitem337->setText(QCoreApplication::translate("GUIClass", "48", nullptr));
        QTableWidgetItem *___qtablewidgetitem338 = dashboard_table5->verticalHeaderItem(8);
        ___qtablewidgetitem338->setText(QCoreApplication::translate("GUIClass", "49", nullptr));
        QTableWidgetItem *___qtablewidgetitem339 = dashboard_table5->verticalHeaderItem(9);
        ___qtablewidgetitem339->setText(QCoreApplication::translate("GUIClass", "50", nullptr));
        QTableWidgetItem *___qtablewidgetitem340 = dashboard_table6->horizontalHeaderItem(0);
        ___qtablewidgetitem340->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem341 = dashboard_table6->horizontalHeaderItem(1);
        ___qtablewidgetitem341->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem342 = dashboard_table6->verticalHeaderItem(0);
        ___qtablewidgetitem342->setText(QCoreApplication::translate("GUIClass", "51", nullptr));
        QTableWidgetItem *___qtablewidgetitem343 = dashboard_table6->verticalHeaderItem(1);
        ___qtablewidgetitem343->setText(QCoreApplication::translate("GUIClass", "52", nullptr));
        QTableWidgetItem *___qtablewidgetitem344 = dashboard_table6->verticalHeaderItem(2);
        ___qtablewidgetitem344->setText(QCoreApplication::translate("GUIClass", "53", nullptr));
        QTableWidgetItem *___qtablewidgetitem345 = dashboard_table6->verticalHeaderItem(3);
        ___qtablewidgetitem345->setText(QCoreApplication::translate("GUIClass", "54", nullptr));
        QTableWidgetItem *___qtablewidgetitem346 = dashboard_table6->verticalHeaderItem(4);
        ___qtablewidgetitem346->setText(QCoreApplication::translate("GUIClass", "55", nullptr));
        QTableWidgetItem *___qtablewidgetitem347 = dashboard_table6->verticalHeaderItem(5);
        ___qtablewidgetitem347->setText(QCoreApplication::translate("GUIClass", "56", nullptr));
        QTableWidgetItem *___qtablewidgetitem348 = dashboard_table6->verticalHeaderItem(6);
        ___qtablewidgetitem348->setText(QCoreApplication::translate("GUIClass", "57", nullptr));
        QTableWidgetItem *___qtablewidgetitem349 = dashboard_table6->verticalHeaderItem(7);
        ___qtablewidgetitem349->setText(QCoreApplication::translate("GUIClass", "58", nullptr));
        QTableWidgetItem *___qtablewidgetitem350 = dashboard_table6->verticalHeaderItem(8);
        ___qtablewidgetitem350->setText(QCoreApplication::translate("GUIClass", "59", nullptr));
        QTableWidgetItem *___qtablewidgetitem351 = dashboard_table6->verticalHeaderItem(9);
        ___qtablewidgetitem351->setText(QCoreApplication::translate("GUIClass", "60", nullptr));
        QTableWidgetItem *___qtablewidgetitem352 = dashboard_table7->horizontalHeaderItem(0);
        ___qtablewidgetitem352->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem353 = dashboard_table7->horizontalHeaderItem(1);
        ___qtablewidgetitem353->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem354 = dashboard_table7->verticalHeaderItem(0);
        ___qtablewidgetitem354->setText(QCoreApplication::translate("GUIClass", "61", nullptr));
        QTableWidgetItem *___qtablewidgetitem355 = dashboard_table7->verticalHeaderItem(1);
        ___qtablewidgetitem355->setText(QCoreApplication::translate("GUIClass", "62", nullptr));
        QTableWidgetItem *___qtablewidgetitem356 = dashboard_table7->verticalHeaderItem(2);
        ___qtablewidgetitem356->setText(QCoreApplication::translate("GUIClass", "63", nullptr));
        QTableWidgetItem *___qtablewidgetitem357 = dashboard_table7->verticalHeaderItem(3);
        ___qtablewidgetitem357->setText(QCoreApplication::translate("GUIClass", "64", nullptr));
        QTableWidgetItem *___qtablewidgetitem358 = dashboard_table7->verticalHeaderItem(4);
        ___qtablewidgetitem358->setText(QCoreApplication::translate("GUIClass", "65", nullptr));
        QTableWidgetItem *___qtablewidgetitem359 = dashboard_table7->verticalHeaderItem(5);
        ___qtablewidgetitem359->setText(QCoreApplication::translate("GUIClass", "66", nullptr));
        QTableWidgetItem *___qtablewidgetitem360 = dashboard_table7->verticalHeaderItem(6);
        ___qtablewidgetitem360->setText(QCoreApplication::translate("GUIClass", "67", nullptr));
        QTableWidgetItem *___qtablewidgetitem361 = dashboard_table7->verticalHeaderItem(7);
        ___qtablewidgetitem361->setText(QCoreApplication::translate("GUIClass", "68", nullptr));
        QTableWidgetItem *___qtablewidgetitem362 = dashboard_table7->verticalHeaderItem(8);
        ___qtablewidgetitem362->setText(QCoreApplication::translate("GUIClass", "69", nullptr));
        QTableWidgetItem *___qtablewidgetitem363 = dashboard_table7->verticalHeaderItem(9);
        ___qtablewidgetitem363->setText(QCoreApplication::translate("GUIClass", "70", nullptr));
        QTableWidgetItem *___qtablewidgetitem364 = dashboard_table8->horizontalHeaderItem(0);
        ___qtablewidgetitem364->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem365 = dashboard_table8->horizontalHeaderItem(1);
        ___qtablewidgetitem365->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem366 = dashboard_table8->verticalHeaderItem(0);
        ___qtablewidgetitem366->setText(QCoreApplication::translate("GUIClass", "71", nullptr));
        QTableWidgetItem *___qtablewidgetitem367 = dashboard_table8->verticalHeaderItem(1);
        ___qtablewidgetitem367->setText(QCoreApplication::translate("GUIClass", "72", nullptr));
        QTableWidgetItem *___qtablewidgetitem368 = dashboard_table8->verticalHeaderItem(2);
        ___qtablewidgetitem368->setText(QCoreApplication::translate("GUIClass", "73", nullptr));
        QTableWidgetItem *___qtablewidgetitem369 = dashboard_table8->verticalHeaderItem(3);
        ___qtablewidgetitem369->setText(QCoreApplication::translate("GUIClass", "74", nullptr));
        QTableWidgetItem *___qtablewidgetitem370 = dashboard_table8->verticalHeaderItem(4);
        ___qtablewidgetitem370->setText(QCoreApplication::translate("GUIClass", "75", nullptr));
        QTableWidgetItem *___qtablewidgetitem371 = dashboard_table8->verticalHeaderItem(5);
        ___qtablewidgetitem371->setText(QCoreApplication::translate("GUIClass", "76", nullptr));
        QTableWidgetItem *___qtablewidgetitem372 = dashboard_table8->verticalHeaderItem(6);
        ___qtablewidgetitem372->setText(QCoreApplication::translate("GUIClass", "77", nullptr));
        QTableWidgetItem *___qtablewidgetitem373 = dashboard_table8->verticalHeaderItem(7);
        ___qtablewidgetitem373->setText(QCoreApplication::translate("GUIClass", "78", nullptr));
        QTableWidgetItem *___qtablewidgetitem374 = dashboard_table8->verticalHeaderItem(8);
        ___qtablewidgetitem374->setText(QCoreApplication::translate("GUIClass", "79", nullptr));
        QTableWidgetItem *___qtablewidgetitem375 = dashboard_table8->verticalHeaderItem(9);
        ___qtablewidgetitem375->setText(QCoreApplication::translate("GUIClass", "80", nullptr));
        QTableWidgetItem *___qtablewidgetitem376 = dashboard_table9->horizontalHeaderItem(0);
        ___qtablewidgetitem376->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem377 = dashboard_table9->horizontalHeaderItem(1);
        ___qtablewidgetitem377->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem378 = dashboard_table9->verticalHeaderItem(0);
        ___qtablewidgetitem378->setText(QCoreApplication::translate("GUIClass", "81", nullptr));
        QTableWidgetItem *___qtablewidgetitem379 = dashboard_table9->verticalHeaderItem(1);
        ___qtablewidgetitem379->setText(QCoreApplication::translate("GUIClass", "82", nullptr));
        QTableWidgetItem *___qtablewidgetitem380 = dashboard_table9->verticalHeaderItem(2);
        ___qtablewidgetitem380->setText(QCoreApplication::translate("GUIClass", "83", nullptr));
        QTableWidgetItem *___qtablewidgetitem381 = dashboard_table9->verticalHeaderItem(3);
        ___qtablewidgetitem381->setText(QCoreApplication::translate("GUIClass", "84", nullptr));
        QTableWidgetItem *___qtablewidgetitem382 = dashboard_table9->verticalHeaderItem(4);
        ___qtablewidgetitem382->setText(QCoreApplication::translate("GUIClass", "85", nullptr));
        QTableWidgetItem *___qtablewidgetitem383 = dashboard_table9->verticalHeaderItem(5);
        ___qtablewidgetitem383->setText(QCoreApplication::translate("GUIClass", "86", nullptr));
        QTableWidgetItem *___qtablewidgetitem384 = dashboard_table9->verticalHeaderItem(6);
        ___qtablewidgetitem384->setText(QCoreApplication::translate("GUIClass", "87", nullptr));
        QTableWidgetItem *___qtablewidgetitem385 = dashboard_table9->verticalHeaderItem(7);
        ___qtablewidgetitem385->setText(QCoreApplication::translate("GUIClass", "88", nullptr));
        QTableWidgetItem *___qtablewidgetitem386 = dashboard_table9->verticalHeaderItem(8);
        ___qtablewidgetitem386->setText(QCoreApplication::translate("GUIClass", "89", nullptr));
        QTableWidgetItem *___qtablewidgetitem387 = dashboard_table9->verticalHeaderItem(9);
        ___qtablewidgetitem387->setText(QCoreApplication::translate("GUIClass", "90", nullptr));
        QTableWidgetItem *___qtablewidgetitem388 = dashboard_table10->horizontalHeaderItem(0);
        ___qtablewidgetitem388->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem389 = dashboard_table10->horizontalHeaderItem(1);
        ___qtablewidgetitem389->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235 Hash", nullptr));
        QTableWidgetItem *___qtablewidgetitem390 = dashboard_table10->verticalHeaderItem(0);
        ___qtablewidgetitem390->setText(QCoreApplication::translate("GUIClass", "91", nullptr));
        QTableWidgetItem *___qtablewidgetitem391 = dashboard_table10->verticalHeaderItem(1);
        ___qtablewidgetitem391->setText(QCoreApplication::translate("GUIClass", "92", nullptr));
        QTableWidgetItem *___qtablewidgetitem392 = dashboard_table10->verticalHeaderItem(2);
        ___qtablewidgetitem392->setText(QCoreApplication::translate("GUIClass", "93", nullptr));
        QTableWidgetItem *___qtablewidgetitem393 = dashboard_table10->verticalHeaderItem(3);
        ___qtablewidgetitem393->setText(QCoreApplication::translate("GUIClass", "94", nullptr));
        QTableWidgetItem *___qtablewidgetitem394 = dashboard_table10->verticalHeaderItem(4);
        ___qtablewidgetitem394->setText(QCoreApplication::translate("GUIClass", "95", nullptr));
        QTableWidgetItem *___qtablewidgetitem395 = dashboard_table10->verticalHeaderItem(5);
        ___qtablewidgetitem395->setText(QCoreApplication::translate("GUIClass", "96", nullptr));
        QTableWidgetItem *___qtablewidgetitem396 = dashboard_table10->verticalHeaderItem(6);
        ___qtablewidgetitem396->setText(QCoreApplication::translate("GUIClass", "97", nullptr));
        QTableWidgetItem *___qtablewidgetitem397 = dashboard_table10->verticalHeaderItem(7);
        ___qtablewidgetitem397->setText(QCoreApplication::translate("GUIClass", "98", nullptr));
        QTableWidgetItem *___qtablewidgetitem398 = dashboard_table10->verticalHeaderItem(8);
        ___qtablewidgetitem398->setText(QCoreApplication::translate("GUIClass", "99", nullptr));
        QTableWidgetItem *___qtablewidgetitem399 = dashboard_table10->verticalHeaderItem(9);
        ___qtablewidgetitem399->setText(QCoreApplication::translate("GUIClass", "100", nullptr));
        RightButtonDashboard->setText(QString());
        LeftButtonDashboard->setText(QString());
        resetdashboard->setText(QString());
        label->setText(QCoreApplication::translate("GUIClass", "\353\270\224\353\241\235\354\240\225\353\263\264", nullptr));
        blockcount_2->setText(QCoreApplication::translate("GUIClass", "\354\240\204\354\262\264 \353\270\224\353\241\235 \354\210\230 : ", nullptr));
        usercount_2->setText(QCoreApplication::translate("GUIClass", "\354\227\260\352\262\260 \353\205\270\353\223\234 \354\210\230 : ", nullptr));
        QTableWidgetItem *___qtablewidgetitem400 = txlist->horizontalHeaderItem(0);
        ___qtablewidgetitem400->setText(QCoreApplication::translate("GUIClass", "txid", nullptr));
        QTableWidgetItem *___qtablewidgetitem401 = txlist->verticalHeaderItem(0);
        ___qtablewidgetitem401->setText(QCoreApplication::translate("GUIClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem402 = txlist->verticalHeaderItem(1);
        ___qtablewidgetitem402->setText(QCoreApplication::translate("GUIClass", "\354\203\210 \354\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem403 = txlist->verticalHeaderItem(2);
        ___qtablewidgetitem403->setText(QCoreApplication::translate("GUIClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem404 = txlist->verticalHeaderItem(3);
        ___qtablewidgetitem404->setText(QCoreApplication::translate("GUIClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem405 = txlist->verticalHeaderItem(4);
        ___qtablewidgetitem405->setText(QCoreApplication::translate("GUIClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem406 = txlist->verticalHeaderItem(5);
        ___qtablewidgetitem406->setText(QCoreApplication::translate("GUIClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem407 = txlist->verticalHeaderItem(6);
        ___qtablewidgetitem407->setText(QCoreApplication::translate("GUIClass", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem408 = txlist->verticalHeaderItem(7);
        ___qtablewidgetitem408->setText(QCoreApplication::translate("GUIClass", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem409 = txlist->verticalHeaderItem(8);
        ___qtablewidgetitem409->setText(QCoreApplication::translate("GUIClass", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem410 = txlist->verticalHeaderItem(9);
        ___qtablewidgetitem410->setText(QCoreApplication::translate("GUIClass", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem411 = txlist->verticalHeaderItem(10);
        ___qtablewidgetitem411->setText(QCoreApplication::translate("GUIClass", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem412 = txlist->verticalHeaderItem(11);
        ___qtablewidgetitem412->setText(QCoreApplication::translate("GUIClass", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem413 = txlist->verticalHeaderItem(12);
        ___qtablewidgetitem413->setText(QCoreApplication::translate("GUIClass", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem414 = txlist->verticalHeaderItem(13);
        ___qtablewidgetitem414->setText(QCoreApplication::translate("GUIClass", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem415 = txlist->verticalHeaderItem(14);
        ___qtablewidgetitem415->setText(QCoreApplication::translate("GUIClass", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem416 = txlist->verticalHeaderItem(15);
        ___qtablewidgetitem416->setText(QCoreApplication::translate("GUIClass", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem417 = txlist->verticalHeaderItem(16);
        ___qtablewidgetitem417->setText(QCoreApplication::translate("GUIClass", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem418 = txlist->verticalHeaderItem(17);
        ___qtablewidgetitem418->setText(QCoreApplication::translate("GUIClass", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem419 = txlist->verticalHeaderItem(18);
        ___qtablewidgetitem419->setText(QCoreApplication::translate("GUIClass", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem420 = txlist->verticalHeaderItem(19);
        ___qtablewidgetitem420->setText(QCoreApplication::translate("GUIClass", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem421 = txlist->verticalHeaderItem(20);
        ___qtablewidgetitem421->setText(QCoreApplication::translate("GUIClass", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem422 = txlist->verticalHeaderItem(21);
        ___qtablewidgetitem422->setText(QCoreApplication::translate("GUIClass", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem423 = txlist->verticalHeaderItem(22);
        ___qtablewidgetitem423->setText(QCoreApplication::translate("GUIClass", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem424 = txlist->verticalHeaderItem(23);
        ___qtablewidgetitem424->setText(QCoreApplication::translate("GUIClass", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem425 = txlist->verticalHeaderItem(24);
        ___qtablewidgetitem425->setText(QCoreApplication::translate("GUIClass", "24", nullptr));
        QTableWidgetItem *___qtablewidgetitem426 = txlist->verticalHeaderItem(25);
        ___qtablewidgetitem426->setText(QCoreApplication::translate("GUIClass", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem427 = txlist->verticalHeaderItem(26);
        ___qtablewidgetitem427->setText(QCoreApplication::translate("GUIClass", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem428 = txlist->verticalHeaderItem(27);
        ___qtablewidgetitem428->setText(QCoreApplication::translate("GUIClass", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem429 = txlist->verticalHeaderItem(28);
        ___qtablewidgetitem429->setText(QCoreApplication::translate("GUIClass", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem430 = txlist->verticalHeaderItem(29);
        ___qtablewidgetitem430->setText(QCoreApplication::translate("GUIClass", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem431 = txlist->verticalHeaderItem(30);
        ___qtablewidgetitem431->setText(QCoreApplication::translate("GUIClass", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem432 = txlist->verticalHeaderItem(31);
        ___qtablewidgetitem432->setText(QCoreApplication::translate("GUIClass", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem433 = txlist->verticalHeaderItem(32);
        ___qtablewidgetitem433->setText(QCoreApplication::translate("GUIClass", "32", nullptr));
        QTableWidgetItem *___qtablewidgetitem434 = txlist->verticalHeaderItem(33);
        ___qtablewidgetitem434->setText(QCoreApplication::translate("GUIClass", "33", nullptr));
        QTableWidgetItem *___qtablewidgetitem435 = txlist->verticalHeaderItem(34);
        ___qtablewidgetitem435->setText(QCoreApplication::translate("GUIClass", "34", nullptr));
        QTableWidgetItem *___qtablewidgetitem436 = txlist->verticalHeaderItem(35);
        ___qtablewidgetitem436->setText(QCoreApplication::translate("GUIClass", "36", nullptr));
        QTableWidgetItem *___qtablewidgetitem437 = txlist->verticalHeaderItem(36);
        ___qtablewidgetitem437->setText(QCoreApplication::translate("GUIClass", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem438 = txlist->verticalHeaderItem(37);
        ___qtablewidgetitem438->setText(QCoreApplication::translate("GUIClass", "37", nullptr));
        QTableWidgetItem *___qtablewidgetitem439 = txlist->verticalHeaderItem(38);
        ___qtablewidgetitem439->setText(QCoreApplication::translate("GUIClass", "38", nullptr));
        QTableWidgetItem *___qtablewidgetitem440 = txlist->verticalHeaderItem(39);
        ___qtablewidgetitem440->setText(QCoreApplication::translate("GUIClass", "39", nullptr));
        QTableWidgetItem *___qtablewidgetitem441 = txlist->verticalHeaderItem(40);
        ___qtablewidgetitem441->setText(QCoreApplication::translate("GUIClass", "40", nullptr));
        QTableWidgetItem *___qtablewidgetitem442 = txlist->verticalHeaderItem(41);
        ___qtablewidgetitem442->setText(QCoreApplication::translate("GUIClass", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem443 = txlist->verticalHeaderItem(42);
        ___qtablewidgetitem443->setText(QCoreApplication::translate("GUIClass", "43", nullptr));
        QTableWidgetItem *___qtablewidgetitem444 = txlist->verticalHeaderItem(43);
        ___qtablewidgetitem444->setText(QCoreApplication::translate("GUIClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem445 = txlist->verticalHeaderItem(44);
        ___qtablewidgetitem445->setText(QCoreApplication::translate("GUIClass", "44", nullptr));
        QTableWidgetItem *___qtablewidgetitem446 = txlist->verticalHeaderItem(45);
        ___qtablewidgetitem446->setText(QCoreApplication::translate("GUIClass", "45", nullptr));
        QTableWidgetItem *___qtablewidgetitem447 = txlist->verticalHeaderItem(46);
        ___qtablewidgetitem447->setText(QCoreApplication::translate("GUIClass", "46", nullptr));
        QTableWidgetItem *___qtablewidgetitem448 = txlist->verticalHeaderItem(47);
        ___qtablewidgetitem448->setText(QCoreApplication::translate("GUIClass", "47", nullptr));
        QTableWidgetItem *___qtablewidgetitem449 = txlist->verticalHeaderItem(48);
        ___qtablewidgetitem449->setText(QCoreApplication::translate("GUIClass", "48", nullptr));
        QTableWidgetItem *___qtablewidgetitem450 = txlist->verticalHeaderItem(49);
        ___qtablewidgetitem450->setText(QCoreApplication::translate("GUIClass", "49", nullptr));
        QTableWidgetItem *___qtablewidgetitem451 = txlist->verticalHeaderItem(50);
        ___qtablewidgetitem451->setText(QCoreApplication::translate("GUIClass", "50", nullptr));
        QTableWidgetItem *___qtablewidgetitem452 = txlist->verticalHeaderItem(51);
        ___qtablewidgetitem452->setText(QCoreApplication::translate("GUIClass", "51", nullptr));
        QTableWidgetItem *___qtablewidgetitem453 = txlist->verticalHeaderItem(52);
        ___qtablewidgetitem453->setText(QCoreApplication::translate("GUIClass", "52", nullptr));
        QTableWidgetItem *___qtablewidgetitem454 = txlist->verticalHeaderItem(53);
        ___qtablewidgetitem454->setText(QCoreApplication::translate("GUIClass", "53", nullptr));
        QTableWidgetItem *___qtablewidgetitem455 = txlist->verticalHeaderItem(54);
        ___qtablewidgetitem455->setText(QCoreApplication::translate("GUIClass", "54", nullptr));
        QTableWidgetItem *___qtablewidgetitem456 = txlist->verticalHeaderItem(55);
        ___qtablewidgetitem456->setText(QCoreApplication::translate("GUIClass", "55", nullptr));
        QTableWidgetItem *___qtablewidgetitem457 = txlist->verticalHeaderItem(56);
        ___qtablewidgetitem457->setText(QCoreApplication::translate("GUIClass", "56", nullptr));
        QTableWidgetItem *___qtablewidgetitem458 = txlist->verticalHeaderItem(57);
        ___qtablewidgetitem458->setText(QCoreApplication::translate("GUIClass", "58", nullptr));
        QTableWidgetItem *___qtablewidgetitem459 = txlist->verticalHeaderItem(58);
        ___qtablewidgetitem459->setText(QCoreApplication::translate("GUIClass", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem460 = txlist->verticalHeaderItem(59);
        ___qtablewidgetitem460->setText(QCoreApplication::translate("GUIClass", "59", nullptr));
        QTableWidgetItem *___qtablewidgetitem461 = txlist->verticalHeaderItem(60);
        ___qtablewidgetitem461->setText(QCoreApplication::translate("GUIClass", "60", nullptr));
        QTableWidgetItem *___qtablewidgetitem462 = txlist->verticalHeaderItem(61);
        ___qtablewidgetitem462->setText(QCoreApplication::translate("GUIClass", "61", nullptr));
        QTableWidgetItem *___qtablewidgetitem463 = txlist->verticalHeaderItem(62);
        ___qtablewidgetitem463->setText(QCoreApplication::translate("GUIClass", "62", nullptr));
        QTableWidgetItem *___qtablewidgetitem464 = txlist->verticalHeaderItem(63);
        ___qtablewidgetitem464->setText(QCoreApplication::translate("GUIClass", "63", nullptr));
        QTableWidgetItem *___qtablewidgetitem465 = txlist->verticalHeaderItem(64);
        ___qtablewidgetitem465->setText(QCoreApplication::translate("GUIClass", "64", nullptr));
        QTableWidgetItem *___qtablewidgetitem466 = txlist->verticalHeaderItem(65);
        ___qtablewidgetitem466->setText(QCoreApplication::translate("GUIClass", "65", nullptr));
        QTableWidgetItem *___qtablewidgetitem467 = txlist->verticalHeaderItem(66);
        ___qtablewidgetitem467->setText(QCoreApplication::translate("GUIClass", "66", nullptr));
        QTableWidgetItem *___qtablewidgetitem468 = txlist->verticalHeaderItem(67);
        ___qtablewidgetitem468->setText(QCoreApplication::translate("GUIClass", "67", nullptr));
        QTableWidgetItem *___qtablewidgetitem469 = txlist->verticalHeaderItem(68);
        ___qtablewidgetitem469->setText(QCoreApplication::translate("GUIClass", "69", nullptr));
        QTableWidgetItem *___qtablewidgetitem470 = txlist->verticalHeaderItem(69);
        ___qtablewidgetitem470->setText(QCoreApplication::translate("GUIClass", "\354\203\210 \354\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem471 = txlist->verticalHeaderItem(70);
        ___qtablewidgetitem471->setText(QCoreApplication::translate("GUIClass", "70", nullptr));
        QTableWidgetItem *___qtablewidgetitem472 = txlist->verticalHeaderItem(71);
        ___qtablewidgetitem472->setText(QCoreApplication::translate("GUIClass", "71", nullptr));
        QTableWidgetItem *___qtablewidgetitem473 = txlist->verticalHeaderItem(72);
        ___qtablewidgetitem473->setText(QCoreApplication::translate("GUIClass", "72", nullptr));
        QTableWidgetItem *___qtablewidgetitem474 = txlist->verticalHeaderItem(73);
        ___qtablewidgetitem474->setText(QCoreApplication::translate("GUIClass", "73", nullptr));
        QTableWidgetItem *___qtablewidgetitem475 = txlist->verticalHeaderItem(74);
        ___qtablewidgetitem475->setText(QCoreApplication::translate("GUIClass", "74", nullptr));
        QTableWidgetItem *___qtablewidgetitem476 = txlist->verticalHeaderItem(75);
        ___qtablewidgetitem476->setText(QCoreApplication::translate("GUIClass", "75", nullptr));
        QTableWidgetItem *___qtablewidgetitem477 = txlist->verticalHeaderItem(76);
        ___qtablewidgetitem477->setText(QCoreApplication::translate("GUIClass", "76", nullptr));
        QTableWidgetItem *___qtablewidgetitem478 = txlist->verticalHeaderItem(77);
        ___qtablewidgetitem478->setText(QCoreApplication::translate("GUIClass", "77", nullptr));
        QTableWidgetItem *___qtablewidgetitem479 = txlist->verticalHeaderItem(78);
        ___qtablewidgetitem479->setText(QCoreApplication::translate("GUIClass", "78", nullptr));
        QTableWidgetItem *___qtablewidgetitem480 = txlist->verticalHeaderItem(79);
        ___qtablewidgetitem480->setText(QCoreApplication::translate("GUIClass", "79", nullptr));
        QTableWidgetItem *___qtablewidgetitem481 = txlist->verticalHeaderItem(80);
        ___qtablewidgetitem481->setText(QCoreApplication::translate("GUIClass", "80", nullptr));
        QTableWidgetItem *___qtablewidgetitem482 = txlist->verticalHeaderItem(81);
        ___qtablewidgetitem482->setText(QCoreApplication::translate("GUIClass", "81", nullptr));
        QTableWidgetItem *___qtablewidgetitem483 = txlist->verticalHeaderItem(82);
        ___qtablewidgetitem483->setText(QCoreApplication::translate("GUIClass", "82", nullptr));
        QTableWidgetItem *___qtablewidgetitem484 = txlist->verticalHeaderItem(83);
        ___qtablewidgetitem484->setText(QCoreApplication::translate("GUIClass", "83", nullptr));
        QTableWidgetItem *___qtablewidgetitem485 = txlist->verticalHeaderItem(84);
        ___qtablewidgetitem485->setText(QCoreApplication::translate("GUIClass", "84", nullptr));
        QTableWidgetItem *___qtablewidgetitem486 = txlist->verticalHeaderItem(85);
        ___qtablewidgetitem486->setText(QCoreApplication::translate("GUIClass", "85", nullptr));
        QTableWidgetItem *___qtablewidgetitem487 = txlist->verticalHeaderItem(86);
        ___qtablewidgetitem487->setText(QCoreApplication::translate("GUIClass", "86", nullptr));
        QTableWidgetItem *___qtablewidgetitem488 = txlist->verticalHeaderItem(87);
        ___qtablewidgetitem488->setText(QCoreApplication::translate("GUIClass", "87", nullptr));
        QTableWidgetItem *___qtablewidgetitem489 = txlist->verticalHeaderItem(88);
        ___qtablewidgetitem489->setText(QCoreApplication::translate("GUIClass", "88", nullptr));
        QTableWidgetItem *___qtablewidgetitem490 = txlist->verticalHeaderItem(89);
        ___qtablewidgetitem490->setText(QCoreApplication::translate("GUIClass", "89", nullptr));
        QTableWidgetItem *___qtablewidgetitem491 = txlist->verticalHeaderItem(90);
        ___qtablewidgetitem491->setText(QCoreApplication::translate("GUIClass", "90", nullptr));
        QTableWidgetItem *___qtablewidgetitem492 = txlist->verticalHeaderItem(91);
        ___qtablewidgetitem492->setText(QCoreApplication::translate("GUIClass", "91", nullptr));
        QTableWidgetItem *___qtablewidgetitem493 = txlist->verticalHeaderItem(92);
        ___qtablewidgetitem493->setText(QCoreApplication::translate("GUIClass", "92", nullptr));
        QTableWidgetItem *___qtablewidgetitem494 = txlist->verticalHeaderItem(93);
        ___qtablewidgetitem494->setText(QCoreApplication::translate("GUIClass", "93", nullptr));
        QTableWidgetItem *___qtablewidgetitem495 = txlist->verticalHeaderItem(94);
        ___qtablewidgetitem495->setText(QCoreApplication::translate("GUIClass", "94", nullptr));
        QTableWidgetItem *___qtablewidgetitem496 = txlist->verticalHeaderItem(95);
        ___qtablewidgetitem496->setText(QCoreApplication::translate("GUIClass", "95", nullptr));
        QTableWidgetItem *___qtablewidgetitem497 = txlist->verticalHeaderItem(96);
        ___qtablewidgetitem497->setText(QCoreApplication::translate("GUIClass", "96", nullptr));
        QTableWidgetItem *___qtablewidgetitem498 = txlist->verticalHeaderItem(97);
        ___qtablewidgetitem498->setText(QCoreApplication::translate("GUIClass", "97", nullptr));
        QTableWidgetItem *___qtablewidgetitem499 = txlist->verticalHeaderItem(98);
        ___qtablewidgetitem499->setText(QCoreApplication::translate("GUIClass", "99", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
