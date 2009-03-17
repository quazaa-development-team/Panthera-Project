#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Settings)
{
    m_ui->setupUi(this);
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

void Settings::on_pushButton_released()
{
    this->close();
}
