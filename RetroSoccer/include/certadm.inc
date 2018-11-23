; ..\X86\certadm.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CertSrvBackupClose PROTO :DWORD
CertSrvBackupEnd PROTO :DWORD
CertSrvBackupFree PROTO :DWORD
CertSrvBackupRead PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSrvBackupTruncateLogs PROTO :DWORD
CertSrvRestoreEnd PROTO :DWORD
CertSrvRestoreRegisterComplete PROTO :DWORD,:DWORD
CertSrvRestoreRegisterThroughFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClosePerfMon PROTO
CollectPerfMon PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreatePerfObject PROTO :DWORD
CreatePerfObjectWithAlias PROTO :DWORD,:DWORD
DecrementPerfCounter PROTO :DWORD,:DWORD
DeletePerfObject PROTO :DWORD
IncrementPerfCounter PROTO :DWORD,:DWORD
InitPerfMon PROTO :DWORD
OpenPerfMon PROTO :DWORD
ResetPerfObjectList PROTO
UninitPerfMon PROTO
UpdatePerfCounter PROTO :DWORD,:DWORD,:DWORD

