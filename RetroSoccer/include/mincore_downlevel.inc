; ..\X86\mincore_downlevel.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeResultList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
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
AddMandatoryAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdjustTokenGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdjustTokenPrivileges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateAndInitializeSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateLocallyUniqueId PROTO :DWORD
AreAllAccessesGranted PROTO :DWORD,:DWORD
AreAnyAccessesGranted PROTO :DWORD,:DWORD
CLSIDFromProgID PROTO :DWORD,:DWORD
CLSIDFromString PROTO :DWORD,:DWORD

CharLowerBuffA PROTO :DWORD,:DWORD
CharLowerBuff equ <CharLowerBuffA>

CharNextA PROTO :DWORD
CharNext equ <CharNextA>

CharNextExA PROTO :DWORD,:DWORD,:DWORD
CharNextEx equ <CharNextExA>

CharPrevA PROTO :DWORD,:DWORD
CharPrev equ <CharPrevA>

CharPrevExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CharPrevEx equ <CharPrevExA>

CharUpperBuffA PROTO :DWORD,:DWORD
CharUpperBuff equ <CharUpperBuffA>

CheckTokenMembership PROTO :DWORD,:DWORD,:DWORD
CloseServiceHandle PROTO :DWORD
CoCopyProxy PROTO :DWORD,:DWORD
CoCreateFreeThreadedMarshaler PROTO :DWORD,:DWORD
CoCreateGuid PROTO :DWORD
CoCreateInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoCreateInstanceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoDisconnectObject PROTO :DWORD,:DWORD
CoFreeUnusedLibraries PROTO
CoFreeUnusedLibrariesEx PROTO :DWORD,:DWORD
CoGetApartmentType PROTO :DWORD,:DWORD
CoGetClassObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetCurrentLogicalThreadId PROTO :DWORD
CoGetInterfaceAndReleaseStream PROTO :DWORD,:DWORD,:DWORD
CoGetMalloc PROTO :DWORD,:DWORD
CoGetMarshalSizeMax PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetObjectContext PROTO :DWORD,:DWORD
CoGetStdMarshalEx PROTO :DWORD,:DWORD,:DWORD
CoGetTreatAsClass PROTO :DWORD,:DWORD
CoImpersonateClient PROTO
CoInitializeEx PROTO :DWORD,:DWORD
CoInitializeSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoMarshalInterThreadInterfaceInStream PROTO :DWORD,:DWORD,:DWORD
CoMarshalInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoRegisterClassObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoRegisterInitializeSpy PROTO :DWORD,:DWORD
CoRegisterMessageFilter PROTO :DWORD,:DWORD
CoReleaseMarshalData PROTO :DWORD
CoRevertToSelf PROTO
CoRevokeClassObject PROTO :DWORD
CoRevokeInitializeSpy PROTO :DWORD,:DWORD
CoSetProxyBlanket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoTaskMemAlloc PROTO :DWORD
CoTaskMemFree PROTO :DWORD
CoTaskMemRealloc PROTO :DWORD,:DWORD
CoUninitialize PROTO
CoUnmarshalInterface PROTO :DWORD,:DWORD,:DWORD
CoWaitForMultipleHandles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConvertToAutoInheritPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopySid PROTO :DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityWithMultipleInheritance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateRestrictedToken PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateStreamOnHGlobal PROTO :DWORD,:DWORD,:DWORD
CreateWellKnownSid PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredFree PROTO :DWORD
DeleteAce PROTO :DWORD,:DWORD
DestroyPrivateObjectSecurity PROTO :DWORD
DuplicateToken PROTO :DWORD,:DWORD,:DWORD
DuplicateTokenEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EqualDomainSid PROTO :DWORD,:DWORD,:DWORD
EqualPrefixSid PROTO :DWORD,:DWORD
EqualSid PROTO :DWORD,:DWORD
EventActivityIdControl PROTO :DWORD,:DWORD
EventEnabled PROTO :DWORD,:DWORD,:DWORD
EventProviderEnabled PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventRegister PROTO :DWORD,:DWORD,:DWORD,:DWORD
EventUnregister PROTO :DWORD,:DWORD
EventWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteTransfer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindFirstFreeAce PROTO :DWORD,:DWORD
FreePropVariantArray PROTO :DWORD,:DWORD
FreeSid PROTO :DWORD
GetAce PROTO :DWORD,:DWORD,:DWORD
GetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCurrentProcessExplicitAppUserModelID PROTO :DWORD
GetHGlobalFromStream PROTO :DWORD,:DWORD
GetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetLengthSid PROTO :DWORD
GetPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorLength PROTO :DWORD
GetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
GetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSidIdentifierAuthority PROTO :DWORD
GetSidLengthRequired PROTO :DWORD
GetSidSubAuthority PROTO :DWORD,:DWORD
GetSidSubAuthorityCount PROTO :DWORD
GetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTraceEnableFlags PROTO :DWORD,:DWORD
GetTraceEnableLevel PROTO :DWORD,:DWORD
GetTraceLoggerHandle PROTO :DWORD
HashData PROTO :DWORD,:DWORD,:DWORD,:DWORD
IIDFromString PROTO :DWORD,:DWORD
IStream_Copy PROTO :DWORD,:DWORD,:DWORD
IStream_Read PROTO :DWORD,:DWORD,:DWORD
IStream_ReadStr PROTO :DWORD,:DWORD
IStream_Reset PROTO :DWORD
IStream_Size PROTO :DWORD,:DWORD
IStream_Write PROTO :DWORD,:DWORD,:DWORD
IStream_WriteStr PROTO :DWORD,:DWORD
IUnknown_AtomicRelease PROTO :DWORD
IUnknown_GetSite PROTO :DWORD,:DWORD,:DWORD
IUnknown_QueryService PROTO :DWORD,:DWORD,:DWORD,:DWORD
IUnknown_Set PROTO :DWORD,:DWORD
IUnknown_SetSite PROTO :DWORD,:DWORD
IdnToAscii PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IdnToUnicode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitializeAcl PROTO :DWORD,:DWORD,:DWORD
InitializeSecurityDescriptor PROTO :DWORD,:DWORD
InitializeSid PROTO :DWORD,:DWORD,:DWORD

