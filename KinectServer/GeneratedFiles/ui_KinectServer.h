/********************************************************************************
** Form generated from reading UI file 'KinectServer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINECTSERVER_H
#define UI_KINECTSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KinectServerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KinectServerClass)
    {
        if (KinectServerClass->objectName().isEmpty())
            KinectServerClass->setObjectName(QStringLiteral("KinectServerClass"));
        KinectServerClass->resize(600, 400);
        menuBar = new QMenuBar(KinectServerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        KinectServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KinectServerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KinectServerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(KinectServerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        KinectServerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(KinectServerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KinectServerClass->setStatusBar(statusBar);

        retranslateUi(KinectServerClass);

        QMetaObject::connectSlotsByName(KinectServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *KinectServerClass)
    {
        KinectServerClass->setWindowTitle(QApplication::translate("KinectServerClass", "KinectServer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KinectServerClass: public Ui_KinectServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINECTSERVER_H
