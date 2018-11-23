; ..\X86\newdev.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DiInstallDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DiInstallDriverA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DiInstallDriver equ <DiInstallDriverA>

DiRollbackDriver PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DiShowUpdateDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DiUninstallDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetInternetPolicies PROTO :DWORD,:DWORD,:DWORD,:DWORD
InstallNewDevice PROTO :DWORD,:DWORD,:DWORD
InstallSelectedDriver PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InstallWindowsUpdateDriver PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InstallWindowsUpdateDriverEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InstallWindowsUpdateDrivers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryWindowsUpdateDriverStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetInternetPolicies PROTO :DWORD,:DWORD
UpdateDriverForPlugAndPlayDevicesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UpdateDriverForPlugAndPlayDevices equ <UpdateDriverForPlugAndPlayDevicesA>

pDiDoDeviceInstallAsAdmin PROTO :DWORD,:DWORD,:DWORD,:DWORD
pDiDoNullDriverInstall PROTO :DWORD,:DWORD

