//
// profile.h
//
// Copyright  Panthera Project, 2009.
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

#ifndef PROFILE_H
#define PROFILE_H

#include <QtGui/QDialog>
#include "ui_profile.h"

namespace Ui {
	class dlgProfile;
}

class dlgProfile : public QDialog {
	Q_OBJECT
	Q_DISABLE_COPY(dlgProfile)
public:
	explicit dlgProfile(QWidget *parent = 0);
	virtual ~dlgProfile();

protected:
	virtual void changeEvent(QEvent *e);

private:
	Ui::dlgProfile *m_ui;


};

#endif // PROFILE_H
