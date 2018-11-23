; ..\X86\mspbase.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 PROTO :DWORD,:DWORD
HRESULT_FROM_WIN32 PROTO :DWORD
MspBase_IsBadCodePtrNoSeh PROTO :DWORD
MspBase_IsBadReadPtrNoSeh PROTO :DWORD,:DWORD
MspBase_IsBadStringPtrANoSeh PROTO :DWORD,:DWORD
MspBase_IsBadStringPtrWNoSeh PROTO :DWORD,:DWORD
MspBase_IsBadWritePtrNoSeh PROTO :DWORD,:DWORD
TraceVprintfExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
TraceVprintfEx equ <TraceVprintfExA>

_real PROTO :DWORD
_real PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD
gfThreadProc PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

