#include <QtGui/QApplication>
#include "mainwindow.h"
#include "splash.h"

int main(int argc, char *argv[])
{
    QApplication theApp(argc, argv);
    theApp.processEvents();
    MainWindow wndMain;
    wndMain.show();
    return theApp.exec();
}
