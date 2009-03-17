//
// mainwindow.cpp
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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "splash.h"
#include "settings.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindowClass)
{
    Splash *winSplash = new Splash(this);
    winSplash->setWindowFlags(Qt::FramelessWindowHint);
    winSplash->show();
    winSplash->updateProgress(95, "Loading User Interface...");
    ui->setupUi(this);
    ui->pagesMain->setCurrentIndex(0);
    winSplash->updateProgress(100, "Welcome to Panthera!");
    winSplash->close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionHome_triggered()
{
    ui->pagesMain->setCurrentIndex(0);
}

void MainWindow::on_actionLibrary_triggered()
{
    ui->pagesMain->setCurrentIndex(1);
}

void MainWindow::on_actionMedia_triggered()
{
    ui->pagesMain->setCurrentIndex(2);
}

void MainWindow::on_actionSearch_triggered()
{
    ui->pagesMain->setCurrentIndex(3);
}

void MainWindow::on_actionTransfers_triggered()
{
    ui->pagesMain->setCurrentIndex(4);
}

void MainWindow::on_actionSecurity_triggered()
{
    ui->pagesMain->setCurrentIndex(5);
}

void MainWindow::on_actionNetwork_triggered()
{
    ui->pagesMain->setCurrentIndex(6);
}

void MainWindow::on_actionChat_triggered()
{
    ui->pagesMain->setCurrentIndex(7);
}

void MainWindow::on_actionSettings_triggered()
{
    Settings *winSettings = new Settings(this);
    winSettings->show();
}
