; ..\X86\kernel32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcquireSRWLockExclusive PROTO :DWORD
AcquireSRWLockShared PROTO :DWORD
ActivateActCtx PROTO :DWORD,:DWORD
AddAtomA PROTO :DWORD
AddAtom equ <AddAtomA>

AddConsoleAliasA PROTO :DWORD,:DWORD,:DWORD
AddConsoleAlias equ <AddConsoleAliasA>

AddDllDirectory PROTO :DWORD
AddIntegrityLabelToBoundaryDescriptor PROTO :DWORD,:DWORD
AddLocalAlternateComputerNameA PROTO :DWORD,:DWORD
AddLocalAlternateComputerName equ <AddLocalAlternateComputerNameA>

AddRefActCtx PROTO :DWORD
AddResourceAttributeAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddSIDToBoundaryDescriptor PROTO :DWORD,:DWORD
AddScopedPolicyIDAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddSecureMemoryCacheCallback PROTO :DWORD
AddVectoredContinueHandler PROTO :DWORD,:DWORD
AddVectoredExceptionHandler PROTO :DWORD,:DWORD
AllocConsole PROTO
AllocateUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
AllocateUserPhysicalPagesNuma PROTO :DWORD,:DWORD,:DWORD,:DWORD
AppXGetOSMaxVersionTested PROTO :DWORD,:DWORD
ApplicationRecoveryFinished PROTO :DWORD
ApplicationRecoveryInProgress PROTO :DWORD
AreFileApisANSI PROTO
AssignProcessToJobObject PROTO :DWORD,:DWORD
AttachConsole PROTO :DWORD
BackupRead PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BackupSeek PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BackupWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BaseSetLastNTError PROTO :DWORD
Beep PROTO :DWORD,:DWORD
BeginUpdateResourceA PROTO :DWORD,:DWORD
BeginUpdateResource equ <BeginUpdateResourceA>

BindIoCompletionCallback PROTO :DWORD,:DWORD,:DWORD
BuildCommDCBA PROTO :DWORD,:DWORD
BuildCommDCB equ <BuildCommDCBA>

BuildCommDCBAndTimeoutsA PROTO :DWORD,:DWORD,:DWORD
BuildCommDCBAndTimeouts equ <BuildCommDCBAndTimeoutsA>

CallNamedPipeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CallNamedPipe equ <CallNamedPipeA>

CallbackMayRunLong PROTO :DWORD
CalloutOnFiberStack PROTO :DWORD,:DWORD,:DWORD
CancelDeviceWakeupRequest PROTO :DWORD
CancelIo PROTO :DWORD
CancelIoEx PROTO :DWORD,:DWORD
CancelSynchronousIo PROTO :DWORD
CancelThreadpoolIo PROTO :DWORD
CancelTimerQueueTimer PROTO :DWORD,:DWORD
CancelWaitableTimer PROTO :DWORD
CeipIsOptedIn PROTO
ChangeTimerQueueTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD
CheckElevation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CheckElevationEnabled PROTO :DWORD
CheckNameLegalDOS8Dot3A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CheckNameLegalDOS8Dot3 equ <CheckNameLegalDOS8Dot3A>

CheckRemoteDebuggerPresent PROTO :DWORD,:DWORD
CheckTokenCapability PROTO :DWORD,:DWORD,:DWORD
CheckTokenMembershipEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
ClearCommBreak PROTO :DWORD
ClearCommError PROTO :DWORD,:DWORD,:DWORD
CloseHandle PROTO :DWORD
ClosePackageInfo PROTO :DWORD
ClosePrivateNamespace PROTO :DWORD,:DWORD
CloseState PROTO :DWORD
CloseThreadpool PROTO :DWORD
CloseThreadpoolCleanupGroup PROTO :DWORD
CloseThreadpoolCleanupGroupMembers PROTO :DWORD,:DWORD,:DWORD
CloseThreadpoolIo PROTO :DWORD
CloseThreadpoolTimer PROTO :DWORD
CloseThreadpoolWait PROTO :DWORD
CloseThreadpoolWork PROTO :DWORD
CommConfigDialogA PROTO :DWORD,:DWORD,:DWORD
CommConfigDialog equ <CommConfigDialogA>

CompareFileTime PROTO :DWORD,:DWORD
CompareStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CompareString equ <CompareStringA>

CompareStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CompareStringOrdinal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConnectNamedPipe PROTO :DWORD,:DWORD
ContinueDebugEvent PROTO :DWORD,:DWORD,:DWORD
ConvertDefaultLocale PROTO :DWORD
ConvertFiberToThread PROTO
ConvertThreadToFiber PROTO :DWORD
ConvertThreadToFiberEx PROTO :DWORD,:DWORD
CopyContext PROTO :DWORD,:DWORD,:DWORD
CopyFile2 PROTO :DWORD,:DWORD,:DWORD
CopyFileA PROTO :DWORD,:DWORD,:DWORD
CopyFile equ <CopyFileA>

CopyFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopyFileEx equ <CopyFileExA>

CopyFileTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopyFileTransacted equ <CopyFileTransactedA>

CreateActCtxA PROTO :DWORD
CreateActCtx equ <CreateActCtxA>

CreateBoundaryDescriptorA PROTO :DWORD,:DWORD
CreateBoundaryDescriptor equ <CreateBoundaryDescriptorA>

CreateConsoleScreenBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDirectoryA PROTO :DWORD,:DWORD
CreateDirectory equ <CreateDirectoryA>

CreateDirectoryExA PROTO :DWORD,:DWORD,:DWORD
CreateDirectoryEx equ <CreateDirectoryExA>

CreateDirectoryTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateDirectoryTransacted equ <CreateDirectoryTransactedA>

CreateEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEvent equ <CreateEventA>

CreateEventExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEventEx equ <CreateEventExA>

CreateFiber PROTO :DWORD,:DWORD,:DWORD
CreateFiberEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFile2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFile equ <CreateFileA>

CreateFileMappingA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileMapping equ <CreateFileMappingA>

CreateFileMappingFromApp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileMappingNumaA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileMappingNuma equ <CreateFileMappingNumaA>

CreateFileTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileTransacted equ <CreateFileTransactedA>

CreateHardLinkA PROTO :DWORD,:DWORD,:DWORD
CreateHardLink equ <CreateHardLinkA>

CreateHardLinkTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateHardLinkTransacted equ <CreateHardLinkTransactedA>

CreateIoCompletionPort PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateJobObjectA PROTO :DWORD,:DWORD
CreateJobObject equ <CreateJobObjectA>

CreateJobSet PROTO :DWORD,:DWORD,:DWORD
CreateMailslotA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateMailslot equ <CreateMailslotA>

CreateMemoryResourceNotification PROTO :DWORD
CreateMutexA PROTO :DWORD,:DWORD,:DWORD
CreateMutex equ <CreateMutexA>

CreateMutexExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateMutexEx equ <CreateMutexExA>

CreateNamedPipeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateNamedPipe equ <CreateNamedPipeA>

CreatePipe PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateNamespaceA PROTO :DWORD,:DWORD,:DWORD
CreatePrivateNamespace equ <CreatePrivateNamespaceA>

CreateProcessA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProcess equ <CreateProcessA>

CreateRemoteThread PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateRemoteThreadEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateSemaphoreA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateSemaphore equ <CreateSemaphoreA>

CreateSemaphoreExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateSemaphoreEx equ <CreateSemaphoreExA>

CreateSymbolicLinkA PROTO :DWORD,:DWORD,:DWORD
CreateSymbolicLink equ <CreateSymbolicLinkA>

CreateSymbolicLinkTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateSymbolicLinkTransacted equ <CreateSymbolicLinkTransactedA>

CreateTapePartition PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateThread PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateThreadpool PROTO :DWORD
CreateThreadpoolCleanupGroup PROTO
CreateThreadpoolIo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateThreadpoolTimer PROTO :DWORD,:DWORD,:DWORD
CreateThreadpoolWait PROTO :DWORD,:DWORD,:DWORD
CreateThreadpoolWork PROTO :DWORD,:DWORD,:DWORD
CreateTimerQueue PROTO
CreateTimerQueueTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateToolhelp32Snapshot PROTO :DWORD,:DWORD
CreateWaitableTimerA PROTO :DWORD,:DWORD,:DWORD
CreateWaitableTimer equ <CreateWaitableTimerA>

CreateWaitableTimerExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateWaitableTimerEx equ <CreateWaitableTimerExA>

CtrlRoutine PROTO :DWORD
DeactivateActCtx PROTO :DWORD,:DWORD
DebugActiveProcess PROTO :DWORD
DebugActiveProcessStop PROTO :DWORD
DebugBreak PROTO
DebugBreakProcess PROTO :DWORD
DebugSetProcessKillOnExit PROTO :DWORD
DecodePointer PROTO :DWORD
DecodeSystemPointer PROTO :DWORD
DefineDosDeviceA PROTO :DWORD,:DWORD,:DWORD
DefineDosDevice equ <DefineDosDeviceA>

DelayLoadFailureHook PROTO :DWORD,:DWORD
DeleteAtom PROTO :DWORD
DeleteBoundaryDescriptor PROTO :DWORD
DeleteCriticalSection PROTO :DWORD
DeleteFiber PROTO :DWORD
DeleteFileA PROTO :DWORD
DeleteFile equ <DeleteFileA>

DeleteFileTransactedA PROTO :DWORD,:DWORD
DeleteFileTransacted equ <DeleteFileTransactedA>

DeleteProcThreadAttributeList PROTO :DWORD
DeleteSynchronizationBarrier PROTO :DWORD
DeleteTimerQueue PROTO :DWORD
DeleteTimerQueueEx PROTO :DWORD,:DWORD
DeleteTimerQueueTimer PROTO :DWORD,:DWORD,:DWORD
DeleteVolumeMountPointA PROTO :DWORD
DeleteVolumeMountPoint equ <DeleteVolumeMountPointA>

DeviceIoControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DisableThreadLibraryCalls PROTO :DWORD
DisableThreadProfiling PROTO :DWORD
DisassociateCurrentThreadFromCallback PROTO :DWORD
DisconnectNamedPipe PROTO :DWORD
DnsHostnameToComputerNameA PROTO :DWORD,:DWORD,:DWORD
DnsHostnameToComputerName equ <DnsHostnameToComputerNameA>

DosDateTimeToFileTime PROTO :DWORD,:DWORD,:DWORD
DuplicateHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableThreadProfiling PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EncodePointer PROTO :DWORD
EncodeSystemPointer PROTO :DWORD
EndUpdateResourceA PROTO :DWORD,:DWORD
EndUpdateResource equ <EndUpdateResourceA>

EnterCriticalSection PROTO :DWORD
EnterSynchronizationBarrier PROTO :DWORD,:DWORD
EnumCalendarInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumCalendarInfo equ <EnumCalendarInfoA>

EnumCalendarInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumCalendarInfoEx equ <EnumCalendarInfoExA>

EnumCalendarInfoExEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumDateFormatsA PROTO :DWORD,:DWORD,:DWORD
EnumDateFormats equ <EnumDateFormatsA>

EnumDateFormatsExA PROTO :DWORD,:DWORD,:DWORD
EnumDateFormatsEx equ <EnumDateFormatsExA>

EnumDateFormatsExEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumLanguageGroupLocalesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumLanguageGroupLocales equ <EnumLanguageGroupLocalesA>

EnumResourceLanguagesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceLanguages equ <EnumResourceLanguagesA>

EnumResourceLanguagesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceLanguagesEx equ <EnumResourceLanguagesExA>

EnumResourceNamesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumResourceNames equ <EnumResourceNamesA>

EnumResourceNamesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceNamesEx equ <EnumResourceNamesExA>

EnumResourceTypesA PROTO :DWORD,:DWORD,:DWORD
EnumResourceTypes equ <EnumResourceTypesA>

EnumResourceTypesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceTypesEx equ <EnumResourceTypesExA>

EnumSystemCodePagesA PROTO :DWORD,:DWORD
EnumSystemCodePages equ <EnumSystemCodePagesA>

EnumSystemFirmwareTables PROTO :DWORD,:DWORD,:DWORD
EnumSystemGeoID PROTO :DWORD,:DWORD,:DWORD
EnumSystemLanguageGroupsA PROTO :DWORD,:DWORD,:DWORD
EnumSystemLanguageGroups equ <EnumSystemLanguageGroupsA>

EnumSystemLocalesA PROTO :DWORD,:DWORD
EnumSystemLocales equ <EnumSystemLocalesA>

EnumSystemLocalesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumTimeFormatsA PROTO :DWORD,:DWORD,:DWORD
EnumTimeFormats equ <EnumTimeFormatsA>

EnumTimeFormatsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumUILanguagesA PROTO :DWORD,:DWORD,:DWORD
EnumUILanguages equ <EnumUILanguagesA>

EnumerateLocalComputerNamesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumerateLocalComputerNames equ <EnumerateLocalComputerNamesA>

EraseTape PROTO :DWORD,:DWORD,:DWORD
EscapeCommFunction PROTO :DWORD,:DWORD
ExitProcess PROTO :DWORD
ExitThread PROTO :DWORD
ExpandEnvironmentStringsA PROTO :DWORD,:DWORD,:DWORD
ExpandEnvironmentStrings equ <ExpandEnvironmentStringsA>

FatalAppExitA PROTO :DWORD,:DWORD
FatalAppExit equ <FatalAppExitA>

FatalExit PROTO :DWORD
FileTimeToDosDateTime PROTO :DWORD,:DWORD,:DWORD
FileTimeToLocalFileTime PROTO :DWORD,:DWORD
FileTimeToSystemTime PROTO :DWORD,:DWORD
FillConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FillConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FillConsoleOutputCharacter equ <FillConsoleOutputCharacterA>

FindActCtxSectionGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindActCtxSectionStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindActCtxSectionString equ <FindActCtxSectionStringA>

FindAtomA PROTO :DWORD
FindAtom equ <FindAtomA>

FindClose PROTO :DWORD
FindCloseChangeNotification PROTO :DWORD
FindFirstChangeNotificationA PROTO :DWORD,:DWORD,:DWORD
FindFirstChangeNotification equ <FindFirstChangeNotificationA>

FindFirstFileA PROTO :DWORD,:DWORD
FindFirstFile equ <FindFirstFileA>

FindFirstFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindFirstFileEx equ <FindFirstFileExA>

FindFirstFileTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindFirstFileTransacted equ <FindFirstFileTransactedA>

FindFirstVolumeA PROTO :DWORD,:DWORD
FindFirstVolume equ <FindFirstVolumeA>

FindFirstVolumeMountPointA PROTO :DWORD,:DWORD,:DWORD
FindFirstVolumeMountPoint equ <FindFirstVolumeMountPointA>

FindNLSString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNLSStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNextChangeNotification PROTO :DWORD
FindNextFileA PROTO :DWORD,:DWORD
FindNextFile equ <FindNextFileA>

FindNextVolumeA PROTO :DWORD,:DWORD,:DWORD
FindNextVolume equ <FindNextVolumeA>

FindNextVolumeMountPointA PROTO :DWORD,:DWORD,:DWORD
FindNextVolumeMountPoint equ <FindNextVolumeMountPointA>

FindPackagesByPackageFamily PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindResourceA PROTO :DWORD,:DWORD,:DWORD
FindResource equ <FindResourceA>

FindResourceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FindResourceEx equ <FindResourceExA>

FindStringOrdinal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindVolumeClose PROTO :DWORD
FindVolumeMountPointClose PROTO :DWORD
FlsAlloc PROTO :DWORD
FlsFree PROTO :DWORD
FlsGetValue PROTO :DWORD
FlsSetValue PROTO :DWORD,:DWORD
FlushConsoleInputBuffer PROTO :DWORD
FlushFileBuffers PROTO :DWORD
FlushInstructionCache PROTO :DWORD,:DWORD,:DWORD
FlushProcessWriteBuffers PROTO
FlushViewOfFile PROTO :DWORD,:DWORD
FoldStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FoldString equ <FoldStringA>

FormatApplicationUserModelId PROTO :DWORD,:DWORD,:DWORD,:DWORD
FormatMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FormatMessage equ <FormatMessageA>

