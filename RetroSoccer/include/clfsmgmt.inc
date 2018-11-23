; ..\X86\clfsmgmt.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

ClfsAddLogContainer PROTO :DWORD,:DWORD,:DWORD
ClfsCloseLogFileObject PROTO :DWORD
ClfsCreateLogFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClfsCreateScanContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClfsGetContainerName PROTO :DWORD,:DWORD,:DWORD,:DWORD
ClfsGetManagementSupportInterface PROTO :DWORD,:DWORD
ClfsGetObservableInterface PROTO :DWORD,:DWORD
ClfsGetPendingRequestQueueInterface PROTO :DWORD,:DWORD
ClfsLsnContainer PROTO :DWORD
ClfsLsnCreate PROTO :DWORD,:DWORD,:DWORD
ClfsLsnGreater PROTO :DWORD,:DWORD
ClfsMgmtDeregisterManagedClient PROTO :DWORD
ClfsMgmtHandleLogFileFull PROTO :DWORD
ClfsMgmtInstallPolicy PROTO :DWORD,:DWORD,:DWORD
ClfsMgmtQueryPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
ClfsMgmtRegisterManagedClient PROTO :DWORD,:DWORD,:DWORD
ClfsMgmtRemovePolicy PROTO :DWORD,:DWORD
ClfsMgmtSetLogFileSize PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClfsMgmtSetLogFileSizeAsClient PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClfsMgmtTailAdvanceFailure PROTO :DWORD,:DWORD
ClfsQueryLogFileInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ClfsRemoveLogContainer PROTO :DWORD,:DWORD,:DWORD
ClfsScanLogContainers PROTO :DWORD,:DWORD
ExInitializeFastMutex PROTO :DWORD
ExInitializeWorkItem PROTO :DWORD,:DWORD,:DWORD
FatalListEntryError PROTO :DWORD,:DWORD,:DWORD
InitializeListHead PROTO :DWORD
InsertHeadList PROTO :DWORD,:DWORD
InsertTailList PROTO :DWORD,:DWORD
IoGetCurrentIrpStackLocation PROTO :DWORD
IsListEmpty PROTO :DWORD
KeGetCurrentThread PROTO
PsGetCurrentThread PROTO
RemoveEntryList PROTO :DWORD
RemoveHeadList PROTO :DWORD
RtlFailFast PROTO :DWORD
_ObReferenceObjectByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD

