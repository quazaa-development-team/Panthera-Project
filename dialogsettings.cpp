//
// dialogsettings.cpp
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

#include "dialogsettings.h"
#include "ui_dialogsettings.h"
#include "dialogprofile.h"

DialogSettings::DialogSettings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogSettings)
{
    m_ui->setupUi(this);
	m_ui->pagesSettings->setCurrentIndex(0);
	m_ui->toolButtonNavigationGeneral->setChecked(true);
	m_ui->toolButtonNavigationInternet->setChecked(false);
	m_ui->toolButtonNavigationNetworks->setChecked(false);
	m_ui->groupBoxAdultFilter->setVisible(false);
}

DialogSettings::~DialogSettings()
{
    delete m_ui;
}

void DialogSettings::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogSettings::on_pushButtonCancel_clicked()
{
	this->close();
}

void DialogSettings::on_pushButtonOK_clicked()
{
	this->close();
}

void DialogSettings::switchSettingsPage(int pageIndex)
{
	m_ui->pagesSettings->setCurrentIndex(pageIndex);
	switch (pageIndex)
	{
		case 20:
			m_ui->toolButtonNavigationGeneral->setChecked(false);
			m_ui->toolButtonNavigationInternet->setChecked(false);
			m_ui->toolButtonNavigationNetworks->setChecked(true);
			break;
	}
}

void DialogSettings::on_pushButtonEditProfile_clicked()
{
	DialogProfile *dlgProfile = new DialogProfile(this);
	dlgProfile->show();
}

void DialogSettings::on_toolButtonNavigationGeneral_toggled(bool checked)
{
	if (checked)
	{
		m_ui->frameNavigationGeneral->setMaximumHeight(16777215);
	} else {
		m_ui->frameNavigationGeneral->setMaximumHeight(25);
	}
}

void DialogSettings::on_toolButtonNavigationInternet_toggled(bool checked)
{
	if (checked)
	{
		m_ui->frameNavigationInternet->setMaximumHeight(16777215);
	} else {
		m_ui->frameNavigationInternet->setMaximumHeight(25);
	}
}

void DialogSettings::on_toolButtonNavigationNetworks_toggled(bool checked)
{
	if (checked)
	{
		m_ui->frameNavigationNetworks->setMaximumHeight(16777215);
	} else {
		m_ui->frameNavigationNetworks->setMaximumHeight(25);
	}
}

void DialogSettings::on_listWidgetNavigationGeneral_currentRowChanged(int currentRow)
{
	m_ui->pagesSettings->setCurrentIndex(currentRow + 1);
}

void DialogSettings::on_listWidgetNavigationInternet_currentRowChanged(int currentRow)
{
	m_ui->pagesSettings->setCurrentIndex(currentRow + 10);
}

void DialogSettings::on_listWidgetNavigationNetworks_currentRowChanged(int currentRow)
{
	m_ui->pagesSettings->setCurrentIndex(currentRow + 16);
}

void DialogSettings::on_labelConfigureG2_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(16);
}

void DialogSettings::on_labelConfigureG1_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(16);
}

void DialogSettings::on_labelConfigureAres_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(17);
}

void DialogSettings::on_labelConfigureEDonkey2k_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(18);
}

void DialogSettings::on_labelConfigreBittorrent_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(19);
}

void DialogSettings::on_pushButton_clicked()
{
	m_ui->groupBoxAdultFilter->setVisible(true);
}
