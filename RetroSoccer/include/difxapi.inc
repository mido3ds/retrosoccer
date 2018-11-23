; ..\X86\difxapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DIFXAPISetLogCallbackA PROTO :DWORD,:DWORD
DIFXAPISetLogCallback equ <DIFXAPISetLogCallbackA>

DriverPackageGetPathA PROTO :DWORD,:DWORD,:DWORD
DriverPackageGetPath equ <DriverPackageGetPathA>

DriverPackageInstallA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DriverPackageInstall equ <DriverPackageInstallA>

DriverPackagePreinstallA PROTO :DWORD,:DWORD
DriverPackagePreinstall equ <DriverPackagePreinstallA>

DriverPackageUninstallA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DriverPackageUninstall equ <DriverPackageUninstallA>

SetDifxLogCallbackA PROTO :DWORD,:DWORD
SetDifxLogCallback equ <SetDifxLogCallbackA>


