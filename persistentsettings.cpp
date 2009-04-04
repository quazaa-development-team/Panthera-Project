//
// persistentsettings.cpp
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

#include "persistentsettings.h"

PersistentSettings Settings;

PersistentSettings::PersistentSettings()
{
}

void PersistentSettings::saveMainWindowState(QMainWindow *mainWindow)
{
	QSettings m_qSettings("Panthera Project", "Panthera");

	m_qSettings.beginGroup("MainWindow");
	m_qSettings.setValue( "NormalPositionAndSize", mainWindow->normalGeometry() );
	m_qSettings.setValue( "IsMinimized", mainWindow->isMinimized() );
	m_qSettings.setValue( "IsMaximized", mainWindow->isMaximized() );
	m_qSettings.setValue( "IsVisible", mainWindow->isVisible() );

	m_qSettings.sync();
	m_qSettings.endGroup();
}

void PersistentSettings::loadMainWindowState(QMainWindow *mainWindow)
{
	QSettings m_qSettings("Panthera Project", "Panthera");
	QRect m_rWindowSizeAndPosition;

	m_qSettings.beginGroup("MainWindow");
	m_rWindowSizeAndPosition = m_qSettings.value("NormalPositionAndSize", QRect(QPoint(200,200), QSize(535,104))).toRect();
	mainWindow->move( m_rWindowSizeAndPosition.topLeft() );
	mainWindow->resize( m_rWindowSizeAndPosition.size() );
	if (m_qSettings.value("IsMaximized", false).toBool())
		mainWindow->setWindowState(Qt::WindowMaximized);
	if (m_qSettings.value("IsMinimized", false).toBool())
		mainWindow->setWindowState(Qt::WindowMinimized);
	m_qSettings.endGroup();
}

