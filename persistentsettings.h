//
// persistentsettings.h
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

#ifndef PERSISTENTSETTINGS_H
#define PERSISTENTSETTINGS_H

#include <QObject>
#include <QSettings>
#include <QStringList>
#include <QColor>
#include <QUuid>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogsplash.h"

class PersistentSettings : public QObject
{
public:
	PersistentSettings();
	void saveMainWindowState(QMainWindow *mainWindow);
	void loadMainWindowState(QMainWindow *mainWindow);
	void loadSettings(DialogSplash *dlgSplash);
	void saveSettings();
	void saveProfile();

	// Attributes
public:

	struct sBasic
	{
		// Tooltips
		int			TipDelay;								// Amount of time the mouse is hovered before showing a tooltip
		int			TipTransparency;						// Alpha transarency level for tooltips
		bool		SearchTips;								// Show tooltips on searches view?
		bool		LibraryTips;							// Show tooltips on library view?
		bool		DownloadsTips;							// Show tooltips on downloads view?
		bool		UploadsTips;							// Show tooltips on uploads view?
		bool		NeighboursTips;							// Show tooltips on neigbours view?
		bool		MediaTips;								// Show tooltips on media view?
		bool		ChatTips;								// Show tooltips on chat view?
		bool		TipLowResMode;							// Low resolution tooltips for performance issues.
		// End Tooltips
		bool		FirstRun;								// Is this the first time Panthera was run?
		bool		ConnectOnStartup;						// Connect to networks when starting Panthera
		bool		StartWithSystem;						// Start with operating system
		QString		Language;								// What language does the user prefer
		bool		GUIMode;								// Start in GUI or terminal/command prompt?
		int			CloseMode;								// What happens when the close button is pressed? (0 - Ask, 1 - Close, 2 - Minimise)
		bool		TrayMinimise;							// Minimise to tray or task panel.
		bool		UsingSkin;								// Is the user using a skin instead of the default interface?
		QString		SkinFile;								// Full path to the skin file

		/*Possibly use these later as things start coming together. TODO: Delete any useless variables.
		QString		Path;									// Installation path for Panthera
		QString		UserPath;								// Path for user data. (May be the same as above for single user installs)
		bool		MultiUser;								// Multiuser installation
		int			LogLevel;								// Log severity (0 - MSG_ERROR .. 4 - MSG_DEBUG)
		bool		SearchLog;								// Display search facility log information
		bool		DebugLog;								// Create a log file
		int			MaxDebugLogSize;						// Max size of the log file
		int			DiskSpaceWarning;						// Value at which to warn the user about low disk space
		int			DiskSpaceStop;							// Value at which to pause all downloads due to low disk space
		int			MinTransfersRest;						// For how long at least to suspend Transfers each round
		bool		LogShowTimestamp;						// Show timestamps in the system log?
		bool		SizeLists;
		bool		HashIntegrity;
		bool		AlwaysOpenURLs;
		bool		LanguageRTL;							// Right-to-Left GUI (2000, XP only)
		bool		IgnoreXPsp2;							// Ignore the presence of Windows XP SP2 limits
		bool		DebugBTSources;							// Display received sources for BT download when seeding
		bool		ItWasLimited;							// If the user patched the half-open connection limit we change the settings back to gain full speed
		int			SmartVersion;							// Settings version
		bool		Running;*/
	} Basic;

	struct sLibrary
	{
		bool		RememberViews;							// Remember custom folder views
		bool		WatchFolders;							// Watch shared folders and update hashes when changed
		int			WatchFoldersTimeout;					// Quit watching folder after time
		bool		HighPriorityHashing;					// Use high priority hashing
		int			HighPriorityHashingSpeed;				// desired speed in MB/s when hashing with hi priority
		int			LowPriorityHashingSpeed;				// desired speed in MB/s when hashing with low priority
		bool		HashWindow;								// Display hashing progress window
		bool		GhostFiles;								// Create ghost files specifying why files were deleted on deletion
		bool		SmartSeriesDetection;					// Organize video files in Library by using predefined patterns
		int			HistoryTotal;							// Remember this many total files in Library history
		int			HistoryDays;							// Remember files for this many days
		QStringList	SafeExecuteTypes;						// These file types are safe to open
		QStringList	NeverShareTypes;						// Never share these file types

