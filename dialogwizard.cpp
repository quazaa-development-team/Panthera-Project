//
// dialogwizard.cpp
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

#include "dialogwizard.h"
#include "ui_dialogwizard.h"
#include "persistentsettings.h"

DialogWizard::DialogWizard(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogWizard)
{
    m_ui->setupUi(this);
	m_ui->pagesWizard->setCurrentIndex(0);
}

DialogWizard::~DialogWizard()
{
	QSettings m_qSettings("Panthera Project", "Panthera");

	m_qSettings.beginGroup("Basic");
	m_qSettings.setValue("FirstRun", false);
    delete m_ui;
}

void DialogWizard::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogWizard::on_pushButtonConnectionBack_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(0);
}

void DialogWizard::on_pushButtonConnectionNext_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(2);
}

void DialogWizard::on_pushButtonConnectionExit_clicked()
{
	close();
}

void DialogWizard::on_pushButtonWelcomeNext_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(1);
}

void DialogWizard::on_pushButtonWelcomeExit_clicked()
{
	close();
}

void DialogWizard::on_pushButtonSharesBack_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(1);
}

void DialogWizard::on_pushButtonSharesNext_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(3);
}

void DialogWizard::on_pushButtonSharesExit_clicked()
{
	close();
}

void DialogWizard::on_pushButtonChatBack_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(2);
}

void DialogWizard::on_pushButtonChatNext_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(4);
}

void DialogWizard::on_pushButtonChatExit_clicked()
{
	close();
}

void DialogWizard::on_pushButtonNetworksBack_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(3);
}

void DialogWizard::on_pushButtonNetworksNext_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(5);
}

void DialogWizard::on_pushButtonNetworksExit_clicked()
{
	close();
}

void DialogWizard::on_pushButtonSystemBack_clicked()
{
	m_ui->pagesWizard->setCurrentIndex(4);
}

void DialogWizard::on_pushButtonSystemFinish_clicked()
{
	close();
}

void DialogWizard::on_pushButtonSystemExit_clicked()
{
	close();
}
