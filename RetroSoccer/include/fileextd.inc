; ..\X86\fileextd.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseFiberStart PROTO
BaseInitializeFiberContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
BaseSetLastNTError PROTO :DWORD
BasepAdjustStackPointer PROTO :DWORD
CalloutOnFiberStackInternal PROTO :DWORD,:DWORD,:DWORD
GetCurrentFiber PROTO
GetModuleHandleA PROTO :DWORD
GetModuleHandle equ <GetModuleHandleA>

GetProcAddress PROTO :DWORD,:DWORD
GetTickCountStub PROTO
InterlockedCompareExchange PROTO :DWORD,:DWORD,:DWORD
InterlockedDecrement PROTO :DWORD
InterlockedExchange PROTO :DWORD,:DWORD
InterlockedExchangeAdd PROTO :DWORD,:DWORD
InterlockedIncrement PROTO :DWORD
MulDiv PROTO :DWORD,:DWORD,:DWORD
NtCurrentTeb PROTO
SetFileInformationByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetProtectedPolicy PROTO :DWORD,:DWORD,:DWORD
SetProtectedPolicyInternal PROTO :DWORD,:DWORD,:DWORD
SwitchToFiberContext PROTO :DWORD
UnhandledExceptionFilter PROTO :DWORD
Win32Rename PROTO :DWORD,:DWORD,:DWORD
_BaseFiberStart PROTO
_ResourceCallEnumLangRoutine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_ResourceCallEnumNameRoutine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_ResourceCallEnumTypeRoutine PROTO :DWORD,:DWORD,:DWORD,:DWORD
_guard_fids__BaseInitializeFiberContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD
fileext_NtCreateFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
fileext_NtQueryDirectoryFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
fileext_NtQueryInformationFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
fileext_NtSetInformationFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
fileextd_RtlNtStatusToDosError PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