		/*
		bool		PartialMatch;
		bool		SourceMesh;
		int			SourceExpire;
		int			TigerHeight;
		int			QueryRouteSize;
		bool		ShowVirtual;
		int			TreeSize;
		int			PanelSize;
		bool		ShowPanel;
		bool		ShowCoverArt;
		QString		SchemaURI;
		QString		FilterURI;
		int			ThumbSize;
		int			MaxMaliciousFileSize;					// Size for which to trigger malicious software search
		bool		PreferAPETags;							// Read APE tags first and only then ID3 tags from audio files
		bool		UseFolderGUID;							// Save/Load folder GUID using NTFS stream
		bool		MarkFileAsDownload;						// Mark downloaded file using NTFS stream as Internet Explorer
		bool		UseCustomFolders;						// Use desktop.ini
		bool		ScanAPE;								// Enable .ape,.mac,.apl metadata extraction by internals
		bool		ScanASF;								// Enable .asf,.wma,.wmv metadata extraction by internals
		bool		ScanAVI;								// Enable .avi metadata extraction by internals
		bool		ScanCHM;								// Enable .chm metadata extraction by internals
		bool		ScanEXE;								// Enable .exe,.dll metadata extraction by internals
		bool		ScanImage;								// Enable .jpg,.jpeg,.gif,.png,.bmp metadata extraction by internals
		bool		ScanMP3;								// Enable .mp3 metadata extraction by internals
		bool		ScanMPC;								// Enable .mpc,.mpp,.mp+ metadata extraction by internals
		bool		ScanMPEG;								// Enable .mpeg,.mpg metadata extraction by internals
		bool		ScanMSI;								// Enable .msi metadata extraction by internals
		bool		ScanOGG;								// Enable .ogg metadata extraction by internals
		bool		ScanPDF;								// Enable .pdf metadata extraction by internals
		*/
	} Library;

	struct sMediaPlayer
	{
		bool		EnableBuiltInPlay;						// Use the built in VLC media player to play files
		bool		EnableBuiltInPlaylist;					// Use the built in VLC media player playlist
		bool		ShellPlay;								// Open media with the default external media player
		bool		CustomPlayer;							// User has selected a custom media player
		QString		CustomPlayerPath;						// Path to the custom player executable
		QStringList	FileTypes;								// Try to open these file types as media files
		bool		Repeat;									// Is repeat turned on for media files?
		bool		Random;									// Is random turned on for media files?
		int			Zoom;									// The zoom level for video
		int			Aspect;									// Size video is displayed in
		int			Volume;									// Sound volume
		bool		Mute;									// Is sound muted
		bool		ListVisible;							// Is playlist visible
		bool		StatusVisible;							// Display time remaining, etc
		QString		AudioVisualPlugin;						// Path to visual plugin for audio. Null if none is used.
		QStringList	Playlist;								// Save playlist so it can be reopened when closing/opening Panthera
		/*
		QString		MediaServicesCLSID;
		QString		Mpeg1PreviewCLSID;
		QString		Mp3PreviewCLSID;
		QString		AviPreviewCLSID;
		QString		VisWrapperCLSID;
		QString		VisSoniqueCLSID;
		QString		VisCLSID;
		QString		VisPath;
		int			VisSize;
		QString		ServicePath;
		bool		ShortPaths;								// Some players differently handle unicode paths but they can launch files using 8.3 paths
		*/
	} MediaPlayer;

