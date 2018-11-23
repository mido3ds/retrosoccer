; ..\X86\shell32.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AssocCreateForClasses PROTO :DWORD,:DWORD,:DWORD,:DWORD
AssocGetDetailsOfPropKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CDefFolderMenu_Create2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CIDLData_CreateFromIDArray PROTO :DWORD,:DWORD,:DWORD,:DWORD
DAD_AutoScroll PROTO :DWORD,:DWORD,:DWORD
DAD_DragEnterEx PROTO :DWORD,:DWORD,:DWORD
DAD_DragEnterEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
DAD_DragLeave PROTO
DAD_DragMove PROTO :DWORD,:DWORD
DAD_SetDragImage PROTO :DWORD,:DWORD
DAD_ShowDragImage PROTO :DWORD
DoEnvironmentSubstA PROTO :DWORD,:DWORD
DoEnvironmentSubst equ <DoEnvironmentSubstA>

DragAcceptFiles PROTO :DWORD,:DWORD
DragFinish PROTO :DWORD
DragQueryFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DragQueryFile equ <DragQueryFileA>

DragQueryPoint PROTO :DWORD,:DWORD
DriveType PROTO :DWORD
DuplicateIcon PROTO :DWORD,:DWORD
ExtractAssociatedIconA PROTO :DWORD,:DWORD,:DWORD
ExtractAssociatedIcon equ <ExtractAssociatedIconA>

ExtractAssociatedIconExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ExtractAssociatedIconEx equ <ExtractAssociatedIconExA>

ExtractIconA PROTO :DWORD,:DWORD,:DWORD
ExtractIcon equ <ExtractIconA>

ExtractIconExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtractIconEx equ <ExtractIconExA>

FindExecutableA PROTO :DWORD,:DWORD,:DWORD
FindExecutable equ <FindExecutableA>

GetCurrentProcessExplicitAppUserModelID PROTO :DWORD
GetFileNameFromBrowse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ILAppendID PROTO :DWORD,:DWORD,:DWORD
ILClone PROTO :DWORD
ILCloneFirst PROTO :DWORD
ILCombine PROTO :DWORD,:DWORD
ILCreateFromPathA PROTO :DWORD
ILCreateFromPath equ <ILCreateFromPathA>

ILFindChild PROTO :DWORD,:DWORD
ILFindLastID PROTO :DWORD
ILFree PROTO :DWORD
ILGetNext PROTO :DWORD
ILGetSize PROTO :DWORD
ILIsEqual PROTO :DWORD,:DWORD
ILIsParent PROTO :DWORD,:DWORD,:DWORD
ILLoadFromStreamEx PROTO :DWORD,:DWORD
ILRemoveLastID PROTO :DWORD
ILSaveToStream PROTO :DWORD,:DWORD
InitNetworkAddressControl PROTO
IsLFNDriveA PROTO :DWORD
IsLFNDrive equ <IsLFNDriveA>

IsNetDrive PROTO :DWORD
IsUserAnAdmin PROTO
OpenRegStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCleanupSpec PROTO :DWORD,:DWORD
PathCleanupSpecWorker PROTO :DWORD,:DWORD
PathGetShortPath PROTO :DWORD
PathIsExe PROTO :DWORD
PathIsExeWorker PROTO :DWORD
PathIsSlowA PROTO :DWORD,:DWORD
PathIsSlow equ <PathIsSlowA>

PathMakeUniqueName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathQualify PROTO :DWORD
PathResolve PROTO :DWORD,:DWORD,:DWORD
PathYetAnotherMakeUniqueName PROTO :DWORD,:DWORD,:DWORD,:DWORD
PickIconDlg PROTO :DWORD,:DWORD,:DWORD,:DWORD
PifMgr_CloseProperties PROTO :DWORD,:DWORD
PifMgr_GetProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PifMgr_OpenProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
PifMgr_SetProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadCabinetState PROTO :DWORD,:DWORD
RealDriveType PROTO :DWORD,:DWORD
RestartDialog PROTO :DWORD,:DWORD,:DWORD
RestartDialogEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHAddDefaultPropertiesByExt PROTO :DWORD,:DWORD
SHAddFromPropSheetExtArray PROTO :DWORD,:DWORD,:DWORD
SHAddToRecentDocs PROTO :DWORD,:DWORD
SHAlloc PROTO :DWORD
SHAppBarMessage PROTO :DWORD,:DWORD
SHAssocEnumHandlers PROTO :DWORD,:DWORD,:DWORD
SHAssocEnumHandlersForProtocolByApplication PROTO :DWORD,:DWORD,:DWORD
SHBindToFolderIDListParent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHBindToFolderIDListParentEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHBindToObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHBindToParent PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHBrowseForFolderA PROTO :DWORD
SHBrowseForFolder equ <SHBrowseForFolderA>

