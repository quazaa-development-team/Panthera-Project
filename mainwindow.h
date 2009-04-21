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

private Q_SLOTS:
void on_actionShares_triggered();
	void on_toolButtonWordProcessingHeader_clicked(bool checked);
	void on_toolButtonVideoHeader_clicked(bool checked);
	void on_toolButtonSpreadsheetHeader_clicked(bool checked);
	void on_toolButtonSourceCodeHeader_clicked(bool checked);
	void on_toolButtonSkinHeader_clicked(bool checked);
	void on_toolButtonROMHeader_clicked(bool checked);
	void on_toolButtonPresentationHeader_clicked(bool checked);
	void on_toolButtonImageHeader_clicked(bool checked);
	void on_toolButtonBookHeader_clicked(bool checked);
	void on_toolButtonBittorrentHeader_clicked(bool checked);
	void on_toolButtonAudioHeader_clicked(bool checked);
	void on_toolButtonArchiveHeader_clicked(bool checked);
	void on_toolButtonApplicationHeader_clicked(bool checked);
		void on_toolButtonUsersHeader_clicked(bool checked);
	void on_toolButtonFriendsHeader_clicked(bool checked);
	void on_toolButtonRoomsHeader_clicked(bool checked);
	void on_toolButtonResultsHeader_clicked(bool checked);
	void on_toolButtonAnyFileHeader_clicked(bool checked);
	void on_toolButtonNetworksHeader_clicked(bool checked);
	void on_toolButtonSearchHeader_clicked(bool checked);
	void on_toolButtonTorrentsToolHeader_clicked(bool checked);
	void on_toolButtonConnectionToolHeader_clicked(bool checked);
	void on_toolButtonUploadsToolHeader_clicked(bool checked);
	void on_toolButtonDownloadsToolHeader_clicked(bool checked);
	void on_toolButtonMyLibraryToolHeader_clicked(bool checked);
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