	struct sSearch
	{
		bool		ExpandSearchMatches;					// Expand multi-source search matches
		bool		SwitchOnDownload;						// Switch to transfers view when starting downloads
		bool		HideSearchBar;							// Hide search sidebar when starting search
		bool		HideSearchDetails;						// Hide details view below searches
		int			FilterMask;
		int			ClearPrevious;							// Clear previous search results? 0 - ask user; 1 - no; 2 - yes.
		int			MaxPreviewLength;						// Max size of search previews
		int			SearchThrottle;							// How often each individual search may run. Low values may cause source finding to get overlooked.
		/*
		QString		LastSchemaURI;
		QString		BlankSchemaURI;
		bool		HighlightNew;
		bool		SchemaTypes;
		bool		ShowNames;
		QString		MonitorSchemaURI;
		QString		MonitorFilter;
		int			MonitorQueue;
		int			BrowseTreeSize;
		QString		ShareMonkeyBaseURL;
		bool		SanityCheck;							// Drop hits of banned hosts
		*/
	} Search;

	struct sChat
	{
		QColor		ChatTextColorServerMessages;			// Color for server messages in the chat window
		QColor		ChatTextColorTopics;					// Color for topics in the chat window
		QColor		ChatTextColorRoomActions;				// Color for room actions in the chat window
		QColor		ChatTextColorNotices;					// Color for notices in the chat window
		QColor		ChatTextColorChatBackground;			// Color for the background of the chat window
		QColor		ChatTextColorNormalText;				// Color for normal text in the chat window
		QFont		ChatScreenFont;							// Font for the chat screen
		QString		ChatBackground;							// Path to an image for the background of the chat window
		bool		ShowChat;								// Show the chat tab or not
		bool		ChatConnectOnStartup;					// Connect to the chat server and enter rooms on startup
		bool		ChatShowTimestamp;						// Show timestamps at the beginning of messages
		QString		IrcServerName;							// Web address of the Irc chat server
		QString		IrcServerPort;							// Port to connect to the chat server on
		bool		GnutellaChatEnable;						// Is Gnutella chat enabled with compatible clients?
		bool		EnableChatAllNetworks;					// Is chat allowed over other protocols? (ed2k, etc)
		bool		ChatAdultCensor;						// Censor adlt language from chat. (Uses adult filter)
		bool		AllowFileTransfers;						// Allow file transfers over Irc
		int			AwayMessageIdleTime;					// Time in secs of idle system time before showing away message
	} Chat;

	struct sProfile
	{
		QString		GnutellaScreenName;						// The name displayed in searches, uploads and downloads and when users browse your system
		QString		IrcNickname;							// Nickname used in Irc chat
		QString		IrcAlternateNickname;					// Alternate nickname in Irc chat if first one is already used
		QString		IrcUserName;							// User name for Irc chat
		QString		RealName;								// User's real name
		int			Gender;									// Gender..
		int			Age;									// Age..
		QString		Email;									// EMail address
		QString		MSNPassport;							// Microsoft's Messenger ID
		QString		YahooID;								// Yahoo Messenger ID
		QString		ICQuin;									// Identification number in ICQ
		QString		AolScreenName;							// Aol screen name
		QString		JabberID;								// Jabber ID
		QString		MyspaceProfile;							// Myspace profile excluding http://profile.myspace.com/
		QString		Country;								// Your country..
		QString		City;									// Your city
		QString		Latitude;								// Location for a disgruntled P2P user to aim a missile
		QString		Longitude;								// Location for a disgruntled P2P user to aim a missile
		QStringList	Interests;								// What do you like to do other than use Panthera
		QString		Biography;								// Your life story..
		QString		AvatarPath;								// Path to an avatar image file. Panthera logo used if blank
		QStringList	Favorites;								// Favorite websites
		QString		GUID;									// Unique ID for each client. Can be regenerated
	} Profile;

