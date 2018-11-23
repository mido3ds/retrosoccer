; ..\X86\ndfapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

NdfCancelIncident PROTO :DWORD
NdfCloseIncident PROTO :DWORD
NdfCreateConnectivityIncident PROTO :DWORD
NdfCreateDNSIncident PROTO :DWORD,:DWORD,:DWORD
NdfCreateGroupingIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfCreateInboundIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfCreateIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdfCreateNetConnectionIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfCreatePnrpIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfCreateSharingIncident PROTO :DWORD,:DWORD
NdfCreateWebIncident PROTO :DWORD,:DWORD
NdfCreateWebIncidentEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdfCreateWinSockIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfDiagnoseIncident PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdfExecuteDiagnosis PROTO :DWORD,:DWORD
NdfGetTraceFile PROTO :DWORD,:DWORD
NdfRepairIncident PROTO :DWORD,:DWORD,:DWORD
NdfRepairIncidentEx PROTO :DWORD,:DWORD,:DWORD,:DWORD

