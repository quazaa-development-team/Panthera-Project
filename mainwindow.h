//
// mainwindow.h
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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include "ui_mainwindow.h"
#include "persistentsettings.h"
#include "dialogsplash.h"
#include "dialogsettings.h"
#include "dialogprofile.h"
#include "dialogabout.h"
#include "dialogwizard.h"

namespace Ui
{
	class MainWindowClass;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
	QSystemTrayIcon *trayIcon;
	QMenu *trayMenu;
	bool systemTrayVisible;

private:
	Ui::MainWindowClass *ui;

private slots:
void on_actionChoose_Skin_triggered();
	void on_actionShowOrHide_triggered();
	void on_actionSearch_Monitor_triggered(bool checked);
	void on_actionHit_Monitor_triggered(bool checked);
	void on_actionPacket_Dump_triggered(bool checked);
	void on_actionGraph_triggered(bool checked);
	void on_actionDiscovery_triggered(bool checked);
	void on_actionHostcache_triggered(bool checked);
	void on_actionQuickstart_Wizard_triggered();
	void on_labelCustomiseSettings_linkActivated(QString link);
	void on_actionEdit_My_Profile_triggered();
	void on_actionAbout_triggered();
	void closeEvent(QCloseEvent *event);
	void on_labelCustomiseSecurity_linkActivated(QString link);
	void on_labelCustomiseSkins_linkActivated(QString link);
	void on_toolButtonChatEditProfile_clicked();
	void on_toolButtonChatSettings_clicked();
	void on_toolButtonNetworkSettings_clicked();
	void on_toolButtonMediaVolumeMute_toggled(bool checked);
	void on_labelMyLibraryLink_linkActivated(QString link);
	void on_labelMyTransfersLink_linkActivated(QString link);
	void on_pagesLibraryNavigator_currentChanged(int index);
	void on_pagesMain_currentChanged(int page);
	void on_comboBoxSearchFileType_currentIndexChanged(int index);
	void on_actionSettings_triggered();
	void on_actionChat_triggered(bool checked);
	void on_actionMedia_triggered(bool checked);
	void on_actionNetwork_triggered(bool checked);
	void on_actionSecurity_triggered(bool checked);
	void on_actionTransfers_triggered(bool checked);
	void on_actionSearch_triggered(bool checked);
	void on_actionLibrary_triggered(bool checked);
	void on_actionHome_triggered(bool checked);
	void on_actionExit_triggered();
	void icon_activated(QSystemTrayIcon::ActivationReason reason);
};

#endif // MAINWINDOW_H
