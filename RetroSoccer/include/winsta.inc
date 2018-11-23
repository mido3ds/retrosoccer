; ..\X86\winsta.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

LogonIdFromWinStationNameA PROTO :DWORD,:DWORD,:DWORD
LogonIdFromWinStationName equ <LogonIdFromWinStationNameA>

RemoteAssistancePrepareSystemRestore PROTO :DWORD
ServerGetInternetConnectorStatus PROTO :DWORD,:DWORD,:DWORD
ServerLicensingClose PROTO :DWORD
ServerLicensingDeactivateCurrentPolicy PROTO :DWORD
ServerLicensingFreePolicyInformation PROTO :DWORD
ServerLicensingGetAvailablePolicyIds PROTO :DWORD,:DWORD,:DWORD
ServerLicensingGetPolicy PROTO :DWORD,:DWORD
ServerLicensingGetPolicyInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ServerLicensingGetPolicyInformation equ <ServerLicensingGetPolicyInformationA>

ServerLicensingLoadPolicy PROTO :DWORD,:DWORD
ServerLicensingOpenA PROTO :DWORD
ServerLicensingOpen equ <ServerLicensingOpenA>

ServerLicensingSetPolicy PROTO :DWORD,:DWORD,:DWORD
ServerLicensingUnloadPolicy PROTO :DWORD,:DWORD
ServerQueryInetConnectorInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ServerQueryInetConnectorInformation equ <ServerQueryInetConnectorInformationA>

ServerSetInternetConnectorStatus PROTO :DWORD,:DWORD,:DWORD
WTSRegisterSessionNotificationEx PROTO :DWORD,:DWORD,:DWORD
WTSUnRegisterSessionNotificationEx PROTO :DWORD,:DWORD
WinStationActivateLicense PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationAutoReconnect PROTO :DWORD
WinStationBroadcastSystemMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationCheckAccess PROTO :DWORD,:DWORD,:DWORD
WinStationCheckLoopBack PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationCloseServer PROTO :DWORD
WinStationConnectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationConnect equ <WinStationConnectA>

WinStationConnectAndLockDesktop PROTO :DWORD,:DWORD
WinStationConnectCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationConnectEx PROTO :DWORD,:DWORD
WinStationCreateChildSessionTransport PROTO :DWORD,:DWORD
WinStationDisconnect PROTO :DWORD,:DWORD,:DWORD
WinStationEnableChildSessions PROTO :DWORD
WinStationEnumerateA PROTO :DWORD,:DWORD,:DWORD
WinStationEnumerate equ <WinStationEnumerateA>

WinStationEnumerateLicenses PROTO :DWORD,:DWORD,:DWORD
WinStationEnumerateProcesses PROTO :DWORD,:DWORD
WinStationEnumerate_IndexedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationEnumerate_Indexed equ <WinStationEnumerate_IndexedA>

WinStationFreeConsoleNotification PROTO :DWORD,:DWORD
WinStationFreeEXECENVDATAEX PROTO :DWORD,:DWORD
WinStationFreeGAPMemory PROTO :DWORD,:DWORD,:DWORD
WinStationFreeMemory PROTO :DWORD
WinStationFreePropertyValue PROTO :DWORD
WinStationFreeUserCertificates PROTO :DWORD
WinStationFreeUserCredentials PROTO :DWORD
WinStationFreeUserSessionInfo PROTO :DWORD,:DWORD
WinStationGenerateLicense PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationGetAllProcesses PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationGetAllSessionsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationGetAllUserSessions PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationGetChildSessionId PROTO :DWORD
WinStationGetConnectionProperty PROTO :DWORD,:DWORD,:DWORD
WinStationGetCurrentSessionCapabilities PROTO :DWORD,:DWORD
WinStationGetCurrentSessionConnectionProperty PROTO :DWORD,:DWORD
WinStationGetCurrentSessionTerminalName PROTO :DWORD
WinStationGetDeviceId PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationGetInitialApplication PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationGetLanAdapterNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationGetLanAdapterName equ <WinStationGetLanAdapterNameA>

WinStationGetLoggedOnCount PROTO :DWORD,:DWORD
WinStationGetMachinePolicy PROTO :DWORD,:DWORD
WinStationGetParentSessionId PROTO :DWORD,:DWORD
WinStationGetProcessSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationGetRedirectAuthInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationGetRestrictedLogonInfo PROTO :DWORD,:DWORD
WinStationGetSessionIds PROTO :DWORD,:DWORD,:DWORD
WinStationGetTermSrvCountersValue PROTO :DWORD,:DWORD,:DWORD
WinStationGetUserCertificates PROTO :DWORD
WinStationGetUserCredentials PROTO :DWORD
WinStationGetUserProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationInstallLicense PROTO :DWORD,:DWORD,:DWORD
WinStationIsChildSessionsEnabled PROTO :DWORD
WinStationIsCurrentSessionRemoteable PROTO :DWORD
WinStationIsHelpAssistantSession PROTO :DWORD,:DWORD
WinStationIsSessionPermitted PROTO
WinStationIsSessionRemoteable PROTO :DWORD,:DWORD,:DWORD
WinStationNameFromLogonIdA PROTO :DWORD,:DWORD,:DWORD
WinStationNameFromLogonId equ <WinStationNameFromLogonIdA>

