//
// main.cpp
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

#include <QtGui/QApplication>
#include <QSettings>
#include "mainwindow.h"
#include "splash.h"

int main(int argc, char *argv[])
{
    QApplication theApp(argc, argv);
    QSettings m_qSettings("Panthera Project", "Panthera");
    m_qSettings.setDefaultFormat(QSettings::IniFormat);
    theApp.processEvents();
    MainWindow winMain;
    
    m_qSettings.beginGroup("MainWindow");
    if ( m_qSettings.value("WindowVisible", true).toBool() )
    {
        winMain.show();
    }
    m_qSettings.endGroup();
    return theApp.exec();
}
