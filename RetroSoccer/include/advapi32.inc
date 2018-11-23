; ..\X86\AdvAPI32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AbortSystemShutdownA PROTO :DWORD
AbortSystemShutdown equ <AbortSystemShutdownA>

AccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckAndAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckAndAuditAlarm equ <AccessCheckAndAuditAlarmA>

AccessCheckByType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeAndAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeAndAuditAlarm equ <AccessCheckByTypeAndAuditAlarmA>

AccessCheckByTypeResultList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeResultListAndAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeResultListAndAuditAlarm equ <AccessCheckByTypeResultListAndAuditAlarmA>

AccessCheckByTypeResultListAndAuditAlarmByHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeResultListAndAuditAlarmByHandle equ <AccessCheckByTypeResultListAndAuditAlarmByHandleA>

AddAccessAllowedAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddAccessAllowedAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessAllowedObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddConditionalAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddMandatoryAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddUsersToEncryptedFile PROTO :DWORD,:DWORD
AddUsersToEncryptedFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
AdjustTokenGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdjustTokenPrivileges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateAndInitializeSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateLocallyUniqueId PROTO :DWORD
AreAllAccessesGranted PROTO :DWORD,:DWORD
AreAnyAccessesGranted PROTO :DWORD,:DWORD
AuditComputeEffectivePolicyBySid PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuditComputeEffectivePolicyByToken PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuditEnumerateCategories PROTO :DWORD,:DWORD
AuditEnumeratePerUserPolicy PROTO :DWORD
AuditEnumerateSubCategories PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuditFree PROTO :DWORD
AuditLookupCategoryGuidFromCategoryId PROTO :DWORD,:DWORD
AuditLookupCategoryIdFromCategoryGuid PROTO :DWORD,:DWORD
AuditLookupCategoryNameA PROTO :DWORD,:DWORD
AuditLookupCategoryName equ <AuditLookupCategoryNameA>

AuditLookupSubCategoryNameA PROTO :DWORD,:DWORD
AuditLookupSubCategoryName equ <AuditLookupSubCategoryNameA>

AuditQueryGlobalSaclA PROTO :DWORD,:DWORD
AuditQueryGlobalSacl equ <AuditQueryGlobalSaclA>

AuditQueryPerUserPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuditQuerySecurity PROTO :DWORD,:DWORD
AuditQuerySystemPolicy PROTO :DWORD,:DWORD,:DWORD
AuditSetGlobalSaclA PROTO :DWORD,:DWORD
AuditSetGlobalSacl equ <AuditSetGlobalSaclA>

AuditSetPerUserPolicy PROTO :DWORD,:DWORD,:DWORD
AuditSetSecurity PROTO :DWORD,:DWORD
AuditSetSystemPolicy PROTO :DWORD,:DWORD
BackupEventLogA PROTO :DWORD,:DWORD
BackupEventLog equ <BackupEventLogA>

BaseRegCloseKey PROTO :DWORD
BaseRegCreateKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BaseRegDeleteKeyEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
BaseRegDeleteValue PROTO :DWORD,:DWORD
BaseRegFlushKey PROTO :DWORD
BaseRegGetVersion PROTO :DWORD,:DWORD
BaseRegLoadKey PROTO :DWORD,:DWORD,:DWORD
BaseRegOpenKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BaseRegRestoreKey PROTO :DWORD,:DWORD,:DWORD
BaseRegSaveKeyEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
BaseRegSetKeySecurity PROTO :DWORD,:DWORD,:DWORD
BaseRegSetValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BaseRegUnLoadKey PROTO :DWORD,:DWORD
BuildExplicitAccessWithNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BuildExplicitAccessWithName equ <BuildExplicitAccessWithNameA>

BuildImpersonateExplicitAccessWithNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BuildImpersonateExplicitAccessWithName equ <BuildImpersonateExplicitAccessWithNameA>

BuildImpersonateTrusteeA PROTO :DWORD,:DWORD
BuildImpersonateTrustee equ <BuildImpersonateTrusteeA>

BuildSecurityDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BuildSecurityDescriptor equ <BuildSecurityDescriptorA>

BuildTrusteeWithNameA PROTO :DWORD,:DWORD
BuildTrusteeWithName equ <BuildTrusteeWithNameA>

BuildTrusteeWithObjectsAndNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BuildTrusteeWithObjectsAndName equ <BuildTrusteeWithObjectsAndNameA>

BuildTrusteeWithObjectsAndSidA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BuildTrusteeWithObjectsAndSid equ <BuildTrusteeWithObjectsAndSidA>

BuildTrusteeWithSidA PROTO :DWORD,:DWORD
BuildTrusteeWithSid equ <BuildTrusteeWithSidA>

CancelOverlappedAccess PROTO :DWORD
ChangeServiceConfig2A PROTO :DWORD,:DWORD,:DWORD
ChangeServiceConfig2 equ <ChangeServiceConfig2A>

ChangeServiceConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ChangeServiceConfig equ <ChangeServiceConfigA>

CheckForHiberboot PROTO :DWORD,:DWORD
CheckTokenMembership PROTO :DWORD,:DWORD,:DWORD
ClearEventLogA PROTO :DWORD,:DWORD
ClearEventLog equ <ClearEventLogA>

CloseCodeAuthzLevel PROTO :DWORD
CloseEncryptedFileRaw PROTO :DWORD
CloseEventLog PROTO :DWORD
CloseServiceHandle PROTO :DWORD
CloseThreadWaitChainSession PROTO :DWORD
CloseTrace PROTO :DWORD,:DWORD
CommandLineFromMsiDescriptor PROTO :DWORD,:DWORD,:DWORD
ComputeAccessTokenFromCodeAuthzLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ControlService PROTO :DWORD,:DWORD,:DWORD
ControlServiceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ControlServiceEx equ <ControlServiceExA>

ControlTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ControlTrace equ <ControlTraceA>

ConvertAccessToSecurityDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertAccessToSecurityDescriptor equ <ConvertAccessToSecurityDescriptorA>

ConvertSDToStringSDRootDomainA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertSDToStringSDRootDomain equ <ConvertSDToStringSDRootDomainA>

ConvertSecurityDescriptorToAccessA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertSecurityDescriptorToAccess equ <ConvertSecurityDescriptorToAccessA>

ConvertSecurityDescriptorToAccessNamedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertSecurityDescriptorToAccessNamed equ <ConvertSecurityDescriptorToAccessNamedA>

ConvertSecurityDescriptorToStringSecurityDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertSecurityDescriptorToStringSecurityDescriptor equ <ConvertSecurityDescriptorToStringSecurityDescriptorA>

ConvertSidToStringSidA PROTO :DWORD,:DWORD
ConvertSidToStringSid equ <ConvertSidToStringSidA>

ConvertStringSDToSDDomainA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertStringSDToSDDomain equ <ConvertStringSDToSDDomainA>

ConvertStringSDToSDRootDomainA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertStringSDToSDRootDomain equ <ConvertStringSDToSDRootDomainA>

ConvertStringSecurityDescriptorToSecurityDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ConvertStringSecurityDescriptorToSecurityDescriptor equ <ConvertStringSecurityDescriptorToSecurityDescriptorA>

ConvertStringSidToSidA PROTO :DWORD,:DWORD
ConvertStringSidToSid equ <ConvertStringSidToSidA>

ConvertToAutoInheritPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopySid PROTO :DWORD,:DWORD,:DWORD
CreateCodeAuthzLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityWithMultipleInheritance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProcessAsUserA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProcessAsUser equ <CreateProcessAsUserA>

CreateRestrictedToken PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateServiceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateService equ <CreateServiceA>

CreateTraceInstanceId PROTO :DWORD,:DWORD
CreateWellKnownSid PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredDeleteA PROTO :DWORD,:DWORD,:DWORD
CredDelete equ <CredDeleteA>

CredEnumerateA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredEnumerate equ <CredEnumerateA>

CredFindBestCredentialA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredFindBestCredential equ <CredFindBestCredentialA>

CredFree PROTO :DWORD
CredGetSessionTypes PROTO :DWORD,:DWORD
CredGetTargetInfoA PROTO :DWORD,:DWORD,:DWORD
CredGetTargetInfo equ <CredGetTargetInfoA>

CredIsMarshaledCredentialA PROTO :DWORD
CredIsMarshaledCredential equ <CredIsMarshaledCredentialA>

CredIsProtectedA PROTO :DWORD,:DWORD
CredIsProtected equ <CredIsProtectedA>

CredMarshalCredentialA PROTO :DWORD,:DWORD,:DWORD
CredMarshalCredential equ <CredMarshalCredentialA>

CredProtectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredProtect equ <CredProtectA>

CredReadA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredRead equ <CredReadA>

CredReadDomainCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredReadDomainCredentials equ <CredReadDomainCredentialsA>

CredRenameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredRename equ <CredRenameA>

CredUnmarshalCredentialA PROTO :DWORD,:DWORD,:DWORD
CredUnmarshalCredential equ <CredUnmarshalCredentialA>

CredUnprotectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUnprotect equ <CredUnprotectA>

CredWriteA PROTO :DWORD,:DWORD
CredWrite equ <CredWriteA>

CredWriteDomainCredentialsA PROTO :DWORD,:DWORD,:DWORD
CredWriteDomainCredentials equ <CredWriteDomainCredentialsA>

CryptAcquireContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptAcquireContext equ <CryptAcquireContextA>

CryptContextAddRef PROTO :DWORD,:DWORD,:DWORD
CryptCreateHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDeriveKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDestroyHash PROTO :DWORD
CryptDestroyKey PROTO :DWORD
CryptDuplicateHash PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptDuplicateKey PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptEncrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumProviderTypesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumProviderTypes equ <CryptEnumProviderTypesA>

