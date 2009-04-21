#include "dialogcreatetorrent.h"
#include "ui_dialogcreatetorrent.h"

DialogCreateTorrent::DialogCreateTorrent(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogCreateTorrent)
{
    m_ui->setupUi(this);
}

DialogCreateTorrent::~DialogCreateTorrent()
{
    delete m_ui;
}

void DialogCreateTorrent::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
