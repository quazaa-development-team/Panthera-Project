#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindowClass)
{
    ui->setupUi(this);
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
    ui->pagesWidget->setCurrentIndex(0);
}

void MainWindow::on_actionLibrary_triggered()
{
    ui->pagesWidget->setCurrentIndex(1);
}

void MainWindow::on_actionMedia_triggered()
{
    ui->pagesWidget->setCurrentIndex(2);
}

void MainWindow::on_actionSearch_triggered()
{
    ui->pagesWidget->setCurrentIndex(3);
}

void MainWindow::on_actionTransfers_triggered()
{
    ui->pagesWidget->setCurrentIndex(4);
}

void MainWindow::on_actionSecurity_triggered()
{
    ui->pagesWidget->setCurrentIndex(5);
}

void MainWindow::on_actionNetwork_triggered()
{
    ui->pagesWidget->setCurrentIndex(6);
}

void MainWindow::on_actionChat_triggered()
{
    ui->pagesWidget->setCurrentIndex(7);
}