FreeConsole PROTO
FreeEnvironmentStringsA PROTO :DWORD
FreeEnvironmentStrings equ <FreeEnvironmentStringsA>

FreeLibrary PROTO :DWORD
FreeLibraryAndExitThread PROTO :DWORD,:DWORD
FreeLibraryWhenCallbackReturns PROTO :DWORD,:DWORD
FreeResource PROTO :DWORD
FreeUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
GenerateConsoleCtrlEvent PROTO :DWORD,:DWORD
GetACP PROTO
GetActiveProcessorCount PROTO :DWORD
GetActiveProcessorGroupCount PROTO
GetAppContainerAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetAppContainerNamedObjectPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetApplicationRecoveryCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetApplicationRestartSettings PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetApplicationUserModelId PROTO :DWORD,:DWORD,:DWORD
GetAtomNameA PROTO :DWORD,:DWORD,:DWORD
GetAtomName equ <GetAtomNameA>

GetBinaryTypeA PROTO :DWORD,:DWORD
GetBinaryType equ <GetBinaryTypeA>

GetCPInfo PROTO :DWORD,:DWORD
GetCPInfoExA PROTO :DWORD,:DWORD,:DWORD
GetCPInfoEx equ <GetCPInfoExA>

GetCachedSigningLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCalendarInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCalendarInfo equ <GetCalendarInfoA>

GetCalendarInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCommConfig PROTO :DWORD,:DWORD,:DWORD
GetCommMask PROTO :DWORD,:DWORD
GetCommModemStatus PROTO :DWORD,:DWORD
GetCommProperties PROTO :DWORD,:DWORD
GetCommState PROTO :DWORD,:DWORD
GetCommTimeouts PROTO :DWORD,:DWORD
GetCommandLineA PROTO
GetCommandLine equ <GetCommandLineA>

GetCompressedFileSizeA PROTO :DWORD,:DWORD
GetCompressedFileSize equ <GetCompressedFileSizeA>

GetCompressedFileSizeTransactedA PROTO :DWORD,:DWORD,:DWORD
GetCompressedFileSizeTransacted equ <GetCompressedFileSizeTransactedA>

GetComputerNameA PROTO :DWORD,:DWORD
GetComputerName equ <GetComputerNameA>

GetComputerNameExA PROTO :DWORD,:DWORD,:DWORD
GetComputerNameEx equ <GetComputerNameExA>

GetConsoleAliasA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetConsoleAlias equ <GetConsoleAliasA>

GetConsoleAliasExesA PROTO :DWORD,:DWORD
GetConsoleAliasExes equ <GetConsoleAliasExesA>

GetConsoleAliasExesLengthA PROTO
GetConsoleAliasExesLength equ <GetConsoleAliasExesLengthA>

GetConsoleAliasesA PROTO :DWORD,:DWORD,:DWORD
GetConsoleAliases equ <GetConsoleAliasesA>

GetConsoleAliasesLengthA PROTO :DWORD
GetConsoleAliasesLength equ <GetConsoleAliasesLengthA>

GetConsoleCP PROTO
GetConsoleCursorInfo PROTO :DWORD,:DWORD
GetConsoleDisplayMode PROTO :DWORD
GetConsoleFontSize PROTO :DWORD,:DWORD
GetConsoleHistoryInfo PROTO :DWORD
GetConsoleMode PROTO :DWORD,:DWORD
GetConsoleOriginalTitleA PROTO :DWORD,:DWORD
GetConsoleOriginalTitle equ <GetConsoleOriginalTitleA>

GetConsoleOutputCP PROTO
GetConsoleProcessList PROTO :DWORD,:DWORD
GetConsoleScreenBufferInfo PROTO :DWORD,:DWORD
GetConsoleScreenBufferInfoEx PROTO :DWORD,:DWORD
GetConsoleSelectionInfo PROTO :DWORD
GetConsoleTitleA PROTO :DWORD,:DWORD
GetConsoleTitle equ <GetConsoleTitleA>

GetConsoleWindow PROTO
GetCurrencyFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCurrencyFormat equ <GetCurrencyFormatA>

GetCurrencyFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCurrentActCtx PROTO :DWORD
GetCurrentApplicationUserModelId PROTO :DWORD,:DWORD
GetCurrentConsoleFont PROTO :DWORD,:DWORD,:DWORD
GetCurrentConsoleFontEx PROTO :DWORD,:DWORD,:DWORD
GetCurrentDirectoryA PROTO :DWORD,:DWORD
GetCurrentDirectory equ <GetCurrentDirectoryA>

GetCurrentPackageFamilyName PROTO :DWORD,:DWORD
GetCurrentPackageFullName PROTO :DWORD,:DWORD
GetCurrentPackageId PROTO :DWORD,:DWORD
GetCurrentPackageInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCurrentPackagePath PROTO :DWORD,:DWORD
GetCurrentProcess PROTO
GetCurrentProcessId PROTO
GetCurrentProcessorNumber PROTO
GetCurrentProcessorNumberEx PROTO :DWORD
GetCurrentThread PROTO
GetCurrentThreadId PROTO
GetCurrentThreadStackLimits PROTO :DWORD,:DWORD
GetDateFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDateFormat equ <GetDateFormatA>

GetDateFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDefaultCommConfigA PROTO :DWORD,:DWORD,:DWORD
GetDefaultCommConfig equ <GetDefaultCommConfigA>

GetDevicePowerState PROTO :DWORD,:DWORD
GetDiskFreeSpaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDiskFreeSpace equ <GetDiskFreeSpaceA>

GetDiskFreeSpaceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetDiskFreeSpaceEx equ <GetDiskFreeSpaceExA>

GetDllDirectoryA PROTO :DWORD,:DWORD
GetDllDirectory equ <GetDllDirectoryA>

GetDriveTypeA PROTO :DWORD
GetDriveType equ <GetDriveTypeA>

GetDurationFormat PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDurationFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDynamicTimeZoneInformation PROTO :DWORD
GetEnabledXStateFeatures PROTO
GetEnvironmentStringsA PROTO
GetEnvironmentStrings equ <GetEnvironmentStringsA>

GetEnvironmentVariableA PROTO :DWORD,:DWORD,:DWORD
GetEnvironmentVariable equ <GetEnvironmentVariableA>

GetEraNameCountedString PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetErrorMode PROTO
GetExitCodeProcess PROTO :DWORD,:DWORD
GetExitCodeThread PROTO :DWORD,:DWORD
GetFileAttributesA PROTO :DWORD
GetFileAttributes equ <GetFileAttributesA>

GetFileAttributesExA PROTO :DWORD,:DWORD,:DWORD
GetFileAttributesEx equ <GetFileAttributesExA>

GetFileAttributesTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileAttributesTransacted equ <GetFileAttributesTransactedA>

GetFileBandwidthReservation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFileInformationByHandle PROTO :DWORD,:DWORD
GetFileInformationByHandleEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileMUIInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileMUIPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFileSize PROTO :DWORD,:DWORD
GetFileSizeEx PROTO :DWORD,:DWORD
GetFileTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileType PROTO :DWORD
GetFinalPathNameByHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFinalPathNameByHandle equ <GetFinalPathNameByHandleA>

GetFirmwareEnvironmentVariableA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFirmwareEnvironmentVariable equ <GetFirmwareEnvironmentVariableA>

GetFirmwareEnvironmentVariableExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFirmwareEnvironmentVariableEx equ <GetFirmwareEnvironmentVariableExA>

GetFirmwareType PROTO :DWORD
GetFullPathNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFullPathName equ <GetFullPathNameA>

GetFullPathNameTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFullPathNameTransacted equ <GetFullPathNameTransactedA>

GetGeoInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetGeoInfo equ <GetGeoInfoA>

GetHandleInformation PROTO :DWORD,:DWORD
GetLargePageMinimum PROTO
GetLargestConsoleWindowSize PROTO :DWORD
GetLastError PROTO
GetLocalTime PROTO :DWORD
GetLocaleInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetLocaleInfo equ <GetLocaleInfoA>

GetLocaleInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetLogicalDriveStringsA PROTO :DWORD,:DWORD
GetLogicalDriveStrings equ <GetLogicalDriveStringsA>

