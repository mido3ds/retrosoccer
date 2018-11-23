; ..\X86\ComSvcs.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CoCreateActivity PROTO :DWORD,:DWORD,:DWORD
CoEnterServiceDomain PROTO :DWORD
CoLeaveServiceDomain PROTO :DWORD
CoLoadServices PROTO :DWORD,:DWORD,:DWORD,:DWORD
ComSvcsExceptionFilter PROTO :DWORD,:DWORD,:DWORD
ComSvcsLogError PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateActivityInMTA PROTO :DWORD,:DWORD
CreateActivityInMT equ <CreateActivityInMTA>

DispManGetContext PROTO :DWORD,:DWORD
DllUnregisterServerWeReallyMeanIt PROTO
GetMTAThreadPoolMetrics PROTO :DWORD
GetManagedExtensions PROTO :DWORD
GetTrkSvrObject PROTO :DWORD,:DWORD
MTSCreateActivity PROTO :DWORD,:DWORD

