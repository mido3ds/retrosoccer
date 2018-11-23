; ..\X86\BufferOverflow.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

NtGetTickCount PROTO
NtTerminateProcess PROTO :DWORD,:DWORD
ReadAcquire PROTO :DWORD
ReadNoFence PROTO :DWORD
ReadULongAcquire PROTO :DWORD
ReadULongNoFence PROTO :DWORD
RtlCaptureContext PROTO :DWORD
RtlUnhandledExceptionFilter PROTO :DWORD
_DllMainCRTStartupForGS PROTO :DWORD,:DWORD,:DWORD
_DllMainCRTStartupForGS2 PROTO :DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

