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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BTL_GUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BTL_GUIClass)
    {
        if (BTL_GUIClass->objectName().isEmpty())
            BTL_GUIClass->setObjectName(QString::fromUtf8("BTL_GUIClass"));
        BTL_GUIClass->resize(600, 400);
        menuBar = new QMenuBar(BTL_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        BTL_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BTL_GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BTL_GUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BTL_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BTL_GUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BTL_GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BTL_GUIClass->setStatusBar(statusBar);

        retranslateUi(BTL_GUIClass);

        QMetaObject::connectSlotsByName(BTL_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *BTL_GUIClass)
    {
        BTL_GUIClass->setWindowTitle(QCoreApplication::translate("BTL_GUIClass", "BTL_GUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BTL_GUIClass: public Ui_BTL_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTL_GUI_H
