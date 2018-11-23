; ..\X86\wmip.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~

CloseTrace PROTO :DWORD,:DWORD
ControlTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ControlTrace equ <ControlTraceA>

CreateTraceInstanceId PROTO :DWORD,:DWORD
EnableTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTraceEnableFlags PROTO :DWORD,:DWORD
GetTraceEnableLevel PROTO :DWORD,:DWORD
GetTraceLoggerHandle PROTO :DWORD
OpenTraceA PROTO :DWORD
OpenTrace equ <OpenTraceA>

ProcessTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryAllTracesA PROTO :DWORD,:DWORD,:DWORD
QueryAllTraces equ <QueryAllTracesA>

RegisterTraceGuidsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterTraceGuids equ <RegisterTraceGuidsA>

RemoveTraceCallback PROTO :DWORD
SetTraceCallback PROTO :DWORD,:DWORD
StartTraceA PROTO :DWORD,:DWORD,:DWORD
StartTrace equ <StartTraceA>

TraceEvent PROTO :DWORD,:DWORD,:DWORD
TraceEventInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnregisterTraceGuids PROTO :DWORD,:DWORD
WmiCloseBlock PROTO :DWORD
WmiDevInstToInstanceNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WmiDevInstToInstanceName equ <WmiDevInstToInstanceNameA>

WmiEnumerateGuids PROTO :DWORD,:DWORD
WmiExecuteMethodA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WmiExecuteMethod equ <WmiExecuteMethodA>

WmiFileHandleToInstanceNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WmiFileHandleToInstanceName equ <WmiFileHandleToInstanceNameA>

WmiFreeBuffer PROTO :DWORD
WmiMofEnumerateResourcesA PROTO :DWORD,:DWORD,:DWORD
WmiMofEnumerateResources equ <WmiMofEnumerateResourcesA>

WmiNotificationRegistrationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WmiNotificationRegistration equ <WmiNotificationRegistrationA>

WmiOpenBlock PROTO :DWORD,:DWORD,:DWORD
WmiQueryAllDataA PROTO :DWORD,:DWORD,:DWORD
WmiQueryAllData equ <WmiQueryAllDataA>

WmiQueryGuidInformation PROTO :DWORD,:DWORD
WmiQuerySingleInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WmiQuerySingleInstance equ <WmiQuerySingleInstanceA>

WmiSetSingleInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WmiSetSingleInstance equ <WmiSetSingleInstanceA>

WmiSetSingleItemA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WmiSetSingleItem equ <WmiSetSingleItemA>


