/********************************************************************************
** Form generated from reading ui file 'splash.ui'
**
** Created: Mon Mar 16 18:16:30 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_Splash
{
public:
    QProgressBar *progressBar;
    QLabel *labelStatus;
    QLabel *label;

    void setupUi(QDialog *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName(QString::fromUtf8("Splash"));
        Splash->resize(400, 300);
        Splash->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics/Resource/Splash.png);"));
        Splash->setModal(true);
        progressBar = new QProgressBar(Splash);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 270, 381, 23));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        progressBar->setPalette(palette);
        progressBar->setValue(0);
        labelStatus = new QLabel(Splash);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setGeometry(QRect(10, 250, 381, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labelStatus->setPalette(palette1);
        label = new QLabel(Splash);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 121, 51));

        retranslateUi(Splash);

        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QDialog *Splash)
    {
        Splash->setWindowTitle(QApplication::translate("Splash", "Dialog", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("Splash", "Loading Panthera...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Splash", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Graphics/Resource/Panthera48.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Splash);
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
