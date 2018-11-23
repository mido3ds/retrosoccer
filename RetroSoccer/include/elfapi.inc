; ..\X86\elfapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EVENTLOG_HANDLE_A_bind PROTO :DWORD
EVENTLOG_HANDLE_A_unbind PROTO :DWORD,:DWORD
EVENTLOG_HANDLE_W_bind PROTO :DWORD
EVENTLOG_HANDLE_W_unbind PROTO :DWORD,:DWORD
ElfAssertThreadPrivilege PROTO :DWORD,:DWORD
ElfBackupEventLogFileA PROTO :DWORD,:DWORD
ElfBackupEventLogFile equ <ElfBackupEventLogFileA>

ElfChangeNotify PROTO :DWORD,:DWORD
ElfClearEventLogFileA PROTO :DWORD,:DWORD
ElfClearEventLogFile equ <ElfClearEventLogFileA>

ElfCloseEventLog PROTO :DWORD
ElfCreateReconnInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfDeregisterClusterSvc PROTO :DWORD
ElfDeregisterEventSource PROTO :DWORD
ElfDestroyReconnectionInfo PROTO :DWORD
ElfFlushEventLog PROTO :DWORD
ElfGetLogInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfGetTheRpcHandle PROTO :DWORD
ElfNumberOfRecords PROTO :DWORD,:DWORD
ElfOldestRecord PROTO :DWORD,:DWORD
ElfOpenBackupEventLogA PROTO :DWORD,:DWORD,:DWORD
ElfOpenBackupEventLog equ <ElfOpenBackupEventLogA>

ElfOpenEventLogA PROTO :DWORD,:DWORD,:DWORD
ElfOpenEventLog equ <ElfOpenEventLogA>

ElfReadEventLogA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfReadEventLog equ <ElfReadEventLogA>

ElfReconnect PROTO :DWORD
ElfRegisterClusterSvc PROTO :DWORD,:DWORD,:DWORD
ElfRegisterEventSourceA PROTO :DWORD,:DWORD,:DWORD
ElfRegisterEventSource equ <ElfRegisterEventSourceA>

ElfReportEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfReportEvent equ <ElfReportEventA>

ElfRevertThreadPrivilege PROTO :DWORD
ElfWriteClusterEvents PROTO :DWORD,:DWORD,:DWORD
ElfrBackupELFA PROTO :DWORD,:DWORD
ElfrBackupELF equ <ElfrBackupELFA>

ElfrChangeNotify PROTO :DWORD,:DWORD,:DWORD,:DWORD
ElfrClearELFA PROTO :DWORD,:DWORD
ElfrClearELF equ <ElfrClearELFA>

ElfrCloseEL PROTO :DWORD
ElfrDeregisterClusterSvc PROTO :DWORD
ElfrDeregisterEventSource PROTO :DWORD
ElfrFlushEL PROTO :DWORD
ElfrGetLogInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrNumberOfRecords PROTO :DWORD,:DWORD
ElfrOldestRecord PROTO :DWORD,:DWORD
ElfrOpenBELA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrOpenBEL equ <ElfrOpenBELA>

ElfrOpenELA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrOpenEL equ <ElfrOpenELA>

ElfrReadELA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrReadEL equ <ElfrReadELA>

ElfrRegisterClusterSvc PROTO :DWORD,:DWORD,:DWORD
ElfrRegisterEventSourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrRegisterEventSource equ <ElfrRegisterEventSourceA>

ElfrReportEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfrReportEvent equ <ElfrReportEventA>

ElfrWriteClusterEvents PROTO :DWORD,:DWORD,:DWORD
MIDL_user_allocate PROTO :DWORD
MIDL_user_free PROTO :DWORD
NtCurrentTeb PROTO
RevertToSelf PROTO
RpcpBindRpc PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcpUnbindRpc PROTO :DWORD

