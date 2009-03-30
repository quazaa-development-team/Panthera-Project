#ifndef PERSISTENTSETTINGS_H
#define PERSISTENTSETTINGS_H

#include <QObject>
#include <QSettings>
#include <QStringList>
#include <QColor>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class PersistentSettings : public QObject
{
public:
    PersistentSettings();
    void saveMainWindowState(QMainWindow *mainWindow);
    void loadMainWindowState(QMainWindow *mainWindow);

    // Attributes
public:

        struct sGeneral
        {
                QString		Path;					// Installation path for Shareaza
                QString		UserPath;				// Path for user data. (May be the same as above for single user installs)
                bool		MultiUser;				// Multiuser installation
                int		LogLevel;				// Log severity (0 - MSG_ERROR .. 4 - MSG_DEBUG)
                bool		SearchLog;				// Display search facility log information
                bool		DebugLog;				// Create a log file
                int		MaxDebugLogSize;			// Max size of the log file
                int		DiskSpaceWarning;			// Value at which to warn the user about low disk space
                int		DiskSpaceStop;				// Value at which to pause all downloads due to low disk space
                int		MinTransfersRest;			// For how long at least to suspend Transfers each round
                bool		GUIMode;                                // Start in GUI or terminal/command prompt?
                int		CloseButtonMode;                        // What happens when the close button is pressed? (0 - Ask, 1 - Close, 2 - Minimise)
                bool		TrayMinimise;                           // Minimise to tray or task panel.
                bool		ShowTimestamp;
                bool		SizeLists;
                bool		HashIntegrity;
                bool		RatesInBytes;				// Show speeds in Bytes/second
                int		RatesUnit;				// Units that the rates are to be displayed in
                bool		AlwaysOpenURLs;
                QString		Language;
                bool		LanguageRTL;				// Right-to-Left GUI (2000, XP only)
                bool		IgnoreXPsp2;				// Ignore the presence of Windows XP SP2 limits
                bool		DebugBTSources;				// Display received sources for BT download when seeding
                bool		ItWasLimited;				// If the user patched the half-open connection limit we change the settings back to gain full speed
                bool		FirstRun;                               // Is this the first time Panthera was run?
                int		SmartVersion;				// Settings version
                bool		Running;
        } General;

        struct sVersionCheck
        {
                int		NextCheck;
                QString		Quote;
                bool		UpdateCheck;				// Does Shareaza check for new versions?
                QString		UpdateCheckURL;
                QString		UpgradePrompt;
                QString		UpgradeFile;
                QString		UpgradeSHA1;
                QString		UpgradeTiger;
                QString		UpgradeSize;
                QString		UpgradeSources;
                QString		UpgradeVersion;
        } VersionCheck;

        struct sInterface
        {
                int		TipDelay;
                int		TipAlpha;
                bool		TipSearch;
                bool		TipLibrary;
                bool		TipDownloads;
                bool		TipUploads;
                bool		TipNeighbours;
                bool		TipMedia;
                bool		LowResMode;
        } Interface;

        struct sLibrary
        {
                bool		WatchFolders;
                int		WatchFoldersTimeout;
                bool		PartialMatch;
                bool		VirtualFiles;
                bool		SourceMesh;
                int		SourceExpire;
                int		TigerHeight;
                int		QueryRouteSize;
                int		HistoryTotal;
                int		HistoryDays;
                bool		ShowVirtual;
                int		TreeSize;
                int		PanelSize;
                bool		ShowPanel;
                bool		StoreViews;
                bool		ShowCoverArt;
                QString		SchemaURI;
                QString		FilterURI;
                QStringList	SafeExecute;
                QStringList	PrivateTypes;
                int		ThumbSize;
                bool		HighPriorityHash;			// Use high priority hashing
                bool		HashWindow;					// Display annoying hashing window
                bool		CreateGhosts;				// Default action in the delete file dialog
                int		HighPriorityHashing;		// desired speed in MB/s when hashing with hi priority
                int		LowPriorityHashing;			// desired speed in MB/s when hashing with low priority
                int		MaxMaliciousFileSize;		// Size for which to trigger malicious software search
                bool		PreferAPETags;				// Read APE tags first and only then ID3 tags from audio files
                bool		UseFolderGUID;				// Save/Load folder GUID using NTFS stream
                bool		MarkFileAsDownload;			// Mark downloaded file using NTFS stream as Internet Explorer
                bool		UseCustomFolders;			// Use desktop.ini
                bool		ScanAPE;					// Enable .ape,.mac,.apl metadata extraction by internals
                bool		ScanASF;					// Enable .asf,.wma,.wmv metadata extraction by internals
                bool		ScanAVI;					// Enable .avi metadata extraction by internals
                bool		ScanCHM;					// Enable .chm metadata extraction by internals
                bool		ScanEXE;					// Enable .exe,.dll metadata extraction by internals
                bool		ScanImage;					// Enable .jpg,.jpeg,.gif,.png,.bmp metadata extraction by internals
                bool		ScanMP3;					// Enable .mp3 metadata extraction by internals
                bool		ScanMPC;					// Enable .mpc,.mpp,.mp+ metadata extraction by internals
                bool		ScanMPEG;					// Enable .mpeg,.mpg metadata extraction by internals
                bool		ScanMSI;					// Enable .msi metadata extraction by internals
                bool		ScanOGG;					// Enable .ogg metadata extraction by internals
                bool		ScanPDF;					// Enable .pdf metadata extraction by internals
                bool		SmartSeriesDetection;		// Organize video files in Library by using predefined patterns
        } Library;

        struct sWebServices
        {
                QString		BitziAgent;
                QString		BitziWebView;
                QString		BitziWebSubmit;
                QString		BitziXML;
                bool		BitziOkay;
                QString		ShareMonkeyCid;				// Affiliate ID
                bool		ShareMonkeySaveThumbnail;
                bool		ShareMonkeyOkay;
        } WebServices;

        struct sSearch
        {
                QString		LastSchemaURI;
                QString		BlankSchemaURI;
                bool		HideSearchPanel;
                bool		SearchPanel;
                bool		ExpandMatches;
                bool		HighlightNew;
                bool		SwitchToTransfers;
                bool		SchemaTypes;
                bool		ShowNames;
                int		FilterMask;
                QString		MonitorSchemaURI;
                QString		MonitorFilter;
                int		MonitorQueue;
                int		BrowseTreeSize;
                bool		DetailPanelVisible;
                int		DetailPanelSize;
                int		MaxPreviewLength;
                bool		AdultFilter;
                bool		AdvancedPanel;
                int		SpamFilterThreshold;		// Percentage of spam hits which triggers file sources to be treated as a spam
                int		GeneralThrottle;			// A general throttle for how often each individual search may run. Low values may cause source finding to get overlooked.
                QString		ShareMonkeyBaseURL;
                int		ClearPrevious;				// Clear previous search results? 0 - ask user; 1 - no; 2 - yes.
                bool		SanityCheck;				// Drop hits of banned hosts
        } Search;

        struct sMediaPlayer
        {
                bool		EnablePlay;
                bool		EnableEnqueue;
                QStringList	FileTypes;
                bool		Repeat;
                bool		Random;
                int     	Zoom;
                double		Aspect;
                double		Volume;
                bool		ListVisible;
                int		ListSize;
                bool		StatusVisible;
                QString		MediaServicesCLSID;
                QString		Mpeg1PreviewCLSID;
                QString		Mp3PreviewCLSID;
                QString		AviPreviewCLSID;
                QString		VisWrapperCLSID;
                QString		VisSoniqueCLSID;
                QString		VisCLSID;
                QString		VisPath;
                int		VisSize;
                QString		ServicePath;
                bool		ShortPaths;					// Some players differently handle unicode paths but they can launch files using 8.3 paths
        } MediaPlayer;

        struct sWeb
        {
                bool		Magnet;
                bool		Foxy;						// Handle Foxy links (slightly altered magnet)
                bool		Gnutella;
                bool		ED2K;
                bool		Piolet;
                bool		Torrent;
        } Web;

        struct sConnection
        {
                bool		AutoConnect;
                int		FirewallState;
                QString		OutHost;
                QString		InHost;
                int		InPort;
                bool		InBind;
                bool		RandomPort;
                int		InSpeed;					// Inbound internet connection speed in Kilobits/seconds
                int		OutSpeed;					// Outbound internet connection speed in Kilobits/seconds
                bool		IgnoreLocalIP;				// Ingnore all 'local' (LAN) IPs
                bool		IgnoreOwnIP;				// Do not accept any ports on your external IP as a source
                int		TimeoutConnect;
                int		TimeoutHandshake;
                int		TimeoutTraffic;
                int		SendBuffer;
                bool		RequireForTransfers;		// Only upload/download to connected networks
                int		ConnectThrottle;			// Delay between connection attempts. (Neighbour connections)
                int		FailurePenalty;				// Delay after connection failure (seconds, default = 300) (Neighbour connections)
                int		FailureLimit;				// Max allowed connection failures (default = 3) (Neighbour connections)
                bool		DetectConnectionLoss;		// Detect loss of internet connection
                bool		DetectConnectionReset;		// Detect regaining of internet connection
                bool		ForceConnectedState;		// Force WinINet into a connected state on startup. (Put IE into online mode)
                bool		SlowConnect;				// Connect to one network at a time. Don't download while connecting. (XPsp2)
                bool		EnableFirewallException;	// Create Firewall exception at startup
                bool		DeleteFirewallException;	// Delete Firewall exception on shutdown
                bool		EnableUPnP;
                bool		DeleteUPnPPorts;			// Delete forwarded ports on shutdown (UPnP)
                bool		SkipWANPPPSetup;			// Skip WANPPPConn1 device setup (UPnP)
                bool		SkipWANIPSetup;				// Skip WANIPConn1 device setup (UPnP)
        } Connection;

        struct sBandwidth
        {
                int		Request;
                int		HubIn;
                int		HubOut;
                int		LeafIn;
                int		LeafOut;
                int		PeerIn;
                int		PeerOut;
                int		UdpOut;
                int		Downloads;					// Inbound speed limit in Bytes/seconds
                int		Uploads;					// Outbound speed limit in Bytes/seconds
                int		HubUploads;
        } Bandwidth;

        struct sCommunity
        {
                bool		ChatEnable;					// Is chat enabled with compatible clients?
                bool		ChatAllNetworks;			// Is chat allowed over other protocols? (ed2k, etc)
                bool		ChatFilter;					// Filter out chat spam
                bool		ChatFilterED2K;				// Filter known ed2k spam. (pretty bad- always on)
                bool		ChatCensor;					// Censor 'bad' words from chat. (Uses adult filter)
                bool		Timestamp;
                bool		ServeProfile;
                bool		ServeFiles;
                int		AwayMessageIdleTime;		// Time in secs of idle system time before showing away message
        } Community;

        struct sDiscovery
        {
                int		AccessThrottle;
                int		Lowpoint;
                int		FailureLimit;
                int		UpdatePeriod;
                int		DefaultUpdate;
                int		BootstrapCount;
                int		CacheCount;					// Limit ability to learn new caches
                bool		EnableG1GWC;
        } Discovery;

        struct sGnutella
        {
                int		ConnectFactor;
                bool		DeflateHub2Hub;
                bool		DeflateLeaf2Hub;
                bool		DeflateHub2Leaf;
                int		MaxResults;					// Maximum results to return to a single query
                int		MaxHits;
                int		HitsPerPacket;
                int		RouteCache;
                int		HostCacheSize;
                int		HostCacheView;
                int		ConnectThrottle;			// Delay between connection attempts (seconds)
                bool		SpecifyProtocol;			// Specify G1 or G2 when initiating a connection
        } Gnutella;

        struct sGnutella1
        {
                int		ClientMode;					// Desired mode of operation: MODE_AUTO, MODE_LEAF, MODE_ULTRAPEER
                bool		EnableToday;
                bool		EnableAlways;
                int		NumHubs;					// Number of ultrapeers a leaf has
                int		NumLeafs;					// Number of leafs an ultrapeer has
                int		NumPeers;					// Number of peers an ultrapeer has
                int		PacketBufferSize;
                int		PacketBufferTime;
                int		DefaultTTL;
                int		SearchTTL;
                int		TranslateTTL;
                int		MaximumTTL;
                int		MaximumPacket;
                int		MaximumQuery;
                bool		StrictPackets;
                bool		EnableGGEP;
                bool		VendorMsg;
                int		QueryThrottle;
                int		RequeryDelay;
                int		HostCount;					// Number of hosts in X-Try-Ultrapeers
                int		HostExpire;
                int		PingFlood;
                int		PingRate;
                int		PongCache;
                int		PongCount;
                int		HitQueueLimit;				// Protect G1 clients from badly configured queues
                bool		QueryHitUTF8;				// Use UTF-8 encoding to read Gnutella1 QueryHit packets
                bool		QuerySearchUTF8;			// Use UTF-8 encoding to create Gnutella1 Query packets
                int		MaxHostsInPongs;			// The number of hosts included in the response of pings having SCP GGEP block
        } Gnutella1;

        struct sGnutella2
        {
                int		ClientMode;					// Desired mode of operation: MODE_AUTO, MODE_LEAF, MODE_HUB
                bool		HubVerified;
                bool		EnableToday;
                bool		EnableAlways;
                int		NumHubs;					// Number of hubs a leaf has
                int		NumLeafs;					// Number of leafs a hub has
                int		NumPeers;					// Number of peers a hub has
                int		PingRelayLimit;				// Number of other leafs to forward a /PI/UDP to: 10 - 30
                int		UdpMTU;
                int		UdpBuffers;
                int		UdpInFrames;
                int		UdpOutFrames;
                int		UdpGlobalThrottle;
                int		UdpOutExpire;
                int		UdpOutResend;
                int		UdpInExpire;
                int		LNIPeriod;
                int		KHLPeriod;
                int		KHLHubCount;
                int		HAWPeriod;
                int		HostCurrent;
                int		HostCount;					// Number of hosts in X-Try-Hubs
                int		HostExpire;
                int		PingRate;
                int		QueryGlobalThrottle;		// Max G2 query rate (Cannot exceed 8/sec)
                int		QueryHostThrottle;
                int		QueryHostDeadline;
                int		RequeryDelay;
                int		HubHorizonSize;
                int		QueryLimit;
        } Gnutella2;

        struct seDonkey
        {
                bool		EnableToday;
                bool		EnableAlways;
                bool		FastConnect;				// Try connecting to 2 servers to get online faster
                bool		ForceHighID;				// Reconnect if low-id. (once only)
                int		NumServers;					// 1
                int		MaxLinks;					// Max ed2k client links
                int		MaxResults;
                int		MaxShareCount;				// Hard limit on file list sent to server
                bool		ServerWalk;					// Enable global UDP walk of servers
                int		StatsGlobalThrottle;		// Global throttle for server UDP stats requests
                int		QueryGlobalThrottle;		// Global throttle for all ed2k searches (TCP, UDP, manual and auto)
                int		StatsServerThrottle;		// Max rate at which an individual server can be asked for stats
                int		QueryServerThrottle;		// Max rate at which an individual server can be queried
                int		QueryFileThrottle;			// Max rate a file can have GetSources done
                int		GetSourcesThrottle;			// Max rate a general GetSources can done
                int		QueueRankThrottle;			// How frequently queue ranks are sent
                int		PacketThrottle;				// ED2K packet rate limiter
                int		SourceThrottle;				// ED2K source rate limiter
                int		MetAutoQuery;				// Auto query for a new server list
                bool		LearnNewServers;			// Get new servers from servers
                bool		LearnNewServersClient;		// Get new servers from clients
                QString		ServerListURL;
                int		RequestPipe;
                int		RequestSize;
                int		FrameSize;
                int		ReAskTime;
                int		DequeueTime;
                int		ExtendedRequest;
                bool		SendPortServer;				// Send port in tag to ed2k servers. (not needed for newer servers)
                bool		MagnetSearch;				// Search for magnets over ed2k (lower server load)
                int		MinServerFileSize;			// Minimum size a file in the library must be in order to be included in the server file list. (In KB)
                int		DefaultServerFlags;			// Default server flags (for UDP searches)
                bool		Endgame;					// Allow endgame mode when completing downloads. (Download same chunk from multiple sources)
                bool		LargeFileSupport;			// Allow 64 bit file sizes
        } eDonkey;

        struct sBitTorrent
        {
                bool		AdvancedInterface;			// Display BT 'extras' (Seed Torrent box, etc)
                bool		AdvancedInterfaceSet;		// Has Shareaza auto-set the above value (first time a user downloads a torrent)
                QString		TorrentCreatorPath;			// Location of the program used to create .torrent files
                QString		DefaultTracker;
                int		DefaultTrackerPeriod;		// Delay between tracker contact attempts if one is not specified by tracker
                int		TorrentCodePage;			// The code page to assume for a .torrent file if it isn't UTF-8
                bool		TorrentExtraKeys;			// Check for '.utf8' keys if there is an encoding error
                int		LinkTimeout;
                int		LinkPing;
                int		RequestPipe;
                int		RequestSize;
                int		RequestLimit;
                int		RandomPeriod;
                int		SourceExchangePeriod;
                int		UploadCount;				// Number of active torrent uploads allowed
                int		DownloadConnections;		// Number of active torrent connections allowed
                int		DownloadTorrents;			// Number of torrents to download at once
                bool		Endgame;					// Allow endgame mode when completing torrents. (Download same chunk from multiple sources)
                bool		AutoClear;					// Clear completed torrents when they meet the required share ratio
                int		ClearRatio;					// Share ratio a torrent must reach to be cleared. (Minimum 100%)
                bool		AutoSeed;					// Automatically re-seed most recently completed torrent on start-up
                int		BandwidthPercentage;		// Percentage of bandwidth to use when BT active.
                bool		TrackerKey;					// Send a key (random value) to trackers
                bool		PreferenceBTSources;		// Preference downloading from BT sources where appropriate
                int		DhtPruneTime;
        } BitTorrent;

        struct sDownloads
        {
                QString		IncompletePath;				// Where incomplete downloads are stored
                QString		CompletePath;				// Where downloads are moved when they complete
                QString		TorrentPath;				// Where .torrent files are stored
                QString		CollectionPath;				// Where .collection and .co files are stored
                int		BufferSize;
                int		SparseThreshold;			// NTFS 'sparse files' are not used on files below this size. (0 = Disable)
                int		MaxAllowedFailures;
                int		MaxFiles;					// How many files download at once
                int		MaxTransfers;				// How many total tranfers take place
                int		MaxFileTransfers;			// How mnay transfers are allowed per file
                int		MaxFileSearches;			// Number number of files over the download limit that prepare to start. (Search, etc)
                int		MaxConnectingSources;		// The maximum number of sources that can be in the 'connecting' state. (Important for XPsp2)
                int		MinSources;					// The minimum number of sources a download has before Shareaza regards it as having a problem
                int		ConnectThrottle;			// Delay between download attempts. (Very important for routers)
                int		QueueLimit;					// Longest queue to wait in. (0 to disable. This should be >800 or 0 to get good performance from ed2k)
                int		SearchPeriod;
                int		StarveTimeout;
                int		StarveGiveUp;				// How long (in hours) before Shareaza will give up and try another download if it gets no data. (+ 0-9 h, depending on sources)
                int		RetryDelay;
                int		PushTimeout;
                bool		StaggardStart;
                bool		AllowBackwards;				// Permit download to run in reverse when appropriate
                int		ChunkSize;
                int		ChunkStrap;
                bool		Metadata;
                bool		VerifyFiles;
                bool		VerifyTiger;
                bool		VerifyED2K;
                bool		NeverDrop;					// Do not drop bad sources (may pollute source list with many dead sources)
                bool		RequestHash;
                bool		RequestHTTP11;
                bool		RequestURLENC;
                int		SaveInterval;
                bool		FlushSD;
                bool		ShowSources;
                bool		SimpleBar;					// Displays a simplified progress bar (lower CPU use)
                bool		ShowPercent;				// Display small green % complete bar on progress graphic
                bool		ShowGroups;
                bool		AutoExpand;
                bool		AutoClear;
                int		ClearDelay;
                int		FilterMask;
                bool		ShowMonitorURLs;
                bool		SortColumns;				// Allow user to sort downloads by clicking column headers
                bool		SortSources;				// Automatically sort sources (Status, protocol, queue)
                int		SourcesWanted;				// Number of sources Shareaza 'wants'. (Will not request more than this number of sources from ed2k)
                int		MaxReviews;					// Maximum number of reviews to store per download
                int		StartDroppingFailedSourcesNumber;	// The number of sources where Shareaza start dropping failed sources after only one attempt
                bool		WebHookEnable;
                QStringList	WebHookExtensions;
        } Downloads;

        struct sUploads
        {
                int		MaxPerHost;					// Max simultaneous uploads to one remote client
                int		FreeBandwidthValue;
                int		FreeBandwidthFactor;
                int		ClampdownFactor;
                int		ClampdownFloor;
                bool		ThrottleMode;
                int		QueuePollMin;
                int		QueuePollMax;
                int		RotateChunkLimit;
                bool		SharePartials;
                bool		ShareTiger;
                bool		ShareHashset;
                bool		ShareMetadata;
                bool		SharePreviews;
                bool		DynamicPreviews;
                int		PreviewQuality;
                int		PreviewTransfers;
                bool		AllowBackwards;				// Allow data to be sent from end of range to begining where supported
                bool		HubUnshare;
                QString		BlockAgents;
                bool		AutoClear;					// Automatically clear completed uploads ('Completed' queue)
                int		ClearDelay;					// Delay between auto-clears
                int		FilterMask;
                int		RewardQueuePercentage;		// The percentage of each reward queue reserved for uploaders
        } Uploads;

        struct sRemote
        {
                bool		Enable;
                QString		Username;
                QString		Password;
        } Remote;

        struct sScheduler
        {
                bool		Enable;						// Enable the scheduler
                int		LimitedBandwidth;			// % of bandwidth to use in limited mode
                bool		LimitedNetworks;			// Only connect to G2/BT when limited
                bool		AllowHub;					// Allow hub mode while scheduler is active
        } Scheduler;

        struct sProfile
        {

        } Profile;

        struct sIRC
        {
                struct sTextColors
                {
                    QColor              ServerMessages;
                    QColor              Topics;
                    QColor              RoomActions;
                    QColor              Notices;
                    QColor              ChatBackground;
                    QColor              NormalText;
                } TextColors;

                bool			Show;
                bool			FloodEnable;
                bool			Timestamp;
                QString			UserName;
                QString			RealName;
                QString			Nick;
                QString			Alternate;
                QString			ServerName;
                QString			ServerPort;
                QString			FloodLimit;
                bool			Updated;
                QString			ScreenFont;
        } IRC;

        struct sLive
        {
                bool		DiskSpaceWarning;			// Has the user been warned of low disk space?
                bool		DiskWriteWarning;			// Has the user been warned of write problems?
                bool		AdultWarning;				// Has the user been warned about the adult filter?
                bool		QueueLimitWarning;			// Has the user been warned about limiting the max Q position accepted?
                bool		DefaultED2KServersLoaded;	// Has Shareaza already loaded default ED2K servers?
                bool		DonkeyServerWarning;		// Has the user been warned about having an empty server list?
                bool		UploadLimitWarning;			// Has the user been warned about the ed2k/BT ratio?
                bool		DiskSpaceStop;				// Has Shareaza paused all downloads due to critical disk space?
                int		BandwidthScale;				// Monitor slider settings
                bool		LoadWindowState;
                bool		AutoClose;
                bool		FirstRun;					// Is this the first time Shareaza is being run?
                QString		LastDuplicateHash;			// Stores the hash of the file about which the warning was shown
                bool		MaliciousWarning;			// Is the warning dialog opened?
        } Live;

        struct sExperimental
        {
                bool		EnableDIPPSupport;			// Handle GDNA host cache exchange
                bool		TestBTPartials;
        } Experimental;
};

#endif // PERSISTENTSETTINGS_H
