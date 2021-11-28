/********************************************************************************
** Form generated from reading UI file 'TransactionInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONINFO_H
#define UI_TRANSACTIONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog_transaction
{
public:
    QTableWidget *SigPub;
    QTextBrowser *SigPubBrowser;

    void setupUi(QDialog *Dialog_transaction)
    {
        if (Dialog_transaction->objectName().isEmpty())
            Dialog_transaction->setObjectName(QString::fromUtf8("Dialog_transaction"));
        Dialog_transaction->resize(1035, 917);
        Dialog_transaction->setStyleSheet(QString::fromUtf8("background : rgb(36,42,50);"));
        SigPub = new QTableWidget(Dialog_transaction);
        if (SigPub->columnCount() < 2)
            SigPub->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        SigPub->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        SigPub->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        SigPub->setObjectName(QString::fromUtf8("SigPub"));
        SigPub->setGeometry(QRect(90, 170, 831, 231));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\271\231\352\267\270\353\240\210\354\262\264"));
        font.setPointSize(15);
        SigPub->setFont(font);
        SigPub->setStyleSheet(QString::fromUtf8("color : white;\n"
"border : rgb(36,42,50);"));
        SigPub->setLineWidth(5);
        SigPubBrowser = new QTextBrowser(Dialog_transaction);
        SigPubBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        SigPubBrowser->setGeometry(QRect(40, 40, 951, 711));
        SigPubBrowser->setStyleSheet(QString::fromUtf8("color : white;"));

        retranslateUi(Dialog_transaction);

        QMetaObject::connectSlotsByName(Dialog_transaction);
    } // setupUi

    void retranslateUi(QDialog *Dialog_transaction)
    {
        Dialog_transaction->setWindowTitle(QCoreApplication::translate("Dialog_transaction", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = SigPub->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog_transaction", "Pub", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = SigPub->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog_transaction", "Sig", nullptr));
        SigPubBrowser->setHtml(QCoreApplication::translate("Dialog_transaction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_transaction: public Ui_Dialog_transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONINFO_H
