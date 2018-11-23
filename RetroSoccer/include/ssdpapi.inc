; ..\X86\ssdpapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BeginRegisterPropChangeNotificationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CleanupCache PROTO
DHSetICSInterfaces PROTO :DWORD,:DWORD
DHSetICSOff PROTO
DeregisterNotification PROTO :DWORD
DeregisterService PROTO :DWORD,:DWORD
DisableFirewallRule PROTO :DWORD
EnableFirewallRule PROTO :DWORD,:DWORD,:DWORD,:DWORD
EndRegisterPropChangeNotificationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
FindServices PROTO :DWORD,:DWORD,:DWORD
FindServicesCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindServicesCallbackEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindServicesCancel PROTO :DWORD
FindServicesClose PROTO :DWORD
FindServicesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
FindServicesOnNetworkCallbackEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FreeSsdpMessage PROTO :DWORD
FreeSsdpMessageEx PROTO :DWORD
GetFirstService PROTO :DWORD,:DWORD
GetFirstServiceEx PROTO :DWORD,:DWORD
GetNextService PROTO :DWORD,:DWORD
GetNextServiceEx PROTO :DWORD,:DWORD
RegisterAliveNotificationOnNetworkEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterNotificationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterService PROTO :DWORD,:DWORD
RegisterServiceEx PROTO :DWORD,:DWORD
SsdpCleanup PROTO
SsdpStartup PROTO

