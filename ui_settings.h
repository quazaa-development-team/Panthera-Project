/********************************************************************************
** Form generated from reading ui file 'settings.ui'
**
** Created: Mon Mar 16 18:16:30 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frameLibraryHeader;
    QLabel *labelLibraryHeader;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(421, 438);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Panthera.png")), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setMargin(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frameLibraryHeader = new QFrame(Settings);
        frameLibraryHeader->setObjectName(QString::fromUtf8("frameLibraryHeader"));
        frameLibraryHeader->setMinimumSize(QSize(0, 50));
        frameLibraryHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 27, 99);"));
        frameLibraryHeader->setFrameShape(QFrame::NoFrame);
        frameLibraryHeader->setFrameShadow(QFrame::Raised);
        labelLibraryHeader = new QLabel(frameLibraryHeader);
        labelLibraryHeader->setObjectName(QString::fromUtf8("labelLibraryHeader"));
        labelLibraryHeader->setGeometry(QRect(10, 0, 231, 51));

        gridLayout_2->addWidget(frameLibraryHeader, 0, 0, 1, 2);

        treeWidget = new QTreeWidget(Settings);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMaximumSize(QSize(110, 16777215));

        gridLayout_2->addWidget(treeWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(Settings);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(Settings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(Settings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", 0, QApplication::UnicodeUTF8));
        labelLibraryHeader->setText(QApplication::translate("Settings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  </span><img src=\":/Graphics/Resource/Panthera48.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:28pt; font-weight:600; color:#ffffff;\">Panthera</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Settings", "Navigation", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Settings", "General", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Settings", "General", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Settings", "Library", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Settings", "Media Player", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Settings", "Community", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Settings", "Chat", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem7->setText(0, QApplication::translate("Settings", "Web", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("Settings", "Internet", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("Settings", "Connection", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("Settings", "Downloads", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(0, QApplication::translate("Settings", "Uploads", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem8->child(3);
        ___qtreewidgetitem12->setText(0, QApplication::translate("Settings", "Remote Access", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem8->child(4);
        ___qtreewidgetitem13->setText(0, QApplication::translate("Settings", "Scheduler", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem14->setText(0, QApplication::translate("Settings", "Networks", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(0, QApplication::translate("Settings", "Gnutella", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem14->child(1);
        ___qtreewidgetitem16->setText(0, QApplication::translate("Settings", "Ares", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem14->child(2);
        ___qtreewidgetitem17->setText(0, QApplication::translate("Settings", "eDonkey 2k", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem14->child(3);
        ___qtreewidgetitem18->setText(0, QApplication::translate("Settings", "Bittorrent", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem14->child(4);
        ___qtreewidgetitem19->setText(0, QApplication::translate("Settings", "Protocols", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem20->setText(0, QApplication::translate("Settings", "Skins", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem21 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem21->setText(0, QApplication::translate("Settings", "Plugins", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem22 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem22->setText(0, QApplication::translate("Settings", "Advanced", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("Settings", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Settings", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Settings", "Apply", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Settings);
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
