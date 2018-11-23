; ..\X86\shcore.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CreateRandomAccessStreamOnFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateRandomAccessStreamOverStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateStreamOverRandomAccessStream PROTO :DWORD,:DWORD,:DWORD
GetDpiForMonitor PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessDpiAwareness PROTO :DWORD,:DWORD
GetScaleFactorForDevice PROTO :DWORD
GetScaleFactorForMonitor PROTO :DWORD,:DWORD
RegisterScaleChangeEvent PROTO :DWORD,:DWORD
RegisterScaleChangeNotifications PROTO :DWORD,:DWORD,:DWORD,:DWORD
RevokeScaleChangeNotifications PROTO :DWORD,:DWORD
SetProcessDpiAwareness PROTO :DWORD
UnregisterScaleChangeEvent PROTO :DWORD