CryptEnumProvidersA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumProviders equ <CryptEnumProvidersA>

CryptExportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGenKey PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptGenRandom PROTO :DWORD,:DWORD,:DWORD
CryptGetDefaultProviderA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultProvider equ <CryptGetDefaultProviderA>

CryptGetHashParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetKeyParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetProvParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetUserKey PROTO :DWORD,:DWORD,:DWORD
CryptHashData PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptHashSessionKey PROTO :DWORD,:DWORD,:DWORD
CryptImportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptReleaseContext PROTO :DWORD,:DWORD
CryptSetHashParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptSetKeyParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptSetProvParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptSetProviderA PROTO :DWORD,:DWORD
CryptSetProvider equ <CryptSetProviderA>

CryptSetProviderExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptSetProviderEx equ <CryptSetProviderExA>

CryptSignHashA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignHash equ <CryptSignHashA>

CryptVerifySignatureA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifySignature equ <CryptVerifySignatureA>

DecryptFileA PROTO :DWORD,:DWORD
DecryptFile equ <DecryptFileA>

DeleteAce PROTO :DWORD,:DWORD
DeleteService PROTO :DWORD
DeregisterEventSource PROTO :DWORD
DestroyPrivateObjectSecurity PROTO :DWORD
DuplicateEncryptionInfoFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DuplicateToken PROTO :DWORD,:DWORD,:DWORD
DuplicateTokenEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfBackupEventLogFileA PROTO :DWORD,:DWORD
ElfBackupEventLogFile equ <ElfBackupEventLogFileA>

ElfChangeNotify PROTO :DWORD,:DWORD
ElfClearEventLogFileA PROTO :DWORD,:DWORD
ElfClearEventLogFile equ <ElfClearEventLogFileA>

ElfCloseEventLog PROTO :DWORD
ElfDeregisterEventSource PROTO :DWORD
ElfFlushEventLog PROTO :DWORD
ElfNumberOfRecords PROTO :DWORD,:DWORD
ElfOldestRecord PROTO :DWORD,:DWORD
ElfOpenBackupEventLogA PROTO :DWORD,:DWORD,:DWORD
ElfOpenBackupEventLog equ <ElfOpenBackupEventLogA>

ElfOpenEventLogA PROTO :DWORD,:DWORD,:DWORD
ElfOpenEventLog equ <ElfOpenEventLogA>

ElfReadEventLogA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfReadEventLog equ <ElfReadEventLogA>

ElfRegisterEventSourceA PROTO :DWORD,:DWORD,:DWORD
ElfRegisterEventSource equ <ElfRegisterEventSourceA>

ElfReportEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ElfReportEvent equ <ElfReportEventA>

EnableTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableTraceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableTraceEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EncryptFileA PROTO :DWORD
EncryptFile equ <EncryptFileA>

EncryptedFileKeyInfo PROTO :DWORD,:DWORD,:DWORD
EncryptionDisable PROTO :DWORD,:DWORD
EnumDependentServicesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumDependentServices equ <EnumDependentServicesA>

EnumDynamicTimeZoneInformation PROTO :DWORD,:DWORD
EnumServicesStatusA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumServicesStatus equ <EnumServicesStatusA>

EnumServicesStatusExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumServicesStatusEx equ <EnumServicesStatusExA>

EnumerateTraceGuids PROTO :DWORD,:DWORD,:DWORD
EnumerateTraceGuidsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EqualDomainSid PROTO :DWORD,:DWORD,:DWORD
EqualPrefixSid PROTO :DWORD,:DWORD
EqualSid PROTO :DWORD,:DWORD
EtwLogSysConfigExtension PROTO :DWORD,:DWORD
EventAccessControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventAccessQuery PROTO :DWORD,:DWORD,:DWORD
EventAccessRemove PROTO :DWORD
EventActivityIdControl PROTO :DWORD,:DWORD
EventEnabled PROTO :DWORD,:DWORD,:DWORD
EventProviderEnabled PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventRegister PROTO :DWORD,:DWORD,:DWORD,:DWORD
EventSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventUnregister PROTO :DWORD,:DWORD
EventWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteEndScenario PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteStartScenario PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteTransfer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FileEncryptionStatusA PROTO :DWORD,:DWORD
FileEncryptionStatus equ <FileEncryptionStatusA>

FindFirstFreeAce PROTO :DWORD,:DWORD
FlushEfsCache PROTO :DWORD
FlushTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FlushTrace equ <FlushTraceA>

FreeEncryptedFileKeyInfo PROTO :DWORD
FreeEncryptedFileMetadata PROTO :DWORD
FreeEncryptionCertificateHashList PROTO :DWORD
FreeInheritedFromArray PROTO :DWORD,:DWORD,:DWORD
FreeSid PROTO :DWORD
GetAccessPermissionsForObjectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAccessPermissionsForObject equ <GetAccessPermissionsForObjectA>

