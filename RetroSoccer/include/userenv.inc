; ..\X86\UserEnv.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AreThereVisibleLogoffScripts PROTO :DWORD
AreThereVisibleShutdownScripts PROTO :DWORD
CheckDirectoryOwnership PROTO :DWORD,:DWORD,:DWORD
CheckXForestLogon PROTO :DWORD
CopyProfileDirectoryEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateAppContainerProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateAppContainerProfileInternal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDirectoryJunctionsForSystem PROTO
CreateDirectoryJunctionsForUserProfile PROTO :DWORD
CreateEnvironmentBlock PROTO :DWORD,:DWORD,:DWORD
CreateGroupEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateLinkFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeleteAppContainerProfile PROTO :DWORD
DeleteAppContainerProfileInternal PROTO :DWORD,:DWORD
DeleteGroup PROTO :DWORD,:DWORD
DeleteLinkFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeleteProfileA PROTO :DWORD,:DWORD,:DWORD
DeleteProfile equ <DeleteProfileA>

DeleteProfileDirectory PROTO :DWORD,:DWORD,:DWORD
DeriveAppContainerSidFromAppContainerName PROTO :DWORD,:DWORD
DeriveRestrictedAppContainerSidFromAppContainerSidAndRestrictedName PROTO :DWORD,:DWORD,:DWORD
DestroyEnvironmentBlock PROTO :DWORD
EnterCriticalPolicySection PROTO :DWORD
ExpandEnvironmentStringsForUserA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ExpandEnvironmentStringsForUser equ <ExpandEnvironmentStringsForUserA>

ForceSyncFgPolicy PROTO :DWORD
FreeGPOListA PROTO :DWORD
FreeGPOList equ <FreeGPOListA>

GenerateGPNotification PROTO :DWORD,:DWORD,:DWORD
GetAllUsersProfileDirectoryA PROTO :DWORD,:DWORD
GetAllUsersProfileDirectory equ <GetAllUsersProfileDirectoryA>

GetAppContainerFolderPath PROTO :DWORD,:DWORD
GetAppContainerRegistryLocation PROTO :DWORD,:DWORD
GetAppliedGPOListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAppliedGPOList equ <GetAppliedGPOListA>

GetDefaultUserProfileDirectoryA PROTO :DWORD,:DWORD
GetDefaultUserProfileDirectory equ <GetDefaultUserProfileDirectoryA>

GetGPOListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetGPOList equ <GetGPOListA>

GetLongProfilePathName PROTO :DWORD,:DWORD,:DWORD
GetNextFgPolicyRefreshInfo PROTO :DWORD,:DWORD
GetPreviousFgPolicyRefreshInfo PROTO :DWORD,:DWORD
GetProfileType PROTO :DWORD
GetProfilesDirectoryA PROTO :DWORD,:DWORD
GetProfilesDirectory equ <GetProfilesDirectoryA>

GetUserProfileDirectoryA PROTO :DWORD,:DWORD,:DWORD
GetUserProfileDirectory equ <GetUserProfileDirectoryA>

HasPolicyForegroundProcessingCompleted PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsBypassExclusionDisabled PROTO
LeaveCriticalPolicySection PROTO :DWORD
LoadUserProfileA PROTO :DWORD,:DWORD
LoadUserProfile equ <LoadUserProfileA>

LookupAppContainerDisplayName PROTO :DWORD,:DWORD
PingComputer PROTO :DWORD,:DWORD
ProcessGroupPolicyCompleted PROTO :DWORD,:DWORD,:DWORD
ProcessGroupPolicyCompletedEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
RefreshPolicy PROTO :DWORD
RefreshPolicyEx PROTO :DWORD,:DWORD
RegisterGPNotification PROTO :DWORD,:DWORD
RemapProfile PROTO :DWORD,:DWORD,:DWORD
RsopAccessCheckByType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RsopFileAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RsopResetPolicySettingStatus PROTO :DWORD,:DWORD,:DWORD
RsopSetPolicySettingStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnloadUserProfile PROTO :DWORD,:DWORD
UnregisterGPNotification PROTO :DWORD
UpdateAppContainerProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WaitForMachinePolicyForegroundProcessing PROTO
WaitForUserPolicyForegroundProcessing PROTO

