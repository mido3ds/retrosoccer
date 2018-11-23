; ..\X86\RTWorkQ.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

RtwqAddPeriodicCallback PROTO :DWORD,:DWORD,:DWORD
RtwqAllocateSerialWorkQueue PROTO :DWORD,:DWORD
RtwqAllocateWorkQueue PROTO :DWORD,:DWORD
RtwqBeginRegisterWorkQueueWithMMCSS PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RtwqBeginUnregisterWorkQueueWithMMCSS PROTO :DWORD,:DWORD,:DWORD
RtwqCancelWorkItem PROTO :DWORD,:DWORD
RtwqCreateAsyncResult PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtwqEndRegisterWorkQueueWithMMCSS PROTO :DWORD,:DWORD
RtwqEndUnregisterWorkQueueWithMMCSS PROTO :DWORD
RtwqGetWorkQueueMMCSSClass PROTO :DWORD,:DWORD,:DWORD
RtwqGetWorkQueueMMCSSPriority PROTO :DWORD,:DWORD
RtwqGetWorkQueueMMCSSTaskId PROTO :DWORD,:DWORD
RtwqInvokeCallback PROTO :DWORD
RtwqJoinWorkQueue PROTO :DWORD,:DWORD,:DWORD
RtwqLockPlatform PROTO
RtwqLockSharedWorkQueue PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtwqLockWorkQueue PROTO :DWORD
RtwqPutWaitingWorkItem PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtwqPutWorkItem PROTO :DWORD,:DWORD,:DWORD
RtwqRegisterPlatformEvents PROTO :DWORD
RtwqRegisterPlatformWithMMCSS PROTO :DWORD,:DWORD,:DWORD
RtwqRemovePeriodicCallback PROTO :DWORD
RtwqScheduleWorkItem PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtwqSetLongRunning PROTO :DWORD,:DWORD
RtwqShutdown PROTO
RtwqStartup PROTO
RtwqUnjoinWorkQueue PROTO :DWORD,:DWORD
RtwqUnlockPlatform PROTO
RtwqUnlockWorkQueue PROTO :DWORD
RtwqUnregisterPlatformEvents PROTO :DWORD
RtwqUnregisterPlatformFromMMCSS PROTO