SHCLSIDFromString PROTO :DWORD,:DWORD
SHChangeNotification_Lock PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHChangeNotification_Unlock PROTO :DWORD
SHChangeNotify PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHChangeNotifyDeregister PROTO :DWORD
SHChangeNotifyRegister PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHChangeNotifyRegisterThread PROTO :DWORD
SHCloneSpecialIDList PROTO :DWORD,:DWORD,:DWORD
SHCoCreateInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCoCreateInstanceWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateAssociationRegistration PROTO :DWORD,:DWORD
SHCreateDataObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateDefaultContextMenu PROTO :DWORD,:DWORD,:DWORD
SHCreateDefaultExtractIcon PROTO :DWORD,:DWORD
SHCreateDefaultPropertiesOp PROTO :DWORD,:DWORD
SHCreateDirectory PROTO :DWORD,:DWORD
SHCreateDirectoryExA PROTO :DWORD,:DWORD,:DWORD
SHCreateDirectoryEx equ <SHCreateDirectoryExA>

SHCreateDirectoryExWWorker PROTO :DWORD,:DWORD,:DWORD
SHCreateItemFromIDList PROTO :DWORD,:DWORD,:DWORD
SHCreateItemFromParsingName PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHCreateItemFromRelativeName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateItemInKnownFolder PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateItemWithParent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreatePropSheetExtArray PROTO :DWORD,:DWORD,:DWORD
SHCreateQueryCancelAutoPlayMoniker PROTO :DWORD
SHCreateShellFolderView PROTO :DWORD,:DWORD
SHCreateShellFolderViewEx PROTO :DWORD,:DWORD
SHCreateShellItem PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHCreateShellItemArray PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateShellItemArrayFromDataObject PROTO :DWORD,:DWORD,:DWORD
SHCreateShellItemArrayFromIDLists PROTO :DWORD,:DWORD,:DWORD
SHCreateShellItemArrayFromShellItem PROTO :DWORD,:DWORD,:DWORD
SHCreateStdEnumFmtEtc PROTO :DWORD,:DWORD,:DWORD
SHDefExtractIconA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHDefExtractIcon equ <SHDefExtractIconA>

SHDestroyPropSheetExtArray PROTO :DWORD
SHDoDragDrop PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHEmptyRecycleBinA PROTO :DWORD,:DWORD,:DWORD
SHEmptyRecycleBin equ <SHEmptyRecycleBinA>

SHEvaluateSystemCommandTemplate PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHFileOperationA PROTO :DWORD
SHFileOperation equ <SHFileOperationA>

SHFindFiles PROTO :DWORD,:DWORD
SHFind_InitMenuPopup PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHFlushSFCache PROTO
SHFormatDrive PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHFree PROTO :DWORD
SHFreeNameMappings PROTO :DWORD
SHGetAttributesFromDataObject PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetDataFromIDListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetDataFromIDList equ <SHGetDataFromIDListA>

SHGetDesktopFolder PROTO :DWORD
SHGetDesktopFolderWorker PROTO :DWORD
SHGetDiskFreeSpaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetDiskFreeSpace equ <SHGetDiskFreeSpaceA>

SHGetDiskFreeSpaceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetDiskFreeSpaceEx equ <SHGetDiskFreeSpaceExA>

SHGetDriveMedia PROTO :DWORD,:DWORD
SHGetFileInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFileInfo equ <SHGetFileInfoA>

SHGetFileInfoWWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderLocation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderLocationWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPath equ <SHGetFolderPathA>

SHGetFolderPathAWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPathAndSubDirA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPathAndSubDir equ <SHGetFolderPathAndSubDirA>

SHGetFolderPathAndSubDirWWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPathEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetFolderPathWWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetIDListFromObject PROTO :DWORD,:DWORD
SHGetIconOverlayIndexA PROTO :DWORD,:DWORD
SHGetIconOverlayIndex equ <SHGetIconOverlayIndexA>

SHGetImageList PROTO :DWORD,:DWORD,:DWORD
SHGetInstanceExplorer PROTO :DWORD
SHGetInstanceExplorerWorker PROTO :DWORD
SHGetItemFromDataObject PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetItemFromObject PROTO :DWORD,:DWORD,:DWORD
SHGetKnownFolderIDList PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetKnownFolderItem PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetKnownFolderPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetKnownFolderPathWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetLocalizedName PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetMalloc PROTO :DWORD
SHGetNameFromIDList PROTO :DWORD,:DWORD,:DWORD
SHGetNewLinkInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetNewLinkInfo equ <SHGetNewLinkInfoA>