	struct sConnection
	{
		QString		InAddress;								// Inbound IP address
		int			InPort;									// Incoming port
		bool		RandomPort;								// Select a random incoming port
		bool		InBind;									// Force binding to selected address
		int			InSpeed;								// Inbound internet connection speed in Kilobits/second
		QString		OutAddress;								// Outbound IP address
		int			OutSpeed;								// Outbound internet connection speed in Kilobits/second
		int			TimeoutConnect;							// Time to wait for a connection before dropping the connection
		int			TimeoutHandshake;						// Time to wait on a handshake before dropping a connection
		int			TimeoutTraffic;							// Time to wait for general network communications before dropping a connection
		bool		XPsp2PatchedConnect;					// Connect to one network at a time. Don't download while connecting. (XPsp2)
		int			SendBuffer;								// Size of data send blocks
		int			ConnectThrottle;						// Delay between connection attempts. (Neighbour connections)
		int			FailurePenalty;							// Delay after connection failure (seconds, default = 300) (Neighbour connections)
		int			FailureLimit;							// Max allowed connection failures (default = 3) (Neighbour connections)
		bool		DetectConnectionLoss;					// Detect loss of internet connection
		bool		DetectConnectionReset;					// Detect regaining of internet connection
	} Connection;

	struct sWeb
	{
		bool		BrowserIntegration;						// Use Panthera to manage browser downloads?
		bool		Magnet;									// Use Panthera to open Magnet links (magnet:)
		bool		Foxy;									// Use Panthera to open Foxy links (slightly altered magnet)
		bool		Gnutella;								// Use Panthera to open Gnutella links (gnutella:)
		bool		ED2K;									// Use Panthera to open eDonkey 2k links (eD2k:)
		bool		Piolet;									// Use Panthera to open Piolet links (mp2p:)
		bool		Torrent;								// Use Panthera to open torrent links (.torrent files and torrent:)
		bool		RemoteEnable;							// Enable remote access?
		QString		RemoteUsername;							// Remote access user name
		QString		RemotePassword;							// Remote access password
	} Web;

	struct sTransfers
	{
		int			RatesUnit;								// Units that the transfer rates are to be displayed in
		bool		SimpleProgressBar;						// Displays a simplified progress bar (lower CPU use)
		bool		RequireConnectedNetwork;				// Only upload/download to connected networks
	} Transfers;

	struct sDownloads
	{
		QString		IncompletePath;							// Where incomplete downloads are stored
		QString		CompletePath;							// Where downloads are moved when they complete
		bool		URIPrompt;								// Show prompt before opening URIs
		bool		ExpandDownloads;						// Expand new downloads by default
		int			MaxFiles;								// How many files download at once
		int			MaxTransfers;							// How many total tranfers take place
		int			MaxTransfersPerFile;					// How many transfers are allowed per file
		int			BufferSize;								// Size of download buffer
		int			MaxAllowedFailures;						// Max download failures before dropping a download source
		int			MaxFileSearches;						// Number of files over the download limit that can search for sources for when they start. (Search, etc)
		int			MaxConnectingSources;					// The maximum number of sources that can be in the 'connecting' state. (Important for XPsp2)
		int			MinSources;								// The minimum number of sources a download has before Panthera regards it as having a problem
		int			ConnectThrottle;						// Delay between download attempts. (Very important for routers)
		int			QueueLimit;								// Longest queue to wait in. (0 to disable. This should be >800 or 0 to get good performance from ed2k)
		int			SearchPeriod;							// Time to send out search requests
		int			StarveTimeout;							// How long before Panthera tries drops a connection for a particular file source
		int			StarveGiveUp;							// How long (in hours) before Panthera will give up on a download and try another if it gets no data. (+ 0-9 h, depending on sources)
		int			RetryDelay;								// Time to wait between connection connection attempts to a particular download source
		int			PushTimeout;							// Lower transfer timeout for push sources
		bool		StaggardStart;							// Start file connections at different time intervals instead of all at the same time
		bool		AllowBackwards;							// Permit download to run in reverse when appropriate
		int			ChunkSize;								// Size of download chunks
		int			ChunkStrap;								// Size of first download chunk
		bool		Metadata;								// Download metadata (ID3 tags, etc.)
		bool		VerifyFiles;							// Verify file integrity
		bool		VerifyTiger;							// Verify file integrity using Tiger hash
		bool		VerifyED2K;								// Verify file integrity on eDonkey 2k downloads
		bool		NeverDrop;								// Do not drop bad sources (may pollute source list with many dead sources)
		bool		RequestHash;							// Request unknown hashes from active download sources
		//bool		RequestHTTP11;							// TODO: Find out what unknown variables are for from wiki once I have a decent internet connection again
		//bool		RequestURLENC;
		int			SaveInterval;							// Time between writes to disc of downloads
		//bool		FlushSD;
		bool		ShowSources;							// Display individual download sources in Downloads tree
		bool		ShowPercent;							// Display small green % complete bar on progress graphic
		//bool		ShowGroups;
		bool		AutoClear;								// Automatically clear finished downloads
		int			ClearDelay;								// Time a download should be finished before clearing
		//bool		ShowMonitorURLs;
		bool		SortColumns;							// Allow user to sort downloads by clicking column headers
		bool		SortSources;							// Automatically sort sources (Status, protocol, queue)
		int			SourcesWanted;							// Number of sources Panthera 'wants'. (Will not request more than this number of sources from ed2k)
		int			MaxReviews;								// Maximum number of reviews to store per download
		int			DropFailedSourcesThreshold;		// The number of sources where Panthera start dropping failed sources after only one attempt
		//bool		WebHookEnable;
		//QStringList	WebHookExtensions;
	} Downloads;

