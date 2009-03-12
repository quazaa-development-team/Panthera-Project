/********************************************************************************
** Form generated from reading ui file 'splash.ui'
**
** Created: Wed Mar 11 14:25:17 2009
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

    void setupUi(QDialog *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName(QString::fromUtf8("Splash"));
        Splash->resize(400, 300);
        Splash->setStyleSheet(QString::fromUtf8("background-image: url(:/Splash/Resource/Splash.png);"));
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
        progressBar->setValue(24);
        labelStatus = new QLabel(Splash);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setGeometry(QRect(10, 250, 381, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labelStatus->setPalette(palette1);

        retranslateUi(Splash);

        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QDialog *Splash)
    {
        Splash->setWindowTitle(QApplication::translate("Splash", "Dialog", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("Splash", "Loading Panthera...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Splash);
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