SHGetPathFromIDListA PROTO :DWORD,:DWORD
SHGetPathFromIDList equ <SHGetPathFromIDListA>

SHGetPathFromIDListEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetPropertyStoreForWindow PROTO :DWORD,:DWORD,:DWORD
SHGetPropertyStoreFromIDList PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetPropertyStoreFromParsingName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetRealIDL PROTO :DWORD,:DWORD,:DWORD
SHGetSetFolderCustomSettings PROTO :DWORD,:DWORD,:DWORD
SHGetSetSettings PROTO :DWORD,:DWORD,:DWORD
SHGetSettings PROTO :DWORD,:DWORD
SHGetSpecialFolderLocation PROTO :DWORD,:DWORD,:DWORD
SHGetSpecialFolderPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetSpecialFolderPath equ <SHGetSpecialFolderPathA>

SHGetSpecialFolderPathAWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetSpecialFolderPathWWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetStockIconInfo PROTO :DWORD,:DWORD,:DWORD
SHGetTemporaryPropertyForItem PROTO :DWORD,:DWORD,:DWORD
SHHandleUpdateImage PROTO :DWORD
SHILCreateFromPath PROTO :DWORD,:DWORD,:DWORD
SHInvokePrinterCommandA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHInvokePrinterCommand equ <SHInvokePrinterCommandA>

SHIsFileAvailableOffline PROTO :DWORD,:DWORD
SHLimitInputEdit PROTO :DWORD,:DWORD
SHLoadInProc PROTO :DWORD
SHLoadNonloadedIconOverlayIdentifiers PROTO
SHMapPIDLToSystemImageListIndex PROTO :DWORD,:DWORD,:DWORD
SHMultiFileProperties PROTO :DWORD,:DWORD
SHObjectProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenFolderAndSelectItems PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenWithDialog PROTO :DWORD,:DWORD
SHParseDisplayName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHPathPrepareForWriteA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHPathPrepareForWrite equ <SHPathPrepareForWriteA>

SHPropStgCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHPropStgReadMultiple PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHPropStgWriteMultiple PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHQueryRecycleBinA PROTO :DWORD,:DWORD
SHQueryRecycleBin equ <SHQueryRecycleBinA>

SHQueryUserNotificationState PROTO :DWORD
SHRemoveLocalizedName PROTO :DWORD
SHReplaceFromPropSheetExtArray PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHResolveLibrary PROTO :DWORD
SHRestricted PROTO :DWORD
SHSetDefaultProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHSetFolderPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHSetFolderPath equ <SHSetFolderPathA>

SHSetInstanceExplorer PROTO :DWORD
SHSetKnownFolderPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHSetKnownFolderPathWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHSetLocalizedName PROTO :DWORD,:DWORD,:DWORD
SHSetTemporaryPropertyForItem PROTO :DWORD,:DWORD,:DWORD
SHShellFolderView_Message PROTO :DWORD,:DWORD,:DWORD
SHShowManageLibraryUI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHSimpleIDListFromPath PROTO :DWORD
SHTestTokenMembership PROTO :DWORD,:DWORD
SHUpdateImageA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHUpdateImage equ <SHUpdateImageA>

SHValidateUNC PROTO :DWORD,:DWORD,:DWORD
SetCurrentProcessExplicitAppUserModelID PROTO :DWORD
ShellAboutA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ShellAbout equ <ShellAboutA>

ShellExecuteA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ShellExecute equ <ShellExecuteA>

ShellExecuteExA PROTO :DWORD
ShellExecuteEx equ <ShellExecuteExA>

ShellHookProc PROTO :DWORD,:DWORD,:DWORD
Shell_GetCachedImageIndexA PROTO :DWORD,:DWORD,:DWORD
Shell_GetCachedImageIndex equ <Shell_GetCachedImageIndexA>

Shell_GetImageLists PROTO :DWORD,:DWORD
Shell_MergeMenus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Shell_NotifyIconA PROTO :DWORD,:DWORD
Shell_NotifyIcon equ <Shell_NotifyIconA>

Shell_NotifyIconGetRect PROTO :DWORD,:DWORD
SignalFileOpen PROTO :DWORD
StgMakeUniqueName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WOWShellExecute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Win32DeleteFile PROTO :DWORD
WriteCabinetState PROTO :DWORD

