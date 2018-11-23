; ..\X86\dloadhelper.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DelayLoadFailureHook PROTO :DWORD,:DWORD
HRESULT_FROM_WIN32 PROTO :DWORD
ResolveDelayLoadedAPI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ResolveDelayLoadsFromDll PROTO :DWORD,:DWORD,:DWORD
__HrLoadAllImportsForDll PROTO :DWORD
__delayLoadHelper2 PROTO :DWORD,:DWORD
_guard_fids____delayLoadHelper2 PROTO :DWORD,:DWORD

