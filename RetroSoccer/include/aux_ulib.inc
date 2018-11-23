; ..\X86\aux_ulib.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AuxUlibInitialize PROTO
AuxUlibIsDLLSynchronizationHeld PROTO :DWORD
AuxUlibSetSystemFileCacheSize PROTO :DWORD,:DWORD,:DWORD
Win9xCheckDllSynchronization PROTO :DWORD
_guard_fids__AuxUlibInitialize PROTO
_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

