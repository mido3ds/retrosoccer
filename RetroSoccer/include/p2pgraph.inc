; ..\X86\p2pgraph.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

PeerGraphAddRecord PROTO :DWORD,:DWORD,:DWORD
PeerGraphClose PROTO :DWORD
PeerGraphCloseDirectConnection PROTO :DWORD,:DWORD,:DWORD
PeerGraphConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphDelete PROTO :DWORD,:DWORD,:DWORD
PeerGraphDeleteRecord PROTO :DWORD,:DWORD,:DWORD
PeerGraphEndEnumeration PROTO :DWORD
PeerGraphEnumConnections PROTO :DWORD,:DWORD,:DWORD
PeerGraphEnumNodes PROTO :DWORD,:DWORD,:DWORD
PeerGraphEnumRecords PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphExportDatabase PROTO :DWORD,:DWORD
PeerGraphFreeData PROTO :DWORD
PeerGraphGetEventData PROTO :DWORD,:DWORD
PeerGraphGetItemCount PROTO :DWORD,:DWORD
PeerGraphGetNextItem PROTO :DWORD,:DWORD,:DWORD
PeerGraphGetNodeInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphGetProperties PROTO :DWORD,:DWORD
PeerGraphGetRecord PROTO :DWORD,:DWORD,:DWORD
PeerGraphGetStatus PROTO :DWORD,:DWORD
PeerGraphImportDatabase PROTO :DWORD,:DWORD
PeerGraphListen PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphOpen PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerGraphOpenDirectConnection PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeerGraphPeerTimeToUniversalTime PROTO :DWORD,:DWORD,:DWORD
PeerGraphRegisterEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerGraphSearchRecords PROTO :DWORD,:DWORD,:DWORD
PeerGraphSendData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeerGraphSetNodeAttributes PROTO :DWORD,:DWORD
PeerGraphSetPresence PROTO :DWORD,:DWORD
PeerGraphSetProperties PROTO :DWORD,:DWORD
PeerGraphShutdown PROTO
PeerGraphStartup PROTO :DWORD,:DWORD
PeerGraphSuspendTimers PROTO :DWORD,:DWORD
PeerGraphUniversalTimeToPeerTime PROTO :DWORD,:DWORD,:DWORD
PeerGraphUnregisterEvent PROTO :DWORD
PeerGraphUpdateRecord PROTO :DWORD,:DWORD
PeerGraphValidateDeferredRecords PROTO :DWORD,:DWORD,:DWORD

