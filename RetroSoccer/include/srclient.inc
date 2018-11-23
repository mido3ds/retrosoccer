; ..\X86\SrClient.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DisableSR PROTO :DWORD
DisableSRInternal PROTO :DWORD,:DWORD
EnableSR PROTO :DWORD
EnableSREx PROTO :DWORD,:DWORD
EnableSRInternal PROTO :DWORD,:DWORD
HRESULT_FROM_WIN32 PROTO :DWORD
SRNewSystemId PROTO
SRRemoveRestorePoint PROTO :DWORD
SRSetRestorePointA PROTO :DWORD,:DWORD
SRSetRestorePoint equ <SRSetRestorePointA>

SRSetRestorePointInternal PROTO :DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

