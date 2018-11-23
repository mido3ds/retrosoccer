; ..\X86\RASAPI32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DDMFreePhonebookContext PROTO :DWORD
DDMFreeRemoteEndpoint PROTO :DWORD
DDMFreeRemoteEndpointV2 PROTO :DWORD,:DWORD
DDMGetAddressesFromPhonebook PROTO :DWORD,:DWORD,:DWORD,:DWORD
DDMGetAddressesFromPhonebookV2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
DDMGetPhoneBookContext PROTO :DWORD,:DWORD,:DWORD
DDMGetPhonebookInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DDMGetPhonebookInfoV2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DwCloneEntry PROTO :DWORD,:DWORD,:DWORD
DwEnumEntryDetails PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwRasUninitialize PROTO
GetAutoTriggerProfileInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsActiveAutoTriggerConnection PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasAutoDialSharedConnection PROTO
RasAutodialAddressToNetwork PROTO :DWORD,:DWORD,:DWORD
RasAutodialEntryToNetwork PROTO :DWORD,:DWORD,:DWORD
RasClearConnectionStatistics PROTO :DWORD
RasClearLinkStatistics PROTO :DWORD,:DWORD
RasCompleteDialMachineCleanup PROTO
RasConnectionNotificationA PROTO :DWORD,:DWORD,:DWORD
RasConnectionNotification equ <RasConnectionNotificationA>

RasCreatePhonebookEntryA PROTO :DWORD,:DWORD
RasCreatePhonebookEntry equ <RasCreatePhonebookEntryA>

RasDeleteEntryA PROTO :DWORD,:DWORD
RasDeleteEntry equ <RasDeleteEntryA>

RasDeleteSubEntryA PROTO :DWORD,:DWORD,:DWORD
RasDeleteSubEntry equ <RasDeleteSubEntryA>

RasDialA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasDial equ <RasDialA>

RasEditPhonebookEntryA PROTO :DWORD,:DWORD,:DWORD
RasEditPhonebookEntry equ <RasEditPhonebookEntryA>

RasEnumAutodialAddressesA PROTO :DWORD,:DWORD,:DWORD
RasEnumAutodialAddresses equ <RasEnumAutodialAddressesA>

RasEnumConnectionsA PROTO :DWORD,:DWORD,:DWORD
RasEnumConnections equ <RasEnumConnectionsA>

RasEnumDevicesA PROTO :DWORD,:DWORD,:DWORD
RasEnumDevices equ <RasEnumDevicesA>

RasEnumEntriesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasEnumEntries equ <RasEnumEntriesA>

RasFreeEapUserIdentityA PROTO :DWORD
RasFreeEapUserIdentity equ <RasFreeEapUserIdentityA>

RasFreeEntryAdvancedProperties PROTO :DWORD
RasGetAutoTriggerConnectStatus PROTO :DWORD,:DWORD
RasGetAutodialAddressA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasGetAutodialAddress equ <RasGetAutodialAddressA>

RasGetAutodialEnableA PROTO :DWORD,:DWORD
RasGetAutodialEnable equ <RasGetAutodialEnableA>

RasGetAutodialParamA PROTO :DWORD,:DWORD,:DWORD
RasGetAutodialParam equ <RasGetAutodialParamA>

RasGetConnectStatusA PROTO :DWORD,:DWORD
RasGetConnectStatus equ <RasGetConnectStatusA>

RasGetConnectionStatistics PROTO :DWORD,:DWORD
RasGetCountryInfoA PROTO :DWORD,:DWORD
RasGetCountryInfo equ <RasGetCountryInfoA>

RasGetCredentialsA PROTO :DWORD,:DWORD,:DWORD
RasGetCredentials equ <RasGetCredentialsA>

RasGetCustomAuthDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasGetCustomAuthData equ <RasGetCustomAuthDataA>

RasGetEapUserDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasGetEapUserData equ <RasGetEapUserDataA>

RasGetEapUserIdentityA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasGetEapUserIdentity equ <RasGetEapUserIdentityA>

RasGetEntryAdvancedProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasGetEntryDialParamsA PROTO :DWORD,:DWORD,:DWORD
RasGetEntryDialParams equ <RasGetEntryDialParamsA>

RasGetEntryPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasGetEntryProperties equ <RasGetEntryPropertiesA>

RasGetErrorStringA PROTO :DWORD,:DWORD,:DWORD
RasGetErrorString equ <RasGetErrorStringA>

RasGetHport PROTO :DWORD
RasGetLinkStatistics PROTO :DWORD,:DWORD,:DWORD
RasGetNapStatus PROTO :DWORD,:DWORD
RasGetPbkPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasGetProjectionInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasGetProjectionInfo equ <RasGetProjectionInfoA>

RasGetProjectionInfoEx PROTO :DWORD,:DWORD,:DWORD
RasGetSubEntryHandleA PROTO :DWORD,:DWORD,:DWORD
RasGetSubEntryHandle equ <RasGetSubEntryHandleA>

RasGetSubEntryPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasGetSubEntryProperties equ <RasGetSubEntryPropertiesA>

RasHandleTriggerConnDisconnect PROTO :DWORD,:DWORD,:DWORD
RasHangUpA PROTO :DWORD
RasHangUp equ <RasHangUpA>

RasInvokeEapUI PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasIsPublicPhonebook PROTO :DWORD
RasIsSharedConnection PROTO :DWORD,:DWORD
RasQueryRedialOnLinkFailure PROTO :DWORD,:DWORD,:DWORD
RasQuerySharedAutoDial PROTO :DWORD
RasQuerySharedConnection PROTO :DWORD
RasRenameEntryA PROTO :DWORD,:DWORD,:DWORD
RasRenameEntry equ <RasRenameEntryA>

RasScriptGetIpAddress PROTO :DWORD,:DWORD
RasScriptInit PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasScriptReceive PROTO :DWORD,:DWORD,:DWORD
RasScriptSend PROTO :DWORD,:DWORD,:DWORD
RasScriptTerm PROTO :DWORD
RasSetAutodialAddressA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetAutodialAddress equ <RasSetAutodialAddressA>

RasSetAutodialEnableA PROTO :DWORD,:DWORD
RasSetAutodialEnable equ <RasSetAutodialEnableA>

RasSetAutodialParamA PROTO :DWORD,:DWORD,:DWORD
RasSetAutodialParam equ <RasSetAutodialParamA>

RasSetCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasSetCredentials equ <RasSetCredentialsA>

RasSetCustomAuthDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasSetCustomAuthData equ <RasSetCustomAuthDataA>

RasSetEapUserDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetEapUserData equ <RasSetEapUserDataA>

RasSetEapUserDataAEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetEapUserDataWEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetEntryAdvancedProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasSetEntryDialParamsA PROTO :DWORD,:DWORD,:DWORD
RasSetEntryDialParams equ <RasSetEntryDialParamsA>

RasSetEntryPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetEntryProperties equ <RasSetEntryPropertiesA>

RasSetOldPassword PROTO :DWORD,:DWORD
RasSetPerConnectionProxy PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasSetSharedAutoDial PROTO :DWORD
RasSetSubEntryPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSetSubEntryProperties equ <RasSetSubEntryPropertiesA>

RasTriggerConnection PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasUpdateConnection PROTO :DWORD,:DWORD
RasValidateEntryNameA PROTO :DWORD,:DWORD
RasValidateEntryName equ <RasValidateEntryNameA>

RasWriteSharedPbkOptions PROTO :DWORD,:DWORD,:DWORD,:DWORD
UnInitializeRAS PROTO