	struct sUploads
	{
		bool		SharePartials;							// Share new partial downloads
		int			MaxPerHost;								// Max simultaneous uploads to one remote client
		bool		HubShareLimiting;						// Limit sharing in hub mode
		bool		ShareTiger;								// Share tiger tree hashes
		bool		ShareHashset;							// Share the hashset for a particular file
		bool		ShareMetadata;							// Share metadata (ID3 tags, etc.) for files
		bool		SharePreviews;							// Share previews
		bool		DynamicPreviews;						// Dynamically create previews on request
		int			PreviewQuality;							// Quality of dynamically created previews
		int			PreviewTransfers;						// Max simultaneous uploads of previews
		int			FreeBandwidthValue;						// Amount of bandwidth remaining for uploads
		int			FreeBandwidthFactor;					// Amount of bandwidth allocated for each upload
		int			ClampdownFactor;						// % threshold where additional uploads are denied
		int			ClampdownFloor;							// Floor to base clampdown factor off of
		bool		ThrottleMode;							// Are we throttling upload bandwidth
		//int			QueuePollMin;
		//int			QueuePollMax;
		int			RotateChunkLimit;						// Limit on the size of rotating chunks
		bool		AllowBackwards;							// Allow data to be sent from end of range to begining where supported
		bool		AutoClear;								// Automatically clear completed uploads ('Completed' queue)
		int			ClearDelay;								// Delay between auto-clears
		int			RewardQueuePercentage;					// The percentage of each reward queue reserved for uploaders
	} Uploads;

	struct sSecurity
	{
		bool		AllowSharesBrowse;						// Allow others to browse your shares
		bool		AllowProfileBrowse;						// Allow others to browse your user profile
		bool		FilterAdultSearchResults;				// Filter adult content from searches
		bool		GnutellaChatFilter;						// Filter out chat spam
		bool		ED2kChatFilter;							// Filter known ed2k spam. (pretty bad- always on)
		bool		IrcFloodProtection;						// Automatically ignore users that flood chat rooms with text
		int			IrcFloodLimit;							// Number of messages sent by a user in 5 seconds before ignoring them
		int			SearchSpamFilterThreshold;				// Percentage of spam hits which triggers file sources to be treated as spam
		bool		SearchIgnoreLocalIP;					// Ingnore all 'local' (LAN) IPs
		bool		SearchIgnoreOwnIP;						// Do not accept any ports on your external IP as a source
		int			FirewallState;							// Is a firewall blocking incloming connections?
		bool		EnableUPnP;								// Use UPnP to automatically set up firewalls/routers
		bool		EnableFirewallException;				// Create Firewall exception at startup
		bool		DeleteFirewallException;				// Delete Firewall exception on shutdown
		bool		DeleteUPnPPorts;						// Delete forwarded ports on shutdown (UPnP)
		bool		UPnPSkipWANPPPSetup;					// Skip WANPPPConn1 device setup (UPnP)
		bool		UPnPSkipWANIPSetup;						// Skip WANIPConn1 device setup (UPnP)
		QStringList	BlockedAgentUploadFilter;				// List of bad user agents to block
	} Security;

