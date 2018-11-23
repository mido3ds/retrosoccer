; ..\X86\WtsApi32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WTSCloseServer PROTO :DWORD
WTSConnectSessionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WTSConnectSession equ <WTSConnectSessionA>

WTSCreateListenerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSCreateListener equ <WTSCreateListenerA>

WTSDisconnectSession PROTO :DWORD,:DWORD,:DWORD
WTSEnableChildSessions PROTO :DWORD
WTSEnumerateListenersA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateListeners equ <WTSEnumerateListenersA>

WTSEnumerateProcessesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateProcesses equ <WTSEnumerateProcessesA>

WTSEnumerateProcessesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateProcessesEx equ <WTSEnumerateProcessesExA>

WTSEnumerateServersA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateServers equ <WTSEnumerateServersA>

WTSEnumerateSessionsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateSessions equ <WTSEnumerateSessionsA>

WTSEnumerateSessionsExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSEnumerateSessionsEx equ <WTSEnumerateSessionsExA>

WTSFreeMemory PROTO :DWORD
WTSFreeMemoryExA PROTO :DWORD,:DWORD,:DWORD
WTSFreeMemoryEx equ <WTSFreeMemoryExA>

WTSGetChildSessionId PROTO :DWORD
WTSGetListenerSecurityA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSGetListenerSecurity equ <WTSGetListenerSecurityA>

WTSIsChildSessionsEnabled PROTO :DWORD
WTSLogoffSession PROTO :DWORD,:DWORD,:DWORD
WTSOpenServerA PROTO :DWORD
WTSOpenServer equ <WTSOpenServerA>

WTSOpenServerExA PROTO :DWORD
WTSOpenServerEx equ <WTSOpenServerExA>

WTSQueryListenerConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSQueryListenerConfig equ <WTSQueryListenerConfigA>

WTSQuerySessionInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSQuerySessionInformation equ <WTSQuerySessionInformationA>

WTSQueryUserConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSQueryUserConfig equ <WTSQueryUserConfigA>

WTSQueryUserToken PROTO :DWORD,:DWORD
WTSRegisterSessionNotification PROTO :DWORD,:DWORD
WTSRegisterSessionNotificationEx PROTO :DWORD,:DWORD,:DWORD
WTSSendMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSSendMessage equ <WTSSendMessageA>

WTSSetListenerSecurityA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSSetListenerSecurity equ <WTSSetListenerSecurityA>

WTSSetRenderHint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSSetSessionInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSSetSessionInformation equ <WTSSetSessionInformationA>

WTSSetUserConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSSetUserConfig equ <WTSSetUserConfigA>

WTSShutdownSystem PROTO :DWORD,:DWORD
WTSStartRemoteControlSessionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WTSStartRemoteControlSession equ <WTSStartRemoteControlSessionA>

WTSStopRemoteControlSession PROTO :DWORD
WTSTerminateProcess PROTO :DWORD,:DWORD,:DWORD
WTSUnRegisterSessionNotification PROTO :DWORD
WTSUnRegisterSessionNotificationEx PROTO :DWORD,:DWORD
WTSVirtualChannelClose PROTO :DWORD
WTSVirtualChannelOpen PROTO :DWORD,:DWORD,:DWORD
WTSVirtualChannelOpenEx PROTO :DWORD,:DWORD,:DWORD
WTSVirtualChannelPurgeInput PROTO :DWORD
WTSVirtualChannelPurgeOutput PROTO :DWORD
WTSVirtualChannelQuery PROTO :DWORD,:DWORD,:DWORD,:DWORD
WTSVirtualChannelRead PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WTSVirtualChannelWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD
WTSWaitSystemEvent PROTO :DWORD,:DWORD,:DWORD