IsInternetESCEnabled PROTO
IsTokenRestricted PROTO :DWORD
IsValidAcl PROTO :DWORD
IsValidSecurityDescriptor PROTO :DWORD
IsValidSid PROTO :DWORD
MakeAbsoluteSD PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MakeSelfRelativeSD PROTO :DWORD,:DWORD,:DWORD
OpenProcessToken PROTO :DWORD,:DWORD,:DWORD
OpenThreadToken PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathAddBackslashA PROTO :DWORD
PathAddBackslash equ <PathAddBackslashA>

PathAddExtensionA PROTO :DWORD,:DWORD
PathAddExtension equ <PathAddExtensionA>

PathAppendA PROTO :DWORD,:DWORD
PathAppend equ <PathAppendA>

PathCanonicalizeA PROTO :DWORD,:DWORD
PathCanonicalize equ <PathCanonicalizeA>

PathCommonPrefixA PROTO :DWORD,:DWORD,:DWORD
PathCommonPrefix equ <PathCommonPrefixA>

PathCreateFromUrlAlloc PROTO :DWORD,:DWORD,:DWORD
PathFileExistsA PROTO :DWORD
PathFileExists equ <PathFileExistsA>

PathFindExtensionA PROTO :DWORD
PathFindExtension equ <PathFindExtensionA>

PathFindFileNameA PROTO :DWORD
PathFindFileName equ <PathFindFileNameA>

PathFindNextComponentA PROTO :DWORD
PathFindNextComponent equ <PathFindNextComponentA>

PathGetArgsA PROTO :DWORD
PathGetArgs equ <PathGetArgsA>

PathGetDriveNumberA PROTO :DWORD
PathGetDriveNumber equ <PathGetDriveNumberA>

PathIsFileSpecA PROTO :DWORD
PathIsFileSpec equ <PathIsFileSpecA>

PathIsLFNFileSpecA PROTO :DWORD
PathIsLFNFileSpec equ <PathIsLFNFileSpecA>

PathIsPrefixA PROTO :DWORD,:DWORD
PathIsPrefix equ <PathIsPrefixA>

PathIsRelativeA PROTO :DWORD
PathIsRelative equ <PathIsRelativeA>

PathIsRootA PROTO :DWORD
PathIsRoot equ <PathIsRootA>

PathIsSameRootA PROTO :DWORD,:DWORD
PathIsSameRoot equ <PathIsSameRootA>

PathIsUNCA PROTO :DWORD
PathIsUNC equ <PathIsUNCA>

PathIsUNCServerA PROTO :DWORD
PathIsUNCServer equ <PathIsUNCServerA>

