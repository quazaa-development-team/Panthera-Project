#include "splash.h"
#include "ui_splash.h"

Splash::Splash(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Splash)
{
    m_ui->setupUi(this);
}

Splash::~Splash()
{
    delete m_ui;
}

void Splash::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
