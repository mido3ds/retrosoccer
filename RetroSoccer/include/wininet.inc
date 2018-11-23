; ..\X86\WinInet.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AppCacheCheckManifest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AppCacheCloseHandle PROTO :DWORD
AppCacheDeleteGroup PROTO :DWORD
AppCacheDeleteIEGroup PROTO :DWORD
AppCacheDuplicateHandle PROTO :DWORD,:DWORD
AppCacheFinalize PROTO :DWORD,:DWORD,:DWORD,:DWORD
AppCacheFreeDownloadList PROTO :DWORD
AppCacheFreeGroupList PROTO :DWORD
AppCacheFreeIESpace PROTO :DWORD,:DWORD
AppCacheFreeSpace PROTO :DWORD,:DWORD
AppCacheGetDownloadList PROTO :DWORD,:DWORD
AppCacheGetFallbackUrl PROTO :DWORD,:DWORD,:DWORD
AppCacheGetGroupList PROTO :DWORD
AppCacheGetIEGroupList PROTO :DWORD
AppCacheGetInfo PROTO :DWORD,:DWORD
AppCacheGetManifestUrl PROTO :DWORD,:DWORD
AppCacheLookup PROTO :DWORD,:DWORD,:DWORD
CommitUrlCacheEntryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CommitUrlCacheEntry equ <CommitUrlCacheEntryA>

CommitUrlCacheEntryBinaryBlob PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateCacheServerRpcBinding PROTO :DWORD,:DWORD
CreateMD5SSOHash PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateUrlCacheContainerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateUrlCacheContainer equ <CreateUrlCacheContainerA>

CreateUrlCacheEntryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateUrlCacheEntry equ <CreateUrlCacheEntryA>

CreateUrlCacheGroup PROTO :DWORD,:DWORD
DeleteIE3Cache PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeleteUrlCacheContainerA PROTO :DWORD,:DWORD
DeleteUrlCacheContainer equ <DeleteUrlCacheContainerA>

DeleteUrlCacheEntryA PROTO :DWORD
DeleteUrlCacheEntry equ <DeleteUrlCacheEntryA>

DeleteUrlCacheGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeleteWpadCacheForNetworks PROTO :DWORD
DetectAutoProxyUrl PROTO :DWORD,:DWORD,:DWORD
DoConnectoidsExist PROTO
ExportCookieFileA PROTO :DWORD,:DWORD
ExportCookieFile equ <ExportCookieFileA>

FindCloseUrlCache PROTO :DWORD
FindFirstUrlCacheContainerA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FindFirstUrlCacheContainer equ <FindFirstUrlCacheContainerA>

FindFirstUrlCacheEntryA PROTO :DWORD,:DWORD,:DWORD
FindFirstUrlCacheEntry equ <FindFirstUrlCacheEntryA>

FindFirstUrlCacheEntryExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindFirstUrlCacheEntryEx equ <FindFirstUrlCacheEntryExA>

FindFirstUrlCacheGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNextUrlCacheContainerA PROTO :DWORD,:DWORD,:DWORD
FindNextUrlCacheContainer equ <FindNextUrlCacheContainerA>

FindNextUrlCacheEntryA PROTO :DWORD,:DWORD,:DWORD
FindNextUrlCacheEntry equ <FindNextUrlCacheEntryA>

FindNextUrlCacheEntryExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNextUrlCacheEntryEx equ <FindNextUrlCacheEntryExA>

FindNextUrlCacheGroup PROTO :DWORD,:DWORD,:DWORD
FindP3PPolicySymbol PROTO :DWORD
ForceNexusLookup PROTO
FreeP3PObject PROTO :DWORD
FreeUrlCacheSpaceA PROTO :DWORD,:DWORD,:DWORD
FreeUrlCacheSpace equ <FreeUrlCacheSpaceA>

FtpCommandA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpCommand equ <FtpCommandA>

FtpCreateDirectoryA PROTO :DWORD,:DWORD
FtpCreateDirectory equ <FtpCreateDirectoryA>

FtpDeleteFileA PROTO :DWORD,:DWORD
FtpDeleteFile equ <FtpDeleteFileA>

FtpFindFirstFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpFindFirstFile equ <FtpFindFirstFileA>

