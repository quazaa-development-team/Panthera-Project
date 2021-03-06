//
// dialogsettings.h
//
// Copyright � Panthera Project, 2009.
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

#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

#include <QtGui/QDialog>
#include <QModelIndex>

namespace Ui {
    class DialogSettings;
}

class DialogSettings : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogSettings)
public:
    explicit DialogSettings(QWidget *parent = 0);
    virtual ~DialogSettings();
	void switchSettingsPage(int pageIndex);
	QColor colorTempChatBackground;
	QColor colorTempNormalText;
	QColor colorTempNotices;
	QColor colorTempRoomActions;
	QColor colorTempServerMessages;
	QColor colorTempTopics;
	QFont fontTempChat;

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogSettings *m_ui;

private Q_SLOTS:
void on_checkBoxConnectEDonkey2k_clicked();
	void on_checkBoxConnectAres_clicked();
	void on_checkBoxConnectG1_clicked();
	void on_checkBoxConnectG2_clicked();
	void on_toolButtonTorrentBrowse_clicked();
	void on_checkBoxTorrentsUseKademlia_clicked();
	void on_checkBoxTorrentsPreferTorrent_clicked();
	void on_spinBoxTorrentsRatioClear_valueChanged(int );
	void on_checkBoxTorrentsClearDownloaded_clicked();
	void on_spinBoxTorrentsClientConnections_valueChanged(int );
	void on_spinBoxTorrentsSimultaneous_valueChanged(int );
	void on_checkBoxTorrentsUseTemp_clicked();
	void on_checkBoxTorrentsEndgame_clicked();
	void on_checkBoxTorrentsStartPaused_clicked();
	void on_checkBoxManagedTorrent_clicked();
	void on_checkBoxTorrentSaveDialog_clicked();
	void on_lineEditEDonkeyServerListUrl_editingFinished();
	void on_checkBoxAutoQueryServerList_clicked();
	void on_spinBoxED2kMaxClients_valueChanged(int );
	void on_checkBoxED2kUpdateServerList_clicked();
	void on_spinBoxED2kMaxResults_valueChanged(int );
	void on_checkBoxED2kSearchCahedServers_clicked();
	void on_checkBoxED2kConnectKADToday_clicked();
	void on_checkBoxED2kConnectKAD_clicked();
	void on_checkBoxED2kConnectToday_clicked();
	void on_checkBoxED2kAlwaysConnect_clicked();
	void on_checkBoxConnectAresToday_clicked();
	void on_checkBoxAlwaysConnectAres_clicked();
	void on_checkBoxCompressionHubToHub_clicked();
	void on_checkBoxCompressionLeafToHub_clicked();
	void on_checkBoxCompressionHubToLeaf_clicked();
	void on_spinBoxG1UltrapeerToUltrapeer_valueChanged(int );
	void on_spinBoxG1UltrapeerToLeaf_valueChanged(int );
	void on_spinBoxG1LeafToUltrapeer_valueChanged(int );
	void on_comboBoxG1Mode_currentIndexChanged(int index);
	void on_checkBoxConnectG1Today_clicked();
	void on_checkBoxAlwaysConnectG1_clicked();
	void on_spinBoxG2HubToHub_valueChanged(int );
	void on_spinBoxG2HubToLeaf_valueChanged(int );
	void on_spinBoxG2LeafToHub_valueChanged(int );
	void on_comboBoxG2Mode_currentIndexChanged(int index);
	void on_checkBoxConnectG2Today_clicked();
	void on_checkBoxAlwaysConnectG2_clicked();
	void on_pushButtonUserAgentRemove_clicked();
	void on_pushButtonUserAgentAdd_clicked();
	void on_checkBoxAllowBrowseShares_clicked();
	void on_checkBoxEnableUPnP_clicked();
	void on_checkBoxIgnoreLocalIP_clicked();
	void on_lineEditRemotePassword_editingFinished();
	void on_lineEditRemoteUserName_editingFinished();
	void on_checkBoxEnableRemote_clicked();
	void on_spinBoxChatFloodLimit_valueChanged(int );
	void on_checkBoxChatFloodProtection_clicked();
	void on_checkBoxAllowBrowseProfile_clicked();
	void on_checkBoxFilterEDonkeyChatSpam_clicked();
	void on_checkBoxFilterChatSpam_clicked();
	void on_spinBoxUniqueHostLimit_valueChanged(int );
	void on_checkBoxSharingLimitHub_clicked();
	void on_checkBoxSharePreviews_clicked();
	void on_checkBoxSharePartials_clicked();
	void on_spinBoxTransfersPerFile_valueChanged(int );
	void on_spinBoxMaxFiles_valueChanged(int );
	void on_spinBoxMaxTransfers_valueChanged(int );
	void on_comboBoxQueLength_currentIndexChanged(int index);
	void on_toolButtonTempBrowse_clicked();
	void on_pushButtonChangeChatFont_clicked();
	void on_toolButtonSaveBrowse_clicked();
	void on_checkBoxURIPrompt_clicked();
	void on_checkBoxExpandDownloads_clicked();
	void on_doubleSpinBoxUploadSpeed_valueChanged(double );
	void on_doubleSpinBoxDownloadSpeed_valueChanged(double );
	void on_comboBoxRates_currentIndexChanged(int index);
	void on_checkBoxSimpleProgress_clicked();
	void on_checkBoxOnlyDownloadConnectedNetworks_clicked();
	void on_pushButtonRemoveManageDownloadTypes_clicked();
	void on_pushButtonAddManageDownloadTypes_clicked();
	void on_checkBoxManageWebDownloads_clicked();
	void on_checkBoxEDonkey2kLinks_clicked();
	void on_checkBoxPioletLinks_clicked();
	void on_checkBoxBittorrentLinks_clicked();
	void on_checkBoxAresLinks_clicked();
	void on_checkBoxGnutellaLinks_clicked();
	void on_checkBoxMagnetLinks_clicked();
	void on_spinBoxHandshakeTimeout_valueChanged(int );
	void on_spinBoxConnectionTimeout_valueChanged(int );
	void on_comboBoxAcceptIncoming_currentIndexChanged(int index);
	void on_checkBoxRandomPort_clicked();
	void on_spinBoxPantheraPort_valueChanged(int );
	void on_comboBoxOutboundAddress_activated(QString );
	void on_checkBoxForceBindingAddress_clicked();
	void on_comboBoxInboundAddress_activated(QString );
	void on_toolButtonColorTopics_clicked();
	void on_toolButtonColorServerMessages_clicked();
	void on_toolButtonColorRoomActions_clicked();
	void on_toolButtonColorNotices_clicked();
	void on_toolButtonColorNormalText_clicked();
	void on_toolButtonColorChatBackground_clicked();
	void on_spinBoxIRCPort_valueChanged(int );
	void on_lineEditIRCServer_editingFinished();
	void on_spinBoxChatIdleMessage_valueChanged(int );
	void on_checkBoxIRCShowTimestamp_clicked();
	void on_checkBoxEnableIRCFileTransfers_clicked();
	void on_checkBoxConnectIRCOnStart_clicked();
	void on_checkBoxEnableChatOther_clicked();
	void on_checkBoxGnutellaChatEnable_clicked();
	void on_checkBoxHighlightNewSearchMatches_clicked();
	void on_checkBoxHideSideBar_clicked();
	void on_checkBoxSwitchOnDownload_clicked();
	void on_checkBoxExpandMultiSorce_clicked();
	void on_pushButtonRemovePlayerFiles_clicked();
	void on_pushButtonAddPlayerFiles_clicked();
	void on_comboBoxChoosePlayer_currentIndexChanged(int index);
	void on_pushButtonNeverShareRemove_clicked();
	void on_pushButtonNeverShareAdd_clicked();
	void on_pushButtonRemoveSafe_clicked();
	void on_pushButtonAddSafe_clicked();
	void on_spinBoxUpToDays_valueChanged(int );
	void on_spinBoxRememberFiles_valueChanged(int );
	void on_checkBoxSeriesDetection_clicked();
	void on_checkBoxGhostFiles_clicked();
	void on_checkBoxDisplayHashingProgress_clicked();
	void on_checkBoxQuickHashing_clicked();
	void on_checkBoxWatchFolders_clicked();
	void on_checkBoxRememberViews_clicked();
	void on_pushButtonRemoveWord_clicked();
	void on_pushButtonAddWord_clicked();
	void on_checkBoxFilterAdult_clicked();
	void on_checkBoxCensor_clicked();
	void on_spinBoxDiskSpaceStop_valueChanged(int );
	void on_spinBoxDiskSpaceWarning_valueChanged(int );
	void on_horizontalSliderTransparency_valueChanged(int value);
	void on_spinBoxToolTipDelay_valueChanged(int );
	void on_checkBoxChatTooltips_clicked();
	void on_checkBoxMediaPlayerTooltips_clicked();
	void on_checkBoxNeighbourTooltips_clicked();
	void on_checkBoxUploadTooltips_clicked();
	void on_checkBoxDownloadTooltips_clicked();
	void on_checkBoxLibraryTooltips_clicked();
	void on_checkBoxSearchTooltips_clicked();
	void on_checkBoxMinimiseToTray_clicked();
	void on_comboBoxCloseButton_currentIndexChanged(int index);
	void on_checkBoxAutoConnect_clicked();
	void on_checkBoxSystemStart_clicked();
	void on_pushButtonApply_clicked();
		void on_listWidgetNavigationNetworks_clicked(QModelIndex index);
	void on_listWidgetNavigationInternet_clicked(QModelIndex index);
	void on_listWidgetNavigationGeneral_clicked(QModelIndex index);
	void on_pushButtonShowAdultFilter_clicked();
	void on_labelConfigreBittorrent_linkActivated(QString link);
	void on_labelConfigureEDonkey2k_linkActivated(QString link);
	void on_labelConfigureAres_linkActivated(QString link);
	void on_labelConfigureG1_linkActivated(QString link);
	void on_labelConfigureG2_linkActivated(QString link);
	void on_toolButtonNavigationNetworks_toggled(bool checked);
	void on_toolButtonNavigationInternet_toggled(bool checked);
	void on_toolButtonNavigationGeneral_toggled(bool checked);
	void on_pushButtonEditProfile_clicked();
	void on_pushButtonOK_clicked();
	void on_pushButtonCancel_clicked();
};

#endif // DIALOGSETTINGS_H