	struct sGnutella
	{
		//int			ConnectFactor;
		bool		CompressHub2Hub;						// Hub to Hub Link compression
		bool		CompressLeaf2Hub;						// Leaf to Hub Link Compression
		bool		CompressHub2Leaf;						// Hub to Leaf Link Compression
		int			MaxResults;								// Maximum results to return to a single query
		int			MaxHits;								// Max hits allowed for a single query
		int			HitsPerPacket;							// Max hits allowed for a single packet
		int			RouteCache;								// Cache for route to peer
		int			HostCacheSize;							// Size of host cache
		//int			HostCacheView;
		int			ConnectThrottle;						// Delay between connection attempts (seconds)
		bool		SpecifyProtocol;						// Specify G1 or G2 when initiating a connection
	} Gnutella;

	struct sGnutella2
	{
		int			ClientMode;								// Desired mode of operation: MODE_AUTO, MODE_LEAF, MODE_HUB
		bool		HubVerified;							// Verified we are operating as a hub
		bool		EnableToday;							// Enable G2 for this session
		bool		EnableAlways;							// Always connect to G2
		int			NumHubs;								// Number of hubs a leaf has (Leaf to Hub)
		int			NumLeafs;								// Number of leafs a hub has (Hub to Leaf)
		int			NumPeers;								// Number of peers a hub has (Hub to Hub)
		int			PingRelayLimit;							// Number of other leafs to forward a /PI/UDP to: 10 - 30
		int			UdpMTU;									// UDP protocol maximum transmission units
		int			UdpBuffers;								// UDP protocol
		int			UdpInFrames;							// UDP protocol
		int			UdpOutFrames;							// UDP protocol
		int			UdpGlobalThrottle;						// Throttle UDP protocol bandwidth
		int			UdpOutExpire;							// Time before dropping a UDP connection
		int			UdpOutResend;							// Time before resending a UDP protocol packet
		int			UdpInExpire;							// Time before incoming an incloming UDP connection
		//int			LNIPeriod;
		//int			KHLPeriod;
		//int			KHLHubCount;
		//int			HAWPeriod;
		int			HostCurrent;							// Index of current host
		int			HostCount;								// Number of hosts in X-Try-Hubs
		int			HostExpire;								// Inactive time before a host expires
		int			PingRate;								// Time in milliseconds between pings
		int			QueryGlobalThrottle;					// Max G2 query rate (Cannot exceed 8/sec)
		int			QueryHostThrottle;						// Bandwidth throttling for queries
		int			QueryHostDeadline;						// Time before ending queries
		int			RequeryDelay;							// Time before sending another query
		//int			HubHorizonSize;
		int			QueryLimit;								// Maximum amount of concurrent queries
	} Gnutella2;

