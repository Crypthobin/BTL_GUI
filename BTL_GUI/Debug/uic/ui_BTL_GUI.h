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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BTL_GUIClass)
    {
        if (BTL_GUIClass->objectName().isEmpty())
            BTL_GUIClass->setObjectName(QString::fromUtf8("BTL_GUIClass"));
        BTL_GUIClass->resize(551, 656);
        centralWidget = new QWidget(BTL_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(460, 560, 75, 23));
        createWallet = new QPushButton(centralWidget);
        createWallet->setObjectName(QString::fromUtf8("createWallet"));
        createWallet->setGeometry(QRect(130, 30, 75, 23));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 551, 591));
        walletname = new QLineEdit(centralWidget);
        walletname->setObjectName(QString::fromUtf8("walletname"));
        walletname->setGeometry(QRect(10, 30, 113, 21));
        walletlabel = new QLabel(centralWidget);
        walletlabel->setObjectName(QString::fromUtf8("walletlabel"));
        walletlabel->setGeometry(QRect(100, 220, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 230, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 260, 64, 15));
        resetwallet = new QPushButton(centralWidget);
        resetwallet->setObjectName(QString::fromUtf8("resetwallet"));
        resetwallet->setGeometry(QRect(10, 200, 75, 23));
        mining = new QPushButton(centralWidget);
        mining->setObjectName(QString::fromUtf8("mining"));
        mining->setGeometry(QRect(250, 330, 75, 23));
        miningcount = new QSpinBox(centralWidget);
        miningcount->setObjectName(QString::fromUtf8("miningcount"));
        miningcount->setGeometry(QRect(190, 330, 51, 22));
        miningcount->setMaximum(1000);
        addresslabel = new QLabel(centralWidget);
        addresslabel->setObjectName(QString::fromUtf8("addresslabel"));
        addresslabel->setGeometry(QRect(100, 250, 431, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 290, 64, 15));
        balancelabel = new QLabel(centralWidget);
        balancelabel->setObjectName(QString::fromUtf8("balancelabel"));
        balancelabel->setGeometry(QRect(100, 290, 121, 31));
        sendaddr = new QLineEdit(centralWidget);
        sendaddr->setObjectName(QString::fromUtf8("sendaddr"));
        sendaddr->setGeometry(QRect(10, 70, 531, 21));
        amount = new QLineEdit(centralWidget);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(310, 100, 71, 21));
        send = new QPushButton(centralWidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(470, 100, 75, 23));
        fee_rate = new QLineEdit(centralWidget);
        fee_rate->setObjectName(QString::fromUtf8("fee_rate"));
        fee_rate->setGeometry(QRect(390, 100, 61, 21));
        sendresult = new QLabel(centralWidget);
        sendresult->setObjectName(QString::fromUtf8("sendresult"));
        sendresult->setGeometry(QRect(10, 130, 531, 51));
        miningresult = new QLabel(centralWidget);
        miningresult->setObjectName(QString::fromUtf8("miningresult"));
        miningresult->setGeometry(QRect(10, 380, 531, 161));
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
        menuBar = new QMenuBar(BTL_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 551, 26));
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
    } // retranslateUi

};

namespace Ui {
    class BTL_GUIClass: public Ui_BTL_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTL_GUI_H