GetLogicalDrives PROTO
GetLogicalProcessorInformation PROTO :DWORD,:DWORD
GetLogicalProcessorInformationEx PROTO :DWORD,:DWORD,:DWORD
GetLongPathNameA PROTO :DWORD,:DWORD,:DWORD
GetLongPathName equ <GetLongPathNameA>

GetLongPathNameTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetLongPathNameTransacted equ <GetLongPathNameTransactedA>

GetMailslotInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetMaximumProcessorCount PROTO :DWORD
GetMaximumProcessorGroupCount PROTO
GetMemoryErrorHandlingCapabilities PROTO :DWORD
GetModuleFileNameA PROTO :DWORD,:DWORD,:DWORD
GetModuleFileName equ <GetModuleFileNameA>

GetModuleHandleA PROTO :DWORD
GetModuleHandle equ <GetModuleHandleA>

GetModuleHandleExA PROTO :DWORD,:DWORD,:DWORD
GetModuleHandleEx equ <GetModuleHandleExA>

GetNLSVersion PROTO :DWORD,:DWORD,:DWORD
GetNLSVersionEx PROTO :DWORD,:DWORD,:DWORD
GetNamedPipeAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNamedPipeClientComputerNameA PROTO :DWORD,:DWORD,:DWORD
GetNamedPipeClientComputerName equ <GetNamedPipeClientComputerNameA>

GetNamedPipeClientProcessId PROTO :DWORD,:DWORD
GetNamedPipeClientSessionId PROTO :DWORD,:DWORD
GetNamedPipeHandleStateA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNamedPipeHandleState equ <GetNamedPipeHandleStateA>

GetNamedPipeInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNamedPipeServerProcessId PROTO :DWORD,:DWORD
GetNamedPipeServerSessionId PROTO :DWORD,:DWORD
GetNativeSystemInfo PROTO :DWORD
GetNumaAvailableMemoryNode PROTO :DWORD,:DWORD
GetNumaAvailableMemoryNodeEx PROTO :DWORD,:DWORD
GetNumaHighestNodeNumber PROTO :DWORD
GetNumaNodeNumberFromHandle PROTO :DWORD,:DWORD
GetNumaNodeProcessorMask PROTO :DWORD,:DWORD
GetNumaNodeProcessorMaskEx PROTO :DWORD,:DWORD
GetNumaProcessorNode PROTO :DWORD,:DWORD
GetNumaProcessorNodeEx PROTO :DWORD,:DWORD
GetNumaProximityNode PROTO :DWORD,:DWORD
GetNumaProximityNodeEx PROTO :DWORD,:DWORD
GetNumberFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNumberFormat equ <GetNumberFormatA>

GetNumberFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNumberOfConsoleInputEvents PROTO :DWORD,:DWORD
GetNumberOfConsoleMouseButtons PROTO :DWORD
GetOEMCP PROTO
GetOverlappedResult PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetOverlappedResultEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPackageApplicationIds PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPackageFamilyName PROTO :DWORD,:DWORD,:DWORD
GetPackageFullName PROTO :DWORD,:DWORD,:DWORD
GetPackageId PROTO :DWORD,:DWORD,:DWORD
GetPackageInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPackagePath PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPackagePathByFullName PROTO :DWORD,:DWORD,:DWORD
GetPackagesByPackageFamily PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPhysicallyInstalledSystemMemory PROTO :DWORD
GetPriorityClass PROTO :DWORD
GetPrivateProfileIntA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPrivateProfileInt equ <GetPrivateProfileIntA>

GetPrivateProfileSectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPrivateProfileSection equ <GetPrivateProfileSectionA>

GetPrivateProfileSectionNamesA PROTO :DWORD,:DWORD,:DWORD
GetPrivateProfileSectionNames equ <GetPrivateProfileSectionNamesA>

GetPrivateProfileStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrivateProfileString equ <GetPrivateProfileStringA>

GetPrivateProfileStructA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrivateProfileStruct equ <GetPrivateProfileStructA>

GetProcAddress PROTO :DWORD,:DWORD
GetProcessAffinityMask PROTO :DWORD,:DWORD,:DWORD
GetProcessDEPPolicy PROTO :DWORD,:DWORD,:DWORD
GetProcessGroupAffinity PROTO :DWORD,:DWORD,:DWORD
GetProcessHandleCount PROTO :DWORD,:DWORD
GetProcessHeap PROTO
GetProcessHeaps PROTO :DWORD,:DWORD
GetProcessId PROTO :DWORD
GetProcessIdOfThread PROTO :DWORD
GetProcessInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessIoCounters PROTO :DWORD,:DWORD
GetProcessMitigationPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessPriorityBoost PROTO :DWORD,:DWORD
GetProcessShutdownParameters PROTO :DWORD,:DWORD
GetProcessTimes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProcessVersion PROTO :DWORD
GetProcessWorkingSetSize PROTO :DWORD,:DWORD,:DWORD
GetProcessWorkingSetSizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessorSystemCycleTime PROTO :DWORD,:DWORD,:DWORD
GetProductInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProfileIntA PROTO :DWORD,:DWORD,:DWORD
GetProfileInt equ <GetProfileIntA>

GetProfileSectionA PROTO :DWORD,:DWORD,:DWORD
GetProfileSection equ <GetProfileSectionA>

GetProfileStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProfileString equ <GetProfileStringA>

GetQueuedCompletionStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetQueuedCompletionStatusEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetShortPathNameA PROTO :DWORD,:DWORD,:DWORD
GetShortPathName equ <GetShortPathNameA>

GetStagedPackagePathByFullName PROTO :DWORD,:DWORD,:DWORD
GetStartupInfoA PROTO :DWORD
GetStartupInfo equ <GetStartupInfoA>

GetStateFolder PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetStdHandle PROTO :DWORD
GetStringScripts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetStringTypeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetStringType equ <GetStringTypeA>

GetStringTypeExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetStringTypeEx equ <GetStringTypeExA>

GetSystemAppDataKey PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemDEPPolicy PROTO
GetSystemDefaultLCID PROTO
GetSystemDefaultLangID PROTO
GetSystemDefaultLocaleName PROTO :DWORD,:DWORD
GetSystemDefaultUILanguage PROTO
GetSystemDirectoryA PROTO :DWORD,:DWORD
GetSystemDirectory equ <GetSystemDirectoryA>

GetSystemFileCacheSize PROTO :DWORD,:DWORD,:DWORD
GetSystemFirmwareTable PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemInfo PROTO :DWORD
GetSystemPowerStatus PROTO :DWORD
GetSystemPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemRegistryQuota PROTO :DWORD,:DWORD
GetSystemTime PROTO :DWORD
GetSystemTimeAdjustment PROTO :DWORD,:DWORD,:DWORD
GetSystemTimeAsFileTime PROTO :DWORD
GetSystemTimePreciseAsFileTime PROTO :DWORD
GetSystemTimes PROTO :DWORD,:DWORD,:DWORD
GetSystemWindowsDirectoryA PROTO :DWORD,:DWORD
GetSystemWindowsDirectory equ <GetSystemWindowsDirectoryA>

GetSystemWow64DirectoryA PROTO :DWORD,:DWORD
GetSystemWow64Directory equ <GetSystemWow64DirectoryA>

GetTapeParameters PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTapePosition PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTapeStatus PROTO :DWORD
GetTempFileNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTempFileName equ <GetTempFileNameA>

GetTempPathA PROTO :DWORD,:DWORD
GetTempPath equ <GetTempPathA>

GetThreadContext PROTO :DWORD,:DWORD
GetThreadErrorMode PROTO
GetThreadGroupAffinity PROTO :DWORD,:DWORD
GetThreadIOPendingFlag PROTO :DWORD,:DWORD
GetThreadId PROTO :DWORD
GetThreadIdealProcessorEx PROTO :DWORD,:DWORD
GetThreadInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThreadLocale PROTO
GetThreadPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThreadPriority PROTO :DWORD
GetThreadPriorityBoost PROTO :DWORD,:DWORD
GetThreadSelectorEntry PROTO :DWORD,:DWORD,:DWORD
GetThreadTimes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThreadUILanguage PROTO
GetTickCount PROTO
GetTickCount64 PROTO
GetTimeFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTimeFormat equ <GetTimeFormatA>

GetTimeFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTimeZoneInformation PROTO :DWORD
GetTimeZoneInformationForYear PROTO :DWORD,:DWORD,:DWORD
GetUILanguageInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetUserDefaultLCID PROTO
GetUserDefaultLangID PROTO
GetUserDefaultLocaleName PROTO :DWORD,:DWORD
GetUserDefaultUILanguage PROTO
GetUserGeoID PROTO :DWORD
GetUserPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVersion PROTO
GetVersionExA PROTO :DWORD
GetVersionEx equ <GetVersionExA>

GetVolumeInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetVolumeInformation equ <GetVolumeInformationA>

GetVolumeNameForVolumeMountPointA PROTO :DWORD,:DWORD,:DWORD
GetVolumeNameForVolumeMountPoint equ <GetVolumeNameForVolumeMountPointA>

GetVolumePathNameA PROTO :DWORD,:DWORD,:DWORD
GetVolumePathName equ <GetVolumePathNameA>

GetVolumePathNamesForVolumeNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVolumePathNamesForVolumeName equ <GetVolumePathNamesForVolumeNameA>

GetWindowsDirectoryA PROTO :DWORD,:DWORD
GetWindowsDirectory equ <GetWindowsDirectoryA>

GetWriteWatch PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetXStateFeaturesMask PROTO :DWORD,:DWORD
GlobalAddAtomA PROTO :DWORD
GlobalAddAtom equ <GlobalAddAtomA>

GlobalAddAtomExA PROTO :DWORD,:DWORD
GlobalAddAtomEx equ <GlobalAddAtomExA>

GlobalAlloc PROTO :DWORD,:DWORD
GlobalCompact PROTO :DWORD
GlobalDeleteAtom PROTO :DWORD
GlobalFindAtomA PROTO :DWORD
GlobalFindAtom equ <GlobalFindAtomA>

GlobalFix PROTO :DWORD
GlobalFlags PROTO :DWORD
GlobalFree PROTO :DWORD
GlobalGetAtomNameA PROTO :DWORD,:DWORD,:DWORD
GlobalGetAtomName equ <GlobalGetAtomNameA>

GlobalHandle PROTO :DWORD
GlobalLock PROTO :DWORD
GlobalMemoryStatus PROTO :DWORD
GlobalMemoryStatusEx PROTO :DWORD
GlobalReAlloc PROTO :DWORD,:DWORD,:DWORD
GlobalSize PROTO :DWORD
GlobalUnWire PROTO :DWORD
GlobalUnfix PROTO :DWORD
GlobalUnlock PROTO :DWORD
GlobalWire PROTO :DWORD
Heap32First PROTO :DWORD,:DWORD,:DWORD
Heap32ListFirst PROTO :DWORD,:DWORD
Heap32ListNext PROTO :DWORD,:DWORD
Heap32Next PROTO :DWORD
HeapAlloc PROTO :DWORD,:DWORD,:DWORD
HeapCompact PROTO :DWORD,:DWORD
HeapCreate PROTO :DWORD,:DWORD,:DWORD
HeapDestroy PROTO :DWORD
HeapFree PROTO :DWORD,:DWORD,:DWORD
HeapLock PROTO :DWORD
HeapQueryInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HeapReAlloc PROTO :DWORD,:DWORD,:DWORD,:DWORD
HeapSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
HeapSize PROTO :DWORD,:DWORD,:DWORD
HeapSummary PROTO :DWORD,:DWORD,:DWORD
HeapUnlock PROTO :DWORD
HeapValidate PROTO :DWORD,:DWORD,:DWORD
HeapWalk PROTO :DWORD,:DWORD
InitAtomTable PROTO :DWORD
InitOnceBeginInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitOnceComplete PROTO :DWORD,:DWORD,:DWORD
InitOnceExecuteOnce PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitOnceInitialize PROTO :DWORD
InitializeConditionVariable PROTO :DWORD
InitializeContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitializeCriticalSection PROTO :DWORD
InitializeCriticalSectionAndSpinCount PROTO :DWORD,:DWORD
InitializeCriticalSectionEx PROTO :DWORD,:DWORD,:DWORD
InitializeProcThreadAttributeList PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitializeSListHead PROTO :DWORD
InitializeSRWLock PROTO :DWORD
InitializeSynchronizationBarrier PROTO :DWORD,:DWORD,:DWORD
InstallELAMCertificateInfo PROTO :DWORD
InterlockedCompareExchange PROTO :DWORD,:DWORD,:DWORD
InterlockedCompareExchange64 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InterlockedDecrement PROTO :DWORD
InterlockedExchange PROTO :DWORD,:DWORD
InterlockedExchangeAdd PROTO :DWORD,:DWORD
InterlockedFlushSList PROTO :DWORD
InterlockedIncrement PROTO :DWORD
InterlockedPopEntrySList PROTO :DWORD
InterlockedPushEntrySList PROTO :DWORD,:DWORD
InterlockedPushListSListEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
IsBadCodePtr PROTO :DWORD
IsBadHugeReadPtr PROTO :DWORD,:DWORD
IsBadHugeWritePtr PROTO :DWORD,:DWORD
IsBadReadPtr PROTO :DWORD,:DWORD
IsBadStringPtrA PROTO :DWORD,:DWORD
IsBadStringPtr equ <IsBadStringPtrA>

IsBadWritePtr PROTO :DWORD,:DWORD
IsDBCSLeadByte PROTO :DWORD
IsDBCSLeadByteEx PROTO :DWORD,:DWORD
IsDebuggerPresent PROTO
IsNLSDefinedString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsNativeVhdBoot PROTO :DWORD
IsNormalizedString PROTO :DWORD,:DWORD,:DWORD
IsProcessCritical PROTO :DWORD,:DWORD
IsProcessInJob PROTO :DWORD,:DWORD,:DWORD
IsProcessorFeaturePresent PROTO :DWORD
IsSystemResumeAutomatic PROTO
IsThreadAFiber PROTO
IsThreadpoolTimerSet PROTO :DWORD
IsValidCodePage PROTO :DWORD
IsValidLanguageGroup PROTO :DWORD,:DWORD
IsValidLocale PROTO :DWORD,:DWORD
IsValidLocaleName PROTO :DWORD
IsValidNLSVersion PROTO :DWORD,:DWORD,:DWORD
IsWow64Process PROTO :DWORD,:DWORD
K32EmptyWorkingSet PROTO :DWORD
K32EnumDeviceDrivers PROTO :DWORD,:DWORD,:DWORD
K32EnumPageFilesA PROTO :DWORD,:DWORD
K32EnumPageFiles equ <K32EnumPageFilesA>

K32EnumProcessModules PROTO :DWORD,:DWORD,:DWORD,:DWORD
K32EnumProcessModulesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
K32EnumProcesses PROTO :DWORD,:DWORD,:DWORD
K32GetDeviceDriverBaseNameA PROTO :DWORD,:DWORD,:DWORD
K32GetDeviceDriverBaseName equ <K32GetDeviceDriverBaseNameA>

K32GetDeviceDriverFileNameA PROTO :DWORD,:DWORD,:DWORD
K32GetDeviceDriverFileName equ <K32GetDeviceDriverFileNameA>

K32GetMappedFileNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
K32GetMappedFileName equ <K32GetMappedFileNameA>

K32GetModuleBaseNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
K32GetModuleBaseName equ <K32GetModuleBaseNameA>

K32GetModuleFileNameExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
K32GetModuleFileNameEx equ <K32GetModuleFileNameExA>

K32GetModuleInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
K32GetPerformanceInfo PROTO :DWORD,:DWORD
K32GetProcessImageFileNameA PROTO :DWORD,:DWORD,:DWORD
K32GetProcessImageFileName equ <K32GetProcessImageFileNameA>

K32GetProcessMemoryInfo PROTO :DWORD,:DWORD,:DWORD
K32GetWsChanges PROTO :DWORD,:DWORD,:DWORD
K32GetWsChangesEx PROTO :DWORD,:DWORD,:DWORD
K32InitializeProcessForWsWatch PROTO :DWORD
K32QueryWorkingSet PROTO :DWORD,:DWORD,:DWORD
K32QueryWorkingSetEx PROTO :DWORD,:DWORD,:DWORD
LCIDToLocaleName PROTO :DWORD,:DWORD,:DWORD,:DWORD
LCMapStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LCMapString equ <LCMapStringA>

LCMapStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LeaveCriticalSection PROTO :DWORD
LeaveCriticalSectionWhenCallbackReturns PROTO :DWORD,:DWORD
LoadAppInitDlls PROTO
LoadLibraryA PROTO :DWORD
LoadLibrary equ <LoadLibraryA>

LoadLibraryExA PROTO :DWORD,:DWORD,:DWORD
LoadLibraryEx equ <LoadLibraryExA>

LoadModule PROTO :DWORD,:DWORD
LoadPackagedLibrary PROTO :DWORD,:DWORD
LoadResource PROTO :DWORD,:DWORD
LocalAlloc PROTO :DWORD,:DWORD
LocalCompact PROTO :DWORD
LocalFileTimeToFileTime PROTO :DWORD,:DWORD
LocalFlags PROTO :DWORD
LocalFree PROTO :DWORD
LocalHandle PROTO :DWORD
LocalLock PROTO :DWORD
LocalReAlloc PROTO :DWORD,:DWORD,:DWORD
LocalShrink PROTO :DWORD,:DWORD
LocalSize PROTO :DWORD
LocalUnlock PROTO :DWORD
LocaleNameToLCID PROTO :DWORD,:DWORD
LocateXStateFeature PROTO :DWORD,:DWORD,:DWORD
LockFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LockFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LockResource PROTO :DWORD
MapUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
MapUserPhysicalPagesScatter PROTO :DWORD,:DWORD,:DWORD
MapViewOfFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapViewOfFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapViewOfFileExNuma PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapViewOfFileFromApp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Module32First PROTO :DWORD,:DWORD
Module32Next PROTO :DWORD,:DWORD
MoveFileA PROTO :DWORD,:DWORD
MoveFile equ <MoveFileA>

MoveFileExA PROTO :DWORD,:DWORD,:DWORD
MoveFileEx equ <MoveFileExA>

MoveFileTransactedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MoveFileTransacted equ <MoveFileTransactedA>

MoveFileWithProgressA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MoveFileWithProgress equ <MoveFileWithProgressA>

MulDiv PROTO :DWORD,:DWORD,:DWORD
MultiByteToWideChar PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NeedCurrentDirectoryForExePathA PROTO :DWORD
NeedCurrentDirectoryForExePath equ <NeedCurrentDirectoryForExePathA>

NormalizeString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NotifyMountMgr PROTO :DWORD,:DWORD,:DWORD
NotifyUILanguageChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OOBEComplete PROTO :DWORD
OpenEventA PROTO :DWORD,:DWORD,:DWORD
OpenEvent equ <OpenEventA>

OpenFile PROTO :DWORD,:DWORD,:DWORD
OpenFileById PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OpenFileMappingA PROTO :DWORD,:DWORD,:DWORD
OpenFileMapping equ <OpenFileMappingA>

OpenJobObjectA PROTO :DWORD,:DWORD,:DWORD
OpenJobObject equ <OpenJobObjectA>

OpenMutexA PROTO :DWORD,:DWORD,:DWORD
OpenMutex equ <OpenMutexA>

OpenPackageInfoByFullName PROTO :DWORD,:DWORD,:DWORD
OpenPrivateNamespaceA PROTO :DWORD,:DWORD
OpenPrivateNamespace equ <OpenPrivateNamespaceA>

OpenProcess PROTO :DWORD,:DWORD,:DWORD
OpenSemaphoreA PROTO :DWORD,:DWORD,:DWORD
OpenSemaphore equ <OpenSemaphoreA>

OpenState PROTO
OpenStateExplicit PROTO :DWORD,:DWORD
OpenThread PROTO :DWORD,:DWORD,:DWORD
OpenWaitableTimerA PROTO :DWORD,:DWORD,:DWORD
OpenWaitableTimer equ <OpenWaitableTimerA>

OutputDebugStringA PROTO :DWORD
OutputDebugString equ <OutputDebugStringA>

PackageFamilyNameFromFullName PROTO :DWORD,:DWORD,:DWORD
PackageFamilyNameFromId PROTO :DWORD,:DWORD,:DWORD
PackageFullNameFromId PROTO :DWORD,:DWORD,:DWORD
PackageIdFromFullName PROTO :DWORD,:DWORD,:DWORD,:DWORD
PackageNameAndPublisherIdFromFamilyName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ParseApplicationUserModelId PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PeekConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeekConsoleInput equ <PeekConsoleInputA>

PeekNamedPipe PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PostQueuedCompletionStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerClearRequest PROTO :DWORD,:DWORD
PowerCreateRequest PROTO :DWORD
PowerSetRequest PROTO :DWORD,:DWORD
PrefetchVirtualMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD
PrepareTape PROTO :DWORD,:DWORD,:DWORD
Process32First PROTO :DWORD,:DWORD
Process32Next PROTO :DWORD,:DWORD
ProcessIdToSessionId PROTO :DWORD,:DWORD
PssCaptureSnapshot PROTO :DWORD,:DWORD,:DWORD,:DWORD
PssDuplicateSnapshot PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PssFreeSnapshot PROTO :DWORD,:DWORD
PssQuerySnapshot PROTO :DWORD,:DWORD,:DWORD,:DWORD
PssWalkMarkerCreate PROTO :DWORD,:DWORD
PssWalkMarkerFree PROTO :DWORD
PssWalkMarkerGetPosition PROTO :DWORD,:DWORD
PssWalkMarkerRewind PROTO :DWORD
PssWalkMarkerSeek PROTO :DWORD,:DWORD
PssWalkMarkerSeekToBeginning PROTO :DWORD
PssWalkMarkerSetPosition PROTO :DWORD,:DWORD
PssWalkMarkerTell PROTO :DWORD,:DWORD
PssWalkSnapshot PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PulseEvent PROTO :DWORD
PurgeComm PROTO :DWORD,:DWORD
QueryDepthSList PROTO :DWORD
QueryDosDeviceA PROTO :DWORD,:DWORD,:DWORD
QueryDosDevice equ <QueryDosDeviceA>

QueryFullProcessImageNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryFullProcessImageName equ <QueryFullProcessImageNameA>

QueryIdleProcessorCycleTime PROTO :DWORD,:DWORD
QueryIdleProcessorCycleTimeEx PROTO :DWORD,:DWORD,:DWORD
QueryInformationJobObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryMemoryResourceNotification PROTO :DWORD,:DWORD
QueryPerformanceCounter PROTO :DWORD
QueryPerformanceFrequency PROTO :DWORD
QueryProcessAffinityUpdateMode PROTO :DWORD,:DWORD
QueryProcessCycleTime PROTO :DWORD,:DWORD
QueryProtectedPolicy PROTO :DWORD,:DWORD
QueryThreadCycleTime PROTO :DWORD,:DWORD
QueryThreadProfiling PROTO :DWORD,:DWORD
QueryThreadpoolStackInformation PROTO :DWORD,:DWORD
QueryUnbiasedInterruptTime PROTO :DWORD
QueueUserAPC PROTO :DWORD,:DWORD,:DWORD
QueueUserWorkItem PROTO :DWORD,:DWORD,:DWORD
RaiseException PROTO :DWORD,:DWORD,:DWORD,:DWORD
RaiseFailFastException PROTO :DWORD,:DWORD,:DWORD
ReOpenFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsole equ <ReadConsoleA>

ReadConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleInput equ <ReadConsoleInputA>

ReadConsoleOutputA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutput equ <ReadConsoleOutputA>

ReadConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutputCharacter equ <ReadConsoleOutputCharacterA>

ReadFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadFileScatter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadProcessMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadThreadProfilingData PROTO :DWORD,:DWORD,:DWORD
RegisterApplicationRecoveryCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegisterApplicationRestart PROTO :DWORD,:DWORD
RegisterBadMemoryNotification PROTO :DWORD
RegisterWaitForInputIdle PROTO :DWORD
RegisterWaitForSingleObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterWaitForSingleObjectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterWaitUntilOOBECompleted PROTO :DWORD,:DWORD,:DWORD
ReleaseActCtx PROTO :DWORD
ReleaseMutex PROTO :DWORD
ReleaseMutexWhenCallbackReturns PROTO :DWORD,:DWORD
ReleaseSRWLockExclusive PROTO :DWORD
ReleaseSRWLockShared PROTO :DWORD
ReleaseSemaphore PROTO :DWORD,:DWORD,:DWORD
ReleaseSemaphoreWhenCallbackReturns PROTO :DWORD,:DWORD,:DWORD
RemoveDirectoryA PROTO :DWORD
RemoveDirectory equ <RemoveDirectoryA>

RemoveDirectoryTransactedA PROTO :DWORD,:DWORD
RemoveDirectoryTransacted equ <RemoveDirectoryTransactedA>

RemoveDllDirectory PROTO :DWORD
RemoveLocalAlternateComputerNameA PROTO :DWORD,:DWORD
RemoveLocalAlternateComputerName equ <RemoveLocalAlternateComputerNameA>

RemoveSecureMemoryCacheCallback PROTO :DWORD
RemoveVectoredContinueHandler PROTO :DWORD
RemoveVectoredExceptionHandler PROTO :DWORD
ReplaceFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReplaceFile equ <ReplaceFileA>

ReplacePartitionUnit PROTO :DWORD,:DWORD,:DWORD
RequestDeviceWakeup PROTO :DWORD
RequestWakeupLatency PROTO :DWORD
ResetEvent PROTO :DWORD
ResetWriteWatch PROTO :DWORD,:DWORD
ResolveDelayLoadedAPI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ResolveDelayLoadsFromDll PROTO :DWORD,:DWORD,:DWORD
ResolveLocaleName PROTO :DWORD,:DWORD,:DWORD
RestoreLastError PROTO :DWORD
ResumeThread PROTO :DWORD
RtlCaptureContext PROTO :DWORD
RtlCaptureStackBackTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtlFillMemory PROTO :DWORD,:DWORD,:DWORD
RtlMoveMemory PROTO :DWORD,:DWORD,:DWORD
RtlUnwind PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtlZeroMemory PROTO :DWORD,:DWORD
ScrollConsoleScreenBufferA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ScrollConsoleScreenBuffer equ <ScrollConsoleScreenBufferA>

SearchPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SearchPath equ <SearchPathA>

SetCachedSigningLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCalendarInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCalendarInfo equ <SetCalendarInfoA>

SetCommBreak PROTO :DWORD
SetCommConfig PROTO :DWORD,:DWORD,:DWORD
SetCommMask PROTO :DWORD,:DWORD
SetCommState PROTO :DWORD,:DWORD
SetCommTimeouts PROTO :DWORD,:DWORD
SetComputerNameA PROTO :DWORD
SetComputerName equ <SetComputerNameA>

SetComputerNameExA PROTO :DWORD,:DWORD
SetComputerNameEx equ <SetComputerNameExA>

SetConsoleActiveScreenBuffer PROTO :DWORD
SetConsoleCP PROTO :DWORD
SetConsoleCtrlHandler PROTO :DWORD,:DWORD
SetConsoleCursor PROTO :DWORD,:DWORD
SetConsoleCursorInfo PROTO :DWORD,:DWORD
SetConsoleCursorPosition PROTO :DWORD,:DWORD
SetConsoleDisplayMode PROTO :DWORD,:DWORD,:DWORD
SetConsoleHistoryInfo PROTO :DWORD
SetConsoleMode PROTO :DWORD,:DWORD
SetConsoleOutputCP PROTO :DWORD
SetConsoleScreenBufferInfoEx PROTO :DWORD,:DWORD
SetConsoleScreenBufferSize PROTO :DWORD,:DWORD
SetConsoleTextAttribute PROTO :DWORD,:DWORD
SetConsoleTitleA PROTO :DWORD
SetConsoleTitle equ <SetConsoleTitleA>

SetConsoleWindowInfo PROTO :DWORD,:DWORD,:DWORD
SetCriticalSectionSpinCount PROTO :DWORD,:DWORD
SetCurrentConsoleFontEx PROTO :DWORD,:DWORD,:DWORD
SetCurrentDirectoryA PROTO :DWORD
SetCurrentDirectory equ <SetCurrentDirectoryA>

SetDefaultCommConfigA PROTO :DWORD,:DWORD,:DWORD
SetDefaultCommConfig equ <SetDefaultCommConfigA>

SetDefaultDllDirectories PROTO :DWORD
SetDllDirectoryA PROTO :DWORD
SetDllDirectory equ <SetDllDirectoryA>

SetDynamicTimeZoneInformation PROTO :DWORD
SetEndOfFile PROTO :DWORD
SetEnvironmentStringsA PROTO :DWORD
SetEnvironmentStrings equ <SetEnvironmentStringsA>

SetEnvironmentVariableA PROTO :DWORD,:DWORD
SetEnvironmentVariable equ <SetEnvironmentVariableA>

SetErrorMode PROTO :DWORD
SetEvent PROTO :DWORD
SetEventWhenCallbackReturns PROTO :DWORD,:DWORD
SetFileApisToANSI PROTO
SetFileApisToOEM PROTO
SetFileAttributesA PROTO :DWORD,:DWORD
SetFileAttributes equ <SetFileAttributesA>

SetFileAttributesTransactedA PROTO :DWORD,:DWORD,:DWORD
SetFileAttributesTransacted equ <SetFileAttributesTransactedA>

SetFileBandwidthReservation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetFileCompletionNotificationModes PROTO :DWORD,:DWORD
SetFileInformationByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFileIoOverlappedRange PROTO :DWORD,:DWORD,:DWORD
SetFilePointer PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFilePointerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetFileShortNameA PROTO :DWORD,:DWORD
SetFileShortName equ <SetFileShortNameA>

SetFileTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFileValidData PROTO :DWORD,:DWORD,:DWORD
SetFirmwareEnvironmentVariableA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFirmwareEnvironmentVariable equ <SetFirmwareEnvironmentVariableA>

SetFirmwareEnvironmentVariableExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetFirmwareEnvironmentVariableEx equ <SetFirmwareEnvironmentVariableExA>

SetHandleCount PROTO :DWORD
SetHandleInformation PROTO :DWORD,:DWORD,:DWORD
SetInformationJobObject PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetLastError PROTO :DWORD
SetLocalPrimaryComputerNameA PROTO :DWORD,:DWORD
SetLocalPrimaryComputerName equ <SetLocalPrimaryComputerNameA>

SetLocalTime PROTO :DWORD
SetLocaleInfoA PROTO :DWORD,:DWORD,:DWORD
SetLocaleInfo equ <SetLocaleInfoA>

SetMailslotInfo PROTO :DWORD,:DWORD
SetMessageWaitingIndicator PROTO :DWORD,:DWORD
SetNamedPipeAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetNamedPipeHandleState PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPriorityClass PROTO :DWORD,:DWORD
SetProcessAffinityMask PROTO :DWORD,:DWORD
SetProcessAffinityUpdateMode PROTO :DWORD,:DWORD
SetProcessDEPPolicy PROTO :DWORD
SetProcessInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetProcessMitigationPolicy PROTO :DWORD,:DWORD,:DWORD
SetProcessPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD
SetProcessPriorityBoost PROTO :DWORD,:DWORD
SetProcessShutdownParameters PROTO :DWORD,:DWORD
SetProcessWorkingSetSize PROTO :DWORD,:DWORD,:DWORD
SetProcessWorkingSetSizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetProtectedPolicy PROTO :DWORD,:DWORD,:DWORD
SetSearchPathMode PROTO :DWORD
SetStdHandle PROTO :DWORD,:DWORD
SetStdHandleEx PROTO :DWORD,:DWORD,:DWORD
SetSystemFileCacheSize PROTO :DWORD,:DWORD,:DWORD
SetSystemPowerState PROTO :DWORD,:DWORD
SetSystemTime PROTO :DWORD
SetSystemTimeAdjustment PROTO :DWORD,:DWORD
SetTapeParameters PROTO :DWORD,:DWORD,:DWORD
SetTapePosition PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetThreadAffinityMask PROTO :DWORD,:DWORD
SetThreadContext PROTO :DWORD,:DWORD
SetThreadErrorMode PROTO :DWORD,:DWORD
SetThreadExecutionState PROTO :DWORD
SetThreadGroupAffinity PROTO :DWORD,:DWORD,:DWORD
SetThreadIdealProcessor PROTO :DWORD,:DWORD
SetThreadIdealProcessorEx PROTO :DWORD,:DWORD,:DWORD
SetThreadInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadLocale PROTO :DWORD
SetThreadPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD
SetThreadPriority PROTO :DWORD,:DWORD
SetThreadPriorityBoost PROTO :DWORD,:DWORD
SetThreadStackGuarantee PROTO :DWORD
SetThreadUILanguage PROTO :DWORD
SetThreadpoolStackInformation PROTO :DWORD,:DWORD
SetThreadpoolThreadMaximum PROTO :DWORD,:DWORD
SetThreadpoolThreadMinimum PROTO :DWORD,:DWORD
SetThreadpoolTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadpoolTimerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadpoolWait PROTO :DWORD,:DWORD,:DWORD
SetThreadpoolWaitEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetTimeZoneInformation PROTO :DWORD
SetTimerQueueTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetUnhandledExceptionFilter PROTO :DWORD
SetUserGeoID PROTO :DWORD
SetVolumeLabelA PROTO :DWORD,:DWORD
SetVolumeLabel equ <SetVolumeLabelA>

