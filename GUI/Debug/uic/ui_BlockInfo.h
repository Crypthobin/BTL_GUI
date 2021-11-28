/********************************************************************************
** Form generated from reading UI file 'BlockInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKINFO_H
#define UI_BLOCKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_17;
    QFrame *line_3;
    QLabel *label_6;
    QFrame *line_10;
    QLabel *label_9;
    QLineEdit *merkleroot;
    QLabel *label_14;
    QFrame *line_11;
    QFrame *line_6;
    QLineEdit *hash;
    QLabel *label_16;
    QLabel *label_5;
    QLineEdit *previousblockhash;
    QLineEdit *size;
    QFrame *line_2;
    QLabel *label_15;
    QFrame *line_13;
    QLabel *label_20;
    QLineEdit *confirmations;
    QFrame *line_7;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_8;
    QLineEdit *version;
    QLineEdit *time;
    QLineEdit *strippedsize;
    QFrame *line_9;
    QLineEdit *bits;
    QFrame *line_5;
    QLabel *label_19;
    QTextBrowser *blockinfo;
    QLineEdit *versionHex;
    QLabel *label_12;
    QLabel *label_8;
    QLineEdit *chainwork;
    QFrame *line_14;
    QLabel *label_7;
    QLineEdit *difficulty;
    QLabel *label_4;
    QFrame *line_16;
    QLabel *label_10;
    QTableWidget *tx;
    QLineEdit *height;
    QLineEdit *nTx;
    QLineEdit *weight;
    QFrame *line_4;
    QFrame *line_15;
    QLineEdit *nonce;
    QFrame *line_12;
    QLabel *label_13;
    QLabel *label_3;
    QFrame *line_33;
    QWidget *page_2;
    QTextBrowser *SigPubBrowser;
    QPushButton *backspace;
    QWidget *page_5;
    QTextBrowser *SigPubBrowser_3;
    QPushButton *backspace_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1497, 892);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font.setPointSize(16);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QString::fromUtf8("background : rgb(36,42,50);"));
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 70, 1321, 831));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_17 = new QLabel(page);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(690, 590, 171, 41));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color : white;"));
        line_3 = new QFrame(page);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(70, 210, 1201, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        line_3->setFont(font1);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 290, 171, 41));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color : white;"));
        line_10 = new QFrame(page);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(70, 580, 1201, 16));
        line_10->setFont(font1);
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 470, 171, 41));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color : white;"));
        merkleroot = new QLineEdit(page);
        merkleroot->setObjectName(QString::fromUtf8("merkleroot"));
        merkleroot->setGeometry(QRect(300, 110, 981, 41));
        merkleroot->setFont(font);
        merkleroot->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(690, 410, 171, 41));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color : white;"));
        line_11 = new QFrame(page);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(70, 625, 1221, 31));
        line_11->setFont(font1);
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(page);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(70, 390, 1201, 21));
        line_6->setFont(font1);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        hash = new QLineEdit(page);
        hash->setObjectName(QString::fromUtf8("hash"));
        hash->setGeometry(QRect(300, 50, 981, 41));
        hash->setFont(font);
        hash->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(690, 530, 171, 41));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color : white;"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 230, 201, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font2.setPointSize(15);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color : white;"));
        previousblockhash = new QLineEdit(page);
        previousblockhash->setObjectName(QString::fromUtf8("previousblockhash"));
        previousblockhash->setGeometry(QRect(300, 230, 981, 41));
        previousblockhash->setFont(font);
        previousblockhash->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        size = new QLineEdit(page);
        size->setObjectName(QString::fromUtf8("size"));
        size->setGeometry(QRect(870, 530, 391, 41));
        size->setFont(font);
        size->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(70, 150, 1201, 21));
        line_2->setFont(font1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(690, 470, 171, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color : white;"));
        line_13 = new QFrame(page);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(253, 40, 41, 761));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(page);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(80, 660, 171, 141));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color : white;"));
        confirmations = new QLineEdit(page);
        confirmations->setObjectName(QString::fromUtf8("confirmations"));
        confirmations->setGeometry(QRect(300, 290, 361, 41));
        confirmations->setFont(font);
        confirmations->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_7 = new QFrame(page);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(70, 450, 1201, 21));
        line_7->setFont(font1);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(70, 90, 1201, 21));
        line->setFont(font1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 171, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color : white;"));
        line_8 = new QFrame(page);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(70, 510, 1201, 21));
        line_8->setFont(font1);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        version = new QLineEdit(page);
        version->setObjectName(QString::fromUtf8("version"));
        version->setGeometry(QRect(300, 410, 361, 41));
        version->setFont(font);
        version->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        time = new QLineEdit(page);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(300, 530, 361, 41));
        time->setFont(font);
        time->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        strippedsize = new QLineEdit(page);
        strippedsize->setObjectName(QString::fromUtf8("strippedsize"));
        strippedsize->setGeometry(QRect(870, 470, 391, 41));
        strippedsize->setFont(font);
        strippedsize->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_9 = new QFrame(page);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(70, 570, 1201, 16));
        line_9->setFont(font1);
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        bits = new QLineEdit(page);
        bits->setObjectName(QString::fromUtf8("bits"));
        bits->setGeometry(QRect(870, 290, 391, 41));
        bits->setFont(font);
        bits->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_5 = new QFrame(page);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(70, 330, 1201, 21));
        line_5->setFont(font1);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(page);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(690, 290, 171, 41));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color : white;"));
        blockinfo = new QTextBrowser(page);
        blockinfo->setObjectName(QString::fromUtf8("blockinfo"));
        blockinfo->setGeometry(QRect(80, 40, 1181, 541));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font3.setPointSize(20);
        blockinfo->setFont(font3);
        versionHex = new QLineEdit(page);
        versionHex->setObjectName(QString::fromUtf8("versionHex"));
        versionHex->setGeometry(QRect(300, 470, 361, 41));
        versionHex->setFont(font);
        versionHex->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(80, 600, 171, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color : white;"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 410, 171, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color : white;"));
        chainwork = new QLineEdit(page);
        chainwork->setObjectName(QString::fromUtf8("chainwork"));
        chainwork->setGeometry(QRect(300, 170, 981, 41));
        chainwork->setFont(font);
        chainwork->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_14 = new QFrame(page);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(60, 50, 16, 731));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 350, 171, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color : white;"));
        difficulty = new QLineEdit(page);
        difficulty->setObjectName(QString::fromUtf8("difficulty"));
        difficulty->setGeometry(QRect(870, 350, 391, 41));
        difficulty->setFont(font);
        difficulty->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 170, 171, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color : white;"));
        line_16 = new QFrame(page);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(670, 280, 20, 371));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 530, 171, 41));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color : white;"));
        tx = new QTableWidget(page);
        if (tx->columnCount() < 1)
            tx->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tx->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tx->setObjectName(QString::fromUtf8("tx"));
        tx->setGeometry(QRect(300, 610, 981, 192));
        tx->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
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
"background:rgb(36,42,50);\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#DCDCDC;\n"
"border:1px solid #242424;\n"
"border-left-width:0;\n"
"\n"
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
        height = new QLineEdit(page);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(300, 350, 361, 41));
        height->setFont(font);
        height->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        nTx = new QLineEdit(page);
        nTx->setObjectName(QString::fromUtf8("nTx"));
        nTx->setGeometry(QRect(870, 410, 391, 41));
        nTx->setFont(font);
        nTx->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        weight = new QLineEdit(page);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(870, 590, 411, 41));
        weight->setFont(font);
        weight->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : blac"));
        line_4 = new QFrame(page);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(70, 270, 1201, 21));
        line_4->setFont(font1);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(page);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(1269, 50, 31, 601));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        nonce = new QLineEdit(page);
        nonce->setObjectName(QString::fromUtf8("nonce"));
        nonce->setGeometry(QRect(300, 600, 361, 41));
        nonce->setFont(font);
        nonce->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : black;"));
        line_12 = new QFrame(page);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(70, 40, 1201, 16));
        line_12->setFont(font1);
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(690, 350, 171, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color : white;"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 110, 171, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color : white;"));
        line_33 = new QFrame(page);
        line_33->setObjectName(QString::fromUtf8("line_33"));
        line_33->setGeometry(QRect(60, 640, 1201, 16));
        line_33->setFont(font1);
        line_33->setFrameShape(QFrame::HLine);
        line_33->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page);
        blockinfo->raise();
        line_3->raise();
        label_6->raise();
        line_10->raise();
        label_9->raise();
        merkleroot->raise();
        label_14->raise();
        line_11->raise();
        line_6->raise();
        hash->raise();
        label_16->raise();
        label_5->raise();
        previousblockhash->raise();
        size->raise();
        line_2->raise();
        label_15->raise();
        line_13->raise();
        label_20->raise();
        confirmations->raise();
        line_7->raise();
        line->raise();
        label_2->raise();
        line_8->raise();
        version->raise();
        time->raise();
        strippedsize->raise();
        line_9->raise();
        bits->raise();
        line_5->raise();
        label_19->raise();
        versionHex->raise();
        label_12->raise();
        label_8->raise();
        chainwork->raise();
        line_14->raise();
        label_7->raise();
        difficulty->raise();
        label_4->raise();
        line_16->raise();
        label_10->raise();
        tx->raise();
        height->raise();
        nTx->raise();
        line_4->raise();
        line_15->raise();
        nonce->raise();
        line_12->raise();
        label_13->raise();
        label_3->raise();
        label_17->raise();
        weight->raise();
        line_33->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        SigPubBrowser = new QTextBrowser(page_2);
        SigPubBrowser->setObjectName(QString::fromUtf8("SigPubBrowser"));
        SigPubBrowser->setGeometry(QRect(40, 60, 1231, 751));
        SigPubBrowser->setFont(font);
        SigPubBrowser->setStyleSheet(QString::fromUtf8("color : white;"));
        backspace = new QPushButton(page_2);
        backspace->setObjectName(QString::fromUtf8("backspace"));
        backspace->setGeometry(QRect(50, 0, 51, 51));
        backspace->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-image:url(:/Backspace/image/leftbutton.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Backspace/image/leftbutton2.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        SigPubBrowser_3 = new QTextBrowser(page_5);
        SigPubBrowser_3->setObjectName(QString::fromUtf8("SigPubBrowser_3"));
        SigPubBrowser_3->setGeometry(QRect(40, 60, 1231, 751));
        SigPubBrowser_3->setFont(font);
        SigPubBrowser_3->setStyleSheet(QString::fromUtf8("color : white;"));
        backspace_3 = new QPushButton(page_5);
        backspace_3->setObjectName(QString::fromUtf8("backspace_3"));
        backspace_3->setGeometry(QRect(50, 0, 51, 51));
        backspace_3->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-image:url(:/Backspace/image/leftbutton.png);\n"
"color : rgb(204,204,204);\n"
"}\n"
"QPushButton:hover {\n"
"   border-image:url(:/Backspace/image/leftbutton2.png);\n"
"color : rgb(255,255,255);\n"
"	\n"
"}\n"
""));
        stackedWidget->addWidget(page_5);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "weight", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "confirmations", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "versionHex", nullptr));
        merkleroot->setText(QString());
        label_14->setText(QCoreApplication::translate("Dialog", "nTx", nullptr));
        hash->setText(QString());
        label_16->setText(QCoreApplication::translate("Dialog", "size", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "previousblockhash", nullptr));
        previousblockhash->setText(QString());
        size->setText(QString());
        label_15->setText(QCoreApplication::translate("Dialog", "strippedsize", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "TX", nullptr));
        confirmations->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "hash", nullptr));
        version->setText(QString());
        time->setText(QString());
        strippedsize->setText(QString());
        bits->setText(QString());
        label_19->setText(QCoreApplication::translate("Dialog", "bits", nullptr));
        versionHex->setText(QString());
        label_12->setText(QCoreApplication::translate("Dialog", "nonce", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "version", nullptr));
        chainwork->setText(QString());
        label_7->setText(QCoreApplication::translate("Dialog", "height", nullptr));
        difficulty->setText(QString());
        label_4->setText(QCoreApplication::translate("Dialog", "chainwork", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "time", nullptr));
        height->setText(QString());
        nTx->setText(QString());
        weight->setText(QString());
        nonce->setText(QString());
        label_13->setText(QCoreApplication::translate("Dialog", "difficulty", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "merkleroot", nullptr));
        SigPubBrowser->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\271\231\352\267\270\353\240\210\354\262\264'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        backspace->setText(QString());
        SigPubBrowser_3->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\271\231\352\267\270\353\240\210\354\262\264'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        backspace_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKINFO_H
