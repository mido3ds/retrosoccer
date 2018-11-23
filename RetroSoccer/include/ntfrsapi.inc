; ..\X86\ntfrsapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

NtFrsApiDestroyBackupRestore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtFrsApiEnumBackupRestoreSets PROTO :DWORD,:DWORD,:DWORD
NtFrsApiFinishedRestoringDirectory PROTO :DWORD,:DWORD,:DWORD
NtFrsApiGetBackupRestoreSetDirectory PROTO :DWORD,:DWORD,:DWORD,:DWORD
NtFrsApiGetBackupRestoreSetGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD
NtFrsApiGetBackupRestoreSetPaths PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtFrsApiGetBackupRestoreSetType PROTO :DWORD,:DWORD,:DWORD,:DWORD
NtFrsApiGetBackupRestoreSets PROTO :DWORD
NtFrsApiInitializeBackupRestore PROTO :DWORD,:DWORD,:DWORD
NtFrsApiIsBackupRestoreSetASysvol PROTO :DWORD,:DWORD,:DWORD
NtFrsApiRestoringDirectory PROTO :DWORD,:DWORD,:DWORD
NtFrsApi_DeleteSysvolMember PROTO :DWORD,:DWORD,:DWORD,:DWORD
NtFrsApi_ForceReplication PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtFrsApi_IsPathReplicated PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtFrsApi_PrepareForUnload PROTO
NtFrsApi_WriterCommand PROTO :DWORD,:DWORD