GetAce PROTO :DWORD,:DWORD,:DWORD
GetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetAuditedPermissionsFromAclA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetAuditedPermissionsFromAcl equ <GetAuditedPermissionsFromAclA>

GetCurrentHwProfileA PROTO :DWORD
GetCurrentHwProfile equ <GetCurrentHwProfileA>

GetDynamicTimeZoneInformationEffectiveYears PROTO :DWORD,:DWORD,:DWORD
GetEffectiveRightsFromAclA PROTO :DWORD,:DWORD,:DWORD
GetEffectiveRightsFromAcl equ <GetEffectiveRightsFromAclA>

GetEncryptedFileMetadata PROTO :DWORD,:DWORD,:DWORD
GetEventLogInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetExplicitEntriesFromAclA PROTO :DWORD,:DWORD,:DWORD
GetExplicitEntriesFromAcl equ <GetExplicitEntriesFromAclA>

GetFileSecurityA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFileSecurity equ <GetFileSecurityA>

GetInheritanceSourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetInheritanceSource equ <GetInheritanceSourceA>

GetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetLengthSid PROTO :DWORD
GetLocalManagedApplicationData PROTO :DWORD,:DWORD,:DWORD
GetLocalManagedApplications PROTO :DWORD,:DWORD,:DWORD
GetManagedApplicationCategories PROTO :DWORD,:DWORD
GetManagedApplications PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetMultipleTrusteeA PROTO :DWORD
GetMultipleTrustee equ <GetMultipleTrusteeA>

GetMultipleTrusteeOperationA PROTO :DWORD
GetMultipleTrusteeOperation equ <GetMultipleTrusteeOperationA>

GetNamedSecurityInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNamedSecurityInfo equ <GetNamedSecurityInfoA>

GetNamedSecurityInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNamedSecurityInfoEx equ <GetNamedSecurityInfoExA>

GetNumberOfEventLogRecords PROTO :DWORD,:DWORD
GetOldestEventLogRecord PROTO :DWORD,:DWORD
GetOverlappedAccessResults PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorLength PROTO :DWORD
GetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
GetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSecurityInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetSecurityInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetSecurityInfoEx equ <GetSecurityInfoExA>

GetServiceDisplayNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetServiceDisplayName equ <GetServiceDisplayNameA>

GetServiceKeyNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetServiceKeyName equ <GetServiceKeyNameA>

GetSidIdentifierAuthority PROTO :DWORD
GetSidLengthRequired PROTO :DWORD
GetSidSubAuthority PROTO :DWORD,:DWORD
GetSidSubAuthorityCount PROTO :DWORD
GetStringConditionFromBinary PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThreadWaitChain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTraceEnableFlags PROTO :DWORD,:DWORD
GetTraceEnableLevel PROTO :DWORD,:DWORD
GetTraceLoggerHandle PROTO :DWORD
GetTrusteeFormA PROTO :DWORD
GetTrusteeForm equ <GetTrusteeFormA>

GetTrusteeNameA PROTO :DWORD
GetTrusteeName equ <GetTrusteeNameA>

GetTrusteeTypeA PROTO :DWORD
GetTrusteeType equ <GetTrusteeTypeA>

GetUserNameA PROTO :DWORD,:DWORD
GetUserName equ <GetUserNameA>

GetWindowsAccountDomainSid PROTO :DWORD,:DWORD,:DWORD
I_ScSetServiceBitsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_ScSetServiceBits equ <I_ScSetServiceBitsA>

ImpersonateAnonymousToken PROTO :DWORD
ImpersonateLoggedOnUser PROTO :DWORD
ImpersonateNamedPipeClient PROTO :DWORD
ImpersonateSelf PROTO :DWORD
InitializeAcl PROTO :DWORD,:DWORD,:DWORD
InitializeSecurityDescriptor PROTO :DWORD,:DWORD
InitializeSid PROTO :DWORD,:DWORD,:DWORD
InitiateShutdownA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitiateShutdown equ <InitiateShutdownA>

InitiateSystemShutdownA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitiateSystemShutdown equ <InitiateSystemShutdownA>

InitiateSystemShutdownExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitiateSystemShutdownEx equ <InitiateSystemShutdownExA>

InstallApplication PROTO :DWORD
IsTextUnicode PROTO :DWORD,:DWORD,:DWORD
IsTokenRestricted PROTO :DWORD
IsTokenUntrusted PROTO :DWORD
IsValidAcl PROTO :DWORD
IsValidRelativeSecurityDescriptor PROTO :DWORD,:DWORD,:DWORD
IsValidSecurityDescriptor PROTO :DWORD
IsValidSid PROTO :DWORD
IsWellKnownSid PROTO :DWORD,:DWORD
LockServiceDatabase PROTO :DWORD
LogonUserA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LogonUser equ <LogonUserA>

LogonUserExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LogonUserEx equ <LogonUserExA>

LookupAccountNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LookupAccountName equ <LookupAccountNameA>

LookupAccountSidA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LookupAccountSid equ <LookupAccountSidA>

LookupPrivilegeDisplayNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LookupPrivilegeDisplayName equ <LookupPrivilegeDisplayNameA>

LookupPrivilegeNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
LookupPrivilegeName equ <LookupPrivilegeNameA>

LookupPrivilegeValueA PROTO :DWORD,:DWORD,:DWORD
LookupPrivilegeValue equ <LookupPrivilegeValueA>

LookupSecurityDescriptorPartsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LookupSecurityDescriptorParts equ <LookupSecurityDescriptorPartsA>

LsaAddAccountRights PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaAddPrivilegesToAccount PROTO :DWORD,:DWORD
LsaClearAuditLog PROTO :DWORD
LsaClose PROTO :DWORD
LsaCreateAccount PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaCreateSecret PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaCreateTrustedDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaCreateTrustedDomainEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaDelete PROTO :DWORD
LsaDeleteTrustedDomain PROTO :DWORD,:DWORD
LsaEnumerateAccountRights PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaEnumerateAccounts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaEnumerateAccountsWithUserRight PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaEnumeratePrivileges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaEnumeratePrivilegesOfAccount PROTO :DWORD,:DWORD
LsaEnumerateTrustedDomains PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaEnumerateTrustedDomainsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaFreeMemory PROTO :DWORD
LsaGetAppliedCAPIDs PROTO :DWORD,:DWORD,:DWORD
LsaGetQuotasForAccount PROTO :DWORD,:DWORD
LsaGetRemoteUserName PROTO :DWORD,:DWORD,:DWORD
LsaGetSystemAccessAccount PROTO :DWORD,:DWORD
LsaGetUserName PROTO :DWORD,:DWORD
LsaICLookupNames PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaICLookupNamesWithCreds PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaICLookupSids PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaICLookupSidsWithCreds PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupNames PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupNames2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupPrivilegeDisplayName PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaLookupPrivilegeName PROTO :DWORD,:DWORD,:DWORD
LsaLookupPrivilegeValue PROTO :DWORD,:DWORD,:DWORD
LsaLookupSids PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupSids2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaManageSidNameMapping PROTO :DWORD,:DWORD,:DWORD
LsaNtStatusToWinError PROTO :DWORD
LsaOpenAccount PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaOpenPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaOpenPolicySce PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaOpenSecret PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaOpenTrustedDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaOpenTrustedDomainByName PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaQueryCAPs PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaQueryDomainInformationPolicy PROTO :DWORD,:DWORD,:DWORD
LsaQueryForestTrustInformation PROTO :DWORD,:DWORD,:DWORD
LsaQueryInfoTrustedDomain PROTO :DWORD,:DWORD,:DWORD
LsaQueryInformationPolicy PROTO :DWORD,:DWORD,:DWORD
LsaQuerySecret PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaQuerySecurityObject PROTO :DWORD,:DWORD,:DWORD
LsaQueryTrustedDomainInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaQueryTrustedDomainInfoByName PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaRemoveAccountRights PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaRemovePrivilegesFromAccount PROTO :DWORD,:DWORD,:DWORD
LsaRetrievePrivateData PROTO :DWORD,:DWORD,:DWORD
LsaSetCAPs PROTO :DWORD,:DWORD,:DWORD
LsaSetDomainInformationPolicy PROTO :DWORD,:DWORD,:DWORD
LsaSetForestTrustInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaSetInformationPolicy PROTO :DWORD,:DWORD,:DWORD
LsaSetInformationTrustedDomain PROTO :DWORD,:DWORD,:DWORD
LsaSetQuotasForAccount PROTO :DWORD,:DWORD
LsaSetSecret PROTO :DWORD,:DWORD,:DWORD
LsaSetSecurityObject PROTO :DWORD,:DWORD,:DWORD
LsaSetSystemAccessAccount PROTO :DWORD,:DWORD
LsaSetTrustedDomainInfoByName PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaSetTrustedDomainInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
LsaStorePrivateData PROTO :DWORD,:DWORD,:DWORD
MIDL_user_free_Ext PROTO :DWORD
MSChapSrvChangePassword PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MSChapSrvChangePassword2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MakeAbsoluteSD PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MakeAbsoluteSD2 PROTO :DWORD,:DWORD
MakeSelfRelativeSD PROTO :DWORD,:DWORD,:DWORD
MapGenericMask PROTO :DWORD,:DWORD
NotifyBootConfigStatus PROTO :DWORD
NotifyChangeEventLog PROTO :DWORD,:DWORD
NotifyServiceStatusChangeA PROTO :DWORD,:DWORD,:DWORD
NotifyServiceStatusChange equ <NotifyServiceStatusChangeA>

ObjectCloseAuditAlarmA PROTO :DWORD,:DWORD,:DWORD
ObjectCloseAuditAlarm equ <ObjectCloseAuditAlarmA>

