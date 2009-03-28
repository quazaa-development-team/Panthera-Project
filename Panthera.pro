# Panthera.pro
# Copyright © Panthera Project, 2009.
# This file is part of PANTHERA (www.pantheraproject.net)
# Panthera is free software; you can redistribute it
# and/or modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
# Panthera is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with Panthera; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
# -------------------------------------------------
# Project created by QtCreator 2009-03-06T16:54:32
# -------------------------------------------------
QT += network \
    sql \
    webkit \
    xml \
    xmlpatterns
TARGET = Panthera
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    splash.cpp \
    settings.cpp \
    profile.cpp \
    persistentsettings.cpp
HEADERS += mainwindow.h \
    splash.h \
    settings.h \
    profile.h \
    persistentsettings.h
FORMS += mainwindow.ui \
    splash.ui \
    settings.ui \
    profile.ui
RESOURCES += Graphics.qrc
