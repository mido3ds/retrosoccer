; ..\X86\ScrnSavW.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DefScreenSaverProc PROTO :DWORD,:DWORD,:DWORD,:DWORD
DoChangePw PROTO :DWORD
DoConfigBox PROTO :DWORD
DoPasswordCheck PROTO :DWORD
DoSaverPreview PROTO :DWORD
DoScreenSave PROTO :DWORD
DummyEntry PROTO
GetElapsedTime PROTO :DWORD,:DWORD
HogMachine PROTO :DWORD
InitRealScreenSave PROTO
LoadPwdDLL PROTO
RealScreenSaverProc PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegisterDialogClasses PROTO :DWORD
ScreenSaverChangePassword PROTO :DWORD
ScreenSaverConfigureDialog PROTO :DWORD,:DWORD,:DWORD,:DWORD
UnloadPwdDLL PROTO
WinMain PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinMainN PROTO :DWORD,:DWORD,:DWORD,:DWORD
_SetStrictProcessHeap PROTO
_guard_fids__DoConfigBox PROTO :DWORD
_guard_fids__DoScreenSave PROTO :DWORD
_security_check_cookie PROTO :DWORD
atoui PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

