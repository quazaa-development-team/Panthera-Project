//
// dialogabout.cpp
//
// Copyright � Panthera Project, 2009.
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

#include "dialogabout.h"
#include "ui_dialogabout.h"

DialogAbout::DialogAbout(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DialogAbout)
{
    m_ui->setupUi(this);
}

DialogAbout::~DialogAbout()
{
    delete m_ui;
}

void DialogAbout::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DialogAbout::on_pushButtonOK_clicked()
{
	close();
}