FtpGetCurrentDirectoryA PROTO :DWORD,:DWORD,:DWORD
FtpGetCurrentDirectory equ <FtpGetCurrentDirectoryA>

FtpGetFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpGetFile equ <FtpGetFileA>

FtpGetFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpGetFileSize PROTO :DWORD,:DWORD
FtpOpenFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpOpenFile equ <FtpOpenFileA>

FtpPutFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpPutFile equ <FtpPutFileA>

FtpPutFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FtpRemoveDirectoryA PROTO :DWORD,:DWORD
FtpRemoveDirectory equ <FtpRemoveDirectoryA>

FtpRenameFileA PROTO :DWORD,:DWORD,:DWORD
FtpRenameFile equ <FtpRenameFileA>

FtpSetCurrentDirectoryA PROTO :DWORD,:DWORD
FtpSetCurrentDirectory equ <FtpSetCurrentDirectoryA>

GetCacheServerConnection PROTO :DWORD
GetDiskInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetDiskInfo equ <GetDiskInfoA>

GetP3PPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetP3PRequestStatus PROTO :DWORD
GetUrlCacheConfigInfoA PROTO :DWORD,:DWORD,:DWORD
GetUrlCacheConfigInfo equ <GetUrlCacheConfigInfoA>

GetUrlCacheEntryBinaryBlob PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetUrlCacheEntryInfoA PROTO :DWORD,:DWORD,:DWORD
GetUrlCacheEntryInfo equ <GetUrlCacheEntryInfoA>

GetUrlCacheEntryInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetUrlCacheEntryInfoEx equ <GetUrlCacheEntryInfoExA>

GetUrlCacheGroupAttributeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetUrlCacheGroupAttribute equ <GetUrlCacheGroupAttributeA>

GetUrlCacheHeaderData PROTO :DWORD,:DWORD
GopherCreateLocatorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GopherCreateLocator equ <GopherCreateLocatorA>

GopherFindFirstFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GopherFindFirstFile equ <GopherFindFirstFileA>

GopherGetAttributeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GopherGetAttribute equ <GopherGetAttributeA>

GopherGetLocatorTypeA PROTO :DWORD,:DWORD
GopherGetLocatorType equ <GopherGetLocatorTypeA>

GopherOpenFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GopherOpenFile equ <GopherOpenFileA>

HttpAddRequestHeadersA PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpAddRequestHeaders equ <HttpAddRequestHeadersA>

HttpCheckDavComplianceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpCheckDavCompliance equ <HttpCheckDavComplianceA>

HttpCloseDependencyHandle PROTO :DWORD
HttpDuplicateDependencyHandle PROTO :DWORD,:DWORD
HttpEndRequestA PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpEndRequest equ <HttpEndRequestA>

HttpGetServerCredentials PROTO :DWORD,:DWORD,:DWORD
HttpGetTunnelSocket PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpOpenDependencyHandle PROTO :DWORD,:DWORD,:DWORD
HttpOpenRequestA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpOpenRequest equ <HttpOpenRequestA>

HttpPushClose PROTO :DWORD
HttpPushEnable PROTO :DWORD,:DWORD,:DWORD
HttpPushWait PROTO :DWORD,:DWORD,:DWORD
HttpQueryInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpQueryInfo equ <HttpQueryInfoA>

HttpSendRequestA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSendRequest equ <HttpSendRequestA>

HttpSendRequestExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSendRequestEx equ <HttpSendRequestExA>

HttpWebSocketClose PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpWebSocketCompleteUpgrade PROTO :DWORD,:DWORD
HttpWebSocketQueryCloseStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpWebSocketReceive PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpWebSocketSend PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpWebSocketShutdown PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImportCookieFileA PROTO :DWORD
ImportCookieFile equ <ImportCookieFileA>

IncrementUrlCacheHeaderData PROTO :DWORD,:DWORD
InternalInternetGetCookie PROTO :DWORD,:DWORD,:DWORD
InternetAlgIdToStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetAlgIdToString equ <InternetAlgIdToStringA>

InternetAttemptConnect PROTO :DWORD
InternetAutoProxyGetProxyForUrl PROTO :DWORD,:DWORD
InternetAutoProxyOnSendRequestComplete PROTO :DWORD,:DWORD,:DWORD
InternetAutodial PROTO :DWORD,:DWORD
InternetAutodialCallback PROTO :DWORD,:DWORD
InternetAutodialHangup PROTO :DWORD
InternetCanonicalizeUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetCanonicalizeUrl equ <InternetCanonicalizeUrlA>

