//
// dialogsettings.h
//
// Copyright © Panthera Project, 2009.
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

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogSettings *m_ui;

private slots:
void on_pushButton_clicked();
		void on_labelConfigreBittorrent_linkActivated(QString link);
	void on_labelConfigureEDonkey2k_linkActivated(QString link);
	void on_labelConfigureAres_linkActivated(QString link);
	void on_labelConfigureG1_linkActivated(QString link);
	void on_labelConfigureG2_linkActivated(QString link);
	void on_listWidgetNavigationInternet_currentRowChanged(int currentRow);
	void on_listWidgetNavigationNetworks_currentRowChanged(int currentRow);
	void on_listWidgetNavigationGeneral_currentRowChanged(int currentRow);
	void on_toolButtonNavigationNetworks_toggled(bool checked);
	void on_toolButtonNavigationInternet_toggled(bool checked);
	void on_toolButtonNavigationGeneral_toggled(bool checked);
	void on_pushButtonEditProfile_clicked();
	void on_pushButtonOK_clicked();
	void on_pushButtonCancel_clicked();
};

#endif // DIALOGSETTINGS_H
