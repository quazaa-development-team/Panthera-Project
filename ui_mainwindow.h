/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Fri Mar 13 21:09:18 2009
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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
    QStackedWidget *pagesMain;
    QWidget *Home;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxHome;
    QGridLayout *gridLayout_11;
    QFrame *frameHome;
    QGridLayout *gridLayout_26;
    QLabel *headerLbl;
    QGridLayout *gridLayout_23;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QComboBox *typeCombo;
    QPushButton *AdvancedBtn;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelFileType;
    QLabel *labelKeyword;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_13;
    QLabel *labelSkins;
    QLabel *labelSettings;
    QLabel *labelHelp;
    QLabel *labelSecurity;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QLabel *labelWelcome;
    QLabel *labelCustomise;
    QSpacerItem *verticalSpacer;
    QFrame *frameHomeStatus;
    QGridLayout *gridLayout_10;
    QTreeWidget *treeDownloads;
    QTreeWidget *treeUpload;
    QTreeWidget *treeLibrary;
    QTreeWidget *treeWidget;
    QTreeWidget *treeConnection;
    QWidget *Library;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBoxLibrary;
    QGridLayout *gridLayout_15;
    QFrame *frameNav;
    QGridLayout *gridLayout_16;
    QToolBox *toolBox;
    QWidget *pageNavFolders;
    QGridLayout *gridLayout_18;
    QTreeView *treeView_2;
    QWidget *pageNavOrganiser;
    QGridLayout *gridLayout_17;
    QTreeView *treeView;
    QToolButton *toolButtonShare;
    QComboBox *comboBoxType;
    QStackedWidget *pagesLibrary;
    QWidget *pageFolders;
    QWidget *pageOrganiser;
    QGridLayout *gridLayout_19;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QFrame *frame_3;
    QToolButton *toolButton_4;
    QPlainTextEdit *plainTextEdit;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer_11;
    QWidget *Media;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxMedia;
    QGridLayout *gridLayout_14;
    QFrame *frameMediaScreen;
    QFrame *frame_2;
    QFrame *frame;
    QGridLayout *gridLayout_12;
    QToolButton *toolButtonMediaPrevious;
    QToolButton *toolButtonMediaRewind;
    QToolButton *toolButtonMediaStop;
    QToolButton *toolButtonMediaPlay;
    QToolButton *toolButtonMediaPause;
    QToolButton *toolButtonMediaFastForward;
    QToolButton *toolButtonMediaNext;
    QLabel *labelVolume;
    QSpacerItem *horizontalSpacer_7;
    QSlider *horizontalSliderVolume;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *toolButton;
    QToolButton *toolButtonZoom;
    QSlider *horizontalSliderSeek;
    QToolButton *toolButtonPlugins;
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
        MainWindowClass->resize(863, 618);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
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
        icon14.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Gear.png")), QIcon::Normal, QIcon::Off);
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
        actionHostcache->setIcon(icon21);
        actionDiscovery = new QAction(MainWindowClass);
        actionDiscovery->setObjectName(QString::fromUtf8("actionDiscovery"));
        QIcon icon24;
        icon24.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Download server.png")), QIcon::Normal, QIcon::Off);
        actionDiscovery->setIcon(icon24);
        actionGraph = new QAction(MainWindowClass);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        QIcon icon25;
        icon25.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Graph.png")), QIcon::Normal, QIcon::Off);
        actionGraph->setIcon(icon25);
        actionPacket_Dump = new QAction(MainWindowClass);
        actionPacket_Dump->setObjectName(QString::fromUtf8("actionPacket_Dump"));
        QIcon icon26;
        icon26.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Desktop graphite.png")), QIcon::Normal, QIcon::Off);
        actionPacket_Dump->setIcon(icon26);
        actionHit_Monitor = new QAction(MainWindowClass);
        actionHit_Monitor->setObjectName(QString::fromUtf8("actionHit_Monitor"));
        actionHit_Monitor->setIcon(icon26);
        actionSearch_Monitor = new QAction(MainWindowClass);
        actionSearch_Monitor->setObjectName(QString::fromUtf8("actionSearch_Monitor"));
        QIcon icon27;
        icon27.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/SearchMonitor.png")), QIcon::Normal, QIcon::Off);
        actionSearch_Monitor->setIcon(icon27);
        actionShares = new QAction(MainWindowClass);
        actionShares->setObjectName(QString::fromUtf8("actionShares"));
        QIcon icon28;
        icon28.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder Download.png")), QIcon::Normal, QIcon::Off);
        actionShares->setIcon(icon28);
        actionURL_Download = new QAction(MainWindowClass);
        actionURL_Download->setObjectName(QString::fromUtf8("actionURL_Download"));
        QIcon icon29;
        icon29.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Filetype URL.png")), QIcon::Normal, QIcon::Off);
        actionURL_Download->setIcon(icon29);
        actionImport_Partials = new QAction(MainWindowClass);
        actionImport_Partials->setObjectName(QString::fromUtf8("actionImport_Partials"));
        QIcon icon30;
        icon30.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/REG File.png")), QIcon::Normal, QIcon::Off);
        actionImport_Partials->setIcon(icon30);
        actionOpen_Download_Folder = new QAction(MainWindowClass);
        actionOpen_Download_Folder->setObjectName(QString::fromUtf8("actionOpen_Download_Folder"));
        QIcon icon31;
        icon31.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder.png")), QIcon::Normal, QIcon::Off);
        actionOpen_Download_Folder->setIcon(icon31);
        actionChoose_Skin = new QAction(MainWindowClass);
        actionChoose_Skin->setObjectName(QString::fromUtf8("actionChoose_Skin"));
        QIcon icon32;
        icon32.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Wallpaper Settings.png")), QIcon::Normal, QIcon::Off);
        actionChoose_Skin->setIcon(icon32);
        actionChoose_Language = new QAction(MainWindowClass);
        actionChoose_Language->setObjectName(QString::fromUtf8("actionChoose_Language"));
        QIcon icon33;
        icon33.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Language.png")), QIcon::Normal, QIcon::Off);
        actionChoose_Language->setIcon(icon33);
        actionQuickstart_Wizard = new QAction(MainWindowClass);
        actionQuickstart_Wizard->setObjectName(QString::fromUtf8("actionQuickstart_Wizard"));
        QIcon icon34;
        icon34.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/wizard_32.png")), QIcon::Normal, QIcon::Off);
        actionQuickstart_Wizard->setIcon(icon34);
        actionUser_s_Guide = new QAction(MainWindowClass);
        actionUser_s_Guide->setObjectName(QString::fromUtf8("actionUser_s_Guide"));
        QIcon icon35;
        icon35.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Tourist guidebook.png")), QIcon::Normal, QIcon::Off);
        actionUser_s_Guide->setIcon(icon35);
        actionFAQ = new QAction(MainWindowClass);
        actionFAQ->setObjectName(QString::fromUtf8("actionFAQ"));
        QIcon icon36;
        icon36.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Question Block.png")), QIcon::Normal, QIcon::Off);
        actionFAQ->setIcon(icon36);
        actionConnection_Test = new QAction(MainWindowClass);
        actionConnection_Test->setObjectName(QString::fromUtf8("actionConnection_Test"));
        actionConnection_Test->setIcon(icon18);
        actionCheck_For_New_Version = new QAction(MainWindowClass);
        actionCheck_For_New_Version->setObjectName(QString::fromUtf8("actionCheck_For_New_Version"));
        QIcon icon37;
        icon37.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/agt_action_success-32.png")), QIcon::Normal, QIcon::Off);
        actionCheck_For_New_Version->setIcon(icon37);
        actionDonate = new QAction(MainWindowClass);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        QIcon icon38;
        icon38.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/money_32.png")), QIcon::Normal, QIcon::Off);
        actionDonate->setIcon(icon38);
        actionPanthera_Forums = new QAction(MainWindowClass);
        actionPanthera_Forums->setObjectName(QString::fromUtf8("actionPanthera_Forums"));
        QIcon icon39;
        icon39.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Zealot.png")), QIcon::Normal, QIcon::Off);
        actionPanthera_Forums->setIcon(icon39);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pagesMain = new QStackedWidget(centralWidget);
        pagesMain->setObjectName(QString::fromUtf8("pagesMain"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pagesMain->sizePolicy().hasHeightForWidth());
        pagesMain->setSizePolicy(sizePolicy1);
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
        gridLayout_11 = new QGridLayout(groupBoxHome);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setMargin(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        frameHome = new QFrame(groupBoxHome);
        frameHome->setObjectName(QString::fromUtf8("frameHome"));
        frameHome->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_26 = new QGridLayout(frameHome);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setMargin(11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        headerLbl = new QLabel(frameHome);
        headerLbl->setObjectName(QString::fromUtf8("headerLbl"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(headerLbl->sizePolicy().hasHeightForWidth());
        headerLbl->setSizePolicy(sizePolicy2);
        headerLbl->setMinimumSize(QSize(500, 120));
        headerLbl->setStyleSheet(QString::fromUtf8("border-image: url(:/Graphics/Resource/PantheraHomeSplash.png);"));
        headerLbl->setPixmap(QPixmap(QString::fromUtf8(":/Splash/Resource/PantheraHomeSplash.png")));

        gridLayout_26->addWidget(headerLbl, 0, 0, 1, 4);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        lineEditSearch = new QLineEdit(frameHome);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout_23->addWidget(lineEditSearch, 0, 2, 1, 3);

        pushButtonSearch = new QPushButton(frameHome);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        sizePolicy2.setHeightForWidth(pushButtonSearch->sizePolicy().hasHeightForWidth());
        pushButtonSearch->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Mono"));
        pushButtonSearch->setFont(font);

        gridLayout_23->addWidget(pushButtonSearch, 0, 5, 1, 1);

        typeCombo = new QComboBox(frameHome);
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(typeCombo->sizePolicy().hasHeightForWidth());
        typeCombo->setSizePolicy(sizePolicy3);
        typeCombo->setFont(font);
        typeCombo->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_23->addWidget(typeCombo, 1, 2, 1, 1);

        AdvancedBtn = new QPushButton(frameHome);
        AdvancedBtn->setObjectName(QString::fromUtf8("AdvancedBtn"));
        sizePolicy2.setHeightForWidth(AdvancedBtn->sizePolicy().hasHeightForWidth());
        AdvancedBtn->setSizePolicy(sizePolicy2);
        AdvancedBtn->setFont(font);

        gridLayout_23->addWidget(AdvancedBtn, 1, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(64, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 1, 5, 1, 1);

        labelFileType = new QLabel(frameHome);
        labelFileType->setObjectName(QString::fromUtf8("labelFileType"));
        sizePolicy2.setHeightForWidth(labelFileType->sizePolicy().hasHeightForWidth());
        labelFileType->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Mono"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        labelFileType->setFont(font1);
        labelFileType->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_23->addWidget(labelFileType, 1, 1, 1, 1);

        labelKeyword = new QLabel(frameHome);
        labelKeyword->setObjectName(QString::fromUtf8("labelKeyword"));
        sizePolicy2.setHeightForWidth(labelKeyword->sizePolicy().hasHeightForWidth());
        labelKeyword->setSizePolicy(sizePolicy2);
        labelKeyword->setFont(font1);
        labelKeyword->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_23->addWidget(labelKeyword, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_26->addLayout(gridLayout_23, 2, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(135, 23, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_26->addItem(horizontalSpacer_5, 2, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        labelSkins = new QLabel(frameHome);
        labelSkins->setObjectName(QString::fromUtf8("labelSkins"));

        gridLayout_13->addWidget(labelSkins, 1, 1, 1, 1);

        labelSettings = new QLabel(frameHome);
        labelSettings->setObjectName(QString::fromUtf8("labelSettings"));

        gridLayout_13->addWidget(labelSettings, 2, 1, 1, 1);

        labelHelp = new QLabel(frameHome);
        labelHelp->setObjectName(QString::fromUtf8("labelHelp"));

        gridLayout_13->addWidget(labelHelp, 3, 1, 1, 1);

        labelSecurity = new QLabel(frameHome);
        labelSecurity->setObjectName(QString::fromUtf8("labelSecurity"));

        gridLayout_13->addWidget(labelSecurity, 4, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_13);


        gridLayout_26->addLayout(verticalLayout_2, 4, 0, 2, 2);

        horizontalSpacer_6 = new QSpacerItem(427, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(horizontalSpacer_6, 4, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(horizontalSpacer, 1, 3, 1, 1);

        labelWelcome = new QLabel(frameHome);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelWelcome->sizePolicy().hasHeightForWidth());
        labelWelcome->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Mono"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        labelWelcome->setFont(font2);
        labelWelcome->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_26->addWidget(labelWelcome, 1, 0, 1, 1);

        labelCustomise = new QLabel(frameHome);
        labelCustomise->setObjectName(QString::fromUtf8("labelCustomise"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelCustomise->sizePolicy().hasHeightForWidth());
        labelCustomise->setSizePolicy(sizePolicy5);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Mono"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        labelCustomise->setFont(font3);
        labelCustomise->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(labelCustomise, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_26->addItem(verticalSpacer, 6, 0, 1, 1);


        gridLayout_11->addWidget(frameHome, 0, 1, 1, 1);

        frameHomeStatus = new QFrame(groupBoxHome);
        frameHomeStatus->setObjectName(QString::fromUtf8("frameHomeStatus"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameHomeStatus->sizePolicy().hasHeightForWidth());
        frameHomeStatus->setSizePolicy(sizePolicy6);
        frameHomeStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frameHomeStatus->setFrameShape(QFrame::StyledPanel);
        frameHomeStatus->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frameHomeStatus);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        treeDownloads = new QTreeWidget(frameHomeStatus);
        QIcon icon40;
        icon40.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Earth Download_32.png")), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon40);
        treeDownloads->setHeaderItem(__qtreewidgetitem);
        treeDownloads->setObjectName(QString::fromUtf8("treeDownloads"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Mono"));
        font4.setPointSize(9);
        treeDownloads->setFont(font4);
        treeDownloads->setMouseTracking(false);
        treeDownloads->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(treeDownloads, 1, 0, 1, 1);

        treeUpload = new QTreeWidget(frameHomeStatus);
        QIcon icon41;
        icon41.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Earth Upload_32.png")), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setIcon(0, icon41);
        treeUpload->setHeaderItem(__qtreewidgetitem1);
        treeUpload->setObjectName(QString::fromUtf8("treeUpload"));
        treeUpload->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(treeUpload, 3, 0, 1, 1);

        treeLibrary = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setIcon(0, icon5);
        treeLibrary->setHeaderItem(__qtreewidgetitem2);
        treeLibrary->setObjectName(QString::fromUtf8("treeLibrary"));
        treeLibrary->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(treeLibrary, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setIcon(0, icon13);
        treeWidget->setHeaderItem(__qtreewidgetitem3);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout_10->addWidget(treeWidget, 6, 0, 1, 1);

        treeConnection = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem();
        __qtreewidgetitem4->setIcon(0, icon18);
        treeConnection->setHeaderItem(__qtreewidgetitem4);
        treeConnection->setObjectName(QString::fromUtf8("treeConnection"));

        gridLayout_10->addWidget(treeConnection, 4, 0, 1, 1);


        gridLayout_11->addWidget(frameHomeStatus, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxHome, 0, 0, 1, 1);

        pagesMain->addWidget(Home);
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
        gridLayout_15 = new QGridLayout(groupBoxLibrary);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setMargin(0);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        frameNav = new QFrame(groupBoxLibrary);
        frameNav->setObjectName(QString::fromUtf8("frameNav"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frameNav->sizePolicy().hasHeightForWidth());
        frameNav->setSizePolicy(sizePolicy7);
        frameNav->setMinimumSize(QSize(241, 0));
        frameNav->setFrameShape(QFrame::StyledPanel);
        frameNav->setFrameShadow(QFrame::Plain);
        gridLayout_16 = new QGridLayout(frameNav);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setMargin(0);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        toolBox = new QToolBox(frameNav);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setFrameShape(QFrame::StyledPanel);
        toolBox->setFrameShadow(QFrame::Plain);
        pageNavFolders = new QWidget();
        pageNavFolders->setObjectName(QString::fromUtf8("pageNavFolders"));
        pageNavFolders->setGeometry(QRect(0, 0, 237, 436));
        gridLayout_18 = new QGridLayout(pageNavFolders);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setMargin(0);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        treeView_2 = new QTreeView(pageNavFolders);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));
        sizePolicy7.setHeightForWidth(treeView_2->sizePolicy().hasHeightForWidth());
        treeView_2->setSizePolicy(sizePolicy7);

        gridLayout_18->addWidget(treeView_2, 0, 0, 1, 1);

        toolBox->addItem(pageNavFolders, icon31, QString::fromUtf8("Folders"));
        pageNavOrganiser = new QWidget();
        pageNavOrganiser->setObjectName(QString::fromUtf8("pageNavOrganiser"));
        pageNavOrganiser->setGeometry(QRect(0, 0, 237, 436));
        gridLayout_17 = new QGridLayout(pageNavOrganiser);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setMargin(0);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        treeView = new QTreeView(pageNavOrganiser);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        sizePolicy7.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy7);

        gridLayout_17->addWidget(treeView, 0, 0, 1, 1);

        QIcon icon42;
        icon42.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder Documents.png")), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageNavOrganiser, icon42, QString::fromUtf8("Organiser"));

        gridLayout_16->addWidget(toolBox, 0, 0, 1, 2);

        toolButtonShare = new QToolButton(frameNav);
        toolButtonShare->setObjectName(QString::fromUtf8("toolButtonShare"));
        toolButtonShare->setIcon(icon28);
        toolButtonShare->setPopupMode(QToolButton::InstantPopup);
        toolButtonShare->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonShare->setAutoRaise(true);

        gridLayout_16->addWidget(toolButtonShare, 1, 0, 1, 1);

        comboBoxType = new QComboBox(frameNav);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));

        gridLayout_16->addWidget(comboBoxType, 1, 1, 1, 1);


        gridLayout_15->addWidget(frameNav, 0, 0, 1, 1);

        pagesLibrary = new QStackedWidget(groupBoxLibrary);
        pagesLibrary->setObjectName(QString::fromUtf8("pagesLibrary"));
        sizePolicy7.setHeightForWidth(pagesLibrary->sizePolicy().hasHeightForWidth());
        pagesLibrary->setSizePolicy(sizePolicy7);
        pagesLibrary->setFrameShape(QFrame::StyledPanel);
        pageFolders = new QWidget();
        pageFolders->setObjectName(QString::fromUtf8("pageFolders"));
        pagesLibrary->addWidget(pageFolders);
        pageOrganiser = new QWidget();
        pageOrganiser->setObjectName(QString::fromUtf8("pageOrganiser"));
        gridLayout_19 = new QGridLayout(pageOrganiser);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setMargin(0);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        label = new QLabel(pageOrganiser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_19->addWidget(label, 0, 0, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(143, 32, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        toolButton_2 = new QToolButton(pageOrganiser);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon43;
        icon43.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_multicolumn-256.png")), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon43);
        toolButton_2->setPopupMode(QToolButton::InstantPopup);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_2->setAutoRaise(true);

        gridLayout_19->addWidget(toolButton_2, 0, 9, 1, 1);

        toolButton_3 = new QToolButton(pageOrganiser);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QIcon icon44;
        icon44.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_detailed-32.png")), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon44);
        toolButton_3->setPopupMode(QToolButton::InstantPopup);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_3->setAutoRaise(true);

        gridLayout_19->addWidget(toolButton_3, 0, 10, 1, 1);

        frame_3 = new QFrame(pageOrganiser);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_19->addWidget(frame_3, 1, 0, 1, 11);

        toolButton_4 = new QToolButton(pageOrganiser);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        QIcon icon45;
        icon45.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Edit Add.png")), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon45);
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_19->addWidget(toolButton_4, 2, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(pageOrganiser);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy8);
        plainTextEdit->setMinimumSize(QSize(0, 0));
        plainTextEdit->setMaximumSize(QSize(16777215, 25));

        gridLayout_19->addWidget(plainTextEdit, 2, 8, 1, 1);

        toolButton_5 = new QToolButton(pageOrganiser);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        QIcon icon46;
        icon46.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Edit Remove.png")), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon46);
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_19->addWidget(toolButton_5, 2, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_11, 2, 2, 1, 3);

        pagesLibrary->addWidget(pageOrganiser);

        gridLayout_15->addWidget(pagesLibrary, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBoxLibrary, 0, 0, 1, 1);

        pagesMain->addWidget(Library);
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
        gridLayout_14 = new QGridLayout(groupBoxMedia);
        gridLayout_14->setSpacing(1);
        gridLayout_14->setMargin(0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        frameMediaScreen = new QFrame(groupBoxMedia);
        frameMediaScreen->setObjectName(QString::fromUtf8("frameMediaScreen"));
        QSizePolicy sizePolicy9(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(frameMediaScreen->sizePolicy().hasHeightForWidth());
        frameMediaScreen->setSizePolicy(sizePolicy9);
        frameMediaScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frameMediaScreen->setFrameShape(QFrame::Panel);
        frameMediaScreen->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(frameMediaScreen, 0, 0, 1, 1);

        frame_2 = new QFrame(groupBoxMedia);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy10);
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_14->addWidget(frame_2, 0, 1, 1, 1);

        frame = new QFrame(groupBoxMedia);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy11(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy11);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        toolButtonMediaPrevious = new QToolButton(frame);
        toolButtonMediaPrevious->setObjectName(QString::fromUtf8("toolButtonMediaPrevious"));
        QIcon icon47;
        icon47.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Start.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPrevious->setIcon(icon47);
        toolButtonMediaPrevious->setIconSize(QSize(24, 24));
        toolButtonMediaPrevious->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPrevious->setAutoRaise(true);
        toolButtonMediaPrevious->setArrowType(Qt::NoArrow);

        gridLayout_12->addWidget(toolButtonMediaPrevious, 0, 0, 1, 1);

        toolButtonMediaRewind = new QToolButton(frame);
        toolButtonMediaRewind->setObjectName(QString::fromUtf8("toolButtonMediaRewind"));
        QIcon icon48;
        icon48.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Rew.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaRewind->setIcon(icon48);
        toolButtonMediaRewind->setIconSize(QSize(24, 24));
        toolButtonMediaRewind->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaRewind->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaRewind, 0, 1, 1, 1);

        toolButtonMediaStop = new QToolButton(frame);
        toolButtonMediaStop->setObjectName(QString::fromUtf8("toolButtonMediaStop"));
        QIcon icon49;
        icon49.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Stop.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaStop->setIcon(icon49);
        toolButtonMediaStop->setIconSize(QSize(24, 24));
        toolButtonMediaStop->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaStop->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaStop, 0, 2, 1, 1);

        toolButtonMediaPlay = new QToolButton(frame);
        toolButtonMediaPlay->setObjectName(QString::fromUtf8("toolButtonMediaPlay"));
        QIcon icon50;
        icon50.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Play.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPlay->setIcon(icon50);
        toolButtonMediaPlay->setIconSize(QSize(24, 24));
        toolButtonMediaPlay->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPlay->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaPlay, 0, 3, 1, 1);

        toolButtonMediaPause = new QToolButton(frame);
        toolButtonMediaPause->setObjectName(QString::fromUtf8("toolButtonMediaPause"));
        QIcon icon51;
        icon51.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Pause.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPause->setIcon(icon51);
        toolButtonMediaPause->setIconSize(QSize(24, 24));
        toolButtonMediaPause->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPause->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaPause, 0, 4, 1, 1);

        toolButtonMediaFastForward = new QToolButton(frame);
        toolButtonMediaFastForward->setObjectName(QString::fromUtf8("toolButtonMediaFastForward"));
        QIcon icon52;
        icon52.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Fwd.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaFastForward->setIcon(icon52);
        toolButtonMediaFastForward->setIconSize(QSize(24, 24));
        toolButtonMediaFastForward->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaFastForward->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaFastForward, 0, 5, 1, 1);

        toolButtonMediaNext = new QToolButton(frame);
        toolButtonMediaNext->setObjectName(QString::fromUtf8("toolButtonMediaNext"));
        QIcon icon53;
        icon53.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player End.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaNext->setIcon(icon53);
        toolButtonMediaNext->setIconSize(QSize(24, 24));
        toolButtonMediaNext->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaNext, 0, 6, 1, 1);

        labelVolume = new QLabel(frame);
        labelVolume->setObjectName(QString::fromUtf8("labelVolume"));
        labelVolume->setPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Speaker.png")));
        labelVolume->setScaledContents(false);

        gridLayout_12->addWidget(labelVolume, 0, 14, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_7, 0, 13, 1, 1);

        horizontalSliderVolume = new QSlider(frame);
        horizontalSliderVolume->setObjectName(QString::fromUtf8("horizontalSliderVolume"));
        QSizePolicy sizePolicy12(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(130);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(horizontalSliderVolume->sizePolicy().hasHeightForWidth());
        horizontalSliderVolume->setSizePolicy(sizePolicy12);
        horizontalSliderVolume->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalSliderVolume, 0, 15, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_10, 0, 9, 1, 1);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(39, 39, 39, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        toolButton->setPalette(palette);
        QIcon icon54;
        icon54.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Cinema Display blue.png")), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon54);
        toolButton->setIconSize(QSize(24, 24));
        toolButton->setPopupMode(QToolButton::InstantPopup);
        toolButton->setAutoRaise(true);

        gridLayout_12->addWidget(toolButton, 0, 10, 1, 1);

        toolButtonZoom = new QToolButton(frame);
        toolButtonZoom->setObjectName(QString::fromUtf8("toolButtonZoom"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        toolButtonZoom->setPalette(palette1);
        QIcon icon55;
        icon55.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/View Full Size.png")), QIcon::Normal, QIcon::Off);
        toolButtonZoom->setIcon(icon55);
        toolButtonZoom->setIconSize(QSize(24, 24));
        toolButtonZoom->setPopupMode(QToolButton::InstantPopup);
        toolButtonZoom->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonZoom, 0, 11, 1, 1);

        horizontalSliderSeek = new QSlider(frame);
        horizontalSliderSeek->setObjectName(QString::fromUtf8("horizontalSliderSeek"));
        horizontalSliderSeek->setOrientation(Qt::Horizontal);
        horizontalSliderSeek->setInvertedAppearance(false);
        horizontalSliderSeek->setInvertedControls(false);

        gridLayout_12->addWidget(horizontalSliderSeek, 0, 8, 1, 1);

        toolButtonPlugins = new QToolButton(frame);
        toolButtonPlugins->setObjectName(QString::fromUtf8("toolButtonPlugins"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        toolButtonPlugins->setPalette(palette2);
        QIcon icon56;
        icon56.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Plugins.png")), QIcon::Normal, QIcon::Off);
        toolButtonPlugins->setIcon(icon56);
        toolButtonPlugins->setIconSize(QSize(24, 24));
        toolButtonPlugins->setPopupMode(QToolButton::InstantPopup);
        toolButtonPlugins->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonPlugins, 0, 12, 1, 1);


        gridLayout_14->addWidget(frame, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBoxMedia, 0, 0, 1, 1);

        pagesMain->addWidget(Media);
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

        pagesMain->addWidget(Search);
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

        pagesMain->addWidget(Transfers);
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

        pagesMain->addWidget(Security);
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

        pagesMain->addWidget(Network);
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

        pagesMain->addWidget(Chat);

        gridLayout->addWidget(pagesMain, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 863, 21));
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

        pagesMain->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);
        pagesLibrary->setCurrentIndex(1);


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
        headerLbl->setText(QString());
        pushButtonSearch->setText(QApplication::translate("MainWindowClass", "Start Search", 0, QApplication::UnicodeUTF8));
        pushButtonSearch->setShortcut(QApplication::translate("MainWindowClass", "Return", 0, QApplication::UnicodeUTF8));
        typeCombo->clear();
        typeCombo->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindowClass", "Mp3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Audio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Video", 0, QApplication::UnicodeUTF8)
        );
        AdvancedBtn->setText(QApplication::translate("MainWindowClass", "Advanced", 0, QApplication::UnicodeUTF8));
        labelFileType->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Mono'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">File Type:</p></body></html>", 0, QApplication::UnicodeUTF8));
        labelKeyword->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Mono'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Keyword:</p></body></html>", 0, QApplication::UnicodeUTF8));
        labelSkins->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Wallpaper Settings.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#0000ff;\">Skins:</span><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\"> </span><span style=\" font-size:12pt; color:#000000;\">Change Panthera's look and feel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelSettings->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/wizard_32.png\" /> <span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#0000ff;\">Settings Wizard:</span><span style=\" font-size:12pt; color:#0000ff;\"> </span><span style=\" font-size:12pt; color:#000000;\">Edit Panthera's settings</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelHelp->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Question Block.png\" /> <span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#0000ff;\">Quick Help:</span><span style=\" font-size:12pt; color:#000000;\"> Get help using Panthera</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelSecurity->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Earth Security.png\" /> <span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#0000ff;\">Security Filters:</span><span style=\" font-size:12pt; color:#000000;\"> Add security filters to block spam</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelWelcome->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Mono'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Welcome to Panthera!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/search-32.png\" /><span style=\" font-size:12pt;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; color:#aa0000;\">Enter keywords to search for a file below.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelCustomise->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Mono'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Gear.png\" /><span style=\" font-size:12pt;\"> </span><span style=\" font-size:12pt; color:#aa0000;\">Customise Panthera</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeDownloads->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindowClass", "Downloads", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = treeUpload->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindowClass", "Uploads", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeLibrary->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindowClass", "My Library", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->headerItem();
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindowClass", "Torrents", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeConnection->headerItem();
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindowClass", "Connection", 0, QApplication::UnicodeUTF8));
        groupBoxLibrary->setTitle(QApplication::translate("MainWindowClass", "Library", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pageNavFolders), QApplication::translate("MainWindowClass", "Folders", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pageNavOrganiser), QApplication::translate("MainWindowClass", "Organiser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonShare->setToolTip(QApplication::translate("MainWindowClass", "Manage the physical folders in your library.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonShare->setText(QApplication::translate("MainWindowClass", "Share Files", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Folder Libary_32.png\" /> <span style=\" font-size:10pt; font-weight:600;\">Exploring My Shareaza Library</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MainWindowClass", "Tile View", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("MainWindowClass", "Show Details", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("MainWindowClass", "Create Album", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("MainWindowClass", "Delete Album", 0, QApplication::UnicodeUTF8));
        groupBoxMedia->setStyleSheet(QString());
        groupBoxMedia->setTitle(QApplication::translate("MainWindowClass", "Media", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaPrevious->setToolTip(QApplication::translate("MainWindowClass", "Previous", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaPrevious->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaPrevious->setText(QApplication::translate("MainWindowClass", "Previous", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaRewind->setToolTip(QApplication::translate("MainWindowClass", "Rewind", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaRewind->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaRewind->setText(QApplication::translate("MainWindowClass", "Rewind", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaStop->setToolTip(QApplication::translate("MainWindowClass", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaStop->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaStop->setText(QApplication::translate("MainWindowClass", "Stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaPlay->setToolTip(QApplication::translate("MainWindowClass", "Play", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaPlay->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaPlay->setText(QApplication::translate("MainWindowClass", "Play", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaPause->setToolTip(QApplication::translate("MainWindowClass", "Pause", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaPause->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaPause->setText(QApplication::translate("MainWindowClass", "Pause", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaFastForward->setToolTip(QApplication::translate("MainWindowClass", "Fast Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaFastForward->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaFastForward->setText(QApplication::translate("MainWindowClass", "Fast Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonMediaNext->setToolTip(QApplication::translate("MainWindowClass", "Next", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonMediaNext->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonMediaNext->setText(QApplication::translate("MainWindowClass", "Next", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelVolume->setToolTip(QApplication::translate("MainWindowClass", "Volume", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelVolume->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        labelVolume->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("MainWindowClass", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindowClass", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonZoom->setToolTip(QApplication::translate("MainWindowClass", "Adjust Zoom and Aspect Ratio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonZoom->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonZoom->setText(QApplication::translate("MainWindowClass", "Adjust Zoom and Aspect Ratio", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonPlugins->setToolTip(QApplication::translate("MainWindowClass", "Select Visual Plugin for audio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonPlugins->setStyleSheet(QApplication::translate("MainWindowClass", "color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButtonPlugins->setText(QApplication::translate("MainWindowClass", "Select Visual Plugin for audio", 0, QApplication::UnicodeUTF8));
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
