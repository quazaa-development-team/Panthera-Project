#include "dialogeditshares.h"
#include "ui_dialogeditshares.h"
#include "persistentsettings.h"
#include <QFileDialog>

DialogEditShares::DialogEditShares(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogEditShares)
{
    m_ui->setupUi(this);
	m_ui->listWidgetShares->addItems(Settings.Library.Shares);
	m_ui->pushButtonOk->setEnabled(false);
}

DialogEditShares::~DialogEditShares()
{
    delete m_ui;
}

void DialogEditShares::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogEditShares::on_pushButtonCancel_clicked()
{
	close();
}

void DialogEditShares::on_pushButtonOk_clicked()
{
	Settings.Library.Shares.clear();
	for (int m_iSharesRow = 0; m_iSharesRow < m_ui->listWidgetShares->count(); ++m_iSharesRow)
	{
		m_ui->listWidgetShares->setCurrentRow(m_iSharesRow);
		Settings.Library.Shares.append(m_ui->listWidgetShares->currentItem()->text());
	}
	close();
}

void DialogEditShares::on_pushButtonAdd_clicked()
{
	QFileDialog::Options options = QFileDialog::DontResolveSymlinks | QFileDialog::ShowDirsOnly;
	QString directory = QFileDialog::getExistingDirectory(this,
							tr("Select A Folder To Share"),
							Settings.Downloads.CompletePath,
							options);
	if (!directory.isEmpty())
	{
		m_ui->listWidgetShares->addItem(directory);
		m_ui->pushButtonOk->setEnabled(true);
	}
}

void DialogEditShares::on_pushButtonRemove_clicked()
{
	if(m_ui->listWidgetShares->currentRow() != -1)
	{
		m_ui->listWidgetShares->takeItem(m_ui->listWidgetShares->currentRow());
		m_ui->pushButtonOk->setEnabled(true);
	}
}
