; ..\X86\wdstptc.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WdsTransportClientAddRefBuffer PROTO :DWORD
WdsTransportClientCancelSession PROTO :DWORD
WdsTransportClientCancelSessionEx PROTO :DWORD,:DWORD
WdsTransportClientCloseSession PROTO :DWORD
WdsTransportClientCompleteReceive PROTO :DWORD,:DWORD,:DWORD
WdsTransportClientInitialize PROTO
WdsTransportClientInitializeSession PROTO :DWORD,:DWORD,:DWORD
WdsTransportClientQueryStatus PROTO :DWORD,:DWORD,:DWORD
WdsTransportClientRegisterCallback PROTO :DWORD,:DWORD,:DWORD
WdsTransportClientReleaseBuffer PROTO :DWORD
WdsTransportClientShutdown PROTO
WdsTransportClientStartSession PROTO :DWORD
WdsTransportClientWaitForCompletion PROTO :DWORD,:DWORD

