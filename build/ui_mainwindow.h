/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Thu Mar 5 21:40:48 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionHome;
    QAction *actionLibrary;
    QAction *actionSearch;
    QAction *actionTransfers;
    QAction *actionNetwork;
    QAction *actionSecurity;
    QAction *actionAbout;
    QAction *actionLock_Items;
    QAction *actionOpen_Torrent;
    QAction *actionSeed_Torrent;
    QAction *actionOpen_URL;
    QAction *actionSettings;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuNetwork;
    QMenu *menuView;
    QMenu *menuWindow;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(598, 388);
    actionExit = new QAction(MainWindow);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    actionHome = new QAction(MainWindow);
    actionHome->setObjectName(QString::fromUtf8("actionHome"));
    actionLibrary = new QAction(MainWindow);
    actionLibrary->setObjectName(QString::fromUtf8("actionLibrary"));
    actionSearch = new QAction(MainWindow);
    actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
    actionTransfers = new QAction(MainWindow);
    actionTransfers->setObjectName(QString::fromUtf8("actionTransfers"));
    actionNetwork = new QAction(MainWindow);
    actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
    actionSecurity = new QAction(MainWindow);
    actionSecurity->setObjectName(QString::fromUtf8("actionSecurity"));
    actionAbout = new QAction(MainWindow);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    actionLock_Items = new QAction(MainWindow);
    actionLock_Items->setObjectName(QString::fromUtf8("actionLock_Items"));
    actionOpen_Torrent = new QAction(MainWindow);
    actionOpen_Torrent->setObjectName(QString::fromUtf8("actionOpen_Torrent"));
    actionSeed_Torrent = new QAction(MainWindow);
    actionSeed_Torrent->setObjectName(QString::fromUtf8("actionSeed_Torrent"));
    actionOpen_URL = new QAction(MainWindow);
    actionOpen_URL->setObjectName(QString::fromUtf8("actionOpen_URL"));
    actionSettings = new QAction(MainWindow);
    actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 598, 23));
    menuNetwork = new QMenu(menubar);
    menuNetwork->setObjectName(QString::fromUtf8("menuNetwork"));
    menuView = new QMenu(menubar);
    menuView->setObjectName(QString::fromUtf8("menuView"));
    menuWindow = new QMenu(menubar);
    menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
    menuTools = new QMenu(menubar);
    menuTools->setObjectName(QString::fromUtf8("menuTools"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menuNetwork->menuAction());
    menubar->addAction(menuView->menuAction());
    menubar->addAction(menuTools->menuAction());
    menubar->addAction(menuWindow->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuNetwork->addAction(actionExit);
    menuView->addAction(actionHome);
    menuView->addAction(actionLibrary);
    menuView->addAction(actionSecurity);
    menuView->addAction(actionSearch);
    menuView->addAction(actionTransfers);
    menuView->addAction(actionNetwork);
    menuWindow->addAction(actionLock_Items);
    menuTools->addAction(actionOpen_Torrent);
    menuTools->addAction(actionSeed_Torrent);
    menuTools->addAction(actionOpen_URL);
    menuTools->addSeparator();
    menuTools->addAction(actionSettings);
    menuHelp->addAction(actionAbout);
    toolBar->addAction(actionHome);
    toolBar->addAction(actionLibrary);
    toolBar->addAction(actionSecurity);
    toolBar->addAction(actionSearch);
    toolBar->addAction(actionTransfers);
    toolBar->addAction(actionNetwork);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    actionHome->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
    actionLibrary->setText(QApplication::translate("MainWindow", "Library", 0, QApplication::UnicodeUTF8));
    actionSearch->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
    actionTransfers->setText(QApplication::translate("MainWindow", "Transfers", 0, QApplication::UnicodeUTF8));
    actionNetwork->setText(QApplication::translate("MainWindow", "Network", 0, QApplication::UnicodeUTF8));
    actionSecurity->setText(QApplication::translate("MainWindow", "Security", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
    actionLock_Items->setText(QApplication::translate("MainWindow", "Lock Items", 0, QApplication::UnicodeUTF8));
    actionOpen_Torrent->setText(QApplication::translate("MainWindow", "Open Torrent", 0, QApplication::UnicodeUTF8));
    actionSeed_Torrent->setText(QApplication::translate("MainWindow", "Seed Torrent", 0, QApplication::UnicodeUTF8));
    actionOpen_URL->setText(QApplication::translate("MainWindow", "Open URL", 0, QApplication::UnicodeUTF8));
    actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
    menuNetwork->setTitle(QApplication::translate("MainWindow", "Network", 0, QApplication::UnicodeUTF8));
    menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
    menuWindow->setTitle(QApplication::translate("MainWindow", "Window", 0, QApplication::UnicodeUTF8));
    menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
