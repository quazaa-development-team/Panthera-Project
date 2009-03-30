#include "persistentsettings.h"

PersistentSettings::PersistentSettings()
{
}

void PersistentSettings::saveMainWindowState(QMainWindow *mainWindow)
{
    QSettings m_qSettings("Panthera Project", "Panthera");
    m_qSettings.setDefaultFormat(QSettings::IniFormat);

    m_qSettings.beginGroup("MainWindow");
    if (!mainWindow->isMinimized() && !mainWindow->isMaximized())
    {
        m_qSettings.setValue( "Size", mainWindow->size() );
        m_qSettings.setValue( "Position", mainWindow->pos() );
        m_qSettings.setValue( "WindowState", 0 );
    }
    else if (mainWindow->isMinimized())
    {
        m_qSettings.setValue( "WindowState", 1 );
    }
    else if (mainWindow->isMaximized())
    {
        m_qSettings.setValue( "WindowState", 2 );
    }
    m_qSettings.setValue( "WindowVisible", mainWindow->isVisible() );

    m_qSettings.sync();
    m_qSettings.endGroup();
}

void PersistentSettings::loadMainWindowState(QMainWindow *mainWindow)
{
    QSettings m_qSettings("Panthera Project", "Panthera");
    m_qSettings.setDefaultFormat(QSettings::IniFormat);
    int m_iWindowState;

    m_qSettings.beginGroup("MainWindow");
    mainWindow->resize( m_qSettings.value( "Size", QSize( 535, 104 ) ).toSize() );
    mainWindow->move( m_qSettings.value( "Position", QPoint( 200, 200 ) ).toPoint() );
    m_iWindowState = m_qSettings.value("WindowState", 0 ).toInt();
    switch (m_iWindowState)
    {
        case 0:
            mainWindow->setWindowState(Qt::WindowNoState);
            break;
        case 1:
            mainWindow->setWindowState(Qt::WindowMinimized);
            break;
        case 2:
            mainWindow->setWindowState(Qt::WindowMaximized);
            break;
    }

    m_qSettings.endGroup();
}