	struct sGnutella1
	{
		int			ClientMode;								// Desired mode of operation: MODE_AUTO, MODE_LEAF, MODE_ULTRAPEER
		bool		EnableToday;							// Enable G1 for this session
		bool		EnableAlways;							// Always connect to G1
		int			NumHubs;								// Number of ultrapeers a leaf has (Leaf to Ultrapeer)
		int			NumLeafs;								// Number of leafs an ultrapeer has (Ultrapeer to Leaf)
		int			NumPeers;								// Number of peers an ultrapeer has (Ultrapeer to Ultrapper)
		int			PacketBufferSize;						// Size of the packet buffer
		int			PacketBufferTime;
		int			DefaultTTL;								// Default time to live
		int			SearchTTL;								// Search time to live
		int			TranslateTTL;							// Translate time to live
		int			MaximumTTL;								// Maximum time to live
		int			MaximumPacket;
		int			MaximumQuery;
		bool		StrictPackets;
		bool		EnableGGEP;
		bool		VendorMsg;
		int			QueryThrottle;
		int			RequeryDelay;
		int			HostCount;								// Number of hosts in X-Try-Ultrapeers
		int			HostExpire;
		int			PingFlood;
		int			PingRate;
		int			PongCache;
		int			PongCount;
		int			HitQueueLimit;							// Protect G1 clients from badly configured queues
		bool		QueryHitUTF8;							// Use UTF-8 encoding to read Gnutella1 QueryHit packets
		bool		QuerySearchUTF8;						// Use UTF-8 encoding to create Gnutella1 Query packets
		int			MaxHostsInPongs;						// The number of hosts included in the response of pings having SCP GGEP block
		bool		EnableDIPPSupport;						// Handle GDNA host cache exchange
	} Gnutella1;

	struct sAres
	{

	} Ares;

	struct seDonkey2k
	{
		bool		EnableToday;							// Connect to eDonkey 2k for this session
		bool		EnableAlways;							// Always connect to eDonkey 2k
		bool		EnableKadToday;							// Connect to the Kad network for this session
		bool		EnableKadAlways;						// Always connect to the Kad network
		bool		FastConnect;							// Try connecting to 2 servers to get online faster
		bool		ForceHighID;							// Reconnect if low-id. (once only)
		int			NumServers;								// 1
		int			MaxLinks;								// Max ed2k client links
		int			MaxResults;								// Stop searching after this many search results
		bool		LearnNewServers;						// Get new servers from servers
		bool		LearnNewServersClient;					// Get new servers from clients
		int			MaxShareCount;							// Hard limit on file list sent to server
		bool		ServerWalk;								// Enable global UDP walk of servers
		int			StatsGlobalThrottle;					// Global throttle for server UDP stats requests
		int			QueryGlobalThrottle;					// Global throttle for all ed2k searches (TCP, UDP, manual and auto)
		int			StatsServerThrottle;					// Max rate at which an individual server can be asked for stats
		int			QueryServerThrottle;					// Max rate at which an individual server can be queried
		int			QueryFileThrottle;						// Max rate a file can have GetSources done
		int			GetSourcesThrottle;						// Max rate a general GetSources can done
		int			QueueRankThrottle;						// How frequently queue ranks are sent
		int			PacketThrottle;							// ED2K packet rate limiter
		int			SourceThrottle;							// ED2K source rate limiter
		int			MetAutoQuery;							// Auto query for a new server list
		QString		ServerListURL;							// URL address to auto query for a new server list
		int			RequestPipe;
		int			RequestSize;
		int			FrameSize;
		int			ReAskTime;
		int			DequeueTime;
		int			ExtendedRequest;
		bool		SendPortServer;							// Send port in tag to ed2k servers. (not needed for newer servers)
		bool		MagnetSearch;							// Search for magnets over ed2k (lower server load)
		int			MinServerFileSize;						// Minimum size a file in the library must be in order to be included in the server file list. (In KB)
		//int			DefaultServerFlags;						// Default server flags (for UDP searches)
		bool		Endgame;								// Allow endgame mode when completing downloads. (Download same chunk from multiple sources)
		bool		LargeFileSupport;						// Allow 64 bit file sizes
	} eDonkey2k;

