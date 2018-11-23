; ..\X86\PeerDist.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

PeerDistClientAddContentInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientAddData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientBlockRead PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientCancelAsyncOperation PROTO :DWORD,:DWORD,:DWORD
PeerDistClientCloseContent PROTO :DWORD,:DWORD
PeerDistClientCompleteContentInformation PROTO :DWORD,:DWORD,:DWORD
PeerDistClientFlushContent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientGetInformationByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientOpenContent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistClientStreamRead PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistGetOverlappedResult PROTO :DWORD,:DWORD,:DWORD
PeerDistGetStatus PROTO :DWORD,:DWORD
PeerDistGetStatusEx PROTO :DWORD,:DWORD
PeerDistRegisterForStatusChangeNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistRegisterForStatusChangeNotificationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerCancelAsyncOperation PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerCloseContentInformation PROTO :DWORD,:DWORD
PeerDistServerCloseStreamHandle PROTO :DWORD,:DWORD
PeerDistServerOpenContentInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerOpenContentInformationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerPublishAddToStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerPublishCompleteStream PROTO :DWORD,:DWORD,:DWORD
PeerDistServerPublishStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerRetrieveContentInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerDistServerUnpublish PROTO :DWORD,:DWORD,:DWORD
PeerDistShutdown PROTO :DWORD
PeerDistStartup PROTO :DWORD,:DWORD,:DWORD
PeerDistUnregisterForStatusChangeNotification PROTO :DWORD

