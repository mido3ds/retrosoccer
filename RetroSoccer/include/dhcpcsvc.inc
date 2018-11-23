; ..\X86\DhcpCSvc.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DhcpAcquireParameters PROTO :DWORD
DhcpAcquireParametersByBroadcast PROTO :DWORD
DhcpCApiCleanup PROTO
DhcpCApiInitialize PROTO :DWORD
DhcpClient_Generalize PROTO
DhcpDeRegisterConnectionStateNotification PROTO :DWORD,:DWORD
DhcpDeRegisterOptions PROTO :DWORD
DhcpDeRegisterParamChange PROTO :DWORD,:DWORD,:DWORD
DhcpDelPersistentRequestParams PROTO :DWORD,:DWORD
DhcpEnableDhcp PROTO :DWORD,:DWORD
DhcpEnableTracing PROTO :DWORD
DhcpEnumClasses PROTO :DWORD,:DWORD,:DWORD,:DWORD
DhcpEnumInterfaces PROTO :DWORD
DhcpFallbackRefreshParams PROTO :DWORD
DhcpFreeEnumeratedInterfaces PROTO :DWORD
DhcpFreeLeaseInfo PROTO :DWORD
DhcpFreeLeaseInfoArray PROTO :DWORD,:DWORD
DhcpFreeMem PROTO :DWORD
DhcpGetClassId PROTO :DWORD,:DWORD
DhcpGetClientId PROTO :DWORD,:DWORD
DhcpGetDhcpServicedConnections PROTO :DWORD,:DWORD,:DWORD
DhcpGetFallbackParams PROTO :DWORD,:DWORD
DhcpGetNotificationStatus PROTO :DWORD,:DWORD
DhcpGetOriginalSubnetMask PROTO :DWORD,:DWORD
DhcpGetTraceArray PROTO :DWORD
DhcpHandlePnPEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpIsEnabled PROTO :DWORD,:DWORD
DhcpLeaseIpAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpLeaseIpAddressEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpNotifyConfigChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpNotifyConfigChangeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpNotifyMediaReconnected PROTO :DWORD
DhcpOpenGlobalEvent PROTO
DhcpPersistentRequestParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpQueryLeaseInfo PROTO :DWORD,:DWORD
DhcpQueryLeaseInfoArray PROTO :DWORD,:DWORD,:DWORD
DhcpQueryLeaseInfoEx PROTO :DWORD,:DWORD,:DWORD
DhcpRegisterConnectionStateNotification PROTO :DWORD,:DWORD,:DWORD
DhcpRegisterOptions PROTO :DWORD,:DWORD,:DWORD,:DWORD
DhcpRegisterParamChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpReleaseIpAddressLease PROTO :DWORD,:DWORD
DhcpReleaseIpAddressLeaseEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DhcpReleaseParameters PROTO :DWORD
DhcpRemoveDNSRegistrations PROTO
DhcpRenewIpAddressLease PROTO :DWORD,:DWORD,:DWORD,:DWORD
DhcpRenewIpAddressLeaseEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpRequestCachedParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpRequestOptions PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpRequestParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpSetClassId PROTO :DWORD,:DWORD
DhcpSetClientId PROTO :DWORD,:DWORD
DhcpSetFallbackParams PROTO :DWORD,:DWORD
DhcpSetMSFTVendorSpecificOptions PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DhcpStaticRefreshParams PROTO :DWORD
DhcpUndoRequestParams PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dhcpv4CheckServerAvailability PROTO :DWORD,:DWORD
Dhcpv4EnableDhcpEx PROTO :DWORD
McastApiCleanup PROTO
McastApiStartup PROTO :DWORD
McastEnumerateScopes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
McastGenUID PROTO :DWORD
McastReleaseAddress PROTO :DWORD,:DWORD,:DWORD
McastRenewAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD
McastRequestAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

