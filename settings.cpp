//
// settings.cpp
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

#include "settings.h"
#include "ui_settings.h"
#include "profile.h"
#include "persistentsettings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Settings)
{
    m_ui->setupUi(this);
    m_ui->pagesSettings->setCurrentIndex(0);
    return;
}

Settings::~Settings()
{
    delete m_ui;
}

void Settings::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Settings::on_pushButtonCancel_clicked()
{
    this->close();
}

void Settings::on_pushButtonOK_clicked()
{
    this->close();
}

void Settings::switchSettingsPage(int pageIndex)
{
    m_ui->pagesSettings->setCurrentIndex(pageIndex);
}

void Settings::on_labelBasic_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(1);
}

void Settings::on_labelLibrary_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(2);
}

void Settings::on_labelMediaPlayer_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(3);
}

void Settings::on_labelCommunity_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(4);
}

void Settings::on_labelWebIntegration_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(5);
}

void Settings::on_treeWidgetSettingsNavigation_itemSelectionChanged()
{
    QTreeWidgetItem* item = m_ui->treeWidgetSettingsNavigation->currentItem();
    int column = m_ui->treeWidgetSettingsNavigation->currentColumn();
    QByteArray m_aItemName;
    m_aItemName.append(item->text(column));

    if (m_aItemName.contains("General"))
    {
        m_ui->pagesSettings->setCurrentIndex(0);
        return;
    } else if (m_aItemName.contains("Basic")) {
        m_ui->pagesSettings->setCurrentIndex(1);
        return;
    } else if (m_aItemName.contains("Library")) {
        m_ui->pagesSettings->setCurrentIndex(2);
        return;
    } else if (m_aItemName.contains("Media Player")) {
        m_ui->pagesSettings->setCurrentIndex(3);
        return;
    } else if (m_aItemName.contains("Chat")) {
        m_ui->pagesSettings->setCurrentIndex(4);
        return;
    } else if (m_aItemName.contains("Web")) {
        m_ui->pagesSettings->setCurrentIndex(5);
        return;
    } else if (m_aItemName.contains("Internet")) {
        m_ui->pagesSettings->setCurrentIndex(6);
        return;
    } else if (m_aItemName.contains("Connection")) {
        m_ui->pagesSettings->setCurrentIndex(7);
        return;
    } else if (m_aItemName.contains("Downloads")) {
        m_ui->pagesSettings->setCurrentIndex(8);
        return;
    } else if (m_aItemName.contains("Uploads")) {
        m_ui->pagesSettings->setCurrentIndex(9);
        return;
    } else if (m_aItemName.contains("Remote Access")) {
        m_ui->pagesSettings->setCurrentIndex(10);
        return;
    } else if (m_aItemName.contains("Networks")) {
        m_ui->pagesSettings->setCurrentIndex(11);
        return;
    } else if (m_aItemName.contains("Gnutella")) {
        m_ui->pagesSettings->setCurrentIndex(12);
        return;
    } else if (m_aItemName.contains("Ares")) {
        m_ui->pagesSettings->setCurrentIndex(13);
        return;
    } else if (m_aItemName.contains("eDonkey 2k")) {
        m_ui->pagesSettings->setCurrentIndex(14);
        return;
    } else if (m_aItemName.contains("Bittorrent")) {
        m_ui->pagesSettings->setCurrentIndex(15);
        return;
    } else if (m_aItemName.contains("Protocols")) {
        m_ui->pagesSettings->setCurrentIndex(16);
        return;
    } else if (m_aItemName.contains("Skins")) {
        m_ui->pagesSettings->setCurrentIndex(17);
        return;
    } else if (m_aItemName.contains("Plugins")) {
        m_ui->pagesSettings->setCurrentIndex(18);
        return;
    } else if (m_aItemName.contains("Advanced")) {
        m_ui->pagesSettings->setCurrentIndex(19);
        return;
    }
}

void Settings::on_pushButtonEditProfile_clicked()
{
    Profile *winProfile = new Profile(this);
    winProfile->show();
}

void Settings::on_labelConnection_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(7);
    return;
}

void Settings::on_labelDownloads_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(8);
    return;
}

void Settings::on_labelUploads_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(9);
    return;
}

void Settings::on_labelRemote_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(10);
    return;
}

void Settings::on_labelConfigureG2_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(12);
    return;
}

void Settings::on_labelConfigureG1_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(12);
    return;
}

void Settings::on_labelConfigureAres_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(13);
    return;
}

void Settings::on_labelConfigureED2k_linkActivated(QString link)
{
    link.clear();
    m_ui->pagesSettings->setCurrentIndex(14);
    return;
}
