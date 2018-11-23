; ..\X86\wcmapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WcmBeginIgnoreProfileList PROTO :DWORD,:DWORD,:DWORD
WcmCancelOnDemandRequest PROTO :DWORD
WcmCloseHandle PROTO :DWORD,:DWORD
WcmCloseOnDemandRequestHandle PROTO :DWORD
WcmEndIgnoreProfileList PROTO :DWORD
WcmEnterConnectedStandby PROTO
WcmEnterNetQuiet PROTO
WcmEnumInterfaces PROTO :DWORD,:DWORD,:DWORD
WcmExitConnectedStandby PROTO
WcmExitNetQuiet PROTO
WcmFreeMemory PROTO :DWORD
WcmGetInterfaceToken PROTO :DWORD,:DWORD,:DWORD
WcmGetProfileList PROTO :DWORD,:DWORD
WcmOpenHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD
WcmOpenOnDemandRequestHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcmOrderConnection PROTO :DWORD,:DWORD,:DWORD
WcmQueryOnDemandRequestStateInfo PROTO :DWORD,:DWORD
WcmQueryParameter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcmQueryProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcmResetIgnoreProfileList PROTO :DWORD,:DWORD
WcmSetParameter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcmSetProfileList PROTO :DWORD,:DWORD,:DWORD,:DWORD
WcmSetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcmStartOnDemandRequest PROTO :DWORD

