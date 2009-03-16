/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Mar 16 04:44:53 2009
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
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
    QAction *actionAres;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *pagesMain;
    QWidget *Home;
    QGridLayout *gridLayout_2;
    QFrame *frameHome;
    QGridLayout *gridLayout_11;
    QFrame *frameHomeHeader;
    QLabel *label_35;
    QFrame *frameHomeStatus;
    QGridLayout *gridLayout_10;
    QTreeWidget *treeDownloads;
    QTreeWidget *treeUpload;
    QTreeWidget *treeLibrary;
    QTreeWidget *treeWidget;
    QTreeWidget *treeConnection;
    QFrame *frameWelcome;
    QGridLayout *gridLayout_26;
    QLabel *labelSplash;
    QGridLayout *gridLayout_23;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QComboBox *typeCombo;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelFileType;
    QLabel *labelKeyword;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AdvancedBtn;
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
    QWidget *Library;
    QGridLayout *gridLayout_3;
    QFrame *frameLibrary;
    QGridLayout *gridLayout_15;
    QFrame *frameLibraryHeader;
    QLabel *label_34;
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
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_19;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QFrame *frame_3;
    QGridLayout *gridLayout_20;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer_11;
    QPlainTextEdit *plainTextEdit;
    QToolButton *toolButtonLibSearch;
    QWidget *pageOrganiser;
    QWidget *Media;
    QGridLayout *gridLayout_4;
    QFrame *frameMedia;
    QGridLayout *gridLayout_14;
    QFrame *frameMediaHeader;
    QLabel *label_33;
    QFrame *frameMediaScreen;
    QFrame *framePlaylist;
    QGridLayout *gridLayout_22;
    QTreeView *treeViewPlaylist;
    QToolButton *toolButtonAddMedia;
    QToolButton *toolButtonRemMedia;
    QSpacerItem *horizontalSpacer_12;
    QToolButton *toolButtonClrPlst;
    QToolButton *toolButtonSavePlst;
    QFrame *frameControls;
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
    QFrame *frameSearch;
    QGridLayout *gridLayout_25;
    QFrame *frameSearchHeader;
    QLabel *label_32;
    QFrame *frame_4;
    QFrame *frame_5;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QFrame *frame_6;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QCheckBox *checkBoxAres;
    QFrame *frame_8;
    QLabel *label_10;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_39;
    QLabel *label_40;
    QStackedWidget *stackedFileType;
    QWidget *pageAnyFile;
    QLabel *label_9;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *pageApplication;
    QLabel *label_11;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *pageArchive;
    QLabel *label_12;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *pageAudio;
    QLabel *label_13;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QWidget *pageBittorrent;
    QLabel *label_14;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QWidget *pageBook;
    QLabel *label_15;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QWidget *pageImage;
    QLabel *label_16;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QWidget *pagePresentation;
    QLabel *label_17;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QWidget *pageROM;
    QLabel *label_18;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QWidget *pageSkin;
    QLabel *label_19;
    QScrollArea *scrollArea_11;
    QWidget *scrollAreaWidgetContents_11;
    QWidget *pageSourceCode;
    QLabel *label_20;
    QScrollArea *scrollArea_12;
    QWidget *scrollAreaWidgetContents_12;
    QWidget *pageSpreadsheet;
    QLabel *label_21;
    QScrollArea *scrollArea_13;
    QWidget *scrollAreaWidgetContents_13;
    QWidget *pageVideo;
    QLabel *label_22;
    QScrollArea *scrollArea_14;
    QWidget *scrollAreaWidgetContents_14;
    QWidget *pageWordProcessing;
    QLabel *label_23;
    QScrollArea *scrollArea_15;
    QWidget *scrollAreaWidgetContents_15;
    QFrame *frame_7;
    QLabel *label_28;
    QTableWidget *tableWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_24;
    QToolButton *toolButton_12;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *toolButton_13;
    QFrame *line;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton_16;
    QLabel *label_29;
    QWidget *Transfers;
    QGridLayout *gridLayout_6;
    QFrame *frameTransfers;
    QGridLayout *gridLayout_31;
    QFrame *frameDownloads;
    QGridLayout *gridLayout_33;
    QFrame *frameDownloadsHeader;
    QLabel *label_30;
    QGridLayout *gridLayout_29;
    QToolButton *toolButton_17;
    QToolButton *toolButton_19;
    QToolButton *toolButton_20;
    QToolButton *toolButton_21;
    QToolButton *toolButton_22;
    QSpacerItem *horizontalSpacer_13;
    QTableWidget *tableWidget_2;
    QGridLayout *gridLayout_30;
    QSpacerItem *horizontalSpacer_14;
    QToolButton *toolButton_18;
    QToolButton *toolButton_23;
    QFrame *line_2;
    QToolButton *toolButton_24;
    QFrame *line_3;
    QToolButton *toolButton_25;
    QToolButton *toolButton_26;
    QToolButton *toolButton_27;
    QToolButton *toolButton_28;
    QToolButton *toolButton_29;
    QFrame *line_4;
    QFrame *line_8;
    QToolButton *toolButton_35;
    QFrame *frameUploads;
    QGridLayout *gridLayout_32;
    QFrame *frameUploadsHeader;
    QLabel *label_31;
    QTableWidget *tableWidget_3;
    QGridLayout *gridLayout_27;
    QToolButton *toolButton_30;
    QSpacerItem *horizontalSpacer_15;
    QToolButton *toolButton_31;
    QFrame *line_5;
    QFrame *line_6;
    QToolButton *toolButton_32;
    QToolButton *toolButton_33;
    QFrame *line_7;
    QToolButton *toolButton_34;
    QToolButton *toolButton_36;
    QToolButton *toolButton_37;
    QToolButton *toolButton_38;
    QWidget *Security;
    QGridLayout *gridLayout_7;
    QFrame *frameSecurity;
    QGridLayout *gridLayout_28;
    QFrame *frameDownloadsHeader_2;
    QLabel *label_36;
    QTableWidget *tableWidget_4;
    QGridLayout *gridLayout_34;
    QSpacerItem *horizontalSpacer_16;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QFrame *line_9;
    QFrame *line_10;
    QToolButton *toolButton_39;
    QToolButton *toolButton_40;
    QWidget *Network;
    QGridLayout *gridLayout_8;
    QFrame *frameNetwork;
    QGridLayout *gridLayout_36;
    QFrame *frameDownloadsHeader_3;
    QLabel *label_37;
    QTableWidget *tableWidget_5;
    QGridLayout *gridLayout_35;
    QSpacerItem *horizontalSpacer_17;
    QToolButton *toolButton_41;
    QToolButton *toolButton_42;
    QToolButton *toolButton_43;
    QFrame *line_11;
    QToolButton *toolButton_44;
    QToolButton *toolButton_45;
    QToolButton *toolButton_46;
    QToolButton *toolButton_47;
    QToolButton *toolButton_48;
    QToolButton *toolButton_49;
    QFrame *line_12;
    QToolButton *toolButton_50;
    QFrame *line_13;
    QFrame *frameDownloadsHeader_5;
    QLabel *label_41;
    QTextEdit *textEdit;
    QWidget *Chat;
    QGridLayout *gridLayout_9;
    QFrame *frameChat;
    QGridLayout *gridLayout_41;
    QFrame *frameDownloadsHeader_4;
    QLabel *label_38;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_43;
    QLabel *label_42;
    QListWidget *listWidget;
    QGridLayout *gridLayout_37;
    QToolButton *toolButton_51;
    QToolButton *toolButton_52;
    QFrame *frame_9;
    QGridLayout *gridLayout_44;
    QLabel *label_43;
    QListWidget *listWidget_2;
    QGridLayout *gridLayout_38;
    QToolButton *toolButton_53;
    QToolButton *toolButton_54;
    QFrame *frame_11;
    QLabel *label_44;
    QLabel *label_45;
    QTextEdit *textEdit_2;
    QFrame *frame_10;
    QGridLayout *gridLayout_42;
    QGridLayout *gridLayout_39;
    QLineEdit *lineEdit_3;
    QToolButton *toolButton_55;
    QGridLayout *gridLayout_40;
    QToolButton *toolButton_56;
    QSpacerItem *horizontalSpacer_18;
    QToolButton *toolButton_57;
    QToolButton *toolButton_58;
    QToolButton *toolButton_59;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_15;
    QGridLayout *gridLayout_45;
    QLabel *label_47;
    QListWidget *listWidget_6;
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
        MainWindowClass->resize(1165, 733);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
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
        icon8.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Lock.png")), QIcon::Normal, QIcon::Off);
        actionSecurity->setIcon(icon8);
        actionNetwork = new QAction(MainWindowClass);
        actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
        QIcon icon9;
        icon9.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Workgroup.png")), QIcon::Normal, QIcon::Off);
        actionNetwork->setIcon(icon9);
        actionMedia = new QAction(MainWindowClass);
        actionMedia->setObjectName(QString::fromUtf8("actionMedia"));
        QIcon icon10;
        icon10.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/VisualHub.png")), QIcon::Normal, QIcon::Off);
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
        icon15.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/EMule simple.png")), QIcon::Normal, QIcon::Off);
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
        actionGnutella_2->setChecked(true);
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
        icon23.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/irc protocol.png")), QIcon::Normal, QIcon::Off);
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
        actionAres = new QAction(MainWindowClass);
        actionAres->setObjectName(QString::fromUtf8("actionAres"));
        actionAres->setCheckable(true);
        QIcon icon40;
        icon40.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Ares.png")), QIcon::Normal, QIcon::Off);
        actionAres->setIcon(icon40);
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
        frameHome = new QFrame(Home);
        frameHome->setObjectName(QString::fromUtf8("frameHome"));
        gridLayout_11 = new QGridLayout(frameHome);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setMargin(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        frameHomeHeader = new QFrame(frameHome);
        frameHomeHeader->setObjectName(QString::fromUtf8("frameHomeHeader"));
        frameHomeHeader->setMinimumSize(QSize(0, 23));
        frameHomeHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameHomeHeader->setFrameShape(QFrame::NoFrame);
        frameHomeHeader->setFrameShadow(QFrame::Raised);
        label_35 = new QLabel(frameHomeHeader);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(0, 0, 151, 21));

        gridLayout_11->addWidget(frameHomeHeader, 0, 0, 1, 2);

        frameHomeStatus = new QFrame(frameHome);
        frameHomeStatus->setObjectName(QString::fromUtf8("frameHomeStatus"));
        sizePolicy.setHeightForWidth(frameHomeStatus->sizePolicy().hasHeightForWidth());
        frameHomeStatus->setSizePolicy(sizePolicy);
        frameHomeStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 202, 255);"));
        frameHomeStatus->setFrameShape(QFrame::StyledPanel);
        frameHomeStatus->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frameHomeStatus);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setMargin(11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        treeDownloads = new QTreeWidget(frameHomeStatus);
        QIcon icon41;
        icon41.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Earth Download_32.png")), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon41);
        treeDownloads->setHeaderItem(__qtreewidgetitem);
        treeDownloads->setObjectName(QString::fromUtf8("treeDownloads"));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Mono"));
        font.setPointSize(9);
        treeDownloads->setFont(font);
        treeDownloads->setMouseTracking(false);
        treeDownloads->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeDownloads->setFrameShape(QFrame::Box);

        gridLayout_10->addWidget(treeDownloads, 1, 0, 1, 1);

        treeUpload = new QTreeWidget(frameHomeStatus);
        QIcon icon42;
        icon42.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Earth Upload_32.png")), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setIcon(0, icon42);
        treeUpload->setHeaderItem(__qtreewidgetitem1);
        treeUpload->setObjectName(QString::fromUtf8("treeUpload"));
        treeUpload->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeUpload->setFrameShape(QFrame::Box);

        gridLayout_10->addWidget(treeUpload, 3, 0, 1, 1);

        treeLibrary = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setIcon(0, icon5);
        treeLibrary->setHeaderItem(__qtreewidgetitem2);
        treeLibrary->setObjectName(QString::fromUtf8("treeLibrary"));
        treeLibrary->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeLibrary->setFrameShape(QFrame::Box);

        gridLayout_10->addWidget(treeLibrary, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setIcon(0, icon13);
        treeWidget->setHeaderItem(__qtreewidgetitem3);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeWidget->setFrameShape(QFrame::Box);

        gridLayout_10->addWidget(treeWidget, 6, 0, 1, 1);

        treeConnection = new QTreeWidget(frameHomeStatus);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem();
        __qtreewidgetitem4->setIcon(0, icon18);
        treeConnection->setHeaderItem(__qtreewidgetitem4);
        treeConnection->setObjectName(QString::fromUtf8("treeConnection"));
        treeConnection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        treeConnection->setFrameShape(QFrame::Box);

        gridLayout_10->addWidget(treeConnection, 4, 0, 1, 1);


        gridLayout_11->addWidget(frameHomeStatus, 1, 0, 1, 1);

        frameWelcome = new QFrame(frameHome);
        frameWelcome->setObjectName(QString::fromUtf8("frameWelcome"));
        frameWelcome->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_26 = new QGridLayout(frameWelcome);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setMargin(11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        labelSplash = new QLabel(frameWelcome);
        labelSplash->setObjectName(QString::fromUtf8("labelSplash"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSplash->sizePolicy().hasHeightForWidth());
        labelSplash->setSizePolicy(sizePolicy2);
        labelSplash->setMinimumSize(QSize(500, 120));
        labelSplash->setStyleSheet(QString::fromUtf8("border-image: url(:/Graphics/Resource/PantheraHomeSplash.png);"));
        labelSplash->setPixmap(QPixmap(QString::fromUtf8(":/Splash/Resource/PantheraHomeSplash.png")));

        gridLayout_26->addWidget(labelSplash, 0, 0, 1, 4);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        lineEditSearch = new QLineEdit(frameWelcome);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout_23->addWidget(lineEditSearch, 0, 2, 1, 3);

        pushButtonSearch = new QPushButton(frameWelcome);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        sizePolicy2.setHeightForWidth(pushButtonSearch->sizePolicy().hasHeightForWidth());
        pushButtonSearch->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Mono"));
        pushButtonSearch->setFont(font1);

        gridLayout_23->addWidget(pushButtonSearch, 0, 5, 1, 1);

        typeCombo = new QComboBox(frameWelcome);
        typeCombo->addItem(icon6, QString());
        QIcon icon43;
        icon43.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Applications.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon43, QString());
        QIcon icon44;
        icon44.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Archive.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon44, QString());
        QIcon icon45;
        icon45.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Speaker.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon45, QString());
        typeCombo->addItem(icon13, QString());
        QIcon icon46;
        icon46.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Notebook.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon46, QString());
        QIcon icon47;
        icon47.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Images.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon47, QString());
        QIcon icon48;
        icon48.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Presentacion.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon48, QString());
        QIcon icon49;
        icon49.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Snes.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon49, QString());
        typeCombo->addItem(icon32, QString());
        QIcon icon50;
        icon50.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/source.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon50, QString());
        QIcon icon51;
        icon51.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Spreadsheet2.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon51, QString());
        typeCombo->addItem(icon10, QString());
        QIcon icon52;
        icon52.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Document.png")), QIcon::Normal, QIcon::Off);
        typeCombo->addItem(icon52, QString());
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(typeCombo->sizePolicy().hasHeightForWidth());
        typeCombo->setSizePolicy(sizePolicy3);
        typeCombo->setFont(font1);
        typeCombo->setCursor(QCursor(Qt::PointingHandCursor));
        typeCombo->setFrame(true);

        gridLayout_23->addWidget(typeCombo, 1, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 1, 5, 1, 1);

        labelFileType = new QLabel(frameWelcome);
        labelFileType->setObjectName(QString::fromUtf8("labelFileType"));
        sizePolicy2.setHeightForWidth(labelFileType->sizePolicy().hasHeightForWidth());
        labelFileType->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Mono"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        labelFileType->setFont(font2);
        labelFileType->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_23->addWidget(labelFileType, 1, 1, 1, 1);

        labelKeyword = new QLabel(frameWelcome);
        labelKeyword->setObjectName(QString::fromUtf8("labelKeyword"));
        sizePolicy2.setHeightForWidth(labelKeyword->sizePolicy().hasHeightForWidth());
        labelKeyword->setSizePolicy(sizePolicy2);
        labelKeyword->setFont(font2);
        labelKeyword->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_23->addWidget(labelKeyword, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        AdvancedBtn = new QPushButton(frameWelcome);
        AdvancedBtn->setObjectName(QString::fromUtf8("AdvancedBtn"));
        sizePolicy2.setHeightForWidth(AdvancedBtn->sizePolicy().hasHeightForWidth());
        AdvancedBtn->setSizePolicy(sizePolicy2);
        AdvancedBtn->setFont(font1);

        gridLayout_23->addWidget(AdvancedBtn, 1, 4, 1, 1);


        gridLayout_26->addLayout(gridLayout_23, 2, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(135, 23, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_26->addItem(horizontalSpacer_5, 2, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        labelSkins = new QLabel(frameWelcome);
        labelSkins->setObjectName(QString::fromUtf8("labelSkins"));

        gridLayout_13->addWidget(labelSkins, 1, 1, 1, 1);

        labelSettings = new QLabel(frameWelcome);
        labelSettings->setObjectName(QString::fromUtf8("labelSettings"));

        gridLayout_13->addWidget(labelSettings, 2, 1, 1, 1);

        labelHelp = new QLabel(frameWelcome);
        labelHelp->setObjectName(QString::fromUtf8("labelHelp"));

        gridLayout_13->addWidget(labelHelp, 3, 1, 1, 1);

        labelSecurity = new QLabel(frameWelcome);
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

        labelWelcome = new QLabel(frameWelcome);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelWelcome->sizePolicy().hasHeightForWidth());
        labelWelcome->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Mono"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        labelWelcome->setFont(font3);
        labelWelcome->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_26->addWidget(labelWelcome, 1, 0, 1, 1);

        labelCustomise = new QLabel(frameWelcome);
        labelCustomise->setObjectName(QString::fromUtf8("labelCustomise"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelCustomise->sizePolicy().hasHeightForWidth());
        labelCustomise->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Mono"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        labelCustomise->setFont(font4);
        labelCustomise->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(labelCustomise, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_26->addItem(verticalSpacer, 6, 0, 1, 1);


        gridLayout_11->addWidget(frameWelcome, 1, 1, 1, 1);


        gridLayout_2->addWidget(frameHome, 0, 0, 1, 1);

        pagesMain->addWidget(Home);
        Library = new QWidget();
        Library->setObjectName(QString::fromUtf8("Library"));
        gridLayout_3 = new QGridLayout(Library);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frameLibrary = new QFrame(Library);
        frameLibrary->setObjectName(QString::fromUtf8("frameLibrary"));
        gridLayout_15 = new QGridLayout(frameLibrary);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setMargin(0);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        frameLibraryHeader = new QFrame(frameLibrary);
        frameLibraryHeader->setObjectName(QString::fromUtf8("frameLibraryHeader"));
        frameLibraryHeader->setMinimumSize(QSize(0, 23));
        frameLibraryHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameLibraryHeader->setFrameShape(QFrame::NoFrame);
        frameLibraryHeader->setFrameShadow(QFrame::Raised);
        label_34 = new QLabel(frameLibraryHeader);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_15->addWidget(frameLibraryHeader, 0, 0, 1, 2);

        frameNav = new QFrame(frameLibrary);
        frameNav->setObjectName(QString::fromUtf8("frameNav"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameNav->sizePolicy().hasHeightForWidth());
        frameNav->setSizePolicy(sizePolicy6);
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
        pageNavFolders->setGeometry(QRect(0, 0, 98, 62));
        gridLayout_18 = new QGridLayout(pageNavFolders);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setMargin(0);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        treeView_2 = new QTreeView(pageNavFolders);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));
        sizePolicy6.setHeightForWidth(treeView_2->sizePolicy().hasHeightForWidth());
        treeView_2->setSizePolicy(sizePolicy6);

        gridLayout_18->addWidget(treeView_2, 0, 0, 1, 1);

        toolBox->addItem(pageNavFolders, icon31, QString::fromUtf8("Folders"));
        pageNavOrganiser = new QWidget();
        pageNavOrganiser->setObjectName(QString::fromUtf8("pageNavOrganiser"));
        pageNavOrganiser->setGeometry(QRect(0, 0, 98, 62));
        gridLayout_17 = new QGridLayout(pageNavOrganiser);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setMargin(0);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        treeView = new QTreeView(pageNavOrganiser);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        sizePolicy6.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy6);

        gridLayout_17->addWidget(treeView, 0, 0, 1, 1);

        QIcon icon53;
        icon53.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Folder Documents.png")), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageNavOrganiser, icon53, QString::fromUtf8("Organiser"));

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


        gridLayout_15->addWidget(frameNav, 1, 0, 1, 1);

        pagesLibrary = new QStackedWidget(frameLibrary);
        pagesLibrary->setObjectName(QString::fromUtf8("pagesLibrary"));
        sizePolicy6.setHeightForWidth(pagesLibrary->sizePolicy().hasHeightForWidth());
        pagesLibrary->setSizePolicy(sizePolicy6);
        pagesLibrary->setFrameShape(QFrame::StyledPanel);
        pageFolders = new QWidget();
        pageFolders->setObjectName(QString::fromUtf8("pageFolders"));
        gridLayout_21 = new QGridLayout(pageFolders);
        gridLayout_21->setSpacing(0);
        gridLayout_21->setMargin(0);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(0);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(pageFolders);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(240, 35));

        gridLayout_19->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(143, 32, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        toolButton_2 = new QToolButton(pageFolders);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon54;
        icon54.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_multicolumn-256.png")), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon54);
        toolButton_2->setPopupMode(QToolButton::InstantPopup);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_2->setAutoRaise(true);

        gridLayout_19->addWidget(toolButton_2, 0, 2, 1, 1);

        toolButton_3 = new QToolButton(pageFolders);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QIcon icon55;
        icon55.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_detailed-32.png")), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon55);
        toolButton_3->setPopupMode(QToolButton::InstantPopup);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_3->setAutoRaise(true);

        gridLayout_19->addWidget(toolButton_3, 0, 3, 1, 1);


        gridLayout_21->addLayout(gridLayout_19, 0, 0, 1, 1);

        frame_3 = new QFrame(pageFolders);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy7);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_21->addWidget(frame_3, 1, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(0);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        toolButton_4 = new QToolButton(pageFolders);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        QIcon icon56;
        icon56.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Edit Add.png")), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon56);
        toolButton_4->setPopupMode(QToolButton::InstantPopup);
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_4->setAutoRaise(true);

        gridLayout_20->addWidget(toolButton_4, 0, 0, 1, 1);

        toolButton_5 = new QToolButton(pageFolders);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        QIcon icon57;
        icon57.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Edit Remove.png")), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon57);
        toolButton_5->setPopupMode(QToolButton::InstantPopup);
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_5->setAutoRaise(true);

        gridLayout_20->addWidget(toolButton_5, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(pageFolders);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy8);
        plainTextEdit->setMinimumSize(QSize(200, 0));
        plainTextEdit->setMaximumSize(QSize(16777215, 25));

        gridLayout_20->addWidget(plainTextEdit, 0, 3, 1, 1);

        toolButtonLibSearch = new QToolButton(pageFolders);
        toolButtonLibSearch->setObjectName(QString::fromUtf8("toolButtonLibSearch"));
        toolButtonLibSearch->setIcon(icon6);
        toolButtonLibSearch->setPopupMode(QToolButton::InstantPopup);
        toolButtonLibSearch->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonLibSearch->setAutoRaise(true);

        gridLayout_20->addWidget(toolButtonLibSearch, 0, 4, 1, 1);


        gridLayout_21->addLayout(gridLayout_20, 2, 0, 1, 1);

        pagesLibrary->addWidget(pageFolders);
        pageOrganiser = new QWidget();
        pageOrganiser->setObjectName(QString::fromUtf8("pageOrganiser"));
        pagesLibrary->addWidget(pageOrganiser);

        gridLayout_15->addWidget(pagesLibrary, 1, 1, 1, 1);


        gridLayout_3->addWidget(frameLibrary, 0, 0, 1, 1);

        pagesMain->addWidget(Library);
        Media = new QWidget();
        Media->setObjectName(QString::fromUtf8("Media"));
        gridLayout_4 = new QGridLayout(Media);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frameMedia = new QFrame(Media);
        frameMedia->setObjectName(QString::fromUtf8("frameMedia"));
        gridLayout_14 = new QGridLayout(frameMedia);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setMargin(0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        frameMediaHeader = new QFrame(frameMedia);
        frameMediaHeader->setObjectName(QString::fromUtf8("frameMediaHeader"));
        frameMediaHeader->setMinimumSize(QSize(0, 23));
        frameMediaHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameMediaHeader->setFrameShape(QFrame::NoFrame);
        frameMediaHeader->setFrameShadow(QFrame::Raised);
        label_33 = new QLabel(frameMediaHeader);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_14->addWidget(frameMediaHeader, 0, 0, 1, 2);

        frameMediaScreen = new QFrame(frameMedia);
        frameMediaScreen->setObjectName(QString::fromUtf8("frameMediaScreen"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(frameMediaScreen->sizePolicy().hasHeightForWidth());
        frameMediaScreen->setSizePolicy(sizePolicy9);
        frameMediaScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frameMediaScreen->setFrameShape(QFrame::Panel);
        frameMediaScreen->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(frameMediaScreen, 1, 0, 1, 1);

        framePlaylist = new QFrame(frameMedia);
        framePlaylist->setObjectName(QString::fromUtf8("framePlaylist"));
        framePlaylist->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(framePlaylist->sizePolicy().hasHeightForWidth());
        framePlaylist->setSizePolicy(sizePolicy10);
        framePlaylist->setMinimumSize(QSize(0, 0));
        framePlaylist->setBaseSize(QSize(0, 0));
        framePlaylist->setStyleSheet(QString::fromUtf8("background-color: rgb(39,39,39);\n"
"color: rgb(255, 255, 255);"));
        framePlaylist->setFrameShape(QFrame::Panel);
        framePlaylist->setFrameShadow(QFrame::Raised);
        gridLayout_22 = new QGridLayout(framePlaylist);
        gridLayout_22->setSpacing(0);
        gridLayout_22->setMargin(0);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        treeViewPlaylist = new QTreeView(framePlaylist);
        treeViewPlaylist->setObjectName(QString::fromUtf8("treeViewPlaylist"));
        sizePolicy10.setHeightForWidth(treeViewPlaylist->sizePolicy().hasHeightForWidth());
        treeViewPlaylist->setSizePolicy(sizePolicy10);
        treeViewPlaylist->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 17, 98);"));
        treeViewPlaylist->setFrameShape(QFrame::NoFrame);

        gridLayout_22->addWidget(treeViewPlaylist, 0, 0, 1, 5);

        toolButtonAddMedia = new QToolButton(framePlaylist);
        toolButtonAddMedia->setObjectName(QString::fromUtf8("toolButtonAddMedia"));
        toolButtonAddMedia->setIcon(icon56);
        toolButtonAddMedia->setIconSize(QSize(20, 20));
        toolButtonAddMedia->setPopupMode(QToolButton::InstantPopup);
        toolButtonAddMedia->setAutoRaise(true);

        gridLayout_22->addWidget(toolButtonAddMedia, 1, 0, 1, 1);

        toolButtonRemMedia = new QToolButton(framePlaylist);
        toolButtonRemMedia->setObjectName(QString::fromUtf8("toolButtonRemMedia"));
        toolButtonRemMedia->setIcon(icon57);
        toolButtonRemMedia->setIconSize(QSize(20, 20));
        toolButtonRemMedia->setAutoRaise(true);

        gridLayout_22->addWidget(toolButtonRemMedia, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(121, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        toolButtonClrPlst = new QToolButton(framePlaylist);
        toolButtonClrPlst->setObjectName(QString::fromUtf8("toolButtonClrPlst"));
        QIcon icon58;
        icon58.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Erase All.png")), QIcon::Normal, QIcon::Off);
        toolButtonClrPlst->setIcon(icon58);
        toolButtonClrPlst->setIconSize(QSize(20, 20));
        toolButtonClrPlst->setPopupMode(QToolButton::InstantPopup);
        toolButtonClrPlst->setAutoRaise(true);

        gridLayout_22->addWidget(toolButtonClrPlst, 1, 3, 1, 1);

        toolButtonSavePlst = new QToolButton(framePlaylist);
        toolButtonSavePlst->setObjectName(QString::fromUtf8("toolButtonSavePlst"));
        QIcon icon59;
        icon59.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Save All.png")), QIcon::Normal, QIcon::Off);
        toolButtonSavePlst->setIcon(icon59);
        toolButtonSavePlst->setIconSize(QSize(20, 20));
        toolButtonSavePlst->setPopupMode(QToolButton::InstantPopup);
        toolButtonSavePlst->setAutoRaise(true);

        gridLayout_22->addWidget(toolButtonSavePlst, 1, 4, 1, 1);


        gridLayout_14->addWidget(framePlaylist, 1, 1, 1, 1);

        frameControls = new QFrame(frameMedia);
        frameControls->setObjectName(QString::fromUtf8("frameControls"));
        sizePolicy3.setHeightForWidth(frameControls->sizePolicy().hasHeightForWidth());
        frameControls->setSizePolicy(sizePolicy3);
        frameControls->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
        frameControls->setFrameShape(QFrame::Panel);
        frameControls->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frameControls);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setMargin(0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        toolButtonMediaPrevious = new QToolButton(frameControls);
        toolButtonMediaPrevious->setObjectName(QString::fromUtf8("toolButtonMediaPrevious"));
        QIcon icon60;
        icon60.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Start.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPrevious->setIcon(icon60);
        toolButtonMediaPrevious->setIconSize(QSize(24, 24));
        toolButtonMediaPrevious->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPrevious->setAutoRaise(true);
        toolButtonMediaPrevious->setArrowType(Qt::NoArrow);

        gridLayout_12->addWidget(toolButtonMediaPrevious, 0, 0, 1, 1);

        toolButtonMediaRewind = new QToolButton(frameControls);
        toolButtonMediaRewind->setObjectName(QString::fromUtf8("toolButtonMediaRewind"));
        QIcon icon61;
        icon61.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Rew.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaRewind->setIcon(icon61);
        toolButtonMediaRewind->setIconSize(QSize(24, 24));
        toolButtonMediaRewind->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaRewind->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaRewind, 0, 1, 1, 1);

        toolButtonMediaStop = new QToolButton(frameControls);
        toolButtonMediaStop->setObjectName(QString::fromUtf8("toolButtonMediaStop"));
        QIcon icon62;
        icon62.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Stop.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaStop->setIcon(icon62);
        toolButtonMediaStop->setIconSize(QSize(24, 24));
        toolButtonMediaStop->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaStop->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaStop, 0, 2, 1, 1);

        toolButtonMediaPlay = new QToolButton(frameControls);
        toolButtonMediaPlay->setObjectName(QString::fromUtf8("toolButtonMediaPlay"));
        QIcon icon63;
        icon63.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Play.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPlay->setIcon(icon63);
        toolButtonMediaPlay->setIconSize(QSize(24, 24));
        toolButtonMediaPlay->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPlay->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaPlay, 0, 3, 1, 1);

        toolButtonMediaPause = new QToolButton(frameControls);
        toolButtonMediaPause->setObjectName(QString::fromUtf8("toolButtonMediaPause"));
        QIcon icon64;
        icon64.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Pause.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaPause->setIcon(icon64);
        toolButtonMediaPause->setIconSize(QSize(24, 24));
        toolButtonMediaPause->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaPause->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaPause, 0, 4, 1, 1);

        toolButtonMediaFastForward = new QToolButton(frameControls);
        toolButtonMediaFastForward->setObjectName(QString::fromUtf8("toolButtonMediaFastForward"));
        QIcon icon65;
        icon65.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player Fwd.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaFastForward->setIcon(icon65);
        toolButtonMediaFastForward->setIconSize(QSize(24, 24));
        toolButtonMediaFastForward->setPopupMode(QToolButton::InstantPopup);
        toolButtonMediaFastForward->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaFastForward, 0, 5, 1, 1);

        toolButtonMediaNext = new QToolButton(frameControls);
        toolButtonMediaNext->setObjectName(QString::fromUtf8("toolButtonMediaNext"));
        QIcon icon66;
        icon66.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Player End.png")), QIcon::Normal, QIcon::Off);
        toolButtonMediaNext->setIcon(icon66);
        toolButtonMediaNext->setIconSize(QSize(24, 24));
        toolButtonMediaNext->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonMediaNext, 0, 6, 1, 1);

        labelVolume = new QLabel(frameControls);
        labelVolume->setObjectName(QString::fromUtf8("labelVolume"));
        labelVolume->setPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Speaker.png")));
        labelVolume->setScaledContents(false);

        gridLayout_12->addWidget(labelVolume, 0, 14, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_7, 0, 13, 1, 1);

        horizontalSliderVolume = new QSlider(frameControls);
        horizontalSliderVolume->setObjectName(QString::fromUtf8("horizontalSliderVolume"));
        QSizePolicy sizePolicy11(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(130);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(horizontalSliderVolume->sizePolicy().hasHeightForWidth());
        horizontalSliderVolume->setSizePolicy(sizePolicy11);
        horizontalSliderVolume->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalSliderVolume, 0, 15, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_10, 0, 9, 1, 1);

        toolButton = new QToolButton(frameControls);
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
        QIcon icon67;
        icon67.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Cinema Display blue.png")), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon67);
        toolButton->setIconSize(QSize(24, 24));
        toolButton->setPopupMode(QToolButton::InstantPopup);
        toolButton->setAutoRaise(true);

        gridLayout_12->addWidget(toolButton, 0, 10, 1, 1);

        toolButtonZoom = new QToolButton(frameControls);
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
        QIcon icon68;
        icon68.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/View Full Size.png")), QIcon::Normal, QIcon::Off);
        toolButtonZoom->setIcon(icon68);
        toolButtonZoom->setIconSize(QSize(24, 24));
        toolButtonZoom->setPopupMode(QToolButton::InstantPopup);
        toolButtonZoom->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonZoom, 0, 11, 1, 1);

        horizontalSliderSeek = new QSlider(frameControls);
        horizontalSliderSeek->setObjectName(QString::fromUtf8("horizontalSliderSeek"));
        horizontalSliderSeek->setOrientation(Qt::Horizontal);
        horizontalSliderSeek->setInvertedAppearance(false);
        horizontalSliderSeek->setInvertedControls(false);

        gridLayout_12->addWidget(horizontalSliderSeek, 0, 8, 1, 1);

        toolButtonPlugins = new QToolButton(frameControls);
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
        QIcon icon69;
        icon69.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Plugins.png")), QIcon::Normal, QIcon::Off);
        toolButtonPlugins->setIcon(icon69);
        toolButtonPlugins->setIconSize(QSize(24, 24));
        toolButtonPlugins->setPopupMode(QToolButton::InstantPopup);
        toolButtonPlugins->setAutoRaise(true);

        gridLayout_12->addWidget(toolButtonPlugins, 0, 12, 1, 1);


        gridLayout_14->addWidget(frameControls, 2, 0, 1, 2);


        gridLayout_4->addWidget(frameMedia, 0, 0, 1, 1);

        pagesMain->addWidget(Media);
        Search = new QWidget();
        Search->setObjectName(QString::fromUtf8("Search"));
        gridLayout_5 = new QGridLayout(Search);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frameSearch = new QFrame(Search);
        frameSearch->setObjectName(QString::fromUtf8("frameSearch"));
        gridLayout_25 = new QGridLayout(frameSearch);
        gridLayout_25->setSpacing(0);
        gridLayout_25->setMargin(0);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        frameSearchHeader = new QFrame(frameSearch);
        frameSearchHeader->setObjectName(QString::fromUtf8("frameSearchHeader"));
        frameSearchHeader->setMinimumSize(QSize(0, 23));
        frameSearchHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameSearchHeader->setFrameShape(QFrame::NoFrame);
        frameSearchHeader->setFrameShadow(QFrame::Raised);
        label_32 = new QLabel(frameSearchHeader);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_25->addWidget(frameSearchHeader, 0, 0, 1, 2);

        frame_4 = new QFrame(frameSearch);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(210, 0));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 202, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 10, 191, 151));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 191, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 53, 184);"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 121, 20));
        lineEdit = new QLineEdit(frame_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 171, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 71, 20));
        comboBox = new QComboBox(frame_5);
        comboBox->addItem(icon6, QString());
        comboBox->addItem(icon43, QString());
        comboBox->addItem(icon44, QString());
        comboBox->addItem(icon45, QString());
        comboBox->addItem(icon13, QString());
        comboBox->addItem(icon46, QString());
        comboBox->addItem(icon47, QString());
        comboBox->addItem(icon48, QString());
        comboBox->addItem(icon49, QString());
        comboBox->addItem(icon32, QString());
        comboBox->addItem(icon50, QString());
        comboBox->addItem(icon51, QString());
        comboBox->addItem(icon10, QString());
        comboBox->addItem(icon52, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 90, 171, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        toolButton_10 = new QToolButton(frame_5);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        toolButton_10->setGeometry(QRect(10, 120, 71, 21));
        toolButton_10->setIcon(icon6);
        toolButton_10->setPopupMode(QToolButton::InstantPopup);
        toolButton_10->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_10->setAutoRaise(true);
        toolButton_11 = new QToolButton(frame_5);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        toolButton_11->setGeometry(QRect(90, 120, 71, 21));
        toolButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        toolButton_11->setIcon(icon58);
        toolButton_11->setPopupMode(QToolButton::InstantPopup);
        toolButton_11->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_11->setAutoRaise(true);
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(10, 170, 191, 141));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 191, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 121, 20));
        checkBox = new QCheckBox(frame_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 70, 61, 18));
        checkBox->setIcon(icon16);
        checkBox_2 = new QCheckBox(frame_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 61, 18));
        checkBox_2->setIcon(icon17);
        checkBox_3 = new QCheckBox(frame_6);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(80, 70, 101, 18));
        checkBox_3->setIcon(icon15);
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 90, 81, 20));
        comboBox_2 = new QComboBox(frame_6);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 110, 69, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(frame_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 109, 20, 31));
        comboBox_3 = new QComboBox(frame_6);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(110, 110, 69, 22));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        checkBoxAres = new QCheckBox(frame_6);
        checkBoxAres->setObjectName(QString::fromUtf8("checkBoxAres"));
        checkBoxAres->setGeometry(QRect(80, 50, 72, 18));
        checkBoxAres->setIcon(icon40);
        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(10, 470, 191, 151));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(frame_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 191, 21));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_24 = new QLabel(frame_8);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 30, 71, 16));
        label_25 = new QLabel(frame_8);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 50, 161, 16));
        label_26 = new QLabel(frame_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 70, 51, 16));
        label_27 = new QLabel(frame_8);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 90, 161, 16));
        label_39 = new QLabel(frame_8);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 110, 71, 16));
        label_40 = new QLabel(frame_8);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(20, 130, 161, 16));
        stackedFileType = new QStackedWidget(frame_4);
        stackedFileType->setObjectName(QString::fromUtf8("stackedFileType"));
        stackedFileType->setGeometry(QRect(10, 320, 191, 141));
        stackedFileType->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        pageAnyFile = new QWidget();
        pageAnyFile->setObjectName(QString::fromUtf8("pageAnyFile"));
        label_9 = new QLabel(pageAnyFile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 191, 31));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);
        scrollArea_2 = new QScrollArea(pageAnyFile);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        stackedFileType->addWidget(pageAnyFile);
        pageApplication = new QWidget();
        pageApplication->setObjectName(QString::fromUtf8("pageApplication"));
        label_11 = new QLabel(pageApplication);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 191, 31));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_11->setFrameShape(QFrame::StyledPanel);
        label_11->setFrameShadow(QFrame::Plain);
        scrollArea_3 = new QScrollArea(pageApplication);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        stackedFileType->addWidget(pageApplication);
        pageArchive = new QWidget();
        pageArchive->setObjectName(QString::fromUtf8("pageArchive"));
        label_12 = new QLabel(pageArchive);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 191, 31));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_12->setFrameShape(QFrame::StyledPanel);
        label_12->setFrameShadow(QFrame::Plain);
        scrollArea_4 = new QScrollArea(pageArchive);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);
        stackedFileType->addWidget(pageArchive);
        pageAudio = new QWidget();
        pageAudio->setObjectName(QString::fromUtf8("pageAudio"));
        label_13 = new QLabel(pageAudio);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 191, 31));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13->setFrameShape(QFrame::StyledPanel);
        label_13->setFrameShadow(QFrame::Plain);
        scrollArea_5 = new QScrollArea(pageAudio);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        stackedFileType->addWidget(pageAudio);
        pageBittorrent = new QWidget();
        pageBittorrent->setObjectName(QString::fromUtf8("pageBittorrent"));
        label_14 = new QLabel(pageBittorrent);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 0, 191, 31));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_14->setFrameShape(QFrame::StyledPanel);
        label_14->setFrameShadow(QFrame::Plain);
        scrollArea_6 = new QScrollArea(pageBittorrent);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_6->setWidget(scrollAreaWidgetContents_6);
        stackedFileType->addWidget(pageBittorrent);
        pageBook = new QWidget();
        pageBook->setObjectName(QString::fromUtf8("pageBook"));
        label_15 = new QLabel(pageBook);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 0, 191, 31));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15->setFrameShape(QFrame::StyledPanel);
        label_15->setFrameShadow(QFrame::Plain);
        scrollArea_7 = new QScrollArea(pageBook);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_7->setWidget(scrollAreaWidgetContents_7);
        stackedFileType->addWidget(pageBook);
        pageImage = new QWidget();
        pageImage->setObjectName(QString::fromUtf8("pageImage"));
        label_16 = new QLabel(pageImage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 0, 191, 31));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_16->setFrameShape(QFrame::StyledPanel);
        label_16->setFrameShadow(QFrame::Plain);
        scrollArea_8 = new QScrollArea(pageImage);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_8->setWidget(scrollAreaWidgetContents_8);
        stackedFileType->addWidget(pageImage);
        pagePresentation = new QWidget();
        pagePresentation->setObjectName(QString::fromUtf8("pagePresentation"));
        label_17 = new QLabel(pagePresentation);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 0, 191, 31));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_17->setFrameShape(QFrame::StyledPanel);
        label_17->setFrameShadow(QFrame::Plain);
        scrollArea_9 = new QScrollArea(pagePresentation);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_9->setWidget(scrollAreaWidgetContents_9);
        stackedFileType->addWidget(pagePresentation);
        pageROM = new QWidget();
        pageROM->setObjectName(QString::fromUtf8("pageROM"));
        label_18 = new QLabel(pageROM);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 0, 191, 31));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_18->setFrameShape(QFrame::StyledPanel);
        label_18->setFrameShadow(QFrame::Plain);
        scrollArea_10 = new QScrollArea(pageROM);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_10->setWidget(scrollAreaWidgetContents_10);
        stackedFileType->addWidget(pageROM);
        pageSkin = new QWidget();
        pageSkin->setObjectName(QString::fromUtf8("pageSkin"));
        label_19 = new QLabel(pageSkin);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 0, 191, 31));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_19->setFrameShape(QFrame::StyledPanel);
        label_19->setFrameShadow(QFrame::Plain);
        scrollArea_11 = new QScrollArea(pageSkin);
        scrollArea_11->setObjectName(QString::fromUtf8("scrollArea_11"));
        scrollArea_11->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_11->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_11->setWidget(scrollAreaWidgetContents_11);
        stackedFileType->addWidget(pageSkin);
        pageSourceCode = new QWidget();
        pageSourceCode->setObjectName(QString::fromUtf8("pageSourceCode"));
        label_20 = new QLabel(pageSourceCode);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, 0, 191, 31));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_20->setFrameShape(QFrame::StyledPanel);
        label_20->setFrameShadow(QFrame::Plain);
        scrollArea_12 = new QScrollArea(pageSourceCode);
        scrollArea_12->setObjectName(QString::fromUtf8("scrollArea_12"));
        scrollArea_12->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_12->setWidgetResizable(true);
        scrollAreaWidgetContents_12 = new QWidget();
        scrollAreaWidgetContents_12->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_12"));
        scrollAreaWidgetContents_12->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_12->setWidget(scrollAreaWidgetContents_12);
        stackedFileType->addWidget(pageSourceCode);
        pageSpreadsheet = new QWidget();
        pageSpreadsheet->setObjectName(QString::fromUtf8("pageSpreadsheet"));
        label_21 = new QLabel(pageSpreadsheet);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(0, 0, 191, 31));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_21->setFrameShape(QFrame::StyledPanel);
        label_21->setFrameShadow(QFrame::Plain);
        scrollArea_13 = new QScrollArea(pageSpreadsheet);
        scrollArea_13->setObjectName(QString::fromUtf8("scrollArea_13"));
        scrollArea_13->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_13->setWidgetResizable(true);
        scrollAreaWidgetContents_13 = new QWidget();
        scrollAreaWidgetContents_13->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_13"));
        scrollAreaWidgetContents_13->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_13->setWidget(scrollAreaWidgetContents_13);
        stackedFileType->addWidget(pageSpreadsheet);
        pageVideo = new QWidget();
        pageVideo->setObjectName(QString::fromUtf8("pageVideo"));
        label_22 = new QLabel(pageVideo);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(0, 0, 191, 31));
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22->setFrameShape(QFrame::StyledPanel);
        label_22->setFrameShadow(QFrame::Plain);
        scrollArea_14 = new QScrollArea(pageVideo);
        scrollArea_14->setObjectName(QString::fromUtf8("scrollArea_14"));
        scrollArea_14->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_14->setWidgetResizable(true);
        scrollAreaWidgetContents_14 = new QWidget();
        scrollAreaWidgetContents_14->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_14"));
        scrollAreaWidgetContents_14->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_14->setWidget(scrollAreaWidgetContents_14);
        stackedFileType->addWidget(pageVideo);
        pageWordProcessing = new QWidget();
        pageWordProcessing->setObjectName(QString::fromUtf8("pageWordProcessing"));
        label_23 = new QLabel(pageWordProcessing);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(0, 0, 191, 31));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_23->setFrameShape(QFrame::StyledPanel);
        label_23->setFrameShadow(QFrame::Plain);
        scrollArea_15 = new QScrollArea(pageWordProcessing);
        scrollArea_15->setObjectName(QString::fromUtf8("scrollArea_15"));
        scrollArea_15->setGeometry(QRect(0, 30, 191, 111));
        scrollArea_15->setWidgetResizable(true);
        scrollAreaWidgetContents_15 = new QWidget();
        scrollAreaWidgetContents_15->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_15"));
        scrollAreaWidgetContents_15->setGeometry(QRect(0, 0, 189, 109));
        scrollArea_15->setWidget(scrollAreaWidgetContents_15);
        stackedFileType->addWidget(pageWordProcessing);

        gridLayout_25->addWidget(frame_4, 1, 0, 4, 1);

        frame_7 = new QFrame(frameSearch);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(0, 30));
        frame_7->setFrameShape(QFrame::Panel);
        frame_7->setFrameShadow(QFrame::Sunken);
        label_28 = new QLabel(frame_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(0, 0, 101, 29));

        gridLayout_25->addWidget(frame_7, 1, 1, 1, 1);

        tableWidget = new QTableWidget(frameSearch);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_25->addWidget(tableWidget, 2, 1, 1, 1);

        scrollArea = new QScrollArea(frameSearch);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy12);
        scrollArea->setMinimumSize(QSize(0, 120));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 118));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_25->addWidget(scrollArea, 3, 1, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setSpacing(6);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        toolButton_12 = new QToolButton(frameSearch);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        QIcon icon70;
        icon70.addPixmap(QPixmap(QString::fromUtf8(":/Icons/FileType/Resource/24x24 File Type/Earth Download_32.png")), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon70);
        toolButton_12->setPopupMode(QToolButton::InstantPopup);
        toolButton_12->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_12->setAutoRaise(true);

        gridLayout_24->addWidget(toolButton_12, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_8, 0, 5, 1, 1);

        toolButton_13 = new QToolButton(frameSearch);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        toolButton_13->setIcon(icon21);
        toolButton_13->setPopupMode(QToolButton::InstantPopup);
        toolButton_13->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_13->setAutoRaise(true);

        gridLayout_24->addWidget(toolButton_13, 0, 1, 1, 1);

        line = new QFrame(frameSearch);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_24->addWidget(line, 0, 2, 1, 1);

        toolButton_14 = new QToolButton(frameSearch);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        QIcon icon71;
        icon71.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_right_p-256.png")), QIcon::Normal, QIcon::Off);
        toolButton_14->setIcon(icon71);
        toolButton_14->setPopupMode(QToolButton::InstantPopup);
        toolButton_14->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_14->setAutoRaise(true);

        gridLayout_24->addWidget(toolButton_14, 0, 3, 1, 1);

        toolButton_15 = new QToolButton(frameSearch);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        QIcon icon72;
        icon72.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/view_bottom-256.png")), QIcon::Normal, QIcon::Off);
        toolButton_15->setIcon(icon72);
        toolButton_15->setPopupMode(QToolButton::InstantPopup);
        toolButton_15->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_15->setAutoRaise(true);

        gridLayout_24->addWidget(toolButton_15, 0, 4, 1, 1);

        lineEdit_2 = new QLineEdit(frameSearch);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_24->addWidget(lineEdit_2, 0, 7, 1, 1);

        toolButton_16 = new QToolButton(frameSearch);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        toolButton_16->setPopupMode(QToolButton::InstantPopup);
        toolButton_16->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton_16->setAutoRaise(true);

        gridLayout_24->addWidget(toolButton_16, 0, 8, 1, 1);

        label_29 = new QLabel(frameSearch);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_24->addWidget(label_29, 0, 6, 1, 1);


        gridLayout_25->addLayout(gridLayout_24, 4, 1, 1, 1);


        gridLayout_5->addWidget(frameSearch, 0, 0, 1, 1);

        pagesMain->addWidget(Search);
        Transfers = new QWidget();
        Transfers->setObjectName(QString::fromUtf8("Transfers"));
        gridLayout_6 = new QGridLayout(Transfers);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        frameTransfers = new QFrame(Transfers);
        frameTransfers->setObjectName(QString::fromUtf8("frameTransfers"));
        gridLayout_31 = new QGridLayout(frameTransfers);
        gridLayout_31->setSpacing(0);
        gridLayout_31->setMargin(0);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        frameDownloads = new QFrame(frameTransfers);
        frameDownloads->setObjectName(QString::fromUtf8("frameDownloads"));
        frameDownloads->setFrameShape(QFrame::StyledPanel);
        frameDownloads->setFrameShadow(QFrame::Plain);
        gridLayout_33 = new QGridLayout(frameDownloads);
        gridLayout_33->setSpacing(0);
        gridLayout_33->setMargin(0);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        frameDownloadsHeader = new QFrame(frameDownloads);
        frameDownloadsHeader->setObjectName(QString::fromUtf8("frameDownloadsHeader"));
        frameDownloadsHeader->setMinimumSize(QSize(0, 23));
        frameDownloadsHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameDownloadsHeader->setFrameShape(QFrame::NoFrame);
        frameDownloadsHeader->setFrameShadow(QFrame::Raised);
        label_30 = new QLabel(frameDownloadsHeader);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_33->addWidget(frameDownloadsHeader, 0, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(6);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        toolButton_17 = new QToolButton(frameDownloads);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        QIcon icon73;
        icon73.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/toolbar downloads.png")), QIcon::Normal, QIcon::Off);
        toolButton_17->setIcon(icon73);
        toolButton_17->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_17->setAutoRaise(true);

        gridLayout_29->addWidget(toolButton_17, 0, 0, 1, 1);

        toolButton_19 = new QToolButton(frameDownloads);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
        toolButton_19->setIcon(icon13);
        toolButton_19->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_19->setAutoRaise(true);

        gridLayout_29->addWidget(toolButton_19, 0, 4, 1, 1);

        toolButton_20 = new QToolButton(frameDownloads);
        toolButton_20->setObjectName(QString::fromUtf8("toolButton_20"));
        toolButton_20->setIcon(icon47);
        toolButton_20->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_20->setAutoRaise(true);

        gridLayout_29->addWidget(toolButton_20, 0, 3, 1, 1);

        toolButton_21 = new QToolButton(frameDownloads);
        toolButton_21->setObjectName(QString::fromUtf8("toolButton_21"));
        toolButton_21->setIcon(icon10);
        toolButton_21->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_21->setAutoRaise(true);

        gridLayout_29->addWidget(toolButton_21, 0, 2, 1, 1);

        toolButton_22 = new QToolButton(frameDownloads);
        toolButton_22->setObjectName(QString::fromUtf8("toolButton_22"));
        toolButton_22->setIcon(icon45);
        toolButton_22->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_22->setAutoRaise(true);

        gridLayout_29->addWidget(toolButton_22, 0, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_13, 0, 5, 1, 1);


        gridLayout_33->addLayout(gridLayout_29, 1, 0, 1, 1);

        tableWidget_2 = new QTableWidget(frameDownloads);
        if (tableWidget_2->columnCount() < 8)
            tableWidget_2->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_33->addWidget(tableWidget_2, 2, 0, 1, 1);

        gridLayout_30 = new QGridLayout();
        gridLayout_30->setSpacing(0);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_14, 0, 10, 1, 1);

        toolButton_18 = new QToolButton(frameDownloads);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        toolButton_18->setIcon(icon63);
        toolButton_18->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_18->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_18, 0, 0, 1, 1);

        toolButton_23 = new QToolButton(frameDownloads);
        toolButton_23->setObjectName(QString::fromUtf8("toolButton_23"));
        toolButton_23->setIcon(icon64);
        toolButton_23->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_23->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_23, 0, 2, 1, 1);

        line_2 = new QFrame(frameDownloads);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_30->addWidget(line_2, 0, 1, 1, 1);

        toolButton_24 = new QToolButton(frameDownloads);
        toolButton_24->setObjectName(QString::fromUtf8("toolButton_24"));
        QIcon icon74;
        icon74.addPixmap(QPixmap(QString::fromUtf8(":/Player/Resource/Erase All.png")), QIcon::Normal, QIcon::Off);
        toolButton_24->setIcon(icon74);
        toolButton_24->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_24->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_24, 0, 3, 1, 1);

        line_3 = new QFrame(frameDownloads);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_30->addWidget(line_3, 0, 5, 1, 1);

        toolButton_25 = new QToolButton(frameDownloads);
        toolButton_25->setObjectName(QString::fromUtf8("toolButton_25"));
        toolButton_25->setIcon(icon2);
        toolButton_25->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_25->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_25, 0, 6, 1, 1);

        toolButton_26 = new QToolButton(frameDownloads);
        toolButton_26->setObjectName(QString::fromUtf8("toolButton_26"));
        toolButton_26->setIcon(icon14);
        toolButton_26->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_26->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_26, 0, 7, 1, 1);

        toolButton_27 = new QToolButton(frameDownloads);
        toolButton_27->setObjectName(QString::fromUtf8("toolButton_27"));
        toolButton_27->setIcon(icon13);
        toolButton_27->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_27->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_27, 0, 11, 1, 1);

        toolButton_28 = new QToolButton(frameDownloads);
        toolButton_28->setObjectName(QString::fromUtf8("toolButton_28"));
        QIcon icon75;
        icon75.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Broom.png")), QIcon::Normal, QIcon::Off);
        toolButton_28->setIcon(icon75);
        toolButton_28->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_28->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_28, 0, 12, 1, 1);

        toolButton_29 = new QToolButton(frameDownloads);
        toolButton_29->setObjectName(QString::fromUtf8("toolButton_29"));
        QIcon icon76;
        icon76.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Filter.png")), QIcon::Normal, QIcon::Off);
        toolButton_29->setIcon(icon76);
        toolButton_29->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_29->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_29, 0, 14, 1, 1);

        line_4 = new QFrame(frameDownloads);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_30->addWidget(line_4, 0, 13, 1, 1);

        line_8 = new QFrame(frameDownloads);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_30->addWidget(line_8, 0, 8, 1, 1);

        toolButton_35 = new QToolButton(frameDownloads);
        toolButton_35->setObjectName(QString::fromUtf8("toolButton_35"));
        QIcon icon77;
        icon77.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Trash.png")), QIcon::Normal, QIcon::Off);
        toolButton_35->setIcon(icon77);
        toolButton_35->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_35->setAutoRaise(true);

        gridLayout_30->addWidget(toolButton_35, 0, 4, 1, 1);


        gridLayout_33->addLayout(gridLayout_30, 3, 0, 1, 1);


        gridLayout_31->addWidget(frameDownloads, 0, 0, 1, 1);

        frameUploads = new QFrame(frameTransfers);
        frameUploads->setObjectName(QString::fromUtf8("frameUploads"));
        frameUploads->setFrameShape(QFrame::StyledPanel);
        frameUploads->setFrameShadow(QFrame::Plain);
        gridLayout_32 = new QGridLayout(frameUploads);
        gridLayout_32->setSpacing(0);
        gridLayout_32->setMargin(0);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        frameUploadsHeader = new QFrame(frameUploads);
        frameUploadsHeader->setObjectName(QString::fromUtf8("frameUploadsHeader"));
        frameUploadsHeader->setMinimumSize(QSize(0, 23));
        frameUploadsHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameUploadsHeader->setFrameShape(QFrame::NoFrame);
        frameUploadsHeader->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frameUploadsHeader);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(0, 0, 91, 21));

        gridLayout_32->addWidget(frameUploadsHeader, 0, 0, 1, 1);

        tableWidget_3 = new QTableWidget(frameUploads);
        if (tableWidget_3->columnCount() < 8)
            tableWidget_3->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem15);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));

        gridLayout_32->addWidget(tableWidget_3, 1, 0, 1, 1);

        gridLayout_27 = new QGridLayout();
        gridLayout_27->setSpacing(0);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        toolButton_30 = new QToolButton(frameUploads);
        toolButton_30->setObjectName(QString::fromUtf8("toolButton_30"));
        QIcon icon78;
        icon78.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Player Play.png")), QIcon::Normal, QIcon::Off);
        toolButton_30->setIcon(icon78);
        toolButton_30->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_30->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_30, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_27->addItem(horizontalSpacer_15, 0, 9, 1, 1);

        toolButton_31 = new QToolButton(frameUploads);
        toolButton_31->setObjectName(QString::fromUtf8("toolButton_31"));
        toolButton_31->setIcon(icon75);
        toolButton_31->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_31->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_31, 0, 2, 1, 1);

        line_5 = new QFrame(frameUploads);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_27->addWidget(line_5, 0, 1, 1, 1);

        line_6 = new QFrame(frameUploads);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_27->addWidget(line_6, 0, 4, 1, 1);

        toolButton_32 = new QToolButton(frameUploads);
        toolButton_32->setObjectName(QString::fromUtf8("toolButton_32"));
        toolButton_32->setIcon(icon21);
        toolButton_32->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_32->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_32, 0, 5, 1, 1);

        toolButton_33 = new QToolButton(frameUploads);
        toolButton_33->setObjectName(QString::fromUtf8("toolButton_33"));
        toolButton_33->setIcon(icon23);
        toolButton_33->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_33->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_33, 0, 6, 1, 1);

        line_7 = new QFrame(frameUploads);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_27->addWidget(line_7, 0, 7, 1, 1);

        toolButton_34 = new QToolButton(frameUploads);
        toolButton_34->setObjectName(QString::fromUtf8("toolButton_34"));
        toolButton_34->setIcon(icon58);
        toolButton_34->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_34->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_34, 0, 8, 1, 1);

        toolButton_36 = new QToolButton(frameUploads);
        toolButton_36->setObjectName(QString::fromUtf8("toolButton_36"));
        toolButton_36->setIcon(icon77);
        toolButton_36->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_36->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_36, 0, 3, 1, 1);

        toolButton_37 = new QToolButton(frameUploads);
        toolButton_37->setObjectName(QString::fromUtf8("toolButton_37"));
        toolButton_37->setIcon(icon75);
        toolButton_37->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_37->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_37, 0, 10, 1, 1);

        toolButton_38 = new QToolButton(frameUploads);
        toolButton_38->setObjectName(QString::fromUtf8("toolButton_38"));
        toolButton_38->setIcon(icon76);
        toolButton_38->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_38->setAutoRaise(true);

        gridLayout_27->addWidget(toolButton_38, 0, 11, 1, 1);


        gridLayout_32->addLayout(gridLayout_27, 2, 0, 1, 1);


        gridLayout_31->addWidget(frameUploads, 1, 0, 1, 1);


        gridLayout_6->addWidget(frameTransfers, 0, 0, 1, 1);

        pagesMain->addWidget(Transfers);
        Security = new QWidget();
        Security->setObjectName(QString::fromUtf8("Security"));
        gridLayout_7 = new QGridLayout(Security);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        frameSecurity = new QFrame(Security);
        frameSecurity->setObjectName(QString::fromUtf8("frameSecurity"));
        gridLayout_28 = new QGridLayout(frameSecurity);
        gridLayout_28->setSpacing(0);
        gridLayout_28->setMargin(0);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        frameDownloadsHeader_2 = new QFrame(frameSecurity);
        frameDownloadsHeader_2->setObjectName(QString::fromUtf8("frameDownloadsHeader_2"));
        frameDownloadsHeader_2->setMinimumSize(QSize(0, 23));
        frameDownloadsHeader_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameDownloadsHeader_2->setFrameShape(QFrame::NoFrame);
        frameDownloadsHeader_2->setFrameShadow(QFrame::Raised);
        label_36 = new QLabel(frameDownloadsHeader_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_28->addWidget(frameDownloadsHeader_2, 0, 0, 1, 1);

        tableWidget_4 = new QTableWidget(frameSecurity);
        if (tableWidget_4->columnCount() < 5)
            tableWidget_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));

        gridLayout_28->addWidget(tableWidget_4, 1, 0, 1, 1);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(6);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_16, 0, 7, 1, 1);

        toolButton_6 = new QToolButton(frameSecurity);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        QIcon icon79;
        icon79.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Add key.png")), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon79);
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_6->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_6, 0, 0, 1, 1);

        toolButton_7 = new QToolButton(frameSecurity);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        QIcon icon80;
        icon80.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Remove key.png")), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon80);
        toolButton_7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_7->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_7, 0, 1, 1, 1);

        toolButton_8 = new QToolButton(frameSecurity);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        QIcon icon81;
        icon81.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Open key.png")), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon81);
        toolButton_8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_8->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_8, 0, 4, 1, 1);

        toolButton_9 = new QToolButton(frameSecurity);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        QIcon icon82;
        icon82.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Save key.png")), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon82);
        toolButton_9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_9->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_9, 0, 5, 1, 1);

        line_9 = new QFrame(frameSecurity);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_34->addWidget(line_9, 0, 3, 1, 1);

        line_10 = new QFrame(frameSecurity);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_34->addWidget(line_10, 0, 6, 1, 1);

        toolButton_39 = new QToolButton(frameSecurity);
        toolButton_39->setObjectName(QString::fromUtf8("toolButton_39"));
        QIcon icon83;
        icon83.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Modify key.png")), QIcon::Normal, QIcon::Off);
        toolButton_39->setIcon(icon83);
        toolButton_39->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_39->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_39, 0, 2, 1, 1);

        toolButton_40 = new QToolButton(frameSecurity);
        toolButton_40->setObjectName(QString::fromUtf8("toolButton_40"));
        QIcon icon84;
        icon84.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/KeyGlobe.png")), QIcon::Normal, QIcon::Off);
        toolButton_40->setIcon(icon84);
        toolButton_40->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_40->setAutoRaise(true);

        gridLayout_34->addWidget(toolButton_40, 0, 8, 1, 1);


        gridLayout_28->addLayout(gridLayout_34, 2, 0, 1, 1);


        gridLayout_7->addWidget(frameSecurity, 0, 0, 1, 1);

        pagesMain->addWidget(Security);
        Network = new QWidget();
        Network->setObjectName(QString::fromUtf8("Network"));
        gridLayout_8 = new QGridLayout(Network);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setMargin(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        frameNetwork = new QFrame(Network);
        frameNetwork->setObjectName(QString::fromUtf8("frameNetwork"));
        gridLayout_36 = new QGridLayout(frameNetwork);
        gridLayout_36->setSpacing(0);
        gridLayout_36->setMargin(0);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        frameDownloadsHeader_3 = new QFrame(frameNetwork);
        frameDownloadsHeader_3->setObjectName(QString::fromUtf8("frameDownloadsHeader_3"));
        frameDownloadsHeader_3->setMinimumSize(QSize(0, 23));
        frameDownloadsHeader_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameDownloadsHeader_3->setFrameShape(QFrame::NoFrame);
        frameDownloadsHeader_3->setFrameShadow(QFrame::Raised);
        label_37 = new QLabel(frameDownloadsHeader_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_36->addWidget(frameDownloadsHeader_3, 0, 0, 1, 1);

        tableWidget_5 = new QTableWidget(frameNetwork);
        if (tableWidget_5->columnCount() < 11)
            tableWidget_5->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(7, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(8, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(9, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(10, __qtablewidgetitem31);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));

        gridLayout_36->addWidget(tableWidget_5, 1, 0, 1, 1);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(6);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_35->addItem(horizontalSpacer_17, 0, 6, 1, 1);

        toolButton_41 = new QToolButton(frameNetwork);
        toolButton_41->setObjectName(QString::fromUtf8("toolButton_41"));
        toolButton_41->setIcon(icon20);
        toolButton_41->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_41->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_41, 0, 0, 1, 1);

        toolButton_42 = new QToolButton(frameNetwork);
        toolButton_42->setObjectName(QString::fromUtf8("toolButton_42"));
        toolButton_42->setIcon(icon19);
        toolButton_42->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_42->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_42, 0, 1, 1, 1);

        toolButton_43 = new QToolButton(frameNetwork);
        toolButton_43->setObjectName(QString::fromUtf8("toolButton_43"));
        toolButton_43->setIcon(icon21);
        toolButton_43->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_43->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_43, 0, 3, 1, 1);

        line_11 = new QFrame(frameNetwork);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_35->addWidget(line_11, 0, 2, 1, 1);

        toolButton_44 = new QToolButton(frameNetwork);
        toolButton_44->setObjectName(QString::fromUtf8("toolButton_44"));
        toolButton_44->setIcon(icon23);
        toolButton_44->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_44->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_44, 0, 4, 1, 1);

        toolButton_45 = new QToolButton(frameNetwork);
        toolButton_45->setObjectName(QString::fromUtf8("toolButton_45"));
        toolButton_45->setIcon(icon58);
        toolButton_45->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_45->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_45, 0, 5, 1, 1);

        toolButton_46 = new QToolButton(frameNetwork);
        toolButton_46->setObjectName(QString::fromUtf8("toolButton_46"));
        toolButton_46->setIcon(icon15);
        toolButton_46->setCheckable(true);
        toolButton_46->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_46->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_46, 0, 10, 1, 1);

        toolButton_47 = new QToolButton(frameNetwork);
        toolButton_47->setObjectName(QString::fromUtf8("toolButton_47"));
        toolButton_47->setIcon(icon40);
        toolButton_47->setCheckable(true);
        toolButton_47->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_47->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_47, 0, 9, 1, 1);

        toolButton_48 = new QToolButton(frameNetwork);
        toolButton_48->setObjectName(QString::fromUtf8("toolButton_48"));
        toolButton_48->setIcon(icon16);
        toolButton_48->setCheckable(true);
        toolButton_48->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_48->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_48, 0, 8, 1, 1);

        toolButton_49 = new QToolButton(frameNetwork);
        toolButton_49->setObjectName(QString::fromUtf8("toolButton_49"));
        toolButton_49->setIcon(icon17);
        toolButton_49->setCheckable(true);
        toolButton_49->setChecked(true);
        toolButton_49->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_49->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_49, 0, 7, 1, 1);

        line_12 = new QFrame(frameNetwork);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_35->addWidget(line_12, 0, 13, 1, 1);

        toolButton_50 = new QToolButton(frameNetwork);
        toolButton_50->setObjectName(QString::fromUtf8("toolButton_50"));
        toolButton_50->setIcon(icon14);
        toolButton_50->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_50->setAutoRaise(true);

        gridLayout_35->addWidget(toolButton_50, 0, 12, 1, 1);

        line_13 = new QFrame(frameNetwork);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_35->addWidget(line_13, 0, 11, 1, 1);


        gridLayout_36->addLayout(gridLayout_35, 2, 0, 1, 1);

        frameDownloadsHeader_5 = new QFrame(frameNetwork);
        frameDownloadsHeader_5->setObjectName(QString::fromUtf8("frameDownloadsHeader_5"));
        frameDownloadsHeader_5->setMinimumSize(QSize(0, 23));
        frameDownloadsHeader_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameDownloadsHeader_5->setFrameShape(QFrame::NoFrame);
        frameDownloadsHeader_5->setFrameShadow(QFrame::Raised);
        label_41 = new QLabel(frameDownloadsHeader_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_36->addWidget(frameDownloadsHeader_5, 3, 0, 1, 1);

        textEdit = new QTextEdit(frameNetwork);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_36->addWidget(textEdit, 4, 0, 1, 1);


        gridLayout_8->addWidget(frameNetwork, 0, 0, 1, 1);

        pagesMain->addWidget(Network);
        Chat = new QWidget();
        Chat->setObjectName(QString::fromUtf8("Chat"));
        gridLayout_9 = new QGridLayout(Chat);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setMargin(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        frameChat = new QFrame(Chat);
        frameChat->setObjectName(QString::fromUtf8("frameChat"));
        gridLayout_41 = new QGridLayout(frameChat);
        gridLayout_41->setSpacing(0);
        gridLayout_41->setMargin(0);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        frameDownloadsHeader_4 = new QFrame(frameChat);
        frameDownloadsHeader_4->setObjectName(QString::fromUtf8("frameDownloadsHeader_4"));
        frameDownloadsHeader_4->setMinimumSize(QSize(0, 23));
        frameDownloadsHeader_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frameDownloadsHeader_4->setFrameShape(QFrame::NoFrame);
        frameDownloadsHeader_4->setFrameShadow(QFrame::Raised);
        label_38 = new QLabel(frameDownloadsHeader_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(0, 0, 111, 21));

        gridLayout_41->addWidget(frameDownloadsHeader_4, 0, 0, 1, 3);

        frame = new QFrame(frameChat);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(210, 0));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 202, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_43 = new QGridLayout(frame_2);
        gridLayout_43->setSpacing(0);
        gridLayout_43->setMargin(0);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        label_42 = new QLabel(frame_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 124, 179);"));
        label_42->setFrameShape(QFrame::NoFrame);
        label_42->setFrameShadow(QFrame::Plain);

        gridLayout_43->addWidget(label_42, 0, 0, 1, 1);

        listWidget = new QListWidget(frame_2);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(200, 16777215));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        listWidget->setFrameShape(QFrame::Box);

        gridLayout_43->addWidget(listWidget, 1, 0, 1, 1);

        gridLayout_37 = new QGridLayout();
        gridLayout_37->setSpacing(6);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        toolButton_51 = new QToolButton(frame_2);
        toolButton_51->setObjectName(QString::fromUtf8("toolButton_51"));
        toolButton_51->setIcon(icon56);
        toolButton_51->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_51->setAutoRaise(true);

        gridLayout_37->addWidget(toolButton_51, 0, 0, 1, 1);

        toolButton_52 = new QToolButton(frame_2);
        toolButton_52->setObjectName(QString::fromUtf8("toolButton_52"));
        toolButton_52->setIcon(icon57);
        toolButton_52->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_52->setAutoRaise(true);

        gridLayout_37->addWidget(toolButton_52, 0, 1, 1, 1);


        gridLayout_43->addLayout(gridLayout_37, 2, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        sizePolicy.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy);
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_44 = new QGridLayout(frame_9);
        gridLayout_44->setSpacing(0);
        gridLayout_44->setMargin(0);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        label_43 = new QLabel(frame_9);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 124, 179);"));
        label_43->setFrameShape(QFrame::NoFrame);
        label_43->setFrameShadow(QFrame::Plain);

        gridLayout_44->addWidget(label_43, 0, 0, 1, 1);

        listWidget_2 = new QListWidget(frame_9);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setMaximumSize(QSize(200, 16777215));
        listWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        listWidget_2->setFrameShape(QFrame::Box);

        gridLayout_44->addWidget(listWidget_2, 1, 0, 1, 1);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setSpacing(6);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        toolButton_53 = new QToolButton(frame_9);
        toolButton_53->setObjectName(QString::fromUtf8("toolButton_53"));
        toolButton_53->setIcon(icon56);
        toolButton_53->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_53->setAutoRaise(true);

        gridLayout_38->addWidget(toolButton_53, 0, 0, 1, 1);

        toolButton_54 = new QToolButton(frame_9);
        toolButton_54->setObjectName(QString::fromUtf8("toolButton_54"));
        toolButton_54->setIcon(icon57);
        toolButton_54->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_54->setAutoRaise(true);

        gridLayout_38->addWidget(toolButton_54, 0, 1, 1, 1);


        gridLayout_44->addLayout(gridLayout_38, 2, 0, 1, 1);


        verticalLayout->addWidget(frame_9);


        gridLayout_41->addWidget(frame, 1, 0, 3, 1);

        frame_11 = new QFrame(frameChat);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        sizePolicy6.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy6);
        frame_11->setMinimumSize(QSize(0, 45));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 124, 179);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_44 = new QLabel(frame_11);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(60, 0, 291, 41));
        label_45 = new QLabel(frame_11);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 0, 46, 41));

        gridLayout_41->addWidget(frame_11, 1, 1, 1, 1);

        textEdit_2 = new QTextEdit(frameChat);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);

        gridLayout_41->addWidget(textEdit_2, 2, 1, 1, 1);

        frame_10 = new QFrame(frameChat);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(0, 60));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 202, 255);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_42 = new QGridLayout(frame_10);
        gridLayout_42->setSpacing(0);
        gridLayout_42->setMargin(0);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_39 = new QGridLayout();
        gridLayout_39->setSpacing(0);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        lineEdit_3 = new QLineEdit(frame_10);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_39->addWidget(lineEdit_3, 0, 0, 1, 1);

        toolButton_55 = new QToolButton(frame_10);
        toolButton_55->setObjectName(QString::fromUtf8("toolButton_55"));
        QIcon icon85;
        icon85.addPixmap(QPixmap(QString::fromUtf8(":/Icons/Resource/Forum.png")), QIcon::Normal, QIcon::Off);
        toolButton_55->setIcon(icon85);
        toolButton_55->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_55->setAutoRaise(true);

        gridLayout_39->addWidget(toolButton_55, 0, 1, 1, 1);


        gridLayout_42->addLayout(gridLayout_39, 0, 0, 1, 1);

        gridLayout_40 = new QGridLayout();
        gridLayout_40->setSpacing(0);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        toolButton_56 = new QToolButton(frame_10);
        toolButton_56->setObjectName(QString::fromUtf8("toolButton_56"));
        toolButton_56->setIcon(icon18);
        toolButton_56->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_56->setAutoRaise(true);

        gridLayout_40->addWidget(toolButton_56, 0, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_40->addItem(horizontalSpacer_18, 0, 2, 1, 1);

        toolButton_57 = new QToolButton(frame_10);
        toolButton_57->setObjectName(QString::fromUtf8("toolButton_57"));
        toolButton_57->setIcon(icon19);
        toolButton_57->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_57->setAutoRaise(true);

        gridLayout_40->addWidget(toolButton_57, 0, 1, 1, 1);

        toolButton_58 = new QToolButton(frame_10);
        toolButton_58->setObjectName(QString::fromUtf8("toolButton_58"));
        QIcon icon86;
        icon86.addPixmap(QPixmap(QString::fromUtf8(":/Smileys/Resource/Smileys/Happy.png")), QIcon::Normal, QIcon::Off);
        toolButton_58->setIcon(icon86);
        toolButton_58->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_58->setAutoRaise(true);

        gridLayout_40->addWidget(toolButton_58, 0, 3, 1, 1);

        toolButton_59 = new QToolButton(frame_10);
        toolButton_59->setObjectName(QString::fromUtf8("toolButton_59"));
        toolButton_59->setIcon(icon14);
        toolButton_59->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_59->setAutoRaise(true);

        gridLayout_40->addWidget(toolButton_59, 0, 4, 1, 1);


        gridLayout_42->addLayout(gridLayout_40, 1, 0, 1, 1);


        gridLayout_41->addWidget(frame_10, 3, 1, 1, 1);

        frame_12 = new QFrame(frameChat);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        sizePolicy6.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy6);
        frame_12->setMinimumSize(QSize(210, 0));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 202, 255);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_12);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setMargin(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_15 = new QFrame(frame_12);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        sizePolicy.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy);
        frame_15->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 178, 231);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_45 = new QGridLayout(frame_15);
        gridLayout_45->setSpacing(0);
        gridLayout_45->setMargin(0);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        label_47 = new QLabel(frame_15);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 124, 179);"));
        label_47->setFrameShape(QFrame::NoFrame);
        label_47->setFrameShadow(QFrame::Plain);

        gridLayout_45->addWidget(label_47, 0, 0, 1, 1);

        listWidget_6 = new QListWidget(frame_15);
        listWidget_6->setObjectName(QString::fromUtf8("listWidget_6"));
        sizePolicy10.setHeightForWidth(listWidget_6->sizePolicy().hasHeightForWidth());
        listWidget_6->setSizePolicy(sizePolicy10);
        listWidget_6->setMaximumSize(QSize(200, 16777215));
        listWidget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        listWidget_6->setFrameShape(QFrame::Box);

        gridLayout_45->addWidget(listWidget_6, 1, 0, 1, 1);


        verticalLayout_3->addWidget(frame_15);


        gridLayout_41->addWidget(frame_12, 1, 2, 3, 1);


        gridLayout_9->addWidget(frameChat, 0, 0, 1, 1);

        pagesMain->addWidget(Chat);

        gridLayout->addWidget(pagesMain, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1165, 21));
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
        menuConnect_To->addAction(actionGnutella_2);
        menuConnect_To->addAction(actionGnutella_1);
        menuConnect_To->addAction(actionAres);
        menuConnect_To->addAction(actionEDonkey_2000);
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

        pagesMain->setCurrentIndex(7);
        toolBox->setCurrentIndex(0);
        pagesLibrary->setCurrentIndex(1);
        stackedFileType->setCurrentIndex(0);


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
        actionAres->setText(QApplication::translate("MainWindowClass", "Ares", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Home_32x32.png\" /> <span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Panthera Home</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
        labelSplash->setText(QString());
        pushButtonSearch->setText(QApplication::translate("MainWindowClass", "Start Search", 0, QApplication::UnicodeUTF8));
        pushButtonSearch->setShortcut(QApplication::translate("MainWindowClass", "Return", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(0, QApplication::translate("MainWindowClass", "Any File Type", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(1, QApplication::translate("MainWindowClass", "Application", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(2, QApplication::translate("MainWindowClass", "Archive", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(3, QApplication::translate("MainWindowClass", "Audio", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(4, QApplication::translate("MainWindowClass", "Bittorrent", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(5, QApplication::translate("MainWindowClass", "Book", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(6, QApplication::translate("MainWindowClass", "Image", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(7, QApplication::translate("MainWindowClass", "Presentation", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(8, QApplication::translate("MainWindowClass", "ROM Image", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(9, QApplication::translate("MainWindowClass", "Skin", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(10, QApplication::translate("MainWindowClass", "Source Code", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(11, QApplication::translate("MainWindowClass", "Spreadsheet", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(12, QApplication::translate("MainWindowClass", "Video", 0, QApplication::UnicodeUTF8));
        typeCombo->setItemText(13, QApplication::translate("MainWindowClass", "Word Processing", 0, QApplication::UnicodeUTF8));

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
        AdvancedBtn->setText(QApplication::translate("MainWindowClass", "Advanced", 0, QApplication::UnicodeUTF8));
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
        label_34->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Folder Libary_32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Library</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Folder Libary_32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:10pt; font-weight:600;\">Exploring My Shared Folders</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MainWindowClass", "Tile View", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("MainWindowClass", "Show Details", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("MainWindowClass", "Create Album", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("MainWindowClass", "Delete Album", 0, QApplication::UnicodeUTF8));
        toolButtonLibSearch->setText(QApplication::translate("MainWindowClass", "Search", 0, QApplication::UnicodeUTF8));
        frameMedia->setStyleSheet(QString());
        label_33->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/VisualHub.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Media</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonAddMedia->setToolTip(QApplication::translate("MainWindowClass", "Add media file to the playlist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonAddMedia->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonRemMedia->setToolTip(QApplication::translate("MainWindowClass", "Remove media file from the playlist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonRemMedia->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonClrPlst->setToolTip(QApplication::translate("MainWindowClass", "Clear playlist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonClrPlst->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonSavePlst->setToolTip(QApplication::translate("MainWindowClass", "Save playlist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonSavePlst->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
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
        label_32->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/search-32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Search</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/search-32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Search</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowClass", "Type Your Search Here:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowClass", "File Type:", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(0, QApplication::translate("MainWindowClass", "Any File Type", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(1, QApplication::translate("MainWindowClass", "Application", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(2, QApplication::translate("MainWindowClass", "Archive", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(3, QApplication::translate("MainWindowClass", "Audio", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(4, QApplication::translate("MainWindowClass", "Bittorrent", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(5, QApplication::translate("MainWindowClass", "Book", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(6, QApplication::translate("MainWindowClass", "Image", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(7, QApplication::translate("MainWindowClass", "Presentation", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(8, QApplication::translate("MainWindowClass", "ROM Image", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(9, QApplication::translate("MainWindowClass", "Skin", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(10, QApplication::translate("MainWindowClass", "Source Code", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(11, QApplication::translate("MainWindowClass", "Spreadsheet", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(12, QApplication::translate("MainWindowClass", "Video", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(13, QApplication::translate("MainWindowClass", "Word Processing", 0, QApplication::UnicodeUTF8));

        toolButton_10->setStyleSheet(QApplication::translate("MainWindowClass", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
        toolButton_10->setText(QApplication::translate("MainWindowClass", "Search", 0, QApplication::UnicodeUTF8));
        toolButton_11->setText(QApplication::translate("MainWindowClass", "Clear", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/search-32.png\" /><span style=\" font-size:8pt; color:#00005d;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#00005d;\">Advanced</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowClass", "Search On This Network", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindowClass", "G1", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindowClass", "G2", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("MainWindowClass", "eDonkey 2K", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowClass", "File Size Must Be", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindowClass", "500 KB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "1 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "10 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "50 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "100 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "200 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "500 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "1 GB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "4 GB", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("MainWindowClass", "to", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindowClass", "500 KB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "1 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "10 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "50 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "100 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "200 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "500 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "1 GB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "4 GB", 0, QApplication::UnicodeUTF8)
        );
        checkBoxAres->setText(QApplication::translate("MainWindowClass", "Ares", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Download server.png\" /><span style=\" font-size:8pt; color:#00005d;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#00005d;\">Results</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Searching:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindowClass", "Not currently searching.", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Found:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindowClass", "No Files Found.", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Blocked:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindowClass", "0 peers, 0 files", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/search-32.png\" /><span style=\" font-size:8pt; color:#00005d;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#00005d;\">Any File Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Applications.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Application</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Archive.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Archive</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Speaker.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Audio</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Bittorrent_32.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Bittorrent</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Notebook.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Book</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Images.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Image</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Presentacion.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Presentation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Snes.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> ROM Image</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Wallpaper Settings.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Skin</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/source.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Source Code</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Spreadsheet2.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Spreadsheet</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/VisualHub.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Video</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Document.png\" /><span style=\" font-size:12pt; font-weight:600; color:#00005d;\"> Word Processing</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/search-32.png\" /> <span style=\" font-size:12pt; font-weight:600;\">Searches:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_12->setText(QApplication::translate("MainWindowClass", "Download", 0, QApplication::UnicodeUTF8));
        toolButton_13->setText(QApplication::translate("MainWindowClass", "Browse User", 0, QApplication::UnicodeUTF8));
        toolButton_14->setText(QApplication::translate("MainWindowClass", "Show Search", 0, QApplication::UnicodeUTF8));
        toolButton_15->setText(QApplication::translate("MainWindowClass", "Show Details", 0, QApplication::UnicodeUTF8));
        toolButton_16->setText(QApplication::translate("MainWindowClass", "More...", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindowClass", "Filter:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Earth Download_32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Downloads</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_17->setText(QApplication::translate("MainWindowClass", "All", 0, QApplication::UnicodeUTF8));
        toolButton_19->setText(QApplication::translate("MainWindowClass", "Bittorrent", 0, QApplication::UnicodeUTF8));
        toolButton_20->setText(QApplication::translate("MainWindowClass", "Image", 0, QApplication::UnicodeUTF8));
        toolButton_21->setText(QApplication::translate("MainWindowClass", "Video", 0, QApplication::UnicodeUTF8));
        toolButton_22->setText(QApplication::translate("MainWindowClass", "Audio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowClass", "File Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowClass", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowClass", "Progress", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowClass", "Speed", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowClass", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindowClass", "Client", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindowClass", "Complete", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindowClass", "Country", 0, QApplication::UnicodeUTF8));
        toolButton_18->setText(QApplication::translate("MainWindowClass", "Preview File", 0, QApplication::UnicodeUTF8));
        toolButton_23->setText(QApplication::translate("MainWindowClass", "Pause Download", 0, QApplication::UnicodeUTF8));
        toolButton_24->setText(QApplication::translate("MainWindowClass", "Cancel Download", 0, QApplication::UnicodeUTF8));
        toolButton_25->setText(QApplication::translate("MainWindowClass", "Show Monitor", 0, QApplication::UnicodeUTF8));
        toolButton_26->setText(QApplication::translate("MainWindowClass", "Properties", 0, QApplication::UnicodeUTF8));
        toolButton_27->setText(QApplication::translate("MainWindowClass", "Add Torrent", 0, QApplication::UnicodeUTF8));
        toolButton_28->setText(QApplication::translate("MainWindowClass", "Clear Completed", 0, QApplication::UnicodeUTF8));
        toolButton_29->setText(QApplication::translate("MainWindowClass", "Filter", 0, QApplication::UnicodeUTF8));
        toolButton_35->setText(QApplication::translate("MainWindowClass", "Mark Download As Junk", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Earth Upload_32.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Uploads</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindowClass", "File Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindowClass", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindowClass", "Progress", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindowClass", "Speed", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindowClass", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindowClass", "Client", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindowClass", "Complete", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindowClass", "Country", 0, QApplication::UnicodeUTF8));
        toolButton_30->setText(QApplication::translate("MainWindowClass", "Open Or Play", 0, QApplication::UnicodeUTF8));
        toolButton_31->setText(QApplication::translate("MainWindowClass", "Clear Upload", 0, QApplication::UnicodeUTF8));
        toolButton_32->setText(QApplication::translate("MainWindowClass", "Browse User", 0, QApplication::UnicodeUTF8));
        toolButton_33->setText(QApplication::translate("MainWindowClass", "Chat With User", 0, QApplication::UnicodeUTF8));
        toolButton_34->setText(QApplication::translate("MainWindowClass", "Ban User", 0, QApplication::UnicodeUTF8));
        toolButton_36->setText(QApplication::translate("MainWindowClass", "Mark Upload As Junk", 0, QApplication::UnicodeUTF8));
        toolButton_37->setText(QApplication::translate("MainWindowClass", "Clear Completed", 0, QApplication::UnicodeUTF8));
        toolButton_38->setText(QApplication::translate("MainWindowClass", "Filter", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Lock.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Security</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindowClass", "Address/Content", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindowClass", "Action", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindowClass", "Expires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindowClass", "Hits", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindowClass", "Comment", 0, QApplication::UnicodeUTF8));
        toolButton_6->setText(QApplication::translate("MainWindowClass", "Add Rule", 0, QApplication::UnicodeUTF8));
        toolButton_7->setText(QApplication::translate("MainWindowClass", "Remove Rule", 0, QApplication::UnicodeUTF8));
        toolButton_8->setText(QApplication::translate("MainWindowClass", "Import Rules", 0, QApplication::UnicodeUTF8));
        toolButton_9->setText(QApplication::translate("MainWindowClass", "Export Rules", 0, QApplication::UnicodeUTF8));
        toolButton_39->setText(QApplication::translate("MainWindowClass", "Modify Rule", 0, QApplication::UnicodeUTF8));
        toolButton_40->setText(QApplication::translate("MainWindowClass", "Subscribe To Rules List", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Workgroup.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Neigbours</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindowClass", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindowClass", "Port", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindowClass", "Time", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindowClass", "Packets", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindowClass", "Bandwidth", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindowClass", "Total", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindowClass", "Leaves", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_5->horizontalHeaderItem(7);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindowClass", "Mode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_5->horizontalHeaderItem(8);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindowClass", "Client", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_5->horizontalHeaderItem(9);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindowClass", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_5->horizontalHeaderItem(10);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindowClass", "Country", 0, QApplication::UnicodeUTF8));
        toolButton_41->setText(QApplication::translate("MainWindowClass", "Connect To", 0, QApplication::UnicodeUTF8));
        toolButton_42->setText(QApplication::translate("MainWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        toolButton_43->setText(QApplication::translate("MainWindowClass", "Browse User", 0, QApplication::UnicodeUTF8));
        toolButton_44->setText(QApplication::translate("MainWindowClass", "Chat With User", 0, QApplication::UnicodeUTF8));
        toolButton_45->setText(QApplication::translate("MainWindowClass", "Ban Host", 0, QApplication::UnicodeUTF8));
        toolButton_46->setText(QApplication::translate("MainWindowClass", "eDonkey 2k", 0, QApplication::UnicodeUTF8));
        toolButton_47->setText(QApplication::translate("MainWindowClass", "Ares", 0, QApplication::UnicodeUTF8));
        toolButton_48->setText(QApplication::translate("MainWindowClass", "G1", 0, QApplication::UnicodeUTF8));
        toolButton_49->setText(QApplication::translate("MainWindowClass", "G2", 0, QApplication::UnicodeUTF8));
        toolButton_50->setText(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Desktop graphite.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">System</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/irc protocol.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Chat</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Door.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Rooms</span></p></body></html>", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindowClass", "Panthera", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindowClass", "Panthera Help", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindowClass", "Panthera Developer", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolButton_51->setText(QApplication::translate("MainWindowClass", "Add", 0, QApplication::UnicodeUTF8));
        toolButton_52->setText(QApplication::translate("MainWindowClass", "Remove", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Identity.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Friends</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_53->setText(QApplication::translate("MainWindowClass", "Add", 0, QApplication::UnicodeUTF8));
        toolButton_54->setText(QApplication::translate("MainWindowClass", "Remove", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Welcome to Panthera Chat!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#ffffff;\">Please respect others while using this service.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/Resource/Group Event 48.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolButton_55->setText(QApplication::translate("MainWindowClass", "Send", 0, QApplication::UnicodeUTF8));
        toolButton_56->setText(QApplication::translate("MainWindowClass", "Connect", 0, QApplication::UnicodeUTF8));
        toolButton_57->setText(QApplication::translate("MainWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        toolButton_58->setText(QApplication::translate("MainWindowClass", "Smileys", 0, QApplication::UnicodeUTF8));
        toolButton_59->setText(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Icons/FileType/Resource/24x24 File Type/Group Event.png\" /><span style=\" font-size:8pt;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">Users In Channel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
