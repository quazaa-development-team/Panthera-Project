//
// mainwindow.cpp
//
// Copyright  Panthera Project, 2009.
// This file is part of PANTHERA (www.pantheraproject.net)
//
// Panthera is free software; you can redistribute it
// and/or modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// Panthera is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Panthera; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "splash.h"
#include "settings.h"
#include "profile.h"
//#include "persistentsettings.h"
#include <QResource>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindowClass)
{
    //Create splash window
    Splash *winSplash = new Splash(this);
    winSplash->setWindowFlags(Qt::FramelessWindowHint);
    winSplash->show();
    //Tray icon construction.
    // Create the menu that will be used for the context menu
    winSplash->updateProgress(90, "Loading Tray Icon...");
    // Create the system tray right click menu.
    trayMenu = new QMenu(this);
    trayMenu->addAction(QPixmap(":/Icons/Resource/Panthera.png"),
                    tr("&Show/Hide Panthera"), this, SLOT(on_trayIcon_showOrHide()));
    trayMenu->addSeparator();
    trayMenu->addAction(QPixmap(":/Icons/Resource/search-32.png"),
                    tr("New Search"), this, SLOT(on_trayicon_newSearch()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/Filetype URL.png"),
                    tr("URL Download"), this, SLOT(on_trayicon_downloadFile()));
    trayMenu->addSeparator();
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player Play.png"),
                    tr("Play Media"), this, SLOT(on_trayIcon_playMedia()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player Pause.png"),
                    tr("Pause Media"), this, SLOT(on_trayIcon_pauseMedia()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player Stop.png"),
                    tr("Stop Media"), this, SLOT(on_trayIcon_stopMedia()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player Eject.png"),
                    tr("Open Media"), this, SLOT(on_trayIcon_openMedia()));
    trayMenu->addSeparator();
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player Start.png"),
                    tr("Previous Track"), this, SLOT(on_trayIcon_previousTrack()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/Player End.png"),
                    tr("Next Track"), this, SLOT(on_trayIcon_nextTrack()));
    trayMenu->addSeparator();
    trayMenu->addAction(QPixmap(":/Icons/Resource/fileclose-32.png"),
                    tr("E&xit After Transfers"), qApp, SLOT(on_exitAfterTransfers()));
    trayMenu->addAction(QPixmap(":/Icons/Resource/button_cancel-32.png"), tr("E&xit"), qApp,
                    SLOT(quit()));

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(QIcon(":/Icons/Resource/Panthera.png"));
    trayIcon->setToolTip("Panthera");
    trayIcon->setContextMenu(trayMenu);
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this, SLOT(on_trayIcon_activated(QSystemTrayIcon::ActivationReason)));
    trayIcon->show();
    //Load user interface
    winSplash->updateProgress(95, "Loading User Interface...");
    ui->setupUi(this);
    ui->pagesMain->setCurrentIndex(0);
    ui->pagesLibraryNavigator->setCurrentIndex(0);
    ui->pagesLibrary->setCurrentIndex(0);
    ui->pagesFileType->setCurrentIndex(0);
    winSplash->updateProgress(100, "Welcome to Panthera!");
    winSplash->close();
}

MainWindow::~MainWindow()
{
    trayIcon->~QSystemTrayIcon();
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionHome_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(0);
    if (checked == false)
    {
        ui->actionHome->setChecked(true);
        return;
    }
}

void MainWindow::on_actionLibrary_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(1);
    if (checked == false)
    {
        ui->actionLibrary->setChecked(true);
        return;
    }
}

void MainWindow::on_actionMedia_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(2);
    if (checked == false)
    {
        ui->actionMedia->setChecked(true);
        return;
    }
}

void MainWindow::on_actionSearch_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(3);
    if (checked == false)
    {
        ui->actionSearch->setChecked(true);
        return;
    }
}

void MainWindow::on_actionTransfers_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(4);
    if (checked == false)
    {
        ui->actionTransfers->setChecked(true);
        return;
    }
}

void MainWindow::on_actionSecurity_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(5);
    if (checked == false)
    {
        ui->actionSecurity->setChecked(true);
        return;
    }
}

