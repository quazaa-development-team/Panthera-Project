/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Mar 11 14:25:17 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionLock_Panels;
    QAction *actionHome;
    QAction *actionLibrary;
    QAction *actionSearch;
    QAction *actionTransfers;
    QAction *actionSecurity;
    QAction *actionNetwork;
    QAction *actionMedia;
    QAction *actionCreate_Torrent;
    QAction *actionSeed_Torrent;
    QAction *actionOpen_Torrent;
    QAction *actionSettings;
    QAction *actionEDonkey_2000;
    QAction *actionGnutella_1;
    QAction *actionGnutella_2;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConnect_To;
    QAction *actionBrowse;
    QAction *actionExit_After_Transfers;
    QAction *actionChat;
    QAction *actionHostcache;
    QAction *actionDiscovery;
    QAction *actionGraph;
    QAction *actionPacket_Dump;
    QAction *actionHit_Monitor;
    QAction *actionSearch_Monitor;
    QAction *actionShares;
    QAction *actionURL_Download;
    QAction *actionImport_Partials;
    QAction *actionOpen_Download_Folder;
    QAction *actionChoose_Skin;
    QAction *actionChoose_Language;
    QAction *actionQuickstart_Wizard;
    QAction *actionUser_s_Guide;
    QAction *actionFAQ;
    QAction *actionConnection_Test;
    QAction *actionCheck_For_New_Version;
    QAction *actionDonate;
    QAction *actionPanthera_Forums;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *pagesWidget;
    QWidget *Home;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxHome;
    QGridLayout *gridLayout_10;
    QWebView *webView;
    QWidget *Library;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxLibrary;
    QWidget *Media;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxMedia;
    QWidget *Search;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBoxSearch;
    QWidget *Transfers;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBoxTransfers;
    QWidget *Security;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxSecurity;
    QWidget *Network;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBoxNetwork;
    QWidget *Chat;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBoxChat;
    QMenuBar *menuBar;
    QMenu *menuNetwork;
    QMenu *menuConnect_To;
    QMenu *menuUsers;
    QMenu *menuView;
    QMenu *menuAdvanced;
    QMenu *menuTools;
    QMenu *menuTorrents;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(612, 400);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("Resource/Panthera.png")), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/button_cancel-32.png")), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionAbout = new QAction(MainWindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Panthera.png")), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionLock_Panels = new QAction(MainWindowClass);
        actionLock_Panels->setObjectName(QString::fromUtf8("actionLock_Panels"));
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Keys_32.png")), QIcon::Normal, QIcon::Off);
        actionLock_Panels->setIcon(icon3);
        actionHome = new QAction(MainWindowClass);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Home_32x32.png")), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon4);
        actionLibrary = new QAction(MainWindowClass);
        actionLibrary->setObjectName(QString::fromUtf8("actionLibrary"));
        QIcon icon5;
        icon5.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder Libary_32.png")), QIcon::Normal, QIcon::Off);
        actionLibrary->setIcon(icon5);
        actionSearch = new QAction(MainWindowClass);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon6;
        icon6.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/search-32.png")), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon6);
        actionTransfers = new QAction(MainWindowClass);
        actionTransfers->setObjectName(QString::fromUtf8("actionTransfers"));
        QIcon icon7;
        icon7.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Download.png")), QIcon::Normal, QIcon::Off);
        actionTransfers->setIcon(icon7);
        actionSecurity = new QAction(MainWindowClass);
        actionSecurity->setObjectName(QString::fromUtf8("actionSecurity"));
        QIcon icon8;
        icon8.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Earth Security.png")), QIcon::Normal, QIcon::Off);
        actionSecurity->setIcon(icon8);
        actionNetwork = new QAction(MainWindowClass);
        actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
        QIcon icon9;
        icon9.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Workgroup.png")), QIcon::Normal, QIcon::Off);
        actionNetwork->setIcon(icon9);
        actionMedia = new QAction(MainWindowClass);
        actionMedia->setObjectName(QString::fromUtf8("actionMedia"));
        QIcon icon10;
        icon10.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/film-reel-32x32.png")), QIcon::Normal, QIcon::Off);
        actionMedia->setIcon(icon10);
        actionCreate_Torrent = new QAction(MainWindowClass);
        actionCreate_Torrent->setObjectName(QString::fromUtf8("actionCreate_Torrent"));
        QIcon icon11;
        icon11.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Bittorent Downloads.png")), QIcon::Normal, QIcon::Off);
        actionCreate_Torrent->setIcon(icon11);
        actionSeed_Torrent = new QAction(MainWindowClass);
        actionSeed_Torrent->setObjectName(QString::fromUtf8("actionSeed_Torrent"));
        QIcon icon12;
        icon12.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/BittorrentSeed.png")), QIcon::Normal, QIcon::Off);
        actionSeed_Torrent->setIcon(icon12);
        actionOpen_Torrent = new QAction(MainWindowClass);
        actionOpen_Torrent->setObjectName(QString::fromUtf8("actionOpen_Torrent"));
        QIcon icon13;
        icon13.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Bittorrent_32.png")), QIcon::Normal, QIcon::Off);
        actionOpen_Torrent->setIcon(icon13);
        actionSettings = new QAction(MainWindowClass);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon14;
        icon14.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/INF File.png")), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon14);
        actionEDonkey_2000 = new QAction(MainWindowClass);
        actionEDonkey_2000->setObjectName(QString::fromUtf8("actionEDonkey_2000"));
        actionEDonkey_2000->setCheckable(true);
        QIcon icon15;
        icon15.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/donkey-32x32.png")), QIcon::Normal, QIcon::Off);
        actionEDonkey_2000->setIcon(icon15);
        actionGnutella_1 = new QAction(MainWindowClass);
        actionGnutella_1->setObjectName(QString::fromUtf8("actionGnutella_1"));
        actionGnutella_1->setCheckable(true);
        QIcon icon16;
        icon16.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/G1.png")), QIcon::Normal, QIcon::Off);
        actionGnutella_1->setIcon(icon16);
        actionGnutella_2 = new QAction(MainWindowClass);
        actionGnutella_2->setObjectName(QString::fromUtf8("actionGnutella_2"));
        actionGnutella_2->setCheckable(true);
        QIcon icon17;
        icon17.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/G2.png")), QIcon::Normal, QIcon::Off);
        actionGnutella_2->setIcon(icon17);
        actionConnect = new QAction(MainWindowClass);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon18;
        icon18.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/connect_creating-32.png")), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon18);
        actionDisconnect = new QAction(MainWindowClass);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon19;
        icon19.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/connect_no-32.png")), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon19);
        actionConnect_To = new QAction(MainWindowClass);
        actionConnect_To->setObjectName(QString::fromUtf8("actionConnect_To"));
        QIcon icon20;
        icon20.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Internet Connect.png")), QIcon::Normal, QIcon::Off);
        actionConnect_To->setIcon(icon20);
        actionBrowse = new QAction(MainWindowClass);
        actionBrowse->setObjectName(QString::fromUtf8("actionBrowse"));
        QIcon icon21;
        icon21.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Network Connections.png")), QIcon::Normal, QIcon::Off);
        actionBrowse->setIcon(icon21);
        actionExit_After_Transfers = new QAction(MainWindowClass);
        actionExit_After_Transfers->setObjectName(QString::fromUtf8("actionExit_After_Transfers"));
        QIcon icon22;
        icon22.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/fileclose-32.png")), QIcon::Normal, QIcon::Off);
        actionExit_After_Transfers->setIcon(icon22);
        actionChat = new QAction(MainWindowClass);
        actionChat->setObjectName(QString::fromUtf8("actionChat"));
        QIcon icon23;
        icon23.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Message.png")), QIcon::Normal, QIcon::Off);
        actionChat->setIcon(icon23);
        actionHostcache = new QAction(MainWindowClass);
        actionHostcache->setObjectName(QString::fromUtf8("actionHostcache"));
        QIcon icon24;
        icon24.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Entire Network.png")), QIcon::Normal, QIcon::Off);
        actionHostcache->setIcon(icon24);
        actionDiscovery = new QAction(MainWindowClass);
        actionDiscovery->setObjectName(QString::fromUtf8("actionDiscovery"));
        QIcon icon25;
        icon25.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Column-Chart-32x32.png")), QIcon::Normal, QIcon::Off);
        actionDiscovery->setIcon(icon25);
        actionGraph = new QAction(MainWindowClass);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        QIcon icon26;
        icon26.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Graph.png")), QIcon::Normal, QIcon::Off);
        actionGraph->setIcon(icon26);
        actionPacket_Dump = new QAction(MainWindowClass);
        actionPacket_Dump->setObjectName(QString::fromUtf8("actionPacket_Dump"));
        QIcon icon27;
        icon27.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Package network.png")), QIcon::Normal, QIcon::Off);
        actionPacket_Dump->setIcon(icon27);
        actionHit_Monitor = new QAction(MainWindowClass);
        actionHit_Monitor->setObjectName(QString::fromUtf8("actionHit_Monitor"));
        QIcon icon28;
        icon28.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Desktop graphite.png")), QIcon::Normal, QIcon::Off);
        actionHit_Monitor->setIcon(icon28);
        actionSearch_Monitor = new QAction(MainWindowClass);
        actionSearch_Monitor->setObjectName(QString::fromUtf8("actionSearch_Monitor"));
        QIcon icon29;
        icon29.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/SearchMonitor.png")), QIcon::Normal, QIcon::Off);
        actionSearch_Monitor->setIcon(icon29);
        actionShares = new QAction(MainWindowClass);
        actionShares->setObjectName(QString::fromUtf8("actionShares"));
        QIcon icon30;
        icon30.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder Download.png")), QIcon::Normal, QIcon::Off);
        actionShares->setIcon(icon30);
        actionURL_Download = new QAction(MainWindowClass);
        actionURL_Download->setObjectName(QString::fromUtf8("actionURL_Download"));
        QIcon icon31;
        icon31.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Filetype URL.png")), QIcon::Normal, QIcon::Off);
        actionURL_Download->setIcon(icon31);
        actionImport_Partials = new QAction(MainWindowClass);
        actionImport_Partials->setObjectName(QString::fromUtf8("actionImport_Partials"));
        QIcon icon32;
        icon32.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/REG File.png")), QIcon::Normal, QIcon::Off);
        actionImport_Partials->setIcon(icon32);
        actionOpen_Download_Folder = new QAction(MainWindowClass);
        actionOpen_Download_Folder->setObjectName(QString::fromUtf8("actionOpen_Download_Folder"));
        QIcon icon33;
        icon33.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder.png")), QIcon::Normal, QIcon::Off);
        actionOpen_Download_Folder->setIcon(icon33);
        actionChoose_Skin = new QAction(MainWindowClass);
        actionChoose_Skin->setObjectName(QString::fromUtf8("actionChoose_Skin"));
        QIcon icon34;
        icon34.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Image.png")), QIcon::Normal, QIcon::Off);
        actionChoose_Skin->setIcon(icon34);
        actionChoose_Language = new QAction(MainWindowClass);
        actionChoose_Language->setObjectName(QString::fromUtf8("actionChoose_Language"));
        QIcon icon35;
        icon35.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Language.png")), QIcon::Normal, QIcon::Off);
        actionChoose_Language->setIcon(icon35);
        actionQuickstart_Wizard = new QAction(MainWindowClass);
        actionQuickstart_Wizard->setObjectName(QString::fromUtf8("actionQuickstart_Wizard"));
        QIcon icon36;
        icon36.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/wizard_32.png")), QIcon::Normal, QIcon::Off);
        actionQuickstart_Wizard->setIcon(icon36);
        actionUser_s_Guide = new QAction(MainWindowClass);
        actionUser_s_Guide->setObjectName(QString::fromUtf8("actionUser_s_Guide"));
        QIcon icon37;
        icon37.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Tourist guidebook.png")), QIcon::Normal, QIcon::Off);
        actionUser_s_Guide->setIcon(icon37);
        actionFAQ = new QAction(MainWindowClass);
        actionFAQ->setObjectName(QString::fromUtf8("actionFAQ"));
        QIcon icon38;
        icon38.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Question Block.png")), QIcon::Normal, QIcon::Off);
        actionFAQ->setIcon(icon38);
        actionConnection_Test = new QAction(MainWindowClass);
        actionConnection_Test->setObjectName(QString::fromUtf8("actionConnection_Test"));
        actionConnection_Test->setIcon(icon18);
        actionCheck_For_New_Version = new QAction(MainWindowClass);
        actionCheck_For_New_Version->setObjectName(QString::fromUtf8("actionCheck_For_New_Version"));
        QIcon icon39;
        icon39.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/agt_action_success-32.png")), QIcon::Normal, QIcon::Off);
        actionCheck_For_New_Version->setIcon(icon39);
        actionDonate = new QAction(MainWindowClass);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        QIcon icon40;
        icon40.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/money_32.png")), QIcon::Normal, QIcon::Off);
        actionDonate->setIcon(icon40);
        actionPanthera_Forums = new QAction(MainWindowClass);
        actionPanthera_Forums->setObjectName(QString::fromUtf8("actionPanthera_Forums"));
        QIcon icon41;
        icon41.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Zealot.png")), QIcon::Normal, QIcon::Off);
        actionPanthera_Forums->setIcon(icon41);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pagesWidget = new QStackedWidget(centralWidget);
        pagesWidget->setObjectName(QString::fromUtf8("pagesWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pagesWidget->sizePolicy().hasHeightForWidth());
        pagesWidget->setSizePolicy(sizePolicy);
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        gridLayout_2 = new QGridLayout(Home);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBoxHome = new QGroupBox(Home);
        groupBoxHome->setObjectName(QString::fromUtf8("groupBoxHome"));
        groupBoxHome->setAlignment(Qt::AlignCenter);
        groupBoxHome->setFlat(true);
        gridLayout_10 = new QGridLayout(groupBoxHome);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_10->setHorizontalSpacing(6);
        webView = new QWebView(groupBoxHome);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("about:blank"));

        gridLayout_10->addWidget(webView, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxHome, 0, 0, 1, 1);

        pagesWidget->addWidget(Home);
        Library = new QWidget();
        Library->setObjectName(QString::fromUtf8("Library"));
        gridLayout_3 = new QGridLayout(Library);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBoxLibrary = new QGroupBox(Library);
        groupBoxLibrary->setObjectName(QString::fromUtf8("groupBoxLibrary"));
        groupBoxLibrary->setAlignment(Qt::AlignCenter);
        groupBoxLibrary->setFlat(true);

        gridLayout_3->addWidget(groupBoxLibrary, 0, 0, 1, 1);

        pagesWidget->addWidget(Library);
        Media = new QWidget();
        Media->setObjectName(QString::fromUtf8("Media"));
        gridLayout_4 = new QGridLayout(Media);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBoxMedia = new QGroupBox(Media);
        groupBoxMedia->setObjectName(QString::fromUtf8("groupBoxMedia"));
        groupBoxMedia->setAlignment(Qt::AlignCenter);
        groupBoxMedia->setFlat(true);

        gridLayout_4->addWidget(groupBoxMedia, 0, 0, 1, 1);

        pagesWidget->addWidget(Media);
        Search = new QWidget();
        Search->setObjectName(QString::fromUtf8("Search"));
        gridLayout_5 = new QGridLayout(Search);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBoxSearch = new QGroupBox(Search);
        groupBoxSearch->setObjectName(QString::fromUtf8("groupBoxSearch"));
        groupBoxSearch->setAlignment(Qt::AlignCenter);
        groupBoxSearch->setFlat(true);

        gridLayout_5->addWidget(groupBoxSearch, 0, 0, 1, 1);

        pagesWidget->addWidget(Search);
        Transfers = new QWidget();
        Transfers->setObjectName(QString::fromUtf8("Transfers"));
        gridLayout_6 = new QGridLayout(Transfers);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBoxTransfers = new QGroupBox(Transfers);
        groupBoxTransfers->setObjectName(QString::fromUtf8("groupBoxTransfers"));
        groupBoxTransfers->setAlignment(Qt::AlignCenter);
        groupBoxTransfers->setFlat(true);

        gridLayout_6->addWidget(groupBoxTransfers, 0, 0, 1, 1);

        pagesWidget->addWidget(Transfers);
        Security = new QWidget();
        Security->setObjectName(QString::fromUtf8("Security"));
        gridLayout_7 = new QGridLayout(Security);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBoxSecurity = new QGroupBox(Security);
        groupBoxSecurity->setObjectName(QString::fromUtf8("groupBoxSecurity"));
        groupBoxSecurity->setAlignment(Qt::AlignCenter);
        groupBoxSecurity->setFlat(true);

        gridLayout_7->addWidget(groupBoxSecurity, 0, 0, 1, 1);

        pagesWidget->addWidget(Security);
        Network = new QWidget();
        Network->setObjectName(QString::fromUtf8("Network"));
        gridLayout_8 = new QGridLayout(Network);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBoxNetwork = new QGroupBox(Network);
        groupBoxNetwork->setObjectName(QString::fromUtf8("groupBoxNetwork"));
        groupBoxNetwork->setAlignment(Qt::AlignCenter);
        groupBoxNetwork->setFlat(true);

        gridLayout_8->addWidget(groupBoxNetwork, 0, 0, 1, 1);

        pagesWidget->addWidget(Network);
        Chat = new QWidget();
        Chat->setObjectName(QString::fromUtf8("Chat"));
        gridLayout_9 = new QGridLayout(Chat);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBoxChat = new QGroupBox(Chat);
        groupBoxChat->setObjectName(QString::fromUtf8("groupBoxChat"));
        groupBoxChat->setAlignment(Qt::AlignCenter);
        groupBoxChat->setFlat(true);

        gridLayout_9->addWidget(groupBoxChat, 0, 0, 1, 1);

        pagesWidget->addWidget(Chat);

        gridLayout->addWidget(pagesWidget, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 21));
        menuNetwork = new QMenu(menuBar);
        menuNetwork->setObjectName(QString::fromUtf8("menuNetwork"));
        menuConnect_To = new QMenu(menuNetwork);
        menuConnect_To->setObjectName(QString::fromUtf8("menuConnect_To"));
        menuUsers = new QMenu(menuNetwork);
        menuUsers->setObjectName(QString::fromUtf8("menuUsers"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuAdvanced = new QMenu(menuView);
        menuAdvanced->setObjectName(QString::fromUtf8("menuAdvanced"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTorrents = new QMenu(menuTools);
        menuTorrents->setObjectName(QString::fromUtf8("menuTorrents"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mainToolBar->setFloatable(false);
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuNetwork->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuNetwork->addAction(actionConnect);
        menuNetwork->addAction(actionDisconnect);
        menuNetwork->addSeparator();
        menuNetwork->addAction(menuConnect_To->menuAction());
        menuNetwork->addAction(menuUsers->menuAction());
        menuNetwork->addSeparator();
        menuNetwork->addAction(actionExit_After_Transfers);
        menuNetwork->addAction(actionExit);
        menuConnect_To->addAction(actionEDonkey_2000);
        menuConnect_To->addAction(actionGnutella_1);
        menuConnect_To->addAction(actionGnutella_2);
        menuUsers->addAction(actionConnect_To);
        menuUsers->addAction(actionBrowse);
        menuView->addAction(actionHome);
        menuView->addAction(actionLibrary);
        menuView->addAction(actionMedia);
        menuView->addAction(actionSearch);
        menuView->addAction(actionTransfers);
        menuView->addAction(actionSecurity);
        menuView->addAction(actionNetwork);
        menuView->addAction(actionChat);
        menuView->addSeparator();
        menuView->addAction(actionHostcache);
        menuView->addAction(actionDiscovery);
        menuView->addSeparator();
        menuView->addAction(menuAdvanced->menuAction());
        menuAdvanced->addAction(actionGraph);
        menuAdvanced->addAction(actionPacket_Dump);
        menuAdvanced->addAction(actionHit_Monitor);
        menuAdvanced->addAction(actionSearch_Monitor);
        menuTools->addAction(menuTorrents->menuAction());
        menuTools->addAction(actionShares);
        menuTools->addAction(actionImport_Partials);
        menuTools->addAction(actionQuickstart_Wizard);
        menuTools->addSeparator();
        menuTools->addAction(actionOpen_Download_Folder);
        menuTools->addAction(actionURL_Download);
        menuTools->addSeparator();
        menuTools->addAction(actionChoose_Skin);
        menuTools->addAction(actionChoose_Language);
        menuTools->addSeparator();
        menuTools->addAction(actionSettings);
        menuTorrents->addAction(actionOpen_Torrent);
        menuTorrents->addAction(actionCreate_Torrent);
        menuTorrents->addAction(actionSeed_Torrent);
        menuWindow->addAction(actionLock_Panels);
        menuHelp->addAction(actionUser_s_Guide);
        menuHelp->addAction(actionPanthera_Forums);
        menuHelp->addAction(actionFAQ);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_For_New_Version);
        menuHelp->addAction(actionConnection_Test);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionHome);
        mainToolBar->addAction(actionLibrary);
        mainToolBar->addAction(actionMedia);
        mainToolBar->addAction(actionSearch);
        mainToolBar->addAction(actionTransfers);
        mainToolBar->addAction(actionSecurity);
        mainToolBar->addAction(actionNetwork);
        mainToolBar->addAction(actionChat);

        retranslateUi(MainWindowClass);

        pagesWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Panthera", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowClass", "About", 0, QApplication::UnicodeUTF8));
        actionLock_Panels->setText(QApplication::translate("MainWindowClass", "Lock Panels", 0, QApplication::UnicodeUTF8));
        actionHome->setText(QApplication::translate("MainWindowClass", "Home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHome->setToolTip(QApplication::translate("MainWindowClass", "Home", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLibrary->setText(QApplication::translate("MainWindowClass", "Library", 0, QApplication::UnicodeUTF8));
        actionSearch->setText(QApplication::translate("MainWindowClass", "Search", 0, QApplication::UnicodeUTF8));
        actionTransfers->setText(QApplication::translate("MainWindowClass", "Transfers", 0, QApplication::UnicodeUTF8));
        actionSecurity->setText(QApplication::translate("MainWindowClass", "Security", 0, QApplication::UnicodeUTF8));
        actionNetwork->setText(QApplication::translate("MainWindowClass", "Network", 0, QApplication::UnicodeUTF8));
        actionMedia->setText(QApplication::translate("MainWindowClass", "Media", 0, QApplication::UnicodeUTF8));
        actionCreate_Torrent->setText(QApplication::translate("MainWindowClass", "Create Torrent", 0, QApplication::UnicodeUTF8));
        actionSeed_Torrent->setText(QApplication::translate("MainWindowClass", "Seed Torrent", 0, QApplication::UnicodeUTF8));
        actionOpen_Torrent->setText(QApplication::translate("MainWindowClass", "Download Torrent", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        actionEDonkey_2000->setText(QApplication::translate("MainWindowClass", "EDonkey 2000", 0, QApplication::UnicodeUTF8));
        actionGnutella_1->setText(QApplication::translate("MainWindowClass", "Gnutella 1", 0, QApplication::UnicodeUTF8));
        actionGnutella_2->setText(QApplication::translate("MainWindowClass", "Gnutella 2", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindowClass", "Connect", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("MainWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        actionConnect_To->setText(QApplication::translate("MainWindowClass", "Connect To", 0, QApplication::UnicodeUTF8));
        actionBrowse->setText(QApplication::translate("MainWindowClass", "Browse", 0, QApplication::UnicodeUTF8));
        actionExit_After_Transfers->setText(QApplication::translate("MainWindowClass", "Exit After Transfers", 0, QApplication::UnicodeUTF8));
        actionChat->setText(QApplication::translate("MainWindowClass", "Chat", 0, QApplication::UnicodeUTF8));
        actionHostcache->setText(QApplication::translate("MainWindowClass", "Host Cache", 0, QApplication::UnicodeUTF8));
        actionDiscovery->setText(QApplication::translate("MainWindowClass", "Discovery", 0, QApplication::UnicodeUTF8));
        actionGraph->setText(QApplication::translate("MainWindowClass", "Graph", 0, QApplication::UnicodeUTF8));
        actionPacket_Dump->setText(QApplication::translate("MainWindowClass", "Packet Dump", 0, QApplication::UnicodeUTF8));
        actionHit_Monitor->setText(QApplication::translate("MainWindowClass", "Hit Monitor", 0, QApplication::UnicodeUTF8));
        actionSearch_Monitor->setText(QApplication::translate("MainWindowClass", "Search Monitor", 0, QApplication::UnicodeUTF8));
        actionShares->setText(QApplication::translate("MainWindowClass", "Shared Folders", 0, QApplication::UnicodeUTF8));
        actionURL_Download->setText(QApplication::translate("MainWindowClass", "URL Download", 0, QApplication::UnicodeUTF8));
        actionImport_Partials->setText(QApplication::translate("MainWindowClass", "Import Partials", 0, QApplication::UnicodeUTF8));
        actionOpen_Download_Folder->setText(QApplication::translate("MainWindowClass", "Open Download Folder", 0, QApplication::UnicodeUTF8));
        actionChoose_Skin->setText(QApplication::translate("MainWindowClass", "Choose Skin", 0, QApplication::UnicodeUTF8));
        actionChoose_Language->setText(QApplication::translate("MainWindowClass", "Choose Language", 0, QApplication::UnicodeUTF8));
        actionQuickstart_Wizard->setText(QApplication::translate("MainWindowClass", "Quickstart Wizard", 0, QApplication::UnicodeUTF8));
        actionUser_s_Guide->setText(QApplication::translate("MainWindowClass", "User's Guide", 0, QApplication::UnicodeUTF8));
        actionFAQ->setText(QApplication::translate("MainWindowClass", "FAQ", 0, QApplication::UnicodeUTF8));
        actionConnection_Test->setText(QApplication::translate("MainWindowClass", "Connection Test", 0, QApplication::UnicodeUTF8));
        actionCheck_For_New_Version->setText(QApplication::translate("MainWindowClass", "Check For New Version", 0, QApplication::UnicodeUTF8));
        actionDonate->setText(QApplication::translate("MainWindowClass", "Donate", 0, QApplication::UnicodeUTF8));
        actionPanthera_Forums->setText(QApplication::translate("MainWindowClass", "Panthera Forums", 0, QApplication::UnicodeUTF8));
        groupBoxHome->setTitle(QApplication::translate("MainWindowClass", "Home", 0, QApplication::UnicodeUTF8));
        groupBoxLibrary->setTitle(QApplication::translate("MainWindowClass", "Library", 0, QApplication::UnicodeUTF8));
        groupBoxMedia->setStyleSheet(QString());
        groupBoxMedia->setTitle(QApplication::translate("MainWindowClass", "Media", 0, QApplication::UnicodeUTF8));
        groupBoxSearch->setTitle(QApplication::translate("MainWindowClass", "Search", 0, QApplication::UnicodeUTF8));
        groupBoxTransfers->setTitle(QApplication::translate("MainWindowClass", "Transfers", 0, QApplication::UnicodeUTF8));
        groupBoxSecurity->setTitle(QApplication::translate("MainWindowClass", "Security", 0, QApplication::UnicodeUTF8));
        groupBoxNetwork->setTitle(QApplication::translate("MainWindowClass", "Network", 0, QApplication::UnicodeUTF8));
        groupBoxChat->setTitle(QApplication::translate("MainWindowClass", "Chat", 0, QApplication::UnicodeUTF8));
        menuNetwork->setTitle(QApplication::translate("MainWindowClass", "Network", 0, QApplication::UnicodeUTF8));
        menuConnect_To->setTitle(QApplication::translate("MainWindowClass", "Choose Networks", 0, QApplication::UnicodeUTF8));
        menuUsers->setTitle(QApplication::translate("MainWindowClass", "Host", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindowClass", "View", 0, QApplication::UnicodeUTF8));
        menuAdvanced->setTitle(QApplication::translate("MainWindowClass", "Advanced", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindowClass", "Tools", 0, QApplication::UnicodeUTF8));
        menuTorrents->setTitle(QApplication::translate("MainWindowClass", "Torrents", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("MainWindowClass", "Window", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