InternetCheckConnectionA PROTO :DWORD,:DWORD,:DWORD
InternetCheckConnection equ <InternetCheckConnectionA>

InternetClearAllPerSiteCookieDecisions PROTO
InternetCloseHandle PROTO :DWORD
InternetCombineUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetCombineUrl equ <InternetCombineUrlA>

InternetConfirmZoneCrossingA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetConfirmZoneCrossing equ <InternetConfirmZoneCrossingA>

InternetConnectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetConnect equ <InternetConnectA>

InternetCrackUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetCrackUrl equ <InternetCrackUrlA>

InternetCreateUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetCreateUrl equ <InternetCreateUrlA>

InternetDialA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetDial equ <InternetDialA>

InternetEnumPerSiteCookieDecisionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetEnumPerSiteCookieDecision equ <InternetEnumPerSiteCookieDecisionA>

InternetErrorDlg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetFindNextFileA PROTO :DWORD,:DWORD
InternetFindNextFile equ <InternetFindNextFileA>

InternetFortezzaCommand PROTO :DWORD,:DWORD,:DWORD
InternetFreeCookies PROTO :DWORD,:DWORD
InternetFreeProxyInfoList PROTO :DWORD
InternetGetCertByURLA PROTO :DWORD,:DWORD,:DWORD
InternetGetCertByURL equ <InternetGetCertByURLA>

InternetGetConnectedState PROTO :DWORD,:DWORD
InternetGetConnectedStateExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetGetConnectedStateEx equ <InternetGetConnectedStateExA>

InternetGetCookieA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetGetCookie equ <InternetGetCookieA>

InternetGetCookieEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetGetCookieExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetGetCookieEx equ <InternetGetCookieExA>

InternetGetLastResponseInfoA PROTO :DWORD,:DWORD,:DWORD
InternetGetLastResponseInfo equ <InternetGetLastResponseInfoA>

InternetGetPerSiteCookieDecisionA PROTO :DWORD,:DWORD
InternetGetPerSiteCookieDecision equ <InternetGetPerSiteCookieDecisionA>

InternetGetProxyForUrl PROTO :DWORD,:DWORD,:DWORD
InternetGetSecurityInfoByURLA PROTO :DWORD,:DWORD,:DWORD
InternetGetSecurityInfoByURL equ <InternetGetSecurityInfoByURLA>

InternetGoOnlineA PROTO :DWORD,:DWORD,:DWORD
InternetGoOnline equ <InternetGoOnlineA>

InternetHangUp PROTO :DWORD,:DWORD
InternetInitializeAutoProxyDll PROTO :DWORD
InternetLockRequestFile PROTO :DWORD,:DWORD
InternetOpenA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetOpen equ <InternetOpenA>

InternetOpenUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetOpenUrl equ <InternetOpenUrlA>

InternetQueryDataAvailable PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetQueryFortezzaStatus PROTO :DWORD,:DWORD
InternetQueryOptionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetQueryOption equ <InternetQueryOptionA>

InternetReadFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetReadFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetReadFileEx equ <InternetReadFileExA>

InternetSecurityProtocolToStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetSecurityProtocolToString equ <InternetSecurityProtocolToStringA>

InternetSetCookieA PROTO :DWORD,:DWORD,:DWORD
InternetSetCookie equ <InternetSetCookieA>

InternetSetCookieEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetSetCookieExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetSetCookieEx equ <InternetSetCookieExA>

InternetSetDialStateA PROTO :DWORD,:DWORD,:DWORD
InternetSetDialState equ <InternetSetDialStateA>

InternetSetFilePointer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetSetOptionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetSetOption equ <InternetSetOptionA>

InternetSetOptionExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternetSetOptionEx equ <InternetSetOptionExA>

InternetSetPerSiteCookieDecisionA PROTO :DWORD,:DWORD
InternetSetPerSiteCookieDecision equ <InternetSetPerSiteCookieDecisionA>

InternetSetStatusCallbackA PROTO :DWORD,:DWORD
InternetSetStatusCallback equ <InternetSetStatusCallbackA>

