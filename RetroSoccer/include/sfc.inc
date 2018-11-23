; ..\X86\Sfc.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

SRSetRestorePointA PROTO :DWORD,:DWORD
SRSetRestorePoint equ <SRSetRestorePointA>

SfcClose PROTO :DWORD
SfcConnectToServer PROTO :DWORD
SfcFileException PROTO :DWORD,:DWORD,:DWORD
SfcGetNextProtectedFile PROTO :DWORD,:DWORD
SfcInitProt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SfcInitiateScan PROTO :DWORD,:DWORD
SfcInstallProtectedFiles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SfcIsFileProtected PROTO :DWORD,:DWORD
SfcIsKeyProtected PROTO :DWORD,:DWORD,:DWORD
SfcTerminateWatcherThread PROTO
SfpDeleteCatalog PROTO :DWORD,:DWORD
SfpInstallCatalog PROTO :DWORD,:DWORD,:DWORD
SfpVerifyFile PROTO :DWORD,:DWORD,:DWORD