void MainWindow::on_actionNetwork_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(6);
    if (checked == false)
    {
        ui->actionNetwork->setChecked(true);
        return;
    }
}

void MainWindow::on_actionChat_triggered(bool checked)
{
    ui->pagesMain->setCurrentIndex(7);
    if (checked == false)
    {
        ui->actionChat->setChecked(true);
        return;
    }
}

void MainWindow::on_actionSettings_triggered()
{
    Settings *winSettings = new Settings(this);
    winSettings->show();
}

void MainWindow::on_comboBoxSearchFileType_currentIndexChanged(int index)
{
    ui->pagesFileType->setCurrentIndex(index);
}

void MainWindow::on_pagesMain_currentChanged(int page)
{
    switch (page)
    {
        case 0:
            ui->actionHome->setChecked(true);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 1:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(true);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 2:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(true);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 3:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(true);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 4:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(true);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 5:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(true);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(false);
            break;
         case 6:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(true);
            ui->actionChat->setChecked(false);
            break;
         case 7:
            ui->actionHome->setChecked(false);
            ui->actionLibrary->setChecked(false);
            ui->actionMedia->setChecked(false);
            ui->actionSearch->setChecked(false);
            ui->actionTransfers->setChecked(false);
            ui->actionSecurity->setChecked(false);
            ui->actionNetwork->setChecked(false);
            ui->actionChat->setChecked(true);
            break;
    }
}

void MainWindow::on_pagesLibraryNavigator_currentChanged(int index)
{
    ui->pagesLibrary->setCurrentIndex(index);
}

void MainWindow::on_labelMyTransfersLink_linkActivated(QString link)
{
    link.clear();
    ui->actionTransfers->trigger();
}

void MainWindow::on_labelMyLibraryLink_linkActivated(QString link)
{
    link.clear();
    ui->actionLibrary->trigger();
}

void MainWindow::on_toolButtonMediaVolumeMute_toggled(bool checked)
{
    QIcon iconNormal;
    QIcon iconMuted;
    iconNormal.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Speaker.png")), QIcon::Normal, QIcon::On);
    iconMuted.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/SpeakerMute.png")), QIcon::Normal, QIcon::On);

    if(checked)
    {
        ui->toolButtonMediaVolumeMute->setIcon(iconMuted);
    } else {
        ui->toolButtonMediaVolumeMute->setIcon(iconNormal);
    }
}

void MainWindow::on_toolButtonNetworkSettings_clicked()
{
    Settings *winSettings = new Settings(this);
    winSettings->switchSettingsPage(11);
    winSettings->show();
}

void MainWindow::on_toolButtonChatSettings_clicked()
{
    Settings *winSettings = new Settings(this);
    winSettings->switchSettingsPage(4);
    winSettings->show();
}

void MainWindow::on_toolButtonChatEditProfile_clicked()
{
    Profile *winProfile = new Profile(this);
    winProfile->show();
}

void MainWindow::on_trayIcon_showOrHide()
{
    if (isHidden())
    {
        show();
        raise();
    }
    else
    {
        hide();
    }
}

void MainWindow::on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
    case QSystemTrayIcon::Unknown:
        break;
    case QSystemTrayIcon::DoubleClick:
        on_trayIcon_showOrHide();
        break;
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        break;
    }
}

void MainWindow::on_trayIcon_newSearch()
{

}

void MainWindow::on_trayIcon_downloadFile()
{

}

void MainWindow::on_trayIcon_playMedia()
{

}

void MainWindow::on_trayIcon_stopMedia()
{

}

void MainWindow::on_trayIcon_openMedia()
{

}

void MainWindow::on_trayIcon_previousTrack()
{

}

void MainWindow::on_trayIcon_nextTrack()
{

}

void MainWindow::on_labelCustomiseSkins_linkActivated(QString link)
{
    link.clear();
    Settings *winSettings = new Settings(this);
    winSettings->switchSettingsPage(17);
    winSettings->show();
}

void MainWindow::on_labelCustomiseSecurity_linkActivated(QString link)
{
    link.clear();
    ui->actionSecurity->trigger();
}
