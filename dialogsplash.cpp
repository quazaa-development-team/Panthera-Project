#include "dialogsplash.h"
#include "ui_dialogsplash.h"

DialogSplash::DialogSplash(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogSplash)
{
    m_ui->setupUi(this);
}

DialogSplash::~DialogSplash()
{
    delete m_ui;
}

void DialogSplash::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogSplash::updateProgress(int percent, QString status)
{
	m_ui->progressBarStatus->setValue(percent);
	m_ui->labelStatus->setText(status);
}
