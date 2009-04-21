#include "dialogopentorrent.h"
#include "ui_dialogopentorrent.h"

DialogOpenTorrent::DialogOpenTorrent(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogOpenTorrent)
{
    m_ui->setupUi(this);
}

DialogOpenTorrent::~DialogOpenTorrent()
{
    delete m_ui;
}

void DialogOpenTorrent::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