void PersistentSettings::loadSettings(DialogSplash *dlgSplash)
{
	// Load an instance of QSettings
	QSettings m_qSettings("Panthera Project", "Panthera");

	dlgSplash->updateProgress(1, "Loading Basic Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Basic");
	Settings.Basic.FirstRun = m_qSettings.value("FirstRun", true).toBool();
	Settings.Basic.ConnectOnStartup = m_qSettings.value("ConnectOnStartup", true).toBool();
	Settings.Basic.StartWithSystem = m_qSettings.value("StartWithSystem", false).toBool();
	Settings.Basic.Language = m_qSettings.value("Language", "English").toString();
	Settings.Basic.GUIMode = m_qSettings.value("GUIMode", true).toBool();
	Settings.Basic.CloseMode = m_qSettings.value("CloseMode", 0).toInt();
	Settings.Basic.TrayMinimise = m_qSettings.value("TrayMinimise", false).toBool();
	Settings.Basic.UsingSkin = m_qSettings.value("UsingSkin", false).toBool();
	Settings.Basic.SkinFile = m_qSettings.value("SkinFile", "").toString();
	Settings.Basic.TipDelay = m_qSettings.value("Tipdelay", 600).toInt();
	Settings.Basic.TipTransparency = m_qSettings.value("TipTransparency", 255).toInt();
	Settings.Basic.SearchTips = m_qSettings.value("SearchTips", true).toBool();
	Settings.Basic.LibraryTips = m_qSettings.value("LibraryTips", true).toBool();
	Settings.Basic.DownloadsTips = m_qSettings.value("DownloadsTips", true).toBool();
	Settings.Basic.UploadsTips = m_qSettings.value("UploadsTips", true).toBool();
	Settings.Basic.NeighboursTips = m_qSettings.value("NeighboursTips", true).toBool();
	Settings.Basic.MediaTips = m_qSettings.value("MediaTips", true).toBool();
	Settings.Basic.ChatTips = m_qSettings.value("ChatTips", true).toBool();
	Settings.Basic.TipLowResMode = m_qSettings.value("TipLowResMode", true).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(2, "Loading Library Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Library");
	Settings.Library.RememberViews = m_qSettings.value("RememberViews", true).toBool();
	Settings.Library.WatchFolders = m_qSettings.value("WatchFolders", true).toBool();
	Settings.Library.WatchFoldersTimeout = m_qSettings.value("WatchFoldersTimeout", 5).toInt();
	Settings.Library.HighPriorityHashing = m_qSettings.value("HighPriorityHashing", false).toInt();
	Settings.Library.HighPriorityHashingSpeed = m_qSettings.value("HighPriorityHashingSpeed", 20).toBool();
	Settings.Library.LowPriorityHashingSpeed = m_qSettings.value("LowPriorityHashingSpeed", 2).toBool();
	Settings.Library.HashWindow = m_qSettings.value("HashWindow", true).toBool();
	Settings.Library.GhostFiles = m_qSettings.value("GhostFiles", true).toBool();
	Settings.Library.SmartSeriesDetection = m_qSettings.value("SmartSeriesDetection", false).toBool();
	Settings.Library.HistoryTotal = m_qSettings.value("HistoryTotal", 3).toInt();
	Settings.Library.HistoryDays = m_qSettings.value("HistoryDays", 32).toInt();
	Settings.Library.SafeExecuteTypes = m_qSettings.value("SafeExecuteTypes",
														  QStringList() << "3gp" << "7z" << "aac" << "ace" << "ape" << "avi"
														  << "bmp" << "co" << "collection" << "flv" << "gif" << "iso"
														  << "jpg" << "jpeg" << "lit" << "mid" << "mov" << "m1v" << "m2v"
														  << "m3u" << "m4a" << "mkv" << "mp2" << "mp3" << "mp4" << "mpa"
														  << "mpe" << "mpg" << "mpeg" << "ogg" << "ogm" << "pdf" << "png"
														  << "qt" << "rar" << "rm" << "sks" << "tar" << "tgz" << "torrent"
														  << "txt" << "wav" << "zip").toStringList();
	Settings.Library.NeverShareTypes = m_qSettings.value("NeverShareTypes",
														 QStringList() << "vbs" << "js" << "jc!" << "fb!" << "bc!" << "!ut"
														 << "dbx" << "part" << "partial" << "pst" << "reget" << "getright"
														 << "pif" << "lnk" << "sd" << "url" << "wab" << "m4p" << "infodb"
														 << "racestats" << "chk" << "tmp" << "temp" << "ini" << "inf" << "log"
														 << "old" << "manifest" << "met" << "bak" << "$$$" << "---" << "~~~"
														 << "###" << "__incomplete___" << "wma" << "wmv").toStringList();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(3, "Loading Media Player Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("MediaPlayer");
	Settings.MediaPlayer.EnableBuiltInPlay = m_qSettings.value("EnableBuiltInPlay", true).toBool();
	Settings.MediaPlayer.EnableBuiltInPlaylist = m_qSettings.value("EnableBuiltInPlaylist", true).toBool();
	Settings.MediaPlayer.ShellPlay = m_qSettings.value("ShellPlay", false).toBool();
	Settings.MediaPlayer.CustomPlayer = m_qSettings.value("CustomPlayer", false).toBool();
	Settings.MediaPlayer.CustomPlayerPath = m_qSettings.value("CustomPlayerPath", "").toString();
	Settings.MediaPlayer.FileTypes = m_qSettings.value("FileTypes", QStringList() << "asx" << "wax" << "m3u" << "wvx" << "wmx"
													   << "asf" << "wav" << "snd" << "au" << "aif" << "aifc" << "aiff" << "mp3"
													   << "cda" << "mid" << "rmi" << "midi" << "avi" << "mpeg" << "mpg"
													   << "m1v" << "mp2" << "mpa" << "mpe").toStringList();
	Settings.MediaPlayer.Repeat = m_qSettings.value("Repeat", false).toBool();
	Settings.MediaPlayer.Random = m_qSettings.value("Random", false).toBool();
	Settings.MediaPlayer.Zoom = m_qSettings.value("Zoom", 0).toInt();
	Settings.MediaPlayer.Aspect = m_qSettings.value("Aspect", 0).toInt();
	Settings.MediaPlayer.Volume = m_qSettings.value("Volume", 100).toInt();
	Settings.MediaPlayer.Mute = m_qSettings.value("Mute", false).toBool();
	Settings.MediaPlayer.ListVisible = m_qSettings.value("ListVisible", true).toBool();
	Settings.MediaPlayer.StatusVisible = m_qSettings.value("StatusVisible", true).toBool();
	Settings.MediaPlayer.AudioVisualPlugin = m_qSettings.value("AudioVisualPlugin", "").toString();
	Settings.MediaPlayer.Playlist = m_qSettings.value("Playlist", QStringList()).toStringList();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(4, "Loading Search Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Search");
	Settings.Search.ExpandSearchMatches = m_qSettings.value("ExpandSearchMatches", false).toBool();
	Settings.Search.SwitchOnDownload = m_qSettings.value("SwitchOnDownload", true).toBool();
	Settings.Search.HideSearchBar = m_qSettings.value("HideSearchBar", false).toBool();
	Settings.Search.HideSearchDetails = m_qSettings.value("HideSearchDetails", false).toBool();
	Settings.Search.FilterMask = m_qSettings.value("FilterMask", 360).toInt();
	Settings.Search.ClearPrevious = m_qSettings.value("ClearPrevious", 0).toInt();
	Settings.Search.MaxPreviewLength = m_qSettings.value("MaxPreviewLength", 20480).toInt();
	Settings.Search.SearchThrottle = m_qSettings.value("SearchThrottle", 200).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(5, "Loading Chat Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Chat");
	Settings.Chat.ChatTextColorServerMessages = m_qSettings.value("ChatTextColorServerMessages", QColor(qRgb(0,0,255))).value<QColor>();
	Settings.Chat.ChatTextColorTopics = m_qSettings.value("ChatTextColorTopics", QColor(qRgb(170,85,127))).value<QColor>();
	Settings.Chat.ChatTextColorRoomActions = m_qSettings.value("ChatTextColorRoomActions", QColor(qRgb(0,170,0))).value<QColor>();
	Settings.Chat.ChatTextColorNotices = m_qSettings.value("ChatTextColorNotices", QColor(qRgb(255,0,0))).value<QColor>();
	Settings.Chat.ChatTextColorChatBackground = m_qSettings.value("ChatTextColorChatBackground", QColor(qRgb(255,255,255))).value<QColor>();
	Settings.Chat.ChatTextColorNormalText = m_qSettings.value("ChatTextColorNormalText", QColor(qRgb(0,0,0))).value<QColor>();
	Settings.Chat.ChatScreenFont = m_qSettings.value("ChatScreenFont", QFont()).value<QFont>();
	Settings.Chat.ChatBackground = m_qSettings.value("ChatBackground", "").toString();
	Settings.Chat.ShowChat = m_qSettings.value("ShowChat", true).toBool();
	Settings.Chat.ChatConnectOnStartup = m_qSettings.value("ChatConnectOnStartup", false).toBool();
	Settings.Chat.ChatShowTimestamp = m_qSettings.value("ChatShowTimestamp", false).toBool();
	Settings.Chat.IrcServerName = m_qSettings.value("IrcServerName", "irc.p2pchat.net").toString();
	Settings.Chat.IrcServerPort = m_qSettings.value("IrcServerPort", "6667").toString();
	Settings.Chat.GnutellaChatEnable = m_qSettings.value("GnutellaChatEnable", true).toBool();
	Settings.Chat.EnableChatAllNetworks = m_qSettings.value("EnableChatAllNetworks", true).toBool();
	Settings.Chat.ChatAdultCensor = m_qSettings.value("ChatAdultCensor", true).toBool();
	Settings.Chat.AllowFileTransfers = m_qSettings.value("AllowFileTransfers", true).toBool();
	Settings.Chat.AwayMessageIdleTime = m_qSettings.value("AwayMessageIdleTime", 30).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(6, "Loading Profile...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Profile");
	Settings.Profile.GnutellaScreenName = m_qSettings.value("GnutellaScreenName", "Panthera User").toString();
	Settings.Profile.IrcNickname = m_qSettings.value("IrcNickname", "Panthera User").toString();
	Settings.Profile.IrcAlternateNickname = m_qSettings.value("IrcAlternateNickname", "").toString();
	Settings.Profile.IrcUserName = m_qSettings.value("IrcUserName", "PantheraUser").toString();
	Settings.Profile.RealName = m_qSettings.value("RealName", "").toString();
	Settings.Profile.Gender = m_qSettings.value("Gender", 0).toInt();
	Settings.Profile.Age = m_qSettings.value("Age", 18).toInt();
	Settings.Profile.Email = m_qSettings.value("Email", "").toString();
	Settings.Profile.MSNPassport = m_qSettings.value("MSNPassport", "").toString();
	Settings.Profile.YahooID = m_qSettings.value("YahooID", "").toString();
	Settings.Profile.ICQuin = m_qSettings.value("ICQuin", "").toString();
	Settings.Profile.AolScreenName = m_qSettings.value("AolScreenName", "").toString();
	Settings.Profile.JabberID = m_qSettings.value("JabberID", "").toString();
	Settings.Profile.MyspaceProfile = m_qSettings.value("MyspaceProfile", "").toString();
	Settings.Profile.Country = m_qSettings.value("Country", "").toString();
	Settings.Profile.City = m_qSettings.value("City", "").toString();
	Settings.Profile.Latitude = m_qSettings.value("Latitude", "").toString();
	Settings.Profile.Longitude = m_qSettings.value("Longitude", "").toString();
	Settings.Profile.Interests = m_qSettings.value("Interests", QStringList()).toStringList();
	Settings.Profile.Biography = m_qSettings.value("Biography", "").toString();
	Settings.Profile.AvatarPath = m_qSettings.value("AvatarPath", "").toString();
	Settings.Profile.Favorites = m_qSettings.value("Favorites", QStringList()).toStringList();
	Settings.Profile.GUID = m_qSettings.value("GUID", QUuid::createUuid().toString()).toString();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(7, "Loading Connection Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Connection");
	Settings.Connection.InAddress = m_qSettings.value("InAddress", "").toString();
	Settings.Connection.InPort = m_qSettings.value("InPort", 0).toInt();
	Settings.Connection.RandomPort = m_qSettings.value("RandomPort", false).toBool();
	Settings.Connection.InBind = m_qSettings.value("InBind", false).toBool();
	Settings.Connection.InSpeed = m_qSettings.value("InSpeed", 2048).toInt();
	Settings.Connection.OutAddress = m_qSettings.value("OutAddress", "").toString();
	Settings.Connection.OutSpeed = m_qSettings.value("OutSpeed", 256).toInt();
	Settings.Connection.TimeoutConnect = m_qSettings.value("TimeoutConnect", 16).toInt();
	Settings.Connection.TimeoutHandshake = m_qSettings.value("TimeoutHandshake", 45).toInt();
	Settings.Connection.TimeoutTraffic = m_qSettings.value("TimeoutTraffic", 140).toInt();
	Settings.Connection.XPsp2PatchedConnect = m_qSettings.value("XPsp2PatchedConnect", false).toBool();
	Settings.Connection.SendBuffer = m_qSettings.value("SendBuffer", 2048).toInt();
	Settings.Connection.ConnectThrottle = m_qSettings.value("ConnectThrottle", 250).toInt();
	Settings.Connection.FailurePenalty = m_qSettings.value("FailurePenalty", 300).toInt();
	Settings.Connection.FailureLimit = m_qSettings.value("FailureLimit", 3).toInt();
	Settings.Connection.DetectConnectionLoss = m_qSettings.value("DetectConnectionLoss", true).toBool();
	Settings.Connection.DetectConnectionReset = m_qSettings.value("DetectConnectionReset", false).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(8, "Loading Web Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Web");
	Settings.Web.BrowserIntegration = m_qSettings.value("BrowserIntegration", false).toBool();
	Settings.Web.Magnet = m_qSettings.value("Magnet", true).toBool();
	Settings.Web.Foxy = m_qSettings.value("Foxy", true).toBool();
	Settings.Web.Gnutella = m_qSettings.value("Gnutella", true).toBool();
	Settings.Web.ED2K = m_qSettings.value("ED2K", true).toBool();
	Settings.Web.Piolet = m_qSettings.value("Piolet", true).toBool();
	Settings.Web.Torrent = m_qSettings.value("Torrent", true).toBool();
	Settings.Web.RemoteEnable = m_qSettings.value("RemoteEnable", false).toBool();
	Settings.Web.RemoteUsername = m_qSettings.value("RemoteUsername", "").toString();
	Settings.Web.RemotePassword = m_qSettings.value("RemotePassword", "").toString();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(9, "Loading Transfer Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Transfers");
	Settings.Transfers.RatesUnit = m_qSettings.value("RatesUnit", 1).toInt();
	Settings.Transfers.SimpleProgressBar = m_qSettings.value("SimpleProgressBar", false).toBool();
	Settings.Transfers.RequireConnectedNetwork = m_qSettings.value("RequireConnectedNetwork", true).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(10, "Loading Download Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Downloads");
	Settings.Downloads.IncompletePath = m_qSettings.value("IncompletePath", "").toString();
	Settings.Downloads.CompletePath = m_qSettings.value("CompletePath", "").toString();
	Settings.Downloads.URIPrompt = m_qSettings.value("URIPrompt", true).toBool();
	Settings.Downloads.ExpandDownloads = m_qSettings.value("ExpandDownloads", false).toBool();
	Settings.Downloads.MaxFiles = m_qSettings.value("MaxFiles", 26).toInt();
	Settings.Downloads.MaxTransfers = m_qSettings.value("MaxTransfers", 100).toInt();
	Settings.Downloads.MaxTransfersPerFile = m_qSettings.value("MaxTransfersPerFile", 10).toInt();
	Settings.Downloads.BufferSize = m_qSettings.value("BufferSize", 81920).toInt();
	Settings.Downloads.MaxAllowedFailures = m_qSettings.value("MaxAllowedFailures", 10).toInt();
	Settings.Downloads.MaxFileSearches = m_qSettings.value("MaxFileSearches", 2).toInt();
	Settings.Downloads.MaxConnectingSources = m_qSettings.value("MaxConnectingSources", 8).toInt();
	Settings.Downloads.MinSources = m_qSettings.value("MinSources", 1).toInt();
	Settings.Downloads.ConnectThrottle = m_qSettings.value("ConnectThrottle", 800).toInt();
	Settings.Downloads.QueueLimit = m_qSettings.value("QueueLimit", 0).toInt();
	Settings.Downloads.SearchPeriod = m_qSettings.value("SearchPeriod", 120000).toInt();
	Settings.Downloads.StarveTimeout = m_qSettings.value("StarveTimeout", 2700).toInt();
	Settings.Downloads.StarveGiveUp = m_qSettings.value("StarveGiveUp", 3).toInt();
	Settings.Downloads.RetryDelay = m_qSettings.value("RetryDelay", 600000).toInt();
	Settings.Downloads.PushTimeout = m_qSettings.value("PushTimeout", 45000).toInt();
	Settings.Downloads.StaggardStart = m_qSettings.value("StaggardStart", false).toBool();
	Settings.Downloads.AllowBackwards = m_qSettings.value("AllowBackwards", true).toBool();
	Settings.Downloads.ChunkSize = m_qSettings.value("ChunkSize", 524288).toInt();
	Settings.Downloads.ChunkStrap = m_qSettings.value("ChunkStrap", 131072).toInt();
	Settings.Downloads.Metadata = m_qSettings.value("Metadata", true).toBool();
	Settings.Downloads.VerifyFiles = m_qSettings.value("VerifyFiles", true).toBool();
	Settings.Downloads.VerifyTiger = m_qSettings.value("VerifyTiger", true).toBool();
	Settings.Downloads.VerifyED2K = m_qSettings.value("VerifyED2K", true).toBool();
	Settings.Downloads.NeverDrop = m_qSettings.value("NeverDrop", false).toBool();
	Settings.Downloads.RequestHash = m_qSettings.value("RequestHash", true).toBool();
	Settings.Downloads.SaveInterval = m_qSettings.value("SaveInterval", 60000).toInt();
	Settings.Downloads.ShowSources = m_qSettings.value("ShowSources", false).toBool();
	Settings.Downloads.ShowPercent = m_qSettings.value("ShowPercent", false).toBool();
	Settings.Downloads.AutoClear = m_qSettings.value("AutoClear", false).toBool();
	Settings.Downloads.ClearDelay = m_qSettings.value("ClearDelay", 30000).toInt();
	Settings.Downloads.SortColumns = m_qSettings.value("SortColumns", true).toBool();
	Settings.Downloads.SortSources = m_qSettings.value("SortSources", true).toBool();
	Settings.Downloads.SourcesWanted = m_qSettings.value("SourcesWanted", 500).toInt();
	Settings.Downloads.MaxReviews = m_qSettings.value("MaxReviews", 64).toInt();
	Settings.Downloads.DropFailedSourcesThreshold = m_qSettings.value("DropFailedSourcesThreshold", 20).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(11, "Loading Upload Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Uploads");
	Settings.Uploads.SharePartials = m_qSettings.value("SharePartials", true).toBool();
	Settings.Uploads.MaxPerHost = m_qSettings.value("MaxPerHost", 2).toInt();
	Settings.Uploads.HubShareLimiting = m_qSettings.value("HubShareLimiting", true).toBool();
	Settings.Uploads.ShareTiger = m_qSettings.value("ShareTiger", true).toBool();
	Settings.Uploads.ShareHashset = m_qSettings.value("ShareHashset", true).toBool();
	Settings.Uploads.ShareMetadata = m_qSettings.value("ShareMetadata", true).toBool();
	Settings.Uploads.SharePreviews = m_qSettings.value("SharePreviews", true).toBool();
	Settings.Uploads.DynamicPreviews = m_qSettings.value("DynamicPreviews", true).toBool();
	Settings.Uploads.PreviewQuality = m_qSettings.value("PreviewQuality", 70).toInt();
	Settings.Uploads.PreviewTransfers = m_qSettings.value("PreviewTransfers", 3).toInt();
	Settings.Uploads.FreeBandwidthValue = m_qSettings.value("FreeBandwidthValue", 20).toInt();
	Settings.Uploads.FreeBandwidthFactor = m_qSettings.value("FreeBandwidthFactor", 15).toInt();
	Settings.Uploads.ClampdownFactor = m_qSettings.value("ClampdownFactor", 20).toInt();
	Settings.Uploads.ClampdownFloor = m_qSettings.value("SharePartials", 8).toInt();
	Settings.Uploads.ThrottleMode = m_qSettings.value("ThrottleMode", true).toBool();
	Settings.Uploads.RotateChunkLimit = m_qSettings.value("RotateChunkLimit", 1024).toInt();
	Settings.Uploads.AllowBackwards = m_qSettings.value("AllowBackwards", true).toBool();
	Settings.Uploads.AutoClear = m_qSettings.value("AutoClear", false).toBool();
	Settings.Uploads.ClearDelay = m_qSettings.value("ClearDelay", 30).toInt();
	Settings.Uploads.RewardQueuePercentage = m_qSettings.value("RewardQueuePercentage", 10).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(12, "Loading Security Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Security");
	Settings.Security.AllowSharesBrowse = m_qSettings.value("AllowSharesBrowse", true).toBool();
	Settings.Security.AllowProfileBrowse = m_qSettings.value("AllowProfileBrowse", true).toBool();
	Settings.Security.FilterAdultSearchResults = m_qSettings.value("FilterAdultSearchResults", true).toBool();
	Settings.Security.GnutellaChatFilter = m_qSettings.value("GnutellaChatFilter", true).toBool();
	Settings.Security.ED2kChatFilter = m_qSettings.value("ED2kChatFilter", true).toBool();
	Settings.Security.IrcFloodProtection = m_qSettings.value("IrcFloodProtection", true).toBool();
	Settings.Security.IrcFloodLimit = m_qSettings.value("IrcFloodLimit", 24).toInt();
	Settings.Security.SearchSpamFilterThreshold = m_qSettings.value("SearchSpamFilterThreshold", 20).toInt();
	Settings.Security.SearchIgnoreLocalIP = m_qSettings.value("SearchIgnoreLocalIP", true).toBool();
	Settings.Security.SearchIgnoreOwnIP = m_qSettings.value("SearchIgnoreOwnIP", true).toBool();
	Settings.Security.FirewallState = m_qSettings.value("FirewallState", 0).toInt();
	Settings.Security.EnableUPnP = m_qSettings.value("EnableUPnP", true).toBool();
	Settings.Security.EnableFirewallException = m_qSettings.value("EnableFirewallException", true).toBool();
	Settings.Security.DeleteFirewallException = m_qSettings.value("DeleteFirewallException", true).toBool();
	Settings.Security.DeleteUPnPPorts = m_qSettings.value("DeleteUPnPPorts", true).toBool();
	Settings.Security.UPnPSkipWANPPPSetup = m_qSettings.value("UPnPSkipWANPPPSetup", false).toBool();
	Settings.Security.UPnPSkipWANIPSetup = m_qSettings.value("UPnPSkipWANIPSetup", false).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(13, "Loading Gnutella Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Gnutella");
	Settings.Gnutella.CompressHub2Hub = m_qSettings.value("CompressHub2Hub", true).toBool();
	Settings.Gnutella.CompressLeaf2Hub = m_qSettings.value("CompressLeaf2Hub", false).toBool();
	Settings.Gnutella.CompressHub2Leaf = m_qSettings.value("CompressHub2Leaf", true).toBool();
	Settings.Gnutella.MaxResults = m_qSettings.value("MaxResults", 150).toInt();
	Settings.Gnutella.MaxHits = m_qSettings.value("MaxHits", 64).toInt();
	Settings.Gnutella.HitsPerPacket = m_qSettings.value("HitsPerPacket", 64).toInt();
	Settings.Gnutella.RouteCache = m_qSettings.value("RouteCache", 10).toInt();
	Settings.Gnutella.HostCacheSize = m_qSettings.value("HostCacheSize", 1024).toInt();
	Settings.Gnutella.ConnectThrottle = m_qSettings.value("ConnectThrottle", 120).toInt();
	Settings.Gnutella.SpecifyProtocol = m_qSettings.value("SpecifyProtocol", true).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(14, "Loading Gnutella 2 Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Gnutella2");
	Settings.Gnutella2.ClientMode = m_qSettings.value("ClientMode", 0).toInt();
	Settings.Gnutella2.HubVerified = m_qSettings.value("HubVerified", false).toBool();
	Settings.Gnutella2.EnableToday = m_qSettings.value("EnableToday", true).toBool();
	Settings.Gnutella2.EnableAlways = m_qSettings.value("EnableAlways", true).toBool();
	Settings.Gnutella2.NumHubs = m_qSettings.value("NumHubs", 2).toInt();
	Settings.Gnutella2.NumLeafs = m_qSettings.value("NumLeafs", 300).toInt();
	Settings.Gnutella2.NumPeers = m_qSettings.value("NumPeers", 6).toInt();
	Settings.Gnutella2.PingRelayLimit = m_qSettings.value("PingRelayLimit", 10).toInt();
	Settings.Gnutella2.UdpMTU = m_qSettings.value("UdpMTU", 500).toInt();
	Settings.Gnutella2.UdpBuffers = m_qSettings.value("UdpBuffers", 512).toInt();
	Settings.Gnutella2.UdpInFrames = m_qSettings.value("UdpInFrames", 256).toInt();
	Settings.Gnutella2.UdpOutFrames = m_qSettings.value("UdpOutFrames", 256).toInt();
	Settings.Gnutella2.UdpGlobalThrottle = m_qSettings.value("UdpGlobalThrottle", 1).toInt();
	Settings.Gnutella2.UdpOutExpire = m_qSettings.value("UdpOutExpire", 26000).toInt();
	Settings.Gnutella2.UdpOutResend = m_qSettings.value("UdpOutResend", 6000).toInt();
	Settings.Gnutella2.UdpInExpire = m_qSettings.value("UdpInExpire", 30000).toInt();
	Settings.Gnutella2.HostCurrent = m_qSettings.value("HostCurrent", 600).toInt();
	Settings.Gnutella2.HostCount = m_qSettings.value("HostCount", 15).toInt();
	Settings.Gnutella2.HostExpire = m_qSettings.value("HostExpire", 172800).toInt();
	Settings.Gnutella2.PingRate = m_qSettings.value("PingRate", 15000).toInt();
	Settings.Gnutella2.QueryGlobalThrottle = m_qSettings.value("QueryGlobalThrottle", 125).toInt();
	Settings.Gnutella2.QueryHostThrottle = m_qSettings.value("QueryHostThrottle", 120).toInt();
	Settings.Gnutella2.QueryHostDeadline = m_qSettings.value("QueryHostDeadline", 600).toInt();
	Settings.Gnutella2.RequeryDelay = m_qSettings.value("RequeryDelay", 14400).toInt();
	Settings.Gnutella2.QueryLimit = m_qSettings.value("QueryLimit", 2400).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(15, "Loading Gnutella 1 Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Gnutella1");
	Settings.Gnutella1.ClientMode = m_qSettings.value("ClientMode", 1).toInt();
	Settings.Gnutella1.EnableToday = m_qSettings.value("EnableToday", false).toBool();
	Settings.Gnutella1.EnableAlways = m_qSettings.value("EnableAlways", false).toBool();
	Settings.Gnutella1.NumHubs = m_qSettings.value("NumHubs", 3).toInt();
	Settings.Gnutella1.NumLeafs = m_qSettings.value("NumLeafs", 50).toInt();
	Settings.Gnutella1.NumPeers = m_qSettings.value("NumPeers", 32).toInt();
	Settings.Gnutella1.PacketBufferSize = m_qSettings.value("PacketBufferSize", 64).toInt();
	Settings.Gnutella1.PacketBufferTime = m_qSettings.value("PacketBufferTime", 60).toInt();
	Settings.Gnutella1.DefaultTTL = m_qSettings.value("DefaultTTL", 3).toInt();
	Settings.Gnutella1.SearchTTL = m_qSettings.value("SearchTTL", 3).toInt();
	Settings.Gnutella1.TranslateTTL = m_qSettings.value("TranslateTTL", 2).toInt();
	Settings.Gnutella1.MaximumTTL = m_qSettings.value("MaximumTTL", 10).toInt();
	Settings.Gnutella1.MaximumPacket = m_qSettings.value("MaximumPacket", 65535).toInt();
	Settings.Gnutella1.MaximumQuery = m_qSettings.value("MaximumQuery", 256).toInt();
	Settings.Gnutella1.StrictPackets = m_qSettings.value("StrictPackets", false).toBool();
	Settings.Gnutella1.EnableGGEP = m_qSettings.value("EnableGGEP", true).toBool();
	Settings.Gnutella1.VendorMsg = m_qSettings.value("VendorMsg", true).toBool();
	Settings.Gnutella1.QueryThrottle = m_qSettings.value("QueryThrottle", 30).toInt();
	Settings.Gnutella1.RequeryDelay = m_qSettings.value("RequeryDelay", 30).toInt();
	Settings.Gnutella1.HostCount = m_qSettings.value("HostCount", 15).toInt();
	Settings.Gnutella1.HostExpire = m_qSettings.value("HostExpire", 10).toInt();
	Settings.Gnutella1.PingFlood = m_qSettings.value("PingFlood", 0).toInt();
	Settings.Gnutella1.PingRate = m_qSettings.value("PingRate", 15).toInt();
	Settings.Gnutella1.PongCache = m_qSettings.value("PongCache", 1).toInt();
	Settings.Gnutella1.PongCount = m_qSettings.value("PongCount", 1).toInt();
	Settings.Gnutella1.HitQueueLimit = m_qSettings.value("HitQueueLimit", 50).toInt();
	Settings.Gnutella1.QueryHitUTF8 = m_qSettings.value("QueryHitUTF8", true).toBool();
	Settings.Gnutella1.QuerySearchUTF8 = m_qSettings.value("QuerySearchUTF8", true).toBool();
	Settings.Gnutella1.MaxHostsInPongs = m_qSettings.value("MaxHostsInPongs", 10).toInt();
	Settings.Gnutella1.EnableDIPPSupport = m_qSettings.value("EnableDIPPSupport", true).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(16, "Loading Ares Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Ares");

	m_qSettings.endGroup();

	dlgSplash->updateProgress(17, "Loading eDonkey 2k Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("eDonkey2k");
	Settings.eDonkey2k.EnableToday = m_qSettings.value("EnableToday", false).toBool();
	Settings.eDonkey2k.EnableAlways = m_qSettings.value("EnableAlways", false).toBool();
	Settings.eDonkey2k.EnableKadToday = m_qSettings.value("EnableKadToday", false).toBool();
	Settings.eDonkey2k.EnableKadAlways = m_qSettings.value("EnableKadAlways", false).toBool();
	Settings.eDonkey2k.FastConnect = m_qSettings.value("FastConnect", false).toBool();
	Settings.eDonkey2k.ForceHighID = m_qSettings.value("ForceHighID", true).toBool();
	Settings.eDonkey2k.NumServers = m_qSettings.value("NumServers", 1).toInt();
	Settings.eDonkey2k.MaxLinks = m_qSettings.value("MaxLinks", 35).toInt();
	Settings.eDonkey2k.MaxResults = m_qSettings.value("MaxResults", 100).toInt();
	Settings.eDonkey2k.LearnNewServers = m_qSettings.value("LearnNewServers", false).toBool();
	Settings.eDonkey2k.LearnNewServersClient = m_qSettings.value("LearnNewServersClient", false).toBool();
	Settings.eDonkey2k.MaxShareCount = m_qSettings.value("MaxShareCount", 1000).toInt();
	Settings.eDonkey2k.ServerWalk = m_qSettings.value("ServerWalk", true).toBool();
	Settings.eDonkey2k.StatsGlobalThrottle = m_qSettings.value("StatsGlobalThrottle", 30).toInt();
	Settings.eDonkey2k.QueryGlobalThrottle = m_qSettings.value("QueryGlobalThrottle", 1000).toInt();
	Settings.eDonkey2k.StatsServerThrottle = m_qSettings.value("StatsServerThrottle", 7).toInt();
	Settings.eDonkey2k.QueryServerThrottle = m_qSettings.value("QueryServerThrottle", 120).toInt();
	Settings.eDonkey2k.QueryFileThrottle = m_qSettings.value("QueryFileThrottle", 60).toInt();
	Settings.eDonkey2k.GetSourcesThrottle = m_qSettings.value("GetSourcesThrottle", 8).toInt();
	Settings.eDonkey2k.QueueRankThrottle = m_qSettings.value("QueueRankThrottle", 120).toInt();
	Settings.eDonkey2k.PacketThrottle = m_qSettings.value("PacketThrottle", 500).toInt();
	Settings.eDonkey2k.SourceThrottle = m_qSettings.value("SourceThrottle", 1000).toInt();
	Settings.eDonkey2k.MetAutoQuery = m_qSettings.value("MetAutoQuery", 1).toInt();
	Settings.eDonkey2k.ServerListURL = m_qSettings.value("ServerListURL", "http://ocbmaurice.dyndns.org/pl/slist.pl/server.met?download/server-best.met").toString();
	Settings.eDonkey2k.RequestPipe = m_qSettings.value("RequestPipe", 3).toInt();
	Settings.eDonkey2k.RequestSize = m_qSettings.value("RequestSize", 90).toInt();
	Settings.eDonkey2k.FrameSize = m_qSettings.value("FrameSize", 10).toInt();
	Settings.eDonkey2k.ReAskTime = m_qSettings.value("ReAskTime", 29).toInt();
	Settings.eDonkey2k.DequeueTime = m_qSettings.value("DequeueTime", 60).toInt();
	Settings.eDonkey2k.ExtendedRequest = m_qSettings.value("ExtendedRequest", 2).toInt();
	Settings.eDonkey2k.SendPortServer = m_qSettings.value("SendPortServer", false).toBool();
	Settings.eDonkey2k.MagnetSearch = m_qSettings.value("MagnetSearch", true).toBool();
	Settings.eDonkey2k.MinServerFileSize = m_qSettings.value("MinServerFileSize", 0).toInt();
	Settings.eDonkey2k.Endgame = m_qSettings.value("Endgame", true).toBool();
	Settings.eDonkey2k.LargeFileSupport = m_qSettings.value("LargeFileSupport", false).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(18, "Loading Bittorrent Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Bittorrent");
	Settings.Bittorrent.UseSaveDialog = m_qSettings.value("UseSaveDialog", false).toBool();
	Settings.Bittorrent.StartPaused = m_qSettings.value("StartPaused", false).toBool();
	Settings.Bittorrent.ShowFilesInDownload = m_qSettings.value("ShowFilesInDownload", true).toBool();
	Settings.Bittorrent.UseKademlia = m_qSettings.value("UseKademlia", true).toBool();
	Settings.Bittorrent.TorrentPath = m_qSettings.value("TorrentPath", "").toString();
	Settings.Bittorrent.DefaultTracker = m_qSettings.value("DefaultTracker", "").toString();
	Settings.Bittorrent.TorrentUseTemp = m_qSettings.value("TorrentUseTemp", false).toBool();
	Settings.Bittorrent.DefaultTrackerPeriod = m_qSettings.value("DefaultTrackerPeriod", 5).toInt();
	Settings.Bittorrent.TorrentCodePage = m_qSettings.value("TorrentCodePage", 0).toInt();
	Settings.Bittorrent.TorrentExtraKeys = m_qSettings.value("TorrentExtraKeys", true).toBool();
	Settings.Bittorrent.LinkTimeout = m_qSettings.value("LinkTimeout", 180).toInt();
	Settings.Bittorrent.LinkPing = m_qSettings.value("LinkPing", 120).toInt();
	Settings.Bittorrent.RequestPipe = m_qSettings.value("RequestPipe", 4).toInt();
	Settings.Bittorrent.RequestSize = m_qSettings.value("RequestSize", 16).toInt();
	Settings.Bittorrent.RequestLimit = m_qSettings.value("RequestLimit", 128).toInt();
	Settings.Bittorrent.RandomPeriod = m_qSettings.value("RandomPeriod", 30).toInt();
	Settings.Bittorrent.SourceExchangePeriod = m_qSettings.value("SourceExchangePeriod", 10).toInt();
	Settings.Bittorrent.UploadCount = m_qSettings.value("UploadCount", 4).toInt();
	Settings.Bittorrent.DownloadConnections = m_qSettings.value("DownloadConnections", 40).toInt();
	Settings.Bittorrent.DownloadTorrents = m_qSettings.value("DownloadTorrents", 4).toInt();
	Settings.Bittorrent.Endgame = m_qSettings.value("Endgame", true).toBool();
	Settings.Bittorrent.AutoClear = m_qSettings.value("AutoClear", false).toBool();
	Settings.Bittorrent.ClearRatio = m_qSettings.value("ClearRatio", 120).toInt();
	Settings.Bittorrent.AutoSeed = m_qSettings.value("AutoSeed", true).toBool();
	Settings.Bittorrent.BandwidthPercentage = m_qSettings.value("BandwidthPercentage", 80).toInt();
	Settings.Bittorrent.TrackerKey = m_qSettings.value("TrackerKey", true).toBool();
	Settings.Bittorrent.PreferBTSources = m_qSettings.value("PreferBTSources", true).toBool();
	Settings.Bittorrent.DhtPruneTime = m_qSettings.value("DhtPruneTime", 30).toInt();
	Settings.Bittorrent.TestPartials = m_qSettings.value("TestPartials", true).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(19, "Loading Bandwidth Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Bandwidth");
	Settings.Bandwidth.Request = m_qSettings.value("Request", 32).toInt();
	Settings.Bandwidth.HubIn = m_qSettings.value("HubIn", 0).toInt();
	Settings.Bandwidth.HubOut = m_qSettings.value("HubOut", 0).toInt();
	Settings.Bandwidth.LeafIn = m_qSettings.value("LeafIn", 0).toInt();
	Settings.Bandwidth.LeafOut = m_qSettings.value("LeafOut", 0).toInt();
	Settings.Bandwidth.PeerIn = m_qSettings.value("PeerIn", 0).toInt();
	Settings.Bandwidth.PeerOut = m_qSettings.value("PeerOut", 0).toInt();
	Settings.Bandwidth.UdpOut = m_qSettings.value("UdpOut", 0).toInt();
	Settings.Bandwidth.Downloads = m_qSettings.value("Downloads", 0).toInt();
	Settings.Bandwidth.Uploads = m_qSettings.value("Uploads", 0).toInt();
	Settings.Bandwidth.HubUploads = m_qSettings.value("HubUploads", 40).toInt();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(20, "Loading Discovery Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Discovery");
	Settings.Discovery.AccessThrottle = m_qSettings.value("AccessThrottle", 60).toInt();
	Settings.Discovery.Lowpoint = m_qSettings.value("Lowpoint", 10).toInt();
	Settings.Discovery.FailureLimit = m_qSettings.value("FailureLimit", 2).toInt();
	Settings.Discovery.UpdatePeriod = m_qSettings.value("UpdatePeriod", 30).toInt();
	Settings.Discovery.DefaultUpdate = m_qSettings.value("DefaultUpdate", 60).toInt();
	Settings.Discovery.BootstrapCount = m_qSettings.value("BootstrapCount", 10).toInt();
	Settings.Discovery.CacheCount = m_qSettings.value("CacheCount", 50).toInt();
	Settings.Discovery.EnableG1GWC = m_qSettings.value("EnableG1GWC", false).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(21, "Loading Sceduler Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Scheduler");

	m_qSettings.endGroup();

	dlgSplash->updateProgress(22, "Loading Live Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("Live");
	Settings.Live.DiskSpaceWarning = m_qSettings.value("DiskSpaceWarning", false).toBool();
	Settings.Live.DiskWriteWarning = m_qSettings.value("DiskWriteWarning", false).toBool();
	Settings.Live.AdultWarning = m_qSettings.value("AdultWarning", false).toBool();
	Settings.Live.QueueLimitWarning = m_qSettings.value("QueueLimitWarning", false).toBool();
	Settings.Live.DefaultED2KServersLoaded = m_qSettings.value("DefaultED2KServersLoaded", false).toBool();
	Settings.Live.DonkeyServerWarning = m_qSettings.value("DonkeyServerWarning", false).toBool();
	Settings.Live.UploadLimitWarning = m_qSettings.value("UploadLimitWarning", false).toBool();
	Settings.Live.DiskSpaceStop = m_qSettings.value("DiskSpaceStop", false).toBool();
	Settings.Live.BandwidthScale = m_qSettings.value("BandwidthScale", 100).toInt();
	Settings.Live.AutoClose = m_qSettings.value("AutoClose", false).toBool();
	Settings.Live.LastDuplicateHash = m_qSettings.value("LastDuplicateHash", "").toString();
	Settings.Live.MaliciousWarning = m_qSettings.value("MaliciousWarning", false).toBool();
	m_qSettings.endGroup();

	dlgSplash->updateProgress(23, "Loading Web Services Settings...");
	QApplication::processEvents();
	m_qSettings.beginGroup("WebServices");
	Settings.WebServices.BitziAgent = m_qSettings.value("BitziAgent", ".").toString();
	Settings.WebServices.BitziWebView = m_qSettings.value("BitziWebView", "http://bitzi.com/lookup/(URN)?v=detail&ref=shareaza").toString();
	Settings.WebServices.BitziWebSubmit = m_qSettings.value("BitziWebSubmit", "http://bitzi.com/lookup/(SHA1).(TTH)?fl=(SIZE)&ff=(FIRST20)&fn=(NAME)&tag.ed2k.ed2khash=(ED2K)&(INFO)&a=(AGENT)&v=Q0.4&ref=panthera").toString();
	Settings.WebServices.BitziXML = m_qSettings.value("BitziXML", "http://ticket.bitzi.com/rdf/(SHA1).(TTH)").toString();
	Settings.WebServices.BitziOkay = m_qSettings.value("BitziOkay", false).toBool();
	Settings.WebServices.ShareMonkeyCid = m_qSettings.value("ShareMonkeyCid", "197506").toString();
	Settings.WebServices.ShareMonkeySaveThumbnail = m_qSettings.value("ShareMonkeySaveThumbnail", false).toBool();
	Settings.WebServices.ShareMonkeyOkay = m_qSettings.value("ShareMonkeyOkay", false).toBool();
	m_qSettings.endGroup();
	return;
}

void PersistentSettings::saveSettings()
{

}

void PersistentSettings::saveProfile()
{
	QSettings m_qSettings("Panthera Project", "Panthera");

	m_qSettings.beginGroup("Profile");
	m_qSettings.setValue("GnutellaScreenName", Settings.Profile.GnutellaScreenName);
	fcvvm_qSettings.value("IrcNickname", Settings.Profile.IrcNickname);
	m_qSettings.value("IrcAlternateNickname", Settings.Profile.IrcAlternateNickname);
	m_qSettings.value("IrcUserName", Settings.Profile.IrcUserName);
	m_qSettings.value("RealName", Settings.Profile.RealName);
	m_qSettings.value("Gender", Settings.Profile.Gender);
	m_qSettings.value("Age", Settings.Profile.Age);
	m_qSettings.value("Email", Settings.Profile.Email);
	m_qSettings.value("MSNPassport", Settings.Profile.MSNPassport);
	m_qSettings.value("YahooID", Settings.Profile.YahooID);
	m_qSettings.value("ICQuin", Settings.Profile.ICQuin);
	m_qSettings.value("AolScreenName", Settings.Profile.AolScreenName);
	m_qSettings.value("JabberID", Settings.Profile.JabberID);
	m_qSettings.value("MyspaceProfile", Settings.Profile.MyspaceProfile);
	m_qSettings.value("Country", Settings.Profile.Country);
	m_qSettings.value("City", Settings.Profile.City);
	m_qSettings.value("Latitude", Settings.Profile.Latitude);
	m_qSettings.value("Longitude", Settings.Profile.Longitude);
	m_qSettings.value("Interests", Settings.Profile.Interests);
	m_qSettings.value("Biography", Settings.Profile.Biography);
	m_qSettings.value("AvatarPath", Settings.Profile.AvatarPath);
	m_qSettings.value("Favorites", Settings.Profile.Favorites);
	m_qSettings.value("GUID", Settings.Profile.GUID);
	m_qSettings.endGroup();
}
