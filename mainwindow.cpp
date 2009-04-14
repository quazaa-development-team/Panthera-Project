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
#include <QResource>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::MainWindowClass)
{
	//Create splash window
	DialogSplash *dlgSplash = new DialogSplash(this);
	dlgSplash->setWindowFlags(Qt::SplashScreen);
	dlgSplash->show();
	QApplication::processEvents();
	//Load Settings
	dlgSplash->updateProgress(5, "Loading Settings...");
	QApplication::processEvents();
	Settings.loadSettings();
	//Check if this is Panthera's first run
	if (Settings.Basic.FirstRun)
	{
		Settings.saveSettings();
		Settings.saveProfile();
		DialogWizard *dlgWizard = new DialogWizard(this);
		dlgWizard->show();
	}
	//Load user interface
	dlgSplash->updateProgress(90, "Loading User Interface...");
	QApplication::processEvents();
	ui->setupUi(this);
	Settings.loadMainWindowState(this);
	ui->pagesMain->setCurrentIndex(0);
	ui->pagesLibraryNavigator->setCurrentIndex(0);
	ui->pagesLibrary->setCurrentIndex(0);
	ui->pagesFileType->setCurrentIndex(0);
	//Tray icon construction.
	// Create the menu that will be used for the context menu
	dlgSplash->updateProgress(95, "Loading Tray Icon...");
	QApplication::processEvents();
	// Create the system tray right click menu.
	trayMenu = new QMenu(this);
	trayMenu->addAction(ui->actionShowOrHide);
	trayMenu->addSeparator();
	trayMenu->addAction(ui->actionNew_Search);
	trayMenu->addAction(ui->actionURL_Download);
	trayMenu->addSeparator();
	trayMenu->addAction(ui->actionPlay_Media);
	trayMenu->addAction(ui->actionPause_Media);
	trayMenu->addAction(ui->actionStop_Media);
	trayMenu->addAction(ui->actionOpen_Media);
	trayMenu->addSeparator();
	trayMenu->addAction(ui->actionPrevious_Track);
	trayMenu->addAction(ui->actionNext_Track);
	trayMenu->addSeparator();
	trayMenu->addAction(ui->actionExit_After_Transfers);
	trayMenu->addAction(ui->actionExit);
	trayIcon = new QSystemTrayIcon(this);
	trayIcon->setIcon(QIcon(":/Icons/Resource/Panthera.png"));
	trayIcon->setToolTip("Panthera");
	trayIcon->setContextMenu(trayMenu);
	connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
			this, SLOT(icon_activated(QSystemTrayIcon::ActivationReason)));
	trayIcon->show();
	dlgSplash->updateProgress(100, "Welcome to Panthera!");
	QApplication::processEvents();
	dlgSplash->close();
}

MainWindow::~MainWindow()
{
	trayIcon->~QSystemTrayIcon();
	delete ui;
}

void MainWindow::on_actionExit_triggered()
{
	close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
	Settings.saveMainWindowState(this);
	event->accept();
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
	DialogSettings *dlgSettings = new DialogSettings(this);
	dlgSettings->show();
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
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
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 8:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(true);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 9:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(true);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 10:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(true);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 11:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(true);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 12:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(true);
			ui->actionHit_Monitor->setChecked(false);
			break;
		case 13:
			ui->actionHome->setChecked(false);
			ui->actionLibrary->setChecked(false);
			ui->actionMedia->setChecked(false);
			ui->actionSearch->setChecked(false);
			ui->actionTransfers->setChecked(false);
			ui->actionSecurity->setChecked(false);
			ui->actionNetwork->setChecked(false);
			ui->actionChat->setChecked(false);
			ui->actionHostcache->setChecked(false);
			ui->actionDiscovery->setChecked(false);
			ui->actionGraph->setChecked(false);
			ui->actionPacket_Dump->setChecked(false);
			ui->actionSearch_Monitor->setChecked(false);
			ui->actionHit_Monitor->setChecked(true);
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
	DialogSettings *dlgSettings = new DialogSettings(this);
	dlgSettings->switchSettingsPage(20);
	dlgSettings->show();
}

void MainWindow::on_toolButtonChatSettings_clicked()
{
	DialogSettings *dlgSettings = new DialogSettings(this);
	dlgSettings->switchSettingsPage(7);
	dlgSettings->show();
}

void MainWindow::on_toolButtonChatEditProfile_clicked()
{
	DialogProfile *dlgProfile = new DialogProfile(this);
	dlgProfile->show();
}

void MainWindow::icon_activated(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason)
	{
	case QSystemTrayIcon::Unknown:
		break;
	case QSystemTrayIcon::DoubleClick:
		ui->actionShowOrHide->trigger();
		break;
	case QSystemTrayIcon::Trigger:
		break;
	case QSystemTrayIcon::MiddleClick:
		break;
	default:
		break;
	}
}

void MainWindow::on_labelCustomiseSkins_linkActivated(QString link)
{
	link.clear();
	DialogSettings *dlgSettings = new DialogSettings(this);
	dlgSettings->switchSettingsPage(3);
	dlgSettings->show();
}

void MainWindow::on_labelCustomiseSecurity_linkActivated(QString link)
{
	link.clear();
	ui->actionSecurity->trigger();
}

void MainWindow::on_actionAbout_triggered()
{
	DialogAbout *dlgAbout = new DialogAbout(this);
	dlgAbout->show();
}

void MainWindow::on_actionEdit_My_Profile_triggered()
{
	DialogProfile *dlgProfile = new DialogProfile(this);
	dlgProfile->show();
}

void MainWindow::on_labelCustomiseSettings_linkActivated(QString link)
{
	link.clear();
	DialogWizard *dlgWizard = new DialogWizard(this);
	dlgWizard->show();
}

void MainWindow::on_actionQuickstart_Wizard_triggered()
{
	DialogWizard *dlgWizard = new DialogWizard(this);
	dlgWizard->show();
}

void MainWindow::on_actionHostcache_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(8);
	if (checked == false)
	{
		ui->actionHostcache->setChecked(true);
		return;
	}
}

void MainWindow::on_actionDiscovery_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(9);
	if (checked == false)
	{
		ui->actionDiscovery->setChecked(true);
		return;
	}
}

void MainWindow::on_actionGraph_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(10);
	if (checked == false)
	{
		ui->actionGraph->setChecked(true);
		return;
	}
}

void MainWindow::on_actionPacket_Dump_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(11);
	if (checked == false)
	{
		ui->actionPacket_Dump->setChecked(true);
		return;
	}
}

void MainWindow::on_actionHit_Monitor_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(13);
	if (checked == false)
	{
		ui->actionHit_Monitor->setChecked(true);
		return;
	}
}

void MainWindow::on_actionSearch_Monitor_triggered(bool checked)
{
	ui->pagesMain->setCurrentIndex(12);
	if (checked == false)
	{
		ui->actionSearch_Monitor->setChecked(true);
		return;
	}
}

void MainWindow::on_actionShowOrHide_triggered()
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

void MainWindow::on_actionChoose_Skin_triggered()
{
	DialogSettings *dlgSettings = new DialogSettings(this);
	dlgSettings->switchSettingsPage(3);
	dlgSettings->show();
}
