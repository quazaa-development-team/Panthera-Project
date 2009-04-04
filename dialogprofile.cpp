#include "dialogprofile.h"
#include "ui_dialogprofile.h"

DialogProfile::DialogProfile(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogProfile)
{
    m_ui->setupUi(this);
	m_ui->pagesProfile->setCurrentIndex(0);
}

DialogProfile::~DialogProfile()
{
    delete m_ui;
}

void DialogProfile::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogProfile::on_treeWidgetProfileNavigation_itemSelectionChanged()
{
	QTreeWidgetItem* item = m_ui->treeWidgetProfileNavigation->currentItem();
	int column = m_ui->treeWidgetProfileNavigation->currentColumn();
	QByteArray m_aItemName;
	m_aItemName.append(item->text(column));

	if (m_aItemName.contains("Identity"))
	{
		m_ui->pagesProfile->setCurrentIndex(0);
		return;
	 } else if (m_aItemName.contains("Contact")) {
		m_ui->pagesProfile->setCurrentIndex(1);
		return;
	} else if (m_aItemName.contains("Profile")) {
		m_ui->pagesProfile->setCurrentIndex(2);
		return;
	} else if (m_aItemName.contains("Bio")) {
		m_ui->pagesProfile->setCurrentIndex(3);
		return;
	} else if (m_aItemName.contains("Avatar")) {
		m_ui->pagesProfile->setCurrentIndex(4);
		return;
	} else if (m_aItemName.contains("Favorites")) {
		m_ui->pagesProfile->setCurrentIndex(5);
		return;
	} else if (m_aItemName.contains("Files")) {
		m_ui->pagesProfile->setCurrentIndex(6);
		return;
	} else if (m_aItemName.contains("Certificate")) {
		m_ui->pagesProfile->setCurrentIndex(7);
	   return;
	}
}

void DialogProfile::on_pushButtonOK_clicked()
{
	close();
}

void DialogProfile::on_pushButtonCancel_clicked()
{
	close();
}