ObjectDeleteAuditAlarmA PROTO :DWORD,:DWORD,:DWORD
ObjectDeleteAuditAlarm equ <ObjectDeleteAuditAlarmA>

ObjectOpenAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ObjectOpenAuditAlarm equ <ObjectOpenAuditAlarmA>

ObjectPrivilegeAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ObjectPrivilegeAuditAlarm equ <ObjectPrivilegeAuditAlarmA>

OpenBackupEventLogA PROTO :DWORD,:DWORD
OpenBackupEventLog equ <OpenBackupEventLogA>

OpenEncryptedFileRawA PROTO :DWORD,:DWORD,:DWORD
OpenEncryptedFileRaw equ <OpenEncryptedFileRawA>

OpenEventLogA PROTO :DWORD,:DWORD
OpenEventLog equ <OpenEventLogA>

OpenProcessToken PROTO :DWORD,:DWORD,:DWORD
OpenSCManagerA PROTO :DWORD,:DWORD,:DWORD
OpenSCManager equ <OpenSCManagerA>

OpenServiceA PROTO :DWORD,:DWORD,:DWORD
OpenService equ <OpenServiceA>

OpenThreadToken PROTO :DWORD,:DWORD,:DWORD,:DWORD
OpenThreadWaitChainSession PROTO :DWORD,:DWORD
OpenTraceA PROTO :DWORD
OpenTrace equ <OpenTraceA>

OperationEnd PROTO :DWORD
OperationStart PROTO :DWORD
PerfAddCounters PROTO :DWORD,:DWORD,:DWORD
PerfCloseQueryHandle PROTO :DWORD
PerfCreateInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfDecrementULongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfDecrementULongLongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfDeleteCounters PROTO :DWORD,:DWORD,:DWORD
PerfDeleteInstance PROTO :DWORD,:DWORD
PerfEnumerateCounterSet PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfEnumerateCounterSetInstances PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfIncrementULongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfIncrementULongLongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfOpenQueryHandle PROTO :DWORD,:DWORD
PerfQueryCounterData PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfQueryCounterInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfQueryCounterSetRegistrationInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfQueryInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfRegCloseKey PROTO :DWORD
PerfRegEnumKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfRegEnumValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfRegQueryInfoKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfRegQueryValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfRegSetValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfSetCounterRefValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfSetCounterSetInfo PROTO :DWORD,:DWORD,:DWORD
PerfSetULongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
PerfSetULongLongCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PerfStartProvider PROTO :DWORD,:DWORD,:DWORD
PerfStartProviderEx PROTO :DWORD,:DWORD,:DWORD
PerfStopProvider PROTO :DWORD
PrivilegeCheck PROTO :DWORD,:DWORD,:DWORD
PrivilegedServiceAuditAlarmA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PrivilegedServiceAuditAlarm equ <PrivilegedServiceAuditAlarmA>

ProcessTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryAllTracesA PROTO :DWORD,:DWORD,:DWORD
QueryAllTraces equ <QueryAllTracesA>

QueryRecoveryAgentsOnEncryptedFile PROTO :DWORD,:DWORD
QuerySecurityAccessMask PROTO :DWORD,:DWORD
QueryServiceConfig2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryServiceConfig2 equ <QueryServiceConfig2A>

QueryServiceConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryServiceConfig equ <QueryServiceConfigA>

QueryServiceDynamicInformation PROTO :DWORD,:DWORD,:DWORD
QueryServiceLockStatusA PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryServiceLockStatus equ <QueryServiceLockStatusA>

QueryServiceObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryServiceStatus PROTO :DWORD,:DWORD
QueryServiceStatusEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryTrace equ <QueryTraceA>

QueryUsersOnEncryptedFile PROTO :DWORD,:DWORD
ReadEncryptedFileRaw PROTO :DWORD,:DWORD,:DWORD
ReadEventLogA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadEventLog equ <ReadEventLogA>

RegCloseKey PROTO :DWORD
RegConnectRegistryA PROTO :DWORD,:DWORD,:DWORD
RegConnectRegistry equ <RegConnectRegistryA>

RegConnectRegistryExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegConnectRegistryEx equ <RegConnectRegistryExA>

RegCopyTreeA PROTO :DWORD,:DWORD,:DWORD
RegCopyTree equ <RegCopyTreeA>

RegCreateKeyA PROTO :DWORD,:DWORD,:DWORD
RegCreateKey equ <RegCreateKeyA>

RegCreateKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegCreateKeyEx equ <RegCreateKeyExA>

RegCreateKeyTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegCreateKeyTransacted equ <RegCreateKeyTransactedA>

RegDeleteKeyA PROTO :DWORD,:DWORD
RegDeleteKey equ <RegDeleteKeyA>

RegDeleteKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegDeleteKeyEx equ <RegDeleteKeyExA>

RegDeleteKeyTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegDeleteKeyTransacted equ <RegDeleteKeyTransactedA>