WinStationNegotiateSession PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationNtsdDebug PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationOpenServerA PROTO :DWORD
WinStationOpenServer equ <WinStationOpenServerA>

WinStationOpenServerExA PROTO :DWORD
WinStationOpenServerEx equ <WinStationOpenServerExA>

WinStationPreCreateGlassReplacementSession PROTO :DWORD,:DWORD,:DWORD
WinStationQueryAllowConcurrentConnections PROTO
WinStationQueryCurrentSessionInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationQueryEnforcementCore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationQueryInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationQueryInformation equ <WinStationQueryInformationA>

WinStationQueryLicense PROTO :DWORD,:DWORD,:DWORD
WinStationQuerySessionVirtualIP PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationQueryUpdateRequired PROTO :DWORD,:DWORD
WinStationRcmShadow2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationRedirectErrorMessage PROTO :DWORD,:DWORD
WinStationRedirectLogonBeginPainting PROTO
WinStationRedirectLogonError PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationRedirectLogonMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationRedirectLogonStatus PROTO :DWORD,:DWORD
WinStationRegisterConsoleNotification PROTO :DWORD,:DWORD,:DWORD
WinStationRegisterConsoleNotificationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationRegisterCurrentSessionNotificationEvent PROTO :DWORD,:DWORD,:DWORD
WinStationRegisterNotificationEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationRemoveLicense PROTO :DWORD,:DWORD,:DWORD
WinStationRenameA PROTO :DWORD,:DWORD,:DWORD
WinStationRename equ <WinStationRenameA>

WinStationReportUIResult PROTO :DWORD,:DWORD,:DWORD
WinStationReset PROTO :DWORD,:DWORD,:DWORD
WinStationRevertFromServicesSession PROTO
WinStationSendMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationSendMessage equ <WinStationSendMessageA>

WinStationSendWindowMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationServerPing PROTO :DWORD
WinStationSetAutologonPassword PROTO :DWORD,:DWORD
WinStationSetInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationSetInformation equ <WinStationSetInformationA>

WinStationSetPoolCount PROTO :DWORD,:DWORD,:DWORD
WinStationSetRenderHint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationShadow PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationShadowAccessCheck PROTO :DWORD,:DWORD
WinStationShadowStop PROTO :DWORD,:DWORD,:DWORD
WinStationShadowStop2 PROTO
WinStationShutdownSystem PROTO :DWORD,:DWORD
WinStationSwitchToServicesSession PROTO
WinStationSystemShutdownStarted PROTO
WinStationSystemShutdownWait PROTO :DWORD,:DWORD
WinStationTerminateGlassReplacementSession PROTO :DWORD
WinStationTerminateProcess PROTO :DWORD,:DWORD,:DWORD
WinStationUnRegisterConsoleNotification PROTO :DWORD,:DWORD
WinStationUnRegisterNotificationEvent PROTO :DWORD
WinStationUserLoginAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationVerify PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinStationVirtualOpen PROTO :DWORD,:DWORD,:DWORD
WinStationVirtualOpenEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinStationWaitSystemEvent PROTO :DWORD,:DWORD,:DWORD
_NWLogonQueryAdmin PROTO :DWORD,:DWORD,:DWORD
_NWLogonSetAdmin PROTO :DWORD,:DWORD,:DWORD
_WinStationAnnoyancePopup PROTO :DWORD,:DWORD
_WinStationBeepOpen PROTO :DWORD,:DWORD,:DWORD
_WinStationBreakPoint PROTO :DWORD,:DWORD,:DWORD
_WinStationCallback PROTO :DWORD,:DWORD,:DWORD
_WinStationCheckForApplicationName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_WinStationFUSCanRemoteUserDisconnect PROTO :DWORD,:DWORD,:DWORD
_WinStationGetApplicationInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
_WinStationNotifyDisconnectPipe PROTO
_WinStationNotifyLogoff PROTO
_WinStationNotifyLogon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_WinStationNotifyNewSession PROTO :DWORD,:DWORD
_WinStationOpenSessionDirectory PROTO :DWORD,:DWORD
_WinStationReInitializeSecurity PROTO :DWORD
_WinStationReadRegistry PROTO :DWORD
_WinStationSessionInitialized PROTO
_WinStationShadowTarget PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_WinStationShadowTarget2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_WinStationShadowTargetSetup PROTO :DWORD,:DWORD
_WinStationUpdateClientCachedCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
_WinStationUpdateSettings PROTO :DWORD,:DWORD,:DWORD
_WinStationUpdateUserConfig PROTO :DWORD
_WinStationWaitForConnect PROTO

