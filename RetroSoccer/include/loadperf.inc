; ..\X86\LoadPerf.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

InstallPerfDllA PROTO :DWORD,:DWORD,:DWORD
InstallPerfDll equ <InstallPerfDllA>

LoadPerfCounterTextStringsA PROTO :DWORD,:DWORD
LoadPerfCounterTextStrings equ <LoadPerfCounterTextStringsA>

LpAcquireInstallationMutex PROTO
LpReleaseInstallationMutex PROTO
SetServiceAsTrustedA PROTO :DWORD,:DWORD
SetServiceAsTrusted equ <SetServiceAsTrustedA>

UnloadPerfCounterTextStringsA PROTO :DWORD,:DWORD
UnloadPerfCounterTextStrings equ <UnloadPerfCounterTextStringsA>

UpdatePerfNameFilesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UpdatePerfNameFiles equ <UpdatePerfNameFilesA>


