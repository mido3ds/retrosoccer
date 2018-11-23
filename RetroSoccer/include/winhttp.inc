; ..\X86\winhttp.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SvchostPushServiceGlobals PROTO :DWORD
WinHttpAddRequestHeaders PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpAutoProxySvcMain PROTO :DWORD,:DWORD
WinHttpCheckPlatform PROTO
WinHttpCloseHandle PROTO :DWORD
WinHttpConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpCrackUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpCreateProxyResolver PROTO :DWORD,:DWORD
WinHttpCreateUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpDetectAutoProxyConfigUrl PROTO :DWORD,:DWORD
WinHttpFreeProxyResult PROTO :DWORD
WinHttpGetDefaultProxyConfiguration PROTO :DWORD
WinHttpGetIEProxyConfigForCurrentUser PROTO :DWORD
WinHttpGetProxyForUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpGetProxyForUrlEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpGetProxyResult PROTO :DWORD,:DWORD
WinHttpOpen PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpOpenRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpProbeConnectivity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryAuthSchemes PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryDataAvailable PROTO :DWORD,:DWORD
WinHttpQueryHeaders PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpReadData PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpReceiveResponse PROTO :DWORD,:DWORD
WinHttpResetAutoProxy PROTO :DWORD,:DWORD
WinHttpSaveProxyCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSendRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetDefaultProxyConfiguration PROTO :DWORD
WinHttpSetOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetStatusCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetTimeouts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpTimeFromSystemTime PROTO :DWORD,:DWORD
WinHttpTimeToSystemTime PROTO :DWORD,:DWORD
WinHttpWebSocketClose PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketCompleteUpgrade PROTO :DWORD,:DWORD
WinHttpWebSocketQueryCloseStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketReceive PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketSend PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketShutdown PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWriteData PROTO :DWORD,:DWORD,:DWORD,:DWORD