RegDeleteKeyValueA PROTO :DWORD,:DWORD,:DWORD
RegDeleteKeyValue equ <RegDeleteKeyValueA>

RegDeleteTreeA PROTO :DWORD,:DWORD
RegDeleteTree equ <RegDeleteTreeA>

RegDeleteValueA PROTO :DWORD,:DWORD
RegDeleteValue equ <RegDeleteValueA>

RegDisablePredefinedCache PROTO
RegDisablePredefinedCacheEx PROTO
RegDisableReflectionKey PROTO :DWORD
RegEnableReflectionKey PROTO :DWORD
RegEnumKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegEnumKey equ <RegEnumKeyA>

RegEnumKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegEnumKeyEx equ <RegEnumKeyExA>

RegEnumValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegEnumValue equ <RegEnumValueA>

RegFlushKey PROTO :DWORD
RegGetKeySecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegGetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegGetValue equ <RegGetValueA>

RegLoadAppKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegLoadAppKey equ <RegLoadAppKeyA>

RegLoadKeyA PROTO :DWORD,:DWORD,:DWORD
RegLoadKey equ <RegLoadKeyA>

RegLoadMUIStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegLoadMUIString equ <RegLoadMUIStringA>

RegNotifyChangeKeyValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenCurrentUser PROTO :DWORD,:DWORD
RegOpenKeyA PROTO :DWORD,:DWORD,:DWORD
RegOpenKey equ <RegOpenKeyA>

RegOpenKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenKeyEx equ <RegOpenKeyExA>

RegOpenKeyTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenKeyTransacted equ <RegOpenKeyTransactedA>

RegOpenUserClassesRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegOverridePredefKey PROTO :DWORD,:DWORD
RegQueryInfoKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKey equ <RegQueryInfoKeyA>

RegQueryMultipleValuesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryMultipleValues equ <RegQueryMultipleValuesA>

RegQueryReflectionKey PROTO :DWORD,:DWORD
RegQueryValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegQueryValue equ <RegQueryValueA>

RegQueryValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryValueEx equ <RegQueryValueExA>

RegRenameKey PROTO :DWORD,:DWORD,:DWORD
RegReplaceKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegReplaceKey equ <RegReplaceKeyA>

RegRestoreKeyA PROTO :DWORD,:DWORD,:DWORD
RegRestoreKey equ <RegRestoreKeyA>

RegSaveKeyA PROTO :DWORD,:DWORD,:DWORD
RegSaveKey equ <RegSaveKeyA>

RegSaveKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegSaveKeyEx equ <RegSaveKeyExA>

RegSetKeySecurity PROTO :DWORD,:DWORD,:DWORD
RegSetKeyValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetKeyValue equ <RegSetKeyValueA>

RegSetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetValue equ <RegSetValueA>

RegSetValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetValueEx equ <RegSetValueExA>

RegUnLoadKeyA PROTO :DWORD,:DWORD
RegUnLoadKey equ <RegUnLoadKeyA>

RegisterEventSourceA PROTO :DWORD,:DWORD
RegisterEventSource equ <RegisterEventSourceA>

RegisterServiceCtrlHandlerA PROTO :DWORD,:DWORD
RegisterServiceCtrlHandler equ <RegisterServiceCtrlHandlerA>

RegisterServiceCtrlHandlerExA PROTO :DWORD,:DWORD,:DWORD
RegisterServiceCtrlHandlerEx equ <RegisterServiceCtrlHandlerExA>

RegisterTraceGuidsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterTraceGuids equ <RegisterTraceGuidsA>

RegisterWaitChainCOMCallback PROTO :DWORD,:DWORD
RemoteRegEnumKeyWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemoteRegEnumValueWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemoteRegQueryInfoKeyWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemoteRegQueryValueWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemoveTraceCallback PROTO :DWORD
RemoveUsersFromEncryptedFile PROTO :DWORD,:DWORD
ReportEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReportEvent equ <ReportEventA>

RevertToSelf PROTO
SafeBaseRegGetKeySecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
SaferCloseLevel PROTO :DWORD
SaferComputeTokenFromLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaferCreateLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaferGetLevelInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaferGetPolicyInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaferIdentifyLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD
SaferRecordEventLogEntry PROTO :DWORD,:DWORD,:DWORD
SaferSetLevelInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SaferSetPolicyInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaferiIsExecutableFileType PROTO :DWORD,:DWORD
SetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetEncryptedFileMetadata PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetEntriesInAccessListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetEntriesInAccessList equ <SetEntriesInAccessListA>

SetEntriesInAclA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetEntriesInAcl equ <SetEntriesInAclA>

SetEntriesInAuditListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetEntriesInAuditList equ <SetEntriesInAuditListA>

SetFileSecurityA PROTO :DWORD,:DWORD,:DWORD
SetFileSecurity equ <SetFileSecurityA>

SetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD
SetNamedSecurityInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetNamedSecurityInfo equ <SetNamedSecurityInfoA>

SetNamedSecurityInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetNamedSecurityInfoEx equ <SetNamedSecurityInfoExA>

SetPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPrivateObjectSecurityEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetSecurityAccessMask PROTO :DWORD,:DWORD
SetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
SetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetSecurityInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetSecurityInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetSecurityInfoEx equ <SetSecurityInfoExA>

SetServiceBits PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetServiceObjectSecurity PROTO :DWORD,:DWORD,:DWORD
SetServiceStatus PROTO :DWORD,:DWORD
SetThreadToken PROTO :DWORD,:DWORD
SetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetTraceCallback PROTO :DWORD,:DWORD
SetUserFileEncryptionKey PROTO :DWORD
SetUserFileEncryptionKeyEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
StartServiceA PROTO :DWORD,:DWORD,:DWORD
StartService equ <StartServiceA>

StartServiceCtrlDispatcherA PROTO :DWORD
StartServiceCtrlDispatcher equ <StartServiceCtrlDispatcherA>

StartTraceA PROTO :DWORD,:DWORD,:DWORD
StartTrace equ <StartTraceA>

StopTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StopTrace equ <StopTraceA>

SystemFunction001 PROTO :DWORD,:DWORD,:DWORD
SystemFunction002 PROTO :DWORD,:DWORD,:DWORD
SystemFunction003 PROTO :DWORD,:DWORD
SystemFunction004 PROTO :DWORD,:DWORD,:DWORD
SystemFunction005 PROTO :DWORD,:DWORD,:DWORD
SystemFunction006 PROTO :DWORD,:DWORD
SystemFunction007 PROTO :DWORD,:DWORD
SystemFunction008 PROTO :DWORD,:DWORD,:DWORD
SystemFunction009 PROTO :DWORD,:DWORD,:DWORD
SystemFunction010 PROTO :DWORD,:DWORD,:DWORD
SystemFunction011 PROTO :DWORD,:DWORD,:DWORD
SystemFunction012 PROTO :DWORD,:DWORD,:DWORD
SystemFunction013 PROTO :DWORD,:DWORD,:DWORD
SystemFunction014 PROTO :DWORD,:DWORD,:DWORD
SystemFunction015 PROTO :DWORD,:DWORD,:DWORD
SystemFunction016 PROTO :DWORD,:DWORD,:DWORD
SystemFunction017 PROTO :DWORD,:DWORD,:DWORD
SystemFunction018 PROTO :DWORD,:DWORD,:DWORD
SystemFunction019 PROTO :DWORD,:DWORD,:DWORD
SystemFunction020 PROTO :DWORD,:DWORD,:DWORD
SystemFunction021 PROTO :DWORD,:DWORD,:DWORD
SystemFunction022 PROTO :DWORD,:DWORD,:DWORD
SystemFunction023 PROTO :DWORD,:DWORD,:DWORD
SystemFunction024 PROTO :DWORD,:DWORD,:DWORD
SystemFunction025 PROTO :DWORD,:DWORD,:DWORD
SystemFunction026 PROTO :DWORD,:DWORD,:DWORD
SystemFunction027 PROTO :DWORD,:DWORD,:DWORD
SystemFunction028 PROTO :DWORD,:DWORD
SystemFunction029 PROTO :DWORD,:DWORD
SystemFunction030 PROTO :DWORD,:DWORD
SystemFunction031 PROTO :DWORD,:DWORD
SystemFunction032 PROTO :DWORD,:DWORD
SystemFunction033 PROTO :DWORD,:DWORD
SystemFunction034 PROTO :DWORD,:DWORD,:DWORD
SystemFunction036 PROTO :DWORD,:DWORD
SystemFunction040 PROTO :DWORD,:DWORD,:DWORD
SystemFunction041 PROTO :DWORD,:DWORD,:DWORD
TraceEvent PROTO :DWORD,:DWORD,:DWORD
TraceEventInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceMessageVa PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceQueryInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TreeResetNamedSecurityInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TreeResetNamedSecurityInfo equ <TreeResetNamedSecurityInfoA>

TreeSetNamedSecurityInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TreeSetNamedSecurityInfo equ <TreeSetNamedSecurityInfoA>

TrusteeAccessToObjectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TrusteeAccessToObject equ <TrusteeAccessToObjectA>

UninstallApplication PROTO :DWORD,:DWORD
UnlockServiceDatabase PROTO :DWORD
UnregisterTraceGuids PROTO :DWORD,:DWORD
UpdateTraceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UpdateTrace equ <UpdateTraceA>

UsePinForEncryptedFilesA PROTO :DWORD,:DWORD,:DWORD
UsePinForEncryptedFiles equ <UsePinForEncryptedFilesA>

WaitServiceState PROTO :DWORD,:DWORD,:DWORD,:DWORD
WriteEncryptedFileRaw PROTO :DWORD,:DWORD,:DWORD

