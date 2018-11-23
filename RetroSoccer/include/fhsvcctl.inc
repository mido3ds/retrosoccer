; ..\X86\FhSvcCtl.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DllMain PROTO :DWORD,:DWORD,:DWORD
FhQueryConfiguredUsersCount PROTO :DWORD
FhServiceBlockBackup PROTO :DWORD
FhServiceClearProtectionState PROTO :DWORD,:DWORD,:DWORD
FhServiceClosePipe PROTO :DWORD
FhServiceEnterMaintenanceMode PROTO :DWORD,:DWORD
FhServiceExitMaintenanceMode PROTO :DWORD
FhServiceMigrationFinished PROTO :DWORD
FhServiceMigrationStarting PROTO :DWORD
FhServiceOpenPipe PROTO :DWORD,:DWORD
FhServiceReloadConfiguration PROTO :DWORD
FhServiceStartBackup PROTO :DWORD,:DWORD
FhServiceStopBackup PROTO :DWORD,:DWORD
FhServiceUnblockBackup PROTO :DWORD

