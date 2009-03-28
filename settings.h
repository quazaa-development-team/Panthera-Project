//
// settings.h
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

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtGui/QDialog>
#include "ui_settings.h"

namespace Ui {
    class Settings;
}

class Settings : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Settings)
public:
    explicit Settings(QWidget *parent = 0);
    virtual ~Settings();
    void switchSettingsPage(int pageIndex);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Settings *m_ui;

private slots:
    void on_toolButtonEditProfile_clicked();
    void on_labelWebIntegration_linkActivated(QString link);
    void on_labelCommunity_linkActivated(QString link);
    void on_labelMediaPlayer_linkActivated(QString link);
    void on_labelLibrary_linkActivated(QString link);
    void on_labelBasic_linkActivated(QString link);
    void on_treeWidgetSettingsNavigation_itemClicked(QTreeWidgetItem* item, int column);
    void on_pushButtonOK_clicked();
    void on_pushButtonCancel_clicked();
};

#endif // SETTINGS_H