SetVolumeMountPointA PROTO :DWORD,:DWORD
SetVolumeMountPoint equ <SetVolumeMountPointA>

SetWaitableTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetWaitableTimerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetXStateFeaturesMask PROTO :DWORD,:DWORD,:DWORD
SetupComm PROTO :DWORD,:DWORD,:DWORD
SignalObjectAndWait PROTO :DWORD,:DWORD,:DWORD,:DWORD
SizeofResource PROTO :DWORD,:DWORD
Sleep PROTO :DWORD
SleepConditionVariableCS PROTO :DWORD,:DWORD,:DWORD
SleepEx PROTO :DWORD,:DWORD
StartThreadpoolIo PROTO :DWORD
SubmitThreadpoolWork PROTO :DWORD
SuspendThread PROTO :DWORD
SwitchToFiber PROTO :DWORD
SwitchToThread PROTO
SystemTimeToFileTime PROTO :DWORD,:DWORD
SystemTimeToTzSpecificLocalTime PROTO :DWORD,:DWORD,:DWORD
SystemTimeToTzSpecificLocalTimeEx PROTO :DWORD,:DWORD,:DWORD
TerminateJobObject PROTO :DWORD,:DWORD
TerminateProcess PROTO :DWORD,:DWORD
TerminateThread PROTO :DWORD,:DWORD
Thread32First PROTO :DWORD,:DWORD
Thread32Next PROTO :DWORD,:DWORD
TlsAlloc PROTO
TlsFree PROTO :DWORD
TlsGetValue PROTO :DWORD
TlsSetValue PROTO :DWORD,:DWORD
Toolhelp32ReadProcessMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TransactNamedPipe PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TransmitCommChar PROTO :DWORD,:DWORD
TryAcquireSRWLockExclusive PROTO :DWORD
TryAcquireSRWLockShared PROTO :DWORD
TryEnterCriticalSection PROTO :DWORD
TrySubmitThreadpoolCallback PROTO :DWORD,:DWORD,:DWORD
TzSpecificLocalTimeToSystemTime PROTO :DWORD,:DWORD,:DWORD
TzSpecificLocalTimeToSystemTimeEx PROTO :DWORD,:DWORD,:DWORD
UnhandledExceptionFilter PROTO :DWORD
UnlockFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnlockFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnmapViewOfFile PROTO :DWORD
UnmapViewOfFileEx PROTO :DWORD,:DWORD
UnregisterApplicationRecoveryCallback PROTO
UnregisterApplicationRestart PROTO
UnregisterBadMemoryNotification PROTO :DWORD
UnregisterWait PROTO :DWORD
UnregisterWaitEx PROTO :DWORD,:DWORD
UnregisterWaitUntilOOBECompleted PROTO :DWORD
UpdateProcThreadAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UpdateResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UpdateResource equ <UpdateResourceA>

VerLanguageNameA PROTO :DWORD,:DWORD,:DWORD
VerLanguageName equ <VerLanguageNameA>

VerSetConditionMask PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifyScripts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VerifyVersionInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifyVersionInfo equ <VerifyVersionInfoA>

VirtualAlloc PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualAllocEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualAllocExNuma PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualFree PROTO :DWORD,:DWORD,:DWORD
VirtualFreeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualLock PROTO :DWORD,:DWORD
VirtualProtect PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualProtectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualQuery PROTO :DWORD,:DWORD,:DWORD
VirtualQueryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualUnlock PROTO :DWORD,:DWORD
WTSGetActiveConsoleSessionId PROTO
WaitCommEvent PROTO :DWORD,:DWORD,:DWORD
WaitForDebugEvent PROTO :DWORD,:DWORD
WaitForMultipleObjects PROTO :DWORD,:DWORD,:DWORD,:DWORD
WaitForMultipleObjectsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WaitForSingleObject PROTO :DWORD,:DWORD
WaitForSingleObjectEx PROTO :DWORD,:DWORD,:DWORD
WaitForThreadpoolIoCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolTimerCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolWaitCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolWorkCallbacks PROTO :DWORD,:DWORD
WaitNamedPipeA PROTO :DWORD,:DWORD
WaitNamedPipe equ <WaitNamedPipeA>

WakeAllConditionVariable PROTO :DWORD
WakeConditionVariable PROTO :DWORD
WerGetFlags PROTO :DWORD,:DWORD
WerRegisterFile PROTO :DWORD,:DWORD,:DWORD
WerRegisterMemoryBlock PROTO :DWORD,:DWORD
WerRegisterRuntimeExceptionModule PROTO :DWORD,:DWORD
WerSetFlags PROTO :DWORD
WerUnregisterFile PROTO :DWORD
WerUnregisterMemoryBlock PROTO :DWORD
WerUnregisterRuntimeExceptionModule PROTO :DWORD,:DWORD
WerpInitiateRemoteRecovery PROTO :DWORD
WideCharToMultiByte PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinExec PROTO :DWORD,:DWORD
Wow64DisableWow64FsRedirection PROTO :DWORD
Wow64EnableWow64FsRedirection PROTO :DWORD
Wow64GetThreadContext PROTO :DWORD,:DWORD
Wow64GetThreadSelectorEntry PROTO :DWORD,:DWORD,:DWORD
Wow64RevertWow64FsRedirection PROTO :DWORD
Wow64SetThreadContext PROTO :DWORD,:DWORD
Wow64SuspendThread PROTO :DWORD
WriteConsoleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsole equ <WriteConsoleA>

WriteConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleInput equ <WriteConsoleInputA>

WriteConsoleOutputA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutput equ <WriteConsoleOutputA>

WriteConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutputCharacter equ <WriteConsoleOutputCharacterA>

WriteFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteFileGather PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WritePrivateProfileSectionA PROTO :DWORD,:DWORD,:DWORD
WritePrivateProfileSection equ <WritePrivateProfileSectionA>

WritePrivateProfileStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WritePrivateProfileString equ <WritePrivateProfileStringA>

WritePrivateProfileStructA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WritePrivateProfileStruct equ <WritePrivateProfileStructA>

WriteProcessMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteProfileSectionA PROTO :DWORD,:DWORD
WriteProfileSection equ <WriteProfileSectionA>

WriteProfileStringA PROTO :DWORD,:DWORD,:DWORD
WriteProfileString equ <WriteProfileStringA>

WriteTapemark PROTO :DWORD,:DWORD,:DWORD,:DWORD
ZombifyActCtx PROTO :DWORD
_hread PROTO :DWORD,:DWORD,:DWORD
_hwrite PROTO :DWORD,:DWORD,:DWORD
_lcreat PROTO :DWORD,:DWORD
_lopen PROTO :DWORD,:DWORD

lstrcmpiA PROTO :DWORD,:DWORD
lstrcmpi equ <lstrcmpiA>
