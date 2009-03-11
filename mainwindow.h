#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class MainWindowClass;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;

private slots:
    void on_actionChat_triggered();
    void on_actionMedia_triggered();
    void on_actionNetwork_triggered();
    void on_actionSecurity_triggered();
    void on_actionTransfers_triggered();
    void on_actionSearch_triggered();
    void on_actionLibrary_triggered();
    void on_actionHome_triggered();
    void on_actionExit_triggered();
};

#endif // MAINWINDOW_H
