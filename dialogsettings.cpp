#include "dialogsettings.h"
#include "ui_dialogsettings.h"
#include "dialogprofile.h"

DialogSettings::DialogSettings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogSettings)
{
    m_ui->setupUi(this);
	m_ui->pagesSettings->setCurrentIndex(0);
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
}

void DialogSettings::on_labelBasic_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(1);
}

void DialogSettings::on_labelLibrary_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(2);
}

void DialogSettings::on_labelMediaPlayer_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(3);
}

void DialogSettings::on_labelCommunity_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(4);
}

void DialogSettings::on_labelWebIntegration_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(5);
}

void DialogSettings::on_treeWidgetSettingsNavigation_itemSelectionChanged()
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

void DialogSettings::on_pushButtonEditProfile_clicked()
{
	DialogProfile *dlgProfile = new DialogProfile(this);
	dlgProfile->show();
}

void DialogSettings::on_labelConnection_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(7);
	return;
}

void DialogSettings::on_labelDownloads_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(8);
	return;
}

void DialogSettings::on_labelUploads_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(9);
	return;
}

void DialogSettings::on_labelRemote_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(10);
	return;
}

void DialogSettings::on_labelConfigureG2_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(12);
	return;
}

void DialogSettings::on_labelConfigureG1_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(12);
	return;
}

void DialogSettings::on_labelConfigureAres_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(13);
	return;
}

void DialogSettings::on_labelConfigureED2k_linkActivated(QString link)
{
	link.clear();
	m_ui->pagesSettings->setCurrentIndex(14);
	return;
}