InternetShowSecurityInfoByURLA PROTO :DWORD,:DWORD
InternetShowSecurityInfoByURL equ <InternetShowSecurityInfoByURLA>

InternetTimeFromSystemTimeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetTimeFromSystemTime equ <InternetTimeFromSystemTimeA>

InternetTimeToSystemTimeA PROTO :DWORD,:DWORD,:DWORD
InternetTimeToSystemTime equ <InternetTimeToSystemTimeA>

InternetUnlockRequestFile PROTO :DWORD
InternetWriteFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetWriteFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternetWriteFileEx equ <InternetWriteFileExA>

IsDialUpConnection PROTO :DWORD
IsDomainLegalCookieDomainA PROTO :DWORD,:DWORD
IsDomainLegalCookieDomain equ <IsDomainLegalCookieDomainA>

IsHostInProxyBypassList PROTO :DWORD,:DWORD,:DWORD
IsLanConnection PROTO :DWORD
IsProfilesEnabled PROTO
IsUrlCacheEntryExpiredA PROTO :DWORD,:DWORD,:DWORD
IsUrlCacheEntryExpired equ <IsUrlCacheEntryExpiredA>

LoadUrlCacheContent PROTO
MapResourceToPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
ParseX509EncodedCertificateForListBoxEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerformOperationOverUrlCacheA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerformOperationOverUrlCache equ <PerformOperationOverUrlCacheA>

ReadGuidsForConnectedNetworks PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadUrlCacheEntryStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadUrlCacheEntryStreamEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterForNetworkChangeNotification PROTO :DWORD,:DWORD,:DWORD
RegisterUrlCacheNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ResumeSuspendedDownload PROTO :DWORD,:DWORD
RetrieveUrlCacheEntryFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RetrieveUrlCacheEntryFile equ <RetrieveUrlCacheEntryFileA>

RetrieveUrlCacheEntryStreamA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RetrieveUrlCacheEntryStream equ <RetrieveUrlCacheEntryStreamA>

RunOnceUrlCache PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetGlobalJetParameters PROTO
SetUrlCacheConfigInfoA PROTO :DWORD,:DWORD
SetUrlCacheConfigInfo equ <SetUrlCacheConfigInfoA>

SetUrlCacheEntryGroupA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetUrlCacheEntryGroup equ <SetUrlCacheEntryGroupA>

SetUrlCacheEntryInfoA PROTO :DWORD,:DWORD,:DWORD
SetUrlCacheEntryInfo equ <SetUrlCacheEntryInfoA>

SetUrlCacheGroupAttributeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetUrlCacheGroupAttribute equ <SetUrlCacheGroupAttributeA>

SetUrlCacheHeaderData PROTO :DWORD,:DWORD
ShowCertificate PROTO :DWORD,:DWORD
ShowClientAuthCerts PROTO :DWORD
ShowSecurityInfo PROTO :DWORD,:DWORD
ShowX509EncodedCertificate PROTO :DWORD,:DWORD,:DWORD
UnRegisterNetworkChangeNotification PROTO :DWORD
UnlockUrlCacheEntryFileA PROTO :DWORD,:DWORD
UnlockUrlCacheEntryFile equ <UnlockUrlCacheEntryFileA>

UnlockUrlCacheEntryStream PROTO :DWORD,:DWORD
UpdateUrlCacheContentPath PROTO :DWORD
UrlCacheCheckEntriesExist PROTO :DWORD,:DWORD,:DWORD
UrlCacheCloseEntryHandle PROTO :DWORD
UrlCacheContainerSetEntryMaximumAge PROTO :DWORD,:DWORD
UrlCacheCreateContainer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCacheFindFirstEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCacheFindNextEntry PROTO :DWORD,:DWORD
UrlCacheFreeEntryInfo PROTO :DWORD
UrlCacheGetContentPaths PROTO :DWORD,:DWORD
UrlCacheGetEntryInfo PROTO :DWORD,:DWORD,:DWORD
UrlCacheGetGlobalLimit PROTO :DWORD,:DWORD
UrlCacheReadEntryStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCacheReloadSettings PROTO
UrlCacheRetrieveEntryFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlCacheRetrieveEntryStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCacheSetGlobalLimit PROTO :DWORD,:DWORD,:DWORD
UrlCacheUpdateEntryExtraData PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlZonesDetach PROTO