	struct sBittorrent
	{
		bool		UseSaveDialog;							// Use torrent save dialog or use default settings
		bool		StartPaused;							// Start torrents in a paused state
		bool		ShowFilesInDownload;					// Display Individual Files In The Download Tree
		bool		UseKademlia;							// Use Kademlia with bittorrent
		QString		TorrentPath;							// Where .torrent files are stored
		QString		DefaultTracker;							// Default tracker to use if trackers listed in torrent are down
		bool		TorrentUseTemp;							// Store incomplete torrent downloads in the temporary folder
		int			DefaultTrackerPeriod;					// Delay between tracker contact attempts if one is not specified by tracker
		int			TorrentCodePage;						// The code page to assume for a .torrent file if it isn't UTF-8
		bool		TorrentExtraKeys;						// Check for '.utf8' keys if there is an encoding error
		int			LinkTimeout;
		int			LinkPing;
		int			RequestPipe;
		int			RequestSize;
		int			RequestLimit;
		int			RandomPeriod;
		int			SourceExchangePeriod;					// Time to exchange sources with new peers
		int			UploadCount;							// Number of active torrent uploads allowed
		int			DownloadConnections;					// Number of active torrent connections allowed
		int			DownloadTorrents;						// Number of torrents to download at once
		bool		Endgame;								// Allow endgame mode when completing torrents. (Download same chunk from multiple sources)
		bool		AutoClear;								// Clear completed torrents when they meet the required share ratio
		int			ClearRatio;								// Share ratio a torrent must reach to be cleared. (Minimum 100%)
		bool		AutoSeed;								// Automatically re-seed most recently completed torrent on start-up
		int			BandwidthPercentage;					// Percentage of bandwidth to use when BT active.
		bool		TrackerKey;								// Send a key (random value) to trackers
		bool		PreferBTSources;						// Prefer downloading from BT sources when appropriate
		int			DhtPruneTime;
		bool		TestPartials;							// Do on integrity check of Bittorrent partials
	} Bittorrent;

	struct sBandwidth
	{
		int			Request;
		int			HubIn;
		int			HubOut;
		int			LeafIn;
		int			LeafOut;
		int			PeerIn;
		int			PeerOut;
		int			UdpOut;
		int			Downloads;								// Inbound speed limit in Bytes/seconds
		int			Uploads;								// Outbound speed limit in Bytes/seconds
		int			HubUploads;
	} Bandwidth;

	struct sDiscovery
	{
		int			AccessThrottle;
		int			Lowpoint;
		int			FailureLimit;
		int			UpdatePeriod;
		int			DefaultUpdate;
		int			BootstrapCount;
		int			CacheCount;								// Limit ability to learn new caches
		bool		EnableG1GWC;
	} Discovery;

	struct sScheduler
	{

	} Scheduler;

	struct sLive
	{
		bool		DiskSpaceWarning;						// Has the user been warned of low disk space?
		bool		DiskWriteWarning;						// Has the user been warned of write problems?
		bool		AdultWarning;							// Has the user been warned about the adult filter?
		bool		QueueLimitWarning;						// Has the user been warned about limiting the max Q position accepted?
		bool		DefaultED2KServersLoaded;				// Has Panthera already loaded default ED2K servers?
		bool		DonkeyServerWarning;					// Has the user been warned about having an empty server list?
		bool		UploadLimitWarning;						// Has the user been warned about the ed2k/BT ratio?
		bool		DiskSpaceStop;							// Has Panthera paused all downloads due to critical disk space?
		int			BandwidthScale;							// Monitor slider settings
		bool		AutoClose;
		QString		LastDuplicateHash;						// Stores the hash of the file about which the warning was shown
		bool		MaliciousWarning;						// Is the warning dialog opened?
	} Live;

	struct sExperimental
	{


	} Experimental;

	struct sWebServices
	{
		QString		BitziAgent;
		QString		BitziWebView;
		QString		BitziWebSubmit;
		QString		BitziXML;
		bool		BitziOkay;
		QString		ShareMonkeyCid;							// Affiliate ID
		bool		ShareMonkeySaveThumbnail;
		bool		ShareMonkeyOkay;
	} WebServices;
};

extern PersistentSettings Settings;

#endif // PERSISTENTSETTINGS_H
