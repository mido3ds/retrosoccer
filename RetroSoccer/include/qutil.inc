; ..\X86\qutil.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

AllocConnections PROTO :DWORD,:DWORD
AllocCountedString PROTO :DWORD,:DWORD
AllocFixupInfo PROTO :DWORD,:DWORD
FreeConnections PROTO :DWORD
FreeCountedString PROTO :DWORD
FreeFixupInfo PROTO :DWORD
FreeIsolationInfo PROTO :DWORD
FreeIsolationInfoEx PROTO :DWORD
FreeNapComponentRegistrationInfoArray PROTO :DWORD,:DWORD
FreeNetworkSoH PROTO :DWORD
FreePrivateData PROTO :DWORD
FreeSoH PROTO :DWORD
FreeSoHAttributeValue PROTO :DWORD,:DWORD
FreeSystemHealthAgentState PROTO :DWORD
InitializeNapAgentNotifier PROTO :DWORD,:DWORD
UninitializeNapAgentNotifier PROTO :DWORD

