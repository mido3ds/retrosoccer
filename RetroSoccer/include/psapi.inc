; ..\X86\Psapi.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

EmptyWorkingSet PROTO :DWORD
EnumDeviceDrivers PROTO :DWORD,:DWORD,:DWORD
EnumPageFilesA PROTO :DWORD,:DWORD
EnumPageFiles equ <EnumPageFilesA>

EnumProcessModules PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumProcessModulesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumProcesses PROTO :DWORD,:DWORD,:DWORD
GetDeviceDriverBaseNameA PROTO :DWORD,:DWORD,:DWORD
GetDeviceDriverBaseName equ <GetDeviceDriverBaseNameA>

GetDeviceDriverFileNameA PROTO :DWORD,:DWORD,:DWORD
GetDeviceDriverFileName equ <GetDeviceDriverFileNameA>

GetMappedFileNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetMappedFileName equ <GetMappedFileNameA>

GetModuleBaseNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetModuleBaseName equ <GetModuleBaseNameA>

GetModuleFileNameExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetModuleFileNameEx equ <GetModuleFileNameExA>

GetModuleInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPerformanceInfo PROTO :DWORD,:DWORD
GetProcessImageFileNameA PROTO :DWORD,:DWORD,:DWORD
GetProcessImageFileName equ <GetProcessImageFileNameA>

GetProcessMemoryInfo PROTO :DWORD,:DWORD,:DWORD
GetWsChanges PROTO :DWORD,:DWORD,:DWORD
GetWsChangesEx PROTO :DWORD,:DWORD,:DWORD
InitializeProcessForWsWatch PROTO :DWORD
QueryWorkingSet PROTO :DWORD,:DWORD,:DWORD
QueryWorkingSetEx PROTO :DWORD,:DWORD,:DWORD

