; ..\X86\MDMRegistration.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DiscoverManagementService PROTO :DWORD,:DWORD
DiscoverManagementServiceEx PROTO :DWORD,:DWORD,:DWORD
GetManagementAppHyperlink PROTO :DWORD,:DWORD
IsDeviceRegisteredWithManagement PROTO :DWORD,:DWORD,:DWORD
IsManagementRegistrationAllowed PROTO :DWORD
RegisterDeviceWithManagement PROTO :DWORD,:DWORD,:DWORD
SetManagedExternally PROTO :DWORD
UnregisterDeviceWithManagement PROTO :DWORD

