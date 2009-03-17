//
// splash.h
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

#ifndef SPLASH_H
#define SPLASH_H

#include <QtGui/QDialog>

namespace Ui {
    class Splash;
}

class Splash : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Splash)
public:
    explicit Splash(QWidget *parent = 0);
    virtual ~Splash();
    void updateProgress(int percent, QString status);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Splash *m_ui;
};

#endif // SPLASH_H
