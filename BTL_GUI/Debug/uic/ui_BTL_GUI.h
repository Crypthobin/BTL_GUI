/********************************************************************************
** Form generated from reading UI file 'BTL_GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTL_GUI_H
#define UI_BTL_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BTL_GUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *closeBtn;
    QPushButton *createWallet;
    QGraphicsView *graphicsView;
    QLineEdit *walletname;
    QLabel *walletlabel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *resetwallet;
    QPushButton *mining;
    QSpinBox *miningcount;
    QLabel *addresslabel;
    QLabel *label_3;
    QLabel *balancelabel;
    QLineEdit *sendaddr;
    QLineEdit *amount;
    QPushButton *send;
    QLineEdit *fee_rate;
    QLabel *sendresult;
    QLabel *miningresult;
    QFrame *line;
    QLabel *label_4;
    QPushButton *resettx;
    QLabel *tx_num_label;
    QFrame *line_2;
    QLabel *blockcount;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *usercount;
    QLabel *blocklist;
    QLabel *label_7;
    QPushButton *resetinfo;
    QPushButton *block1;
    QPushButton *block2;
    QPushButton *block3;
    QPushButton *block4;
    QPushButton *block5;
    QPushButton *block8;
    QPushButton *block10;
    QPushButton *block9;
    QPushButton *block6;
    QPushButton *block7;
    QLabel *blocknum1;
    QLabel *blocknum2;
    QLabel *blocknum3;
    QLabel *blocknum4;
    QLabel *blocknum8;
    QLabel *blocknum6;
    QLabel *blocknum7;
    QLabel *blocknum5;
    QLabel *blocknum10;
    QLabel *blocknum9;
    QLabel *blockinfo;
    QLabel *tx_id_label;
    QLabel *tx_amount_label;
    QLabel *tx_send;
    QLabel *tx_addr_label;
    QLabel *tx_amount;
    QLabel *tx_addr;
    QLabel *tx_id;
    QLabel *tx_addr_2;
    QLabel *tx_id_label_2;
    QLabel *tx_id_2;
    QLabel *tx_amount_2;
    QLabel *tx_num_label_2;
    QLabel *tx_send_2;
    QLabel *tx_addr_label_2;
    QLabel *tx_amount_label_2;
    QLabel *tx_addr_3;
    QLabel *tx_id_label_3;
    QLabel *tx_id_3;
    QLabel *tx_amount_3;
    QLabel *tx_num_label_3;
    QLabel *tx_send_3;
    QLabel *tx_addr_label_3;
    QLabel *tx_amount_label_3;
    QLabel *tx_addr_4;
    QLabel *tx_id_label_4;
    QLabel *tx_id_4;
    QLabel *tx_amount_4;
    QLabel *tx_num_label_4;
    QLabel *tx_send_4;
    QLabel *tx_addr_label_4;
    QLabel *tx_amount_label_4;
    QLabel *tx_addr_5;
    QLabel *tx_id_label_5;
    QLabel *tx_id_5;
    QLabel *tx_amount_5;
    QLabel *tx_num_label_5;
    QLabel *tx_send_5;
    QLabel *tx_addr_label_5;
    QLabel *tx_amount_label_5;
    QLabel *tx_addr_6;
    QLabel *tx_id_label_6;
    QLabel *tx_id_6;
    QLabel *tx_amount_6;
    QLabel *tx_num_label_6;
    QLabel *tx_send_6;
    QLabel *tx_addr_label_6;
    QLabel *tx_amount_label_6;
    QLabel *tx_addr_7;
    QLabel *tx_id_label_7;
    QLabel *tx_id_7;
    QLabel *tx_amount_7;
    QLabel *tx_num_label_7;
    QLabel *tx_send_7;
    QLabel *tx_addr_label_7;
    QLabel *tx_amount_label_7;
    QLabel *tx_mining;
    QLabel *tx_mining_2;
    QLabel *tx_mining_3;
    QLabel *tx_mining_4;
    QLabel *tx_mining_5;
    QLabel *tx_mining_6;
    QLabel *tx_mining_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BTL_GUIClass)
    {
        if (BTL_GUIClass->objectName().isEmpty())
            BTL_GUIClass->setObjectName(QString::fromUtf8("BTL_GUIClass"));
        BTL_GUIClass->resize(1572, 762);
        centralWidget = new QWidget(BTL_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(1490, 0, 75, 23));
        createWallet = new QPushButton(centralWidget);
        createWallet->setObjectName(QString::fromUtf8("createWallet"));
        createWallet->setGeometry(QRect(130, 30, 75, 23));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1571, 691));
        walletname = new QLineEdit(centralWidget);
        walletname->setObjectName(QString::fromUtf8("walletname"));
        walletname->setGeometry(QRect(10, 30, 113, 21));
        walletlabel = new QLabel(centralWidget);
        walletlabel->setObjectName(QString::fromUtf8("walletlabel"));
        walletlabel->setGeometry(QRect(110, 130, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 140, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 64, 15));
        resetwallet = new QPushButton(centralWidget);
        resetwallet->setObjectName(QString::fromUtf8("resetwallet"));
        resetwallet->setGeometry(QRect(20, 110, 75, 23));
        mining = new QPushButton(centralWidget);
        mining->setObjectName(QString::fromUtf8("mining"));
        mining->setGeometry(QRect(100, 330, 75, 23));
        miningcount = new QSpinBox(centralWidget);
        miningcount->setObjectName(QString::fromUtf8("miningcount"));
        miningcount->setGeometry(QRect(40, 330, 51, 22));
        miningcount->setMaximum(1000);
        addresslabel = new QLabel(centralWidget);
        addresslabel->setObjectName(QString::fromUtf8("addresslabel"));
        addresslabel->setGeometry(QRect(110, 160, 391, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 200, 64, 15));
        balancelabel = new QLabel(centralWidget);
        balancelabel->setObjectName(QString::fromUtf8("balancelabel"));
        balancelabel->setGeometry(QRect(110, 200, 121, 31));
        sendaddr = new QLineEdit(centralWidget);
        sendaddr->setObjectName(QString::fromUtf8("sendaddr"));
        sendaddr->setGeometry(QRect(540, 10, 531, 21));
        amount = new QLineEdit(centralWidget);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(840, 40, 71, 21));
        send = new QPushButton(centralWidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(1000, 40, 75, 23));
        fee_rate = new QLineEdit(centralWidget);
        fee_rate->setObjectName(QString::fromUtf8("fee_rate"));
        fee_rate->setGeometry(QRect(920, 40, 61, 21));
        sendresult = new QLabel(centralWidget);
        sendresult->setObjectName(QString::fromUtf8("sendresult"));
        sendresult->setGeometry(QRect(540, 70, 531, 51));
        miningresult = new QLabel(centralWidget);
        miningresult->setObjectName(QString::fromUtf8("miningresult"));
        miningresult->setGeometry(QRect(20, 380, 481, 161));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(520, 10, 16, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(550, 140, 71, 16));
        resettx = new QPushButton(centralWidget);
        resettx->setObjectName(QString::fromUtf8("resettx"));
        resettx->setGeometry(QRect(629, 137, 75, 23));
        tx_num_label = new QLabel(centralWidget);
        tx_num_label->setObjectName(QString::fromUtf8("tx_num_label"));
        tx_num_label->setGeometry(QRect(540, 170, 41, 31));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1090, 10, 16, 601));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        blockcount = new QLabel(centralWidget);
        blockcount->setObjectName(QString::fromUtf8("blockcount"));
        blockcount->setGeometry(QRect(1110, 60, 201, 21));
        blockcount->setTextFormat(Qt::RichText);
        blockcount->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1160, 30, 111, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1410, 30, 111, 16));
        usercount = new QLabel(centralWidget);
        usercount->setObjectName(QString::fromUtf8("usercount"));
        usercount->setGeometry(QRect(1360, 60, 201, 21));
        usercount->setAlignment(Qt::AlignCenter);
        blocklist = new QLabel(centralWidget);
        blocklist->setObjectName(QString::fromUtf8("blocklist"));
        blocklist->setGeometry(QRect(1100, 330, 451, 461));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1110, 90, 111, 16));
        resetinfo = new QPushButton(centralWidget);
        resetinfo->setObjectName(QString::fromUtf8("resetinfo"));
        resetinfo->setGeometry(QRect(1300, 80, 75, 23));
        block1 = new QPushButton(centralWidget);
        block1->setObjectName(QString::fromUtf8("block1"));
        block1->setGeometry(QRect(1170, 120, 331, 23));
        block2 = new QPushButton(centralWidget);
        block2->setObjectName(QString::fromUtf8("block2"));
        block2->setGeometry(QRect(1170, 140, 331, 23));
        block3 = new QPushButton(centralWidget);
        block3->setObjectName(QString::fromUtf8("block3"));
        block3->setGeometry(QRect(1170, 160, 331, 23));
        block4 = new QPushButton(centralWidget);
        block4->setObjectName(QString::fromUtf8("block4"));
        block4->setGeometry(QRect(1170, 180, 331, 23));
        block5 = new QPushButton(centralWidget);
        block5->setObjectName(QString::fromUtf8("block5"));
        block5->setGeometry(QRect(1170, 200, 331, 23));
        block8 = new QPushButton(centralWidget);
        block8->setObjectName(QString::fromUtf8("block8"));
        block8->setGeometry(QRect(1170, 260, 331, 23));
        block10 = new QPushButton(centralWidget);
        block10->setObjectName(QString::fromUtf8("block10"));
        block10->setGeometry(QRect(1170, 300, 331, 23));
        block9 = new QPushButton(centralWidget);
        block9->setObjectName(QString::fromUtf8("block9"));
        block9->setGeometry(QRect(1170, 280, 331, 23));
        block6 = new QPushButton(centralWidget);
        block6->setObjectName(QString::fromUtf8("block6"));
        block6->setGeometry(QRect(1170, 220, 331, 23));
        block7 = new QPushButton(centralWidget);
        block7->setObjectName(QString::fromUtf8("block7"));
        block7->setGeometry(QRect(1170, 240, 331, 23));
        blocknum1 = new QLabel(centralWidget);
        blocknum1->setObjectName(QString::fromUtf8("blocknum1"));
        blocknum1->setGeometry(QRect(1100, 120, 71, 16));
        blocknum1->setAlignment(Qt::AlignCenter);
        blocknum2 = new QLabel(centralWidget);
        blocknum2->setObjectName(QString::fromUtf8("blocknum2"));
        blocknum2->setGeometry(QRect(1100, 140, 71, 16));
        blocknum2->setAlignment(Qt::AlignCenter);
        blocknum3 = new QLabel(centralWidget);
        blocknum3->setObjectName(QString::fromUtf8("blocknum3"));
        blocknum3->setGeometry(QRect(1100, 165, 71, 16));
        blocknum3->setAlignment(Qt::AlignCenter);
        blocknum4 = new QLabel(centralWidget);
        blocknum4->setObjectName(QString::fromUtf8("blocknum4"));
        blocknum4->setGeometry(QRect(1100, 186, 71, 16));
        blocknum4->setAlignment(Qt::AlignCenter);
        blocknum8 = new QLabel(centralWidget);
        blocknum8->setObjectName(QString::fromUtf8("blocknum8"));
        blocknum8->setGeometry(QRect(1100, 270, 71, 16));
        blocknum8->setAlignment(Qt::AlignCenter);
        blocknum6 = new QLabel(centralWidget);
        blocknum6->setObjectName(QString::fromUtf8("blocknum6"));
        blocknum6->setGeometry(QRect(1100, 230, 71, 16));
        blocknum6->setAlignment(Qt::AlignCenter);
        blocknum7 = new QLabel(centralWidget);
        blocknum7->setObjectName(QString::fromUtf8("blocknum7"));
        blocknum7->setGeometry(QRect(1100, 240, 71, 16));
        blocknum7->setAlignment(Qt::AlignCenter);
        blocknum5 = new QLabel(centralWidget);
        blocknum5->setObjectName(QString::fromUtf8("blocknum5"));
        blocknum5->setGeometry(QRect(1100, 200, 71, 16));
        blocknum5->setAlignment(Qt::AlignCenter);
        blocknum10 = new QLabel(centralWidget);
        blocknum10->setObjectName(QString::fromUtf8("blocknum10"));
        blocknum10->setGeometry(QRect(1100, 300, 71, 16));
        blocknum10->setAlignment(Qt::AlignCenter);
        blocknum9 = new QLabel(centralWidget);
        blocknum9->setObjectName(QString::fromUtf8("blocknum9"));
        blocknum9->setGeometry(QRect(1100, 280, 71, 16));
        blocknum9->setAlignment(Qt::AlignCenter);
        blockinfo = new QLabel(centralWidget);
        blockinfo->setObjectName(QString::fromUtf8("blockinfo"));
        blockinfo->setGeometry(QRect(1100, 330, 471, 361));
        tx_id_label = new QLabel(centralWidget);
        tx_id_label->setObjectName(QString::fromUtf8("tx_id_label"));
        tx_id_label->setGeometry(QRect(540, 200, 41, 31));
        tx_amount_label = new QLabel(centralWidget);
        tx_amount_label->setObjectName(QString::fromUtf8("tx_amount_label"));
        tx_amount_label->setGeometry(QRect(670, 170, 31, 31));
        tx_send = new QLabel(centralWidget);
        tx_send->setObjectName(QString::fromUtf8("tx_send"));
        tx_send->setGeometry(QRect(750, 170, 51, 31));
        tx_addr_label = new QLabel(centralWidget);
        tx_addr_label->setObjectName(QString::fromUtf8("tx_addr_label"));
        tx_addr_label->setGeometry(QRect(820, 200, 51, 31));
        tx_amount = new QLabel(centralWidget);
        tx_amount->setObjectName(QString::fromUtf8("tx_amount"));
        tx_amount->setGeometry(QRect(640, 170, 31, 31));
        tx_addr = new QLabel(centralWidget);
        tx_addr->setObjectName(QString::fromUtf8("tx_addr"));
        tx_addr->setGeometry(QRect(870, 200, 221, 31));
        tx_id = new QLabel(centralWidget);
        tx_id->setObjectName(QString::fromUtf8("tx_id"));
        tx_id->setGeometry(QRect(580, 200, 221, 31));
        tx_addr_2 = new QLabel(centralWidget);
        tx_addr_2->setObjectName(QString::fromUtf8("tx_addr_2"));
        tx_addr_2->setGeometry(QRect(870, 270, 221, 31));
        tx_id_label_2 = new QLabel(centralWidget);
        tx_id_label_2->setObjectName(QString::fromUtf8("tx_id_label_2"));
        tx_id_label_2->setGeometry(QRect(540, 270, 41, 31));
        tx_id_2 = new QLabel(centralWidget);
        tx_id_2->setObjectName(QString::fromUtf8("tx_id_2"));
        tx_id_2->setGeometry(QRect(580, 270, 221, 31));
        tx_amount_2 = new QLabel(centralWidget);
        tx_amount_2->setObjectName(QString::fromUtf8("tx_amount_2"));
        tx_amount_2->setGeometry(QRect(640, 240, 31, 31));
        tx_num_label_2 = new QLabel(centralWidget);
        tx_num_label_2->setObjectName(QString::fromUtf8("tx_num_label_2"));
        tx_num_label_2->setGeometry(QRect(540, 240, 41, 31));
        tx_send_2 = new QLabel(centralWidget);
        tx_send_2->setObjectName(QString::fromUtf8("tx_send_2"));
        tx_send_2->setGeometry(QRect(750, 240, 51, 31));
        tx_addr_label_2 = new QLabel(centralWidget);
        tx_addr_label_2->setObjectName(QString::fromUtf8("tx_addr_label_2"));
        tx_addr_label_2->setGeometry(QRect(820, 270, 51, 31));
        tx_amount_label_2 = new QLabel(centralWidget);
        tx_amount_label_2->setObjectName(QString::fromUtf8("tx_amount_label_2"));
        tx_amount_label_2->setGeometry(QRect(670, 240, 31, 31));
        tx_addr_3 = new QLabel(centralWidget);
        tx_addr_3->setObjectName(QString::fromUtf8("tx_addr_3"));
        tx_addr_3->setGeometry(QRect(865, 340, 221, 31));
        tx_id_label_3 = new QLabel(centralWidget);
        tx_id_label_3->setObjectName(QString::fromUtf8("tx_id_label_3"));
        tx_id_label_3->setGeometry(QRect(535, 340, 41, 31));
        tx_id_3 = new QLabel(centralWidget);
        tx_id_3->setObjectName(QString::fromUtf8("tx_id_3"));
        tx_id_3->setGeometry(QRect(575, 340, 221, 31));
        tx_amount_3 = new QLabel(centralWidget);
        tx_amount_3->setObjectName(QString::fromUtf8("tx_amount_3"));
        tx_amount_3->setGeometry(QRect(635, 310, 31, 31));
        tx_num_label_3 = new QLabel(centralWidget);
        tx_num_label_3->setObjectName(QString::fromUtf8("tx_num_label_3"));
        tx_num_label_3->setGeometry(QRect(535, 310, 41, 31));
        tx_send_3 = new QLabel(centralWidget);
        tx_send_3->setObjectName(QString::fromUtf8("tx_send_3"));
        tx_send_3->setGeometry(QRect(745, 310, 51, 31));
        tx_addr_label_3 = new QLabel(centralWidget);
        tx_addr_label_3->setObjectName(QString::fromUtf8("tx_addr_label_3"));
        tx_addr_label_3->setGeometry(QRect(815, 340, 51, 31));
        tx_amount_label_3 = new QLabel(centralWidget);
        tx_amount_label_3->setObjectName(QString::fromUtf8("tx_amount_label_3"));
        tx_amount_label_3->setGeometry(QRect(665, 310, 31, 31));
        tx_addr_4 = new QLabel(centralWidget);
        tx_addr_4->setObjectName(QString::fromUtf8("tx_addr_4"));
        tx_addr_4->setGeometry(QRect(870, 420, 221, 31));
        tx_id_label_4 = new QLabel(centralWidget);
        tx_id_label_4->setObjectName(QString::fromUtf8("tx_id_label_4"));
        tx_id_label_4->setGeometry(QRect(540, 420, 41, 31));
        tx_id_4 = new QLabel(centralWidget);
        tx_id_4->setObjectName(QString::fromUtf8("tx_id_4"));
        tx_id_4->setGeometry(QRect(580, 420, 221, 31));
        tx_amount_4 = new QLabel(centralWidget);
        tx_amount_4->setObjectName(QString::fromUtf8("tx_amount_4"));
        tx_amount_4->setGeometry(QRect(640, 390, 31, 31));
        tx_num_label_4 = new QLabel(centralWidget);
        tx_num_label_4->setObjectName(QString::fromUtf8("tx_num_label_4"));
        tx_num_label_4->setGeometry(QRect(540, 390, 41, 31));
        tx_send_4 = new QLabel(centralWidget);
        tx_send_4->setObjectName(QString::fromUtf8("tx_send_4"));
        tx_send_4->setGeometry(QRect(750, 390, 51, 31));
        tx_addr_label_4 = new QLabel(centralWidget);
        tx_addr_label_4->setObjectName(QString::fromUtf8("tx_addr_label_4"));
        tx_addr_label_4->setGeometry(QRect(820, 420, 51, 31));
        tx_amount_label_4 = new QLabel(centralWidget);
        tx_amount_label_4->setObjectName(QString::fromUtf8("tx_amount_label_4"));
        tx_amount_label_4->setGeometry(QRect(670, 390, 31, 31));
        tx_addr_5 = new QLabel(centralWidget);
        tx_addr_5->setObjectName(QString::fromUtf8("tx_addr_5"));
        tx_addr_5->setGeometry(QRect(870, 490, 221, 31));
        tx_id_label_5 = new QLabel(centralWidget);
        tx_id_label_5->setObjectName(QString::fromUtf8("tx_id_label_5"));
        tx_id_label_5->setGeometry(QRect(540, 490, 41, 31));
        tx_id_5 = new QLabel(centralWidget);
        tx_id_5->setObjectName(QString::fromUtf8("tx_id_5"));
        tx_id_5->setGeometry(QRect(580, 490, 221, 31));
        tx_amount_5 = new QLabel(centralWidget);
        tx_amount_5->setObjectName(QString::fromUtf8("tx_amount_5"));
        tx_amount_5->setGeometry(QRect(640, 460, 31, 31));
        tx_num_label_5 = new QLabel(centralWidget);
        tx_num_label_5->setObjectName(QString::fromUtf8("tx_num_label_5"));
        tx_num_label_5->setGeometry(QRect(540, 460, 41, 31));
        tx_send_5 = new QLabel(centralWidget);
        tx_send_5->setObjectName(QString::fromUtf8("tx_send_5"));
        tx_send_5->setGeometry(QRect(750, 460, 51, 31));
        tx_addr_label_5 = new QLabel(centralWidget);
        tx_addr_label_5->setObjectName(QString::fromUtf8("tx_addr_label_5"));
        tx_addr_label_5->setGeometry(QRect(820, 490, 51, 31));
        tx_amount_label_5 = new QLabel(centralWidget);
        tx_amount_label_5->setObjectName(QString::fromUtf8("tx_amount_label_5"));
        tx_amount_label_5->setGeometry(QRect(670, 460, 31, 31));
        tx_addr_6 = new QLabel(centralWidget);
        tx_addr_6->setObjectName(QString::fromUtf8("tx_addr_6"));
        tx_addr_6->setGeometry(QRect(870, 560, 221, 31));
        tx_id_label_6 = new QLabel(centralWidget);
        tx_id_label_6->setObjectName(QString::fromUtf8("tx_id_label_6"));
        tx_id_label_6->setGeometry(QRect(540, 560, 41, 31));
        tx_id_6 = new QLabel(centralWidget);
        tx_id_6->setObjectName(QString::fromUtf8("tx_id_6"));
        tx_id_6->setGeometry(QRect(580, 560, 221, 31));
        tx_amount_6 = new QLabel(centralWidget);
        tx_amount_6->setObjectName(QString::fromUtf8("tx_amount_6"));
        tx_amount_6->setGeometry(QRect(640, 530, 31, 31));
        tx_num_label_6 = new QLabel(centralWidget);
        tx_num_label_6->setObjectName(QString::fromUtf8("tx_num_label_6"));
        tx_num_label_6->setGeometry(QRect(540, 530, 41, 31));
        tx_send_6 = new QLabel(centralWidget);
        tx_send_6->setObjectName(QString::fromUtf8("tx_send_6"));
        tx_send_6->setGeometry(QRect(750, 530, 51, 31));
        tx_addr_label_6 = new QLabel(centralWidget);
        tx_addr_label_6->setObjectName(QString::fromUtf8("tx_addr_label_6"));
        tx_addr_label_6->setGeometry(QRect(820, 560, 51, 31));
        tx_amount_label_6 = new QLabel(centralWidget);
        tx_amount_label_6->setObjectName(QString::fromUtf8("tx_amount_label_6"));
        tx_amount_label_6->setGeometry(QRect(670, 530, 31, 31));
        tx_addr_7 = new QLabel(centralWidget);
        tx_addr_7->setObjectName(QString::fromUtf8("tx_addr_7"));
        tx_addr_7->setGeometry(QRect(870, 620, 221, 31));
        tx_id_label_7 = new QLabel(centralWidget);
        tx_id_label_7->setObjectName(QString::fromUtf8("tx_id_label_7"));
        tx_id_label_7->setGeometry(QRect(540, 620, 41, 31));
        tx_id_7 = new QLabel(centralWidget);
        tx_id_7->setObjectName(QString::fromUtf8("tx_id_7"));
        tx_id_7->setGeometry(QRect(580, 620, 221, 31));
        tx_amount_7 = new QLabel(centralWidget);
        tx_amount_7->setObjectName(QString::fromUtf8("tx_amount_7"));
        tx_amount_7->setGeometry(QRect(640, 590, 31, 31));
        tx_num_label_7 = new QLabel(centralWidget);
        tx_num_label_7->setObjectName(QString::fromUtf8("tx_num_label_7"));
        tx_num_label_7->setGeometry(QRect(540, 590, 41, 31));
        tx_send_7 = new QLabel(centralWidget);
        tx_send_7->setObjectName(QString::fromUtf8("tx_send_7"));
        tx_send_7->setGeometry(QRect(750, 590, 51, 31));
        tx_addr_label_7 = new QLabel(centralWidget);
        tx_addr_label_7->setObjectName(QString::fromUtf8("tx_addr_label_7"));
        tx_addr_label_7->setGeometry(QRect(820, 620, 51, 31));
        tx_amount_label_7 = new QLabel(centralWidget);
        tx_amount_label_7->setObjectName(QString::fromUtf8("tx_amount_label_7"));
        tx_amount_label_7->setGeometry(QRect(670, 590, 31, 31));
        tx_mining = new QLabel(centralWidget);
        tx_mining->setObjectName(QString::fromUtf8("tx_mining"));
        tx_mining->setGeometry(QRect(810, 170, 131, 31));
        tx_mining_2 = new QLabel(centralWidget);
        tx_mining_2->setObjectName(QString::fromUtf8("tx_mining_2"));
        tx_mining_2->setGeometry(QRect(820, 230, 131, 31));
        tx_mining_3 = new QLabel(centralWidget);
        tx_mining_3->setObjectName(QString::fromUtf8("tx_mining_3"));
        tx_mining_3->setGeometry(QRect(820, 300, 131, 31));
        tx_mining_4 = new QLabel(centralWidget);
        tx_mining_4->setObjectName(QString::fromUtf8("tx_mining_4"));
        tx_mining_4->setGeometry(QRect(820, 380, 131, 31));
        tx_mining_5 = new QLabel(centralWidget);
        tx_mining_5->setObjectName(QString::fromUtf8("tx_mining_5"));
        tx_mining_5->setGeometry(QRect(810, 450, 131, 31));
        tx_mining_6 = new QLabel(centralWidget);
        tx_mining_6->setObjectName(QString::fromUtf8("tx_mining_6"));
        tx_mining_6->setGeometry(QRect(820, 520, 131, 31));
        tx_mining_7 = new QLabel(centralWidget);
        tx_mining_7->setObjectName(QString::fromUtf8("tx_mining_7"));
        tx_mining_7->setGeometry(QRect(810, 590, 131, 31));
        BTL_GUIClass->setCentralWidget(centralWidget);
        graphicsView->raise();
        closeBtn->raise();
        createWallet->raise();
        walletname->raise();
        walletlabel->raise();
        label->raise();
        label_2->raise();
        resetwallet->raise();
        mining->raise();
        miningcount->raise();
        addresslabel->raise();
        label_3->raise();
        balancelabel->raise();
        sendaddr->raise();
        amount->raise();
        send->raise();
        fee_rate->raise();
        sendresult->raise();
        miningresult->raise();
        line->raise();
        label_4->raise();
        resettx->raise();
        tx_num_label->raise();
        line_2->raise();
        blockcount->raise();
        label_5->raise();
        label_6->raise();
        usercount->raise();
        blocklist->raise();
        label_7->raise();
        resetinfo->raise();
        block1->raise();
        block2->raise();
        block3->raise();
        block4->raise();
        block5->raise();
        block8->raise();
        block10->raise();
        block9->raise();
        block6->raise();
        block7->raise();
        blocknum1->raise();
        blocknum2->raise();
        blocknum3->raise();
        blocknum4->raise();
        blocknum8->raise();
        blocknum6->raise();
        blocknum7->raise();
        blocknum5->raise();
        blocknum10->raise();
        blocknum9->raise();
        blockinfo->raise();
        tx_id_label->raise();
        tx_amount_label->raise();
        tx_send->raise();
        tx_addr_label->raise();
        tx_amount->raise();
        tx_addr->raise();
        tx_id->raise();
        tx_addr_2->raise();
        tx_id_label_2->raise();
        tx_id_2->raise();
        tx_amount_2->raise();
        tx_num_label_2->raise();
        tx_send_2->raise();
        tx_addr_label_2->raise();
        tx_amount_label_2->raise();
        tx_addr_3->raise();
        tx_id_label_3->raise();
        tx_id_3->raise();
        tx_amount_3->raise();
        tx_num_label_3->raise();
        tx_send_3->raise();
        tx_addr_label_3->raise();
        tx_amount_label_3->raise();
        tx_addr_4->raise();
        tx_id_label_4->raise();
        tx_id_4->raise();
        tx_amount_4->raise();
        tx_num_label_4->raise();
        tx_send_4->raise();
        tx_addr_label_4->raise();
        tx_amount_label_4->raise();
        tx_addr_5->raise();
        tx_id_label_5->raise();
        tx_id_5->raise();
        tx_amount_5->raise();
        tx_num_label_5->raise();
        tx_send_5->raise();
        tx_addr_label_5->raise();
        tx_amount_label_5->raise();
        tx_addr_6->raise();
        tx_id_label_6->raise();
        tx_id_6->raise();
        tx_amount_6->raise();
        tx_num_label_6->raise();
        tx_send_6->raise();
        tx_addr_label_6->raise();
        tx_amount_label_6->raise();
        tx_addr_7->raise();
        tx_id_label_7->raise();
        tx_id_7->raise();
        tx_amount_7->raise();
        tx_num_label_7->raise();
        tx_send_7->raise();
        tx_addr_label_7->raise();
        tx_amount_label_7->raise();
        tx_mining->raise();
        tx_mining_2->raise();
        tx_mining_3->raise();
        tx_mining_4->raise();
        tx_mining_5->raise();
        tx_mining_6->raise();
        tx_mining_7->raise();
        menuBar = new QMenuBar(BTL_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1572, 26));
        BTL_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BTL_GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BTL_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BTL_GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BTL_GUIClass->setStatusBar(statusBar);

        retranslateUi(BTL_GUIClass);
        QObject::connect(createWallet, SIGNAL(clicked()), BTL_GUIClass, SLOT(creatwallet()));

        QMetaObject::connectSlotsByName(BTL_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *BTL_GUIClass)
    {
        BTL_GUIClass->setWindowTitle(QCoreApplication::translate("BTL_GUIClass", "BTL_GUI", nullptr));
        closeBtn->setText(QCoreApplication::translate("BTL_GUIClass", "\353\213\253\352\270\260", nullptr));
        createWallet->setText(QCoreApplication::translate("BTL_GUIClass", "\354\247\200\352\260\221 \354\203\235\354\204\261", nullptr));
        walletlabel->setText(QString());
        label->setText(QCoreApplication::translate("BTL_GUIClass", "\354\247\200\352\260\221 \353\252\205 :", nullptr));
        label_2->setText(QCoreApplication::translate("BTL_GUIClass", "\354\243\274\354\206\214 \353\252\205 : ", nullptr));
        resetwallet->setText(QCoreApplication::translate("BTL_GUIClass", "\354\203\210\353\241\234 \352\263\240\354\271\250", nullptr));
        mining->setText(QCoreApplication::translate("BTL_GUIClass", "\354\261\204\352\265\264", nullptr));
        addresslabel->setText(QString());
        label_3->setText(QCoreApplication::translate("BTL_GUIClass", "\354\236\224\354\225\241 : ", nullptr));
        balancelabel->setText(QString());
        sendaddr->setText(QCoreApplication::translate("BTL_GUIClass", "address", nullptr));
        amount->setText(QCoreApplication::translate("BTL_GUIClass", "amount", nullptr));
        send->setText(QCoreApplication::translate("BTL_GUIClass", "\354\206\241\352\270\210", nullptr));
        fee_rate->setText(QCoreApplication::translate("BTL_GUIClass", "fee_rate", nullptr));
        sendresult->setText(QString());
        miningresult->setText(QString());
        label_4->setText(QCoreApplication::translate("BTL_GUIClass", "\352\261\260\353\236\230 \353\202\264\354\227\255", nullptr));
        resettx->setText(QCoreApplication::translate("BTL_GUIClass", "\354\203\210\353\241\234 \352\263\240\354\271\250", nullptr));
        tx_num_label->setText(QCoreApplication::translate("BTL_GUIClass", "No.1", nullptr));
        blockcount->setText(QString());
        label_5->setText(QCoreApplication::translate("BTL_GUIClass", "\354\240\204\354\262\264 \353\270\224\353\241\235 \352\260\257\354\210\230", nullptr));
        label_6->setText(QCoreApplication::translate("BTL_GUIClass", "\354\240\204\354\262\264 \354\202\254\354\232\251\354\236\220 \354\210\230", nullptr));
        usercount->setText(QString());
        blocklist->setText(QString());
        label_7->setText(QCoreApplication::translate("BTL_GUIClass", "\354\240\204\354\262\264 \353\270\224\353\241\235 \354\240\225\353\263\264", nullptr));
        resetinfo->setText(QCoreApplication::translate("BTL_GUIClass", "\354\203\210\353\241\234 \352\263\240\354\271\250", nullptr));
        block1->setText(QString());
        block2->setText(QString());
        block3->setText(QString());
        block4->setText(QString());
        block5->setText(QString());
        block8->setText(QString());
        block10->setText(QString());
        block9->setText(QString());
        block6->setText(QString());
        block7->setText(QString());
        blocknum1->setText(QString());
        blocknum2->setText(QString());
        blocknum3->setText(QString());
        blocknum4->setText(QString());
        blocknum8->setText(QString());
        blocknum6->setText(QString());
        blocknum7->setText(QString());
        blocknum5->setText(QString());
        blocknum10->setText(QString());
        blocknum9->setText(QString());
        blockinfo->setText(QString());
        tx_id_label->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_amount_label->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_send->setText(QString());
        tx_addr_label->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount->setText(QString());
        tx_addr->setText(QString());
        tx_id->setText(QString());
        tx_addr_2->setText(QString());
        tx_id_label_2->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_2->setText(QString());
        tx_amount_2->setText(QString());
        tx_num_label_2->setText(QCoreApplication::translate("BTL_GUIClass", "No.2", nullptr));
        tx_send_2->setText(QString());
        tx_addr_label_2->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_2->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_addr_3->setText(QString());
        tx_id_label_3->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_3->setText(QString());
        tx_amount_3->setText(QString());
        tx_num_label_3->setText(QCoreApplication::translate("BTL_GUIClass", "No.3", nullptr));
        tx_send_3->setText(QString());
        tx_addr_label_3->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_3->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_addr_4->setText(QString());
        tx_id_label_4->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_4->setText(QString());
        tx_amount_4->setText(QString());
        tx_num_label_4->setText(QCoreApplication::translate("BTL_GUIClass", "No.4", nullptr));
        tx_send_4->setText(QString());
        tx_addr_label_4->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_4->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_addr_5->setText(QString());
        tx_id_label_5->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_5->setText(QString());
        tx_amount_5->setText(QString());
        tx_num_label_5->setText(QCoreApplication::translate("BTL_GUIClass", "No.5", nullptr));
        tx_send_5->setText(QString());
        tx_addr_label_5->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_5->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_addr_6->setText(QString());
        tx_id_label_6->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_6->setText(QString());
        tx_amount_6->setText(QString());
        tx_num_label_6->setText(QCoreApplication::translate("BTL_GUIClass", "No.6", nullptr));
        tx_send_6->setText(QString());
        tx_addr_label_6->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_6->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_addr_7->setText(QString());
        tx_id_label_7->setText(QCoreApplication::translate("BTL_GUIClass", "txid :", nullptr));
        tx_id_7->setText(QString());
        tx_amount_7->setText(QString());
        tx_num_label_7->setText(QCoreApplication::translate("BTL_GUIClass", "No.7", nullptr));
        tx_send_7->setText(QString());
        tx_addr_label_7->setText(QCoreApplication::translate("BTL_GUIClass", "\352\263\204\354\242\214 : ", nullptr));
        tx_amount_label_7->setText(QCoreApplication::translate("BTL_GUIClass", "Tol ", nullptr));
        tx_mining->setText(QString());
        tx_mining_2->setText(QString());
        tx_mining_3->setText(QString());
        tx_mining_4->setText(QString());
        tx_mining_5->setText(QString());
        tx_mining_6->setText(QString());
        tx_mining_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BTL_GUIClass: public Ui_BTL_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTL_GUI_H