PathIsUNCServerShareA PROTO :DWORD
PathIsUNCServerShare equ <PathIsUNCServerShareA>

PathParseIconLocationA PROTO :DWORD
PathParseIconLocation equ <PathParseIconLocationA>

PathRelativePathToA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathRelativePathTo equ <PathRelativePathToA>

PathRemoveBackslashA PROTO :DWORD
PathRemoveBackslash equ <PathRemoveBackslashA>

PathRemoveBlanksA PROTO :DWORD
PathRemoveBlanks equ <PathRemoveBlanksA>

PathRemoveExtensionA PROTO :DWORD
PathRemoveExtension equ <PathRemoveExtensionA>

PathRemoveFileSpecA PROTO :DWORD
PathRemoveFileSpec equ <PathRemoveFileSpecA>

PathRenameExtensionA PROTO :DWORD,:DWORD
PathRenameExtension equ <PathRenameExtensionA>

PathSkipRootA PROTO :DWORD
PathSkipRoot equ <PathSkipRootA>

PathStripPathA PROTO :DWORD
PathStripPath equ <PathStripPathA>

PathStripToRootA PROTO :DWORD
PathStripToRoot equ <PathStripToRootA>

PathUnquoteSpacesA PROTO :DWORD
PathUnquoteSpaces equ <PathUnquoteSpacesA>

PrivilegeCheck PROTO :DWORD,:DWORD,:DWORD
ProgIDFromCLSID PROTO :DWORD,:DWORD
PropVariantClear PROTO :DWORD
PropVariantCopy PROTO :DWORD,:DWORD
QISearch PROTO :DWORD,:DWORD,:DWORD,:DWORD
QuerySecurityAccessMask PROTO :DWORD,:DWORD
RegCloseKey PROTO :DWORD
RegCreateKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegCreateKeyEx equ <RegCreateKeyExA>

RegDeleteKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegDeleteKeyEx equ <RegDeleteKeyExA>

RegDeleteTreeA PROTO :DWORD,:DWORD
RegDeleteTree equ <RegDeleteTreeA>

RegDeleteValueA PROTO :DWORD,:DWORD
RegDeleteValue equ <RegDeleteValueA>

RegDisablePredefinedCacheEx PROTO
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
RegOpenKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenKeyEx equ <RegOpenKeyExA>

RegOpenUserClassesRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKey equ <RegQueryInfoKeyA>

RegQueryValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryValueEx equ <RegQueryValueExA>

RegRestoreKeyA PROTO :DWORD,:DWORD,:DWORD
RegRestoreKey equ <RegRestoreKeyA>

RegSaveKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegSaveKeyEx equ <RegSaveKeyExA>

RegSetKeySecurity PROTO :DWORD,:DWORD,:DWORD
RegSetValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetValueEx equ <RegSetValueExA>

RegUnLoadKeyA PROTO :DWORD,:DWORD
RegUnLoadKey equ <RegUnLoadKeyA>

RevertToSelf PROTO
SHAnsiToAnsi PROTO :DWORD,:DWORD,:DWORD
SHAnsiToUnicode PROTO :DWORD,:DWORD,:DWORD
SHCopyKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHCopyKey equ <SHCopyKeyA>

SHCreateMemStream PROTO :DWORD,:DWORD
SHCreateStreamOnFileA PROTO :DWORD,:DWORD,:DWORD
SHCreateStreamOnFile equ <SHCreateStreamOnFileA>

SHCreateStreamOnFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateThreadRef PROTO :DWORD,:DWORD
SHDeleteEmptyKeyA PROTO :DWORD,:DWORD
SHDeleteEmptyKey equ <SHDeleteEmptyKeyA>

SHDeleteKeyA PROTO :DWORD,:DWORD
SHDeleteKey equ <SHDeleteKeyA>

SHDeleteValueA PROTO :DWORD,:DWORD,:DWORD
SHDeleteValue equ <SHDeleteValueA>

SHEnumKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHEnumKeyEx equ <SHEnumKeyExA>

SHEnumValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHEnumValue equ <SHEnumValueA>

SHGetThreadRef PROTO :DWORD
SHGetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetValue equ <SHGetValueA>

SHLoadIndirectString PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenRegStream2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenRegStream2 equ <SHOpenRegStream2A>

SHOpenRegStreamA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenRegStream equ <SHOpenRegStreamA>

SHQueryInfoKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHQueryInfoKey equ <SHQueryInfoKeyA>

SHQueryValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHQueryValueEx equ <SHQueryValueExA>

SHRegCloseUSKey PROTO :DWORD
SHRegDeleteUSValueA PROTO :DWORD,:DWORD,:DWORD
SHRegDeleteUSValue equ <SHRegDeleteUSValueA>

SHRegDuplicateHKey PROTO :DWORD
SHRegEnumUSKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegEnumUSKey equ <SHRegEnumUSKeyA>

SHRegGetBoolUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHRegGetBoolUSValue equ <SHRegGetBoolUSValueA>

SHRegGetPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegGetPath equ <SHRegGetPathA>

SHRegGetUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegGetUSValue equ <SHRegGetUSValueA>

SHRegGetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegGetValue equ <SHRegGetValueA>

SHRegOpenUSKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegOpenUSKey equ <SHRegOpenUSKeyA>

SHRegQueryUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegQueryUSValue equ <SHRegQueryUSValueA>

SHRegSetPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegSetPath equ <SHRegSetPathA>

SHRegSetUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegSetUSValue equ <SHRegSetUSValueA>

SHReleaseThreadRef PROTO
SHSetThreadRef PROTO :DWORD
SHSetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHSetValue equ <SHSetValueA>

SHUnicodeToAnsi PROTO :DWORD,:DWORD,:DWORD
SHUnicodeToUnicode PROTO :DWORD,:DWORD,:DWORD
SetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCurrentProcessExplicitAppUserModelID PROTO :DWORD
SetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD
SetSecurityAccessMask PROTO :DWORD,:DWORD
SetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
SetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrCSpnA PROTO :DWORD,:DWORD
StrCSpn equ <StrCSpnA>

StrCSpnIA PROTO :DWORD,:DWORD
StrCSpnI equ <StrCSpnIA>

StrCatBuffA PROTO :DWORD,:DWORD,:DWORD
StrCatBuff equ <StrCatBuffA>

StrChrIA PROTO :DWORD,:DWORD
StrChrI equ <StrChrIA>

StrCmpCA PROTO :DWORD,:DWORD
StrCmpC equ <StrCmpCA>

StrCmpICA PROTO :DWORD,:DWORD
StrCmpIC equ <StrCmpICA>

StrCmpNCA PROTO :DWORD,:DWORD,:DWORD
StrCmpNC equ <StrCmpNCA>

StrCmpNIA PROTO :DWORD,:DWORD,:DWORD
StrCmpNI equ <StrCmpNIA>

StrCmpNICA PROTO :DWORD,:DWORD,:DWORD
StrCmpNIC equ <StrCmpNICA>

StrDupA PROTO :DWORD
StrDup equ <StrDupA>

StrIsIntlEqualA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrIsIntlEqual equ <StrIsIntlEqualA>

StrPBrkA PROTO :DWORD,:DWORD
StrPBrk equ <StrPBrkA>

StrRChrIA PROTO :DWORD,:DWORD,:DWORD
StrRChrI equ <StrRChrIA>

StrRStrIA PROTO :DWORD,:DWORD,:DWORD
StrRStrI equ <StrRStrIA>

StrSpnA PROTO :DWORD,:DWORD
StrSpn equ <StrSpnA>

StrStrIA PROTO :DWORD,:DWORD
StrStrI equ <StrStrIA>

StrToInt64ExA PROTO :DWORD,:DWORD,:DWORD
StrToInt64Ex equ <StrToInt64ExA>

StrToIntA PROTO :DWORD
StrToInt equ <StrToIntA>

StrToIntExA PROTO :DWORD,:DWORD,:DWORD
StrToIntEx equ <StrToIntExA>

StrTrimA PROTO :DWORD,:DWORD
StrTrim equ <StrTrimA>

StringFromCLSID PROTO :DWORD,:DWORD
StringFromGUID2 PROTO :DWORD,:DWORD,:DWORD
StringFromIID PROTO :DWORD,:DWORD
TraceEvent PROTO :DWORD,:DWORD,:DWORD
TraceMessageVa PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnregisterTraceGuids PROTO :DWORD,:DWORD
UrlCombineA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCombine equ <UrlCombineA>

UrlUnescapeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlUnescape equ <UrlUnescapeA>

VerFindFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VerFindFile equ <VerFindFileA>

VerQueryValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerQueryValue equ <VerQueryValueA>


