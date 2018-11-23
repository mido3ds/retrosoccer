; ..\X86\AuthZ.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

AuthzAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzAddSidsToContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzCachedAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzEnumerateSecurityEventSources PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzEvaluateSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzFreeAuditEvent PROTO :DWORD
AuthzFreeCentralAccessPolicyCache PROTO
AuthzFreeContext PROTO :DWORD
AuthzFreeHandle PROTO :DWORD
AuthzFreeResourceManager PROTO :DWORD
AuthzGetInformationFromContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeCompoundContext PROTO :DWORD,:DWORD,:DWORD
AuthzInitializeContextFromAuthzContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeContextFromSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeContextFromToken PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeRemoteAccessCheck PROTO :DWORD
AuthzInitializeRemoteResourceManager PROTO :DWORD,:DWORD
AuthzInitializeResourceManager PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeResourceManagerEx PROTO :DWORD,:DWORD,:DWORD
AuthzInstallSecurityEventSource PROTO :DWORD,:DWORD
AuthzModifyClaims PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzModifySecurityAttributes PROTO :DWORD,:DWORD,:DWORD
AuthzModifySids PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzOpenObjectAudit PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzRegisterCapChangeNotification PROTO :DWORD,:DWORD,:DWORD
AuthzRegisterSecurityEventSource PROTO :DWORD,:DWORD,:DWORD
AuthzReportSecurityEventFromParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzSetAppContainerInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzShutdownRemoteAccessCheck PROTO
AuthzUninstallSecurityEventSource PROTO :DWORD,:DWORD
AuthzUnregisterCapChangeNotification PROTO :DWORD
AuthzUnregisterSecurityEventSource PROTO :DWORD,:DWORD
AuthziLogAuditEvent PROTO :DWORD,:DWORD,:DWORD

