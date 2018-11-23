; ..\X86\ShLwApi.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AssocCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AssocGetPerceivedType PROTO :DWORD,:DWORD,:DWORD,:DWORD
AssocIsDangerous PROTO :DWORD
AssocQueryKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AssocQueryKey equ <AssocQueryKeyA>

AssocQueryStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AssocQueryString equ <AssocQueryStringA>

AssocQueryStringByKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AssocQueryStringByKey equ <AssocQueryStringByKeyA>

ChrCmpIA PROTO :DWORD,:DWORD
ChrCmpI equ <ChrCmpIA>

ColorAdjustLuma PROTO :DWORD,:DWORD,:DWORD
ColorHLSToRGB PROTO :DWORD,:DWORD,:DWORD
ColorRGBToHLS PROTO :DWORD,:DWORD,:DWORD,:DWORD
ConnectToConnectionPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAcceptLanguagesA PROTO :DWORD,:DWORD
GetAcceptLanguages equ <GetAcceptLanguagesA>

GetMenuPosFromID PROTO :DWORD,:DWORD
HashData PROTO :DWORD,:DWORD,:DWORD,:DWORD
IStream_Copy PROTO :DWORD,:DWORD,:DWORD
IStream_Read PROTO :DWORD,:DWORD,:DWORD
IStream_ReadPidl PROTO :DWORD,:DWORD
IStream_ReadStr PROTO :DWORD,:DWORD
IStream_Reset PROTO :DWORD
IStream_Size PROTO :DWORD,:DWORD
IStream_Write PROTO :DWORD,:DWORD,:DWORD
IStream_WritePidl PROTO :DWORD,:DWORD
IStream_WriteStr PROTO :DWORD,:DWORD
IUnknown_AtomicRelease PROTO :DWORD
IUnknown_GetSite PROTO :DWORD,:DWORD,:DWORD
IUnknown_GetWindow PROTO :DWORD,:DWORD
IUnknown_QueryService PROTO :DWORD,:DWORD,:DWORD,:DWORD
IUnknown_Set PROTO :DWORD,:DWORD
IUnknown_SetSite PROTO :DWORD,:DWORD
IntlStrEqWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD
IntlStrEqWorker equ <IntlStrEqWorkerA>

IsCharSpaceA PROTO :DWORD
IsCharSpace equ <IsCharSpaceA>

IsInternetESCEnabled PROTO
IsOS PROTO :DWORD
MLLoadLibraryA PROTO :DWORD,:DWORD,:DWORD
MLLoadLibrary equ <MLLoadLibraryA>

ParseURLA PROTO :DWORD,:DWORD
ParseURL equ <ParseURLA>

PathAddBackslashA PROTO :DWORD
PathAddBackslash equ <PathAddBackslashA>

PathAddExtensionA PROTO :DWORD,:DWORD
PathAddExtension equ <PathAddExtensionA>

PathAppendA PROTO :DWORD,:DWORD
PathAppend equ <PathAppendA>

PathBuildRootA PROTO :DWORD,:DWORD
PathBuildRoot equ <PathBuildRootA>

PathCanonicalizeA PROTO :DWORD,:DWORD
PathCanonicalize equ <PathCanonicalizeA>

PathCombineA PROTO :DWORD,:DWORD,:DWORD
PathCombine equ <PathCombineA>

PathCommonPrefixA PROTO :DWORD,:DWORD,:DWORD
PathCommonPrefix equ <PathCommonPrefixA>

PathCompactPathA PROTO :DWORD,:DWORD,:DWORD
PathCompactPath equ <PathCompactPathA>

PathCompactPathExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCompactPathEx equ <PathCompactPathExA>

PathCreateFromUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCreateFromUrl equ <PathCreateFromUrlA>

PathCreateFromUrlAlloc PROTO :DWORD,:DWORD,:DWORD
PathFileExistsA PROTO :DWORD
PathFileExists equ <PathFileExistsA>

PathFindExtensionA PROTO :DWORD
PathFindExtension equ <PathFindExtensionA>

PathFindFileNameA PROTO :DWORD
PathFindFileName equ <PathFindFileNameA>

PathFindNextComponentA PROTO :DWORD
PathFindNextComponent equ <PathFindNextComponentA>

PathFindOnPathA PROTO :DWORD,:DWORD
PathFindOnPath equ <PathFindOnPathA>

PathFindSuffixArrayA PROTO :DWORD,:DWORD,:DWORD
PathFindSuffixArray equ <PathFindSuffixArrayA>

PathGetArgsA PROTO :DWORD
PathGetArgs equ <PathGetArgsA>

PathGetCharTypeA PROTO :DWORD
PathGetCharType equ <PathGetCharTypeA>

PathGetDriveNumberA PROTO :DWORD
PathGetDriveNumber equ <PathGetDriveNumberA>

PathIsContentTypeA PROTO :DWORD,:DWORD
PathIsContentType equ <PathIsContentTypeA>

PathIsDirectoryA PROTO :DWORD
PathIsDirectory equ <PathIsDirectoryA>

PathIsDirectoryEmptyA PROTO :DWORD
PathIsDirectoryEmpty equ <PathIsDirectoryEmptyA>

PathIsFileSpecA PROTO :DWORD
PathIsFileSpec equ <PathIsFileSpecA>

PathIsLFNFileSpecA PROTO :DWORD
PathIsLFNFileSpec equ <PathIsLFNFileSpecA>

PathIsNetworkPathA PROTO :DWORD
PathIsNetworkPath equ <PathIsNetworkPathA>

PathIsPrefixA PROTO :DWORD,:DWORD
PathIsPrefix equ <PathIsPrefixA>

PathIsRelativeA PROTO :DWORD
PathIsRelative equ <PathIsRelativeA>

PathIsRootA PROTO :DWORD
PathIsRoot equ <PathIsRootA>

PathIsSameRootA PROTO :DWORD,:DWORD
PathIsSameRoot equ <PathIsSameRootA>

PathIsSystemFolderA PROTO :DWORD,:DWORD
PathIsSystemFolder equ <PathIsSystemFolderA>

PathIsUNCA PROTO :DWORD
PathIsUNC equ <PathIsUNCA>

PathIsUNCServerA PROTO :DWORD
PathIsUNCServer equ <PathIsUNCServerA>

PathIsUNCServerShareA PROTO :DWORD
PathIsUNCServerShare equ <PathIsUNCServerShareA>

PathIsURLA PROTO :DWORD
PathIsURL equ <PathIsURLA>

PathMakePrettyA PROTO :DWORD
PathMakePretty equ <PathMakePrettyA>

PathMakeSystemFolderA PROTO :DWORD
PathMakeSystemFolder equ <PathMakeSystemFolderA>

PathMatchSpecA PROTO :DWORD,:DWORD
PathMatchSpec equ <PathMatchSpecA>

PathMatchSpecExA PROTO :DWORD,:DWORD,:DWORD
PathMatchSpecEx equ <PathMatchSpecExA>

PathParseIconLocationA PROTO :DWORD
PathParseIconLocation equ <PathParseIconLocationA>

PathQuoteSpacesA PROTO :DWORD
PathQuoteSpaces equ <PathQuoteSpacesA>

PathRelativePathToA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathRelativePathTo equ <PathRelativePathToA>

PathRemoveArgsA PROTO :DWORD
PathRemoveArgs equ <PathRemoveArgsA>

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

PathSearchAndQualifyA PROTO :DWORD,:DWORD,:DWORD
PathSearchAndQualify equ <PathSearchAndQualifyA>

PathSetDlgItemPathA PROTO :DWORD,:DWORD,:DWORD
PathSetDlgItemPath equ <PathSetDlgItemPathA>

PathSkipRootA PROTO :DWORD
PathSkipRoot equ <PathSkipRootA>

PathStripPathA PROTO :DWORD
PathStripPath equ <PathStripPathA>

PathStripToRootA PROTO :DWORD
PathStripToRoot equ <PathStripToRootA>

PathUnExpandEnvStringsA PROTO :DWORD,:DWORD,:DWORD
PathUnExpandEnvStrings equ <PathUnExpandEnvStringsA>

PathUndecorateA PROTO :DWORD
PathUndecorate equ <PathUndecorateA>

PathUnmakeSystemFolderA PROTO :DWORD
PathUnmakeSystemFolder equ <PathUnmakeSystemFolderA>

PathUnquoteSpacesA PROTO :DWORD
PathUnquoteSpaces equ <PathUnquoteSpacesA>

QISearch PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHAllocShared PROTO :DWORD,:DWORD,:DWORD
SHAnsiToAnsi PROTO :DWORD,:DWORD,:DWORD
SHAnsiToUnicode PROTO :DWORD,:DWORD,:DWORD
SHAutoComplete PROTO :DWORD,:DWORD
SHCopyKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHCopyKey equ <SHCopyKeyA>

SHCreateMemStream PROTO :DWORD,:DWORD
SHCreateShellPalette PROTO :DWORD
SHCreateStreamOnFileA PROTO :DWORD,:DWORD,:DWORD
SHCreateStreamOnFile equ <SHCreateStreamOnFileA>

SHCreateStreamOnFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHCreateThread PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHCreateThreadRef PROTO :DWORD,:DWORD
SHCreateThreadWithHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
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

SHFormatDateTimeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHFormatDateTime equ <SHFormatDateTimeA>

SHFreeShared PROTO :DWORD,:DWORD
SHGetInverseCMAP PROTO :DWORD,:DWORD
SHGetThreadRef PROTO :DWORD
SHGetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGetValue equ <SHGetValueA>

SHGetViewStatePropertyBag PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHGlobalCounterDecrement PROTO :DWORD
SHGlobalCounterGetValue PROTO :DWORD
SHGlobalCounterIncrement PROTO :DWORD
SHIsChildOrSelf PROTO :DWORD,:DWORD
SHIsLowMemoryMachine PROTO :DWORD
SHLoadIndirectString PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHLockShared PROTO :DWORD,:DWORD
SHMessageBoxCheckA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHMessageBoxCheck equ <SHMessageBoxCheckA>

SHOpenRegStream2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenRegStream2 equ <SHOpenRegStream2A>

SHOpenRegStreamA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHOpenRegStream equ <SHOpenRegStreamA>

SHPropertyBag_ReadStrAlloc PROTO :DWORD,:DWORD,:DWORD
SHPropertyBag_WriteBSTR PROTO :DWORD,:DWORD,:DWORD
SHQueryInfoKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHQueryInfoKey equ <SHQueryInfoKeyA>

SHQueryValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHQueryValueEx equ <SHQueryValueExA>

SHRegCloseUSKey PROTO :DWORD
SHRegCreateUSKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegCreateUSKey equ <SHRegCreateUSKeyA>

SHRegDeleteEmptyUSKeyA PROTO :DWORD,:DWORD,:DWORD
SHRegDeleteEmptyUSKey equ <SHRegDeleteEmptyUSKeyA>

SHRegDeleteUSValueA PROTO :DWORD,:DWORD,:DWORD
SHRegDeleteUSValue equ <SHRegDeleteUSValueA>

SHRegDuplicateHKey PROTO :DWORD
SHRegEnumUSKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegEnumUSKey equ <SHRegEnumUSKeyA>

SHRegEnumUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegEnumUSValue equ <SHRegEnumUSValueA>

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

SHRegQueryInfoUSKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegQueryInfoUSKey equ <SHRegQueryInfoUSKeyA>

SHRegQueryUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegQueryUSValue equ <SHRegQueryUSValueA>

SHRegSetPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegSetPath equ <SHRegSetPathA>

SHRegSetUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegSetUSValue equ <SHRegSetUSValueA>

SHRegWriteUSValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHRegWriteUSValue equ <SHRegWriteUSValueA>

SHReleaseThreadRef PROTO
SHRunIndirectRegClientCommand PROTO :DWORD,:DWORD
SHSendMessageBroadcastA PROTO :DWORD,:DWORD,:DWORD
SHSendMessageBroadcast equ <SHSendMessageBroadcastA>

SHSetThreadRef PROTO :DWORD
SHSetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SHSetValue equ <SHSetValueA>

SHSkipJunction PROTO :DWORD,:DWORD
SHStrDupA PROTO :DWORD,:DWORD
SHStrDup equ <SHStrDupA>

SHStripMneumonicA PROTO :DWORD
SHStripMneumonic equ <SHStripMneumonicA>

SHUnicodeToAnsi PROTO :DWORD,:DWORD,:DWORD
SHUnicodeToUnicode PROTO :DWORD,:DWORD,:DWORD
SHUnlockShared PROTO :DWORD
StrCSpnA PROTO :DWORD,:DWORD
StrCSpn equ <StrCSpnA>

StrCSpnIA PROTO :DWORD,:DWORD
StrCSpnI equ <StrCSpnIA>

StrCatBuffA PROTO :DWORD,:DWORD,:DWORD
StrCatBuff equ <StrCatBuffA>

StrChrA PROTO :DWORD,:DWORD
StrChr equ <StrChrA>

StrChrIA PROTO :DWORD,:DWORD
StrChrI equ <StrChrIA>

StrCmpCA PROTO :DWORD,:DWORD
StrCmpC equ <StrCmpCA>

StrCmpICA PROTO :DWORD,:DWORD
StrCmpIC equ <StrCmpICA>

StrCmpNA PROTO :DWORD,:DWORD,:DWORD
StrCmpN equ <StrCmpNA>

StrCmpNCA PROTO :DWORD,:DWORD,:DWORD
StrCmpNC equ <StrCmpNCA>

StrCmpNIA PROTO :DWORD,:DWORD,:DWORD
StrCmpNI equ <StrCmpNIA>

StrCmpNICA PROTO :DWORD,:DWORD,:DWORD
StrCmpNIC equ <StrCmpNICA>

StrDupA PROTO :DWORD
StrDup equ <StrDupA>

StrFormatByteSize64A PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrFormatByteSize64 equ <StrFormatByteSize64A>

StrFormatByteSizeA PROTO :DWORD,:DWORD,:DWORD
StrFormatByteSize equ <StrFormatByteSizeA>

StrFormatByteSizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrFormatKBSizeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrFormatKBSize equ <StrFormatKBSizeA>

StrFromTimeIntervalA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrFromTimeInterval equ <StrFromTimeIntervalA>

StrIsIntlEqualA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrIsIntlEqual equ <StrIsIntlEqualA>

StrPBrkA PROTO :DWORD,:DWORD
StrPBrk equ <StrPBrkA>

StrRChrA PROTO :DWORD,:DWORD,:DWORD
StrRChr equ <StrRChrA>

StrRChrIA PROTO :DWORD,:DWORD,:DWORD
StrRChrI equ <StrRChrIA>

StrRStrIA PROTO :DWORD,:DWORD,:DWORD
StrRStrI equ <StrRStrIA>

StrRetToBSTR PROTO :DWORD,:DWORD,:DWORD
StrRetToBufA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrRetToBuf equ <StrRetToBufA>

StrRetToStrA PROTO :DWORD,:DWORD,:DWORD
StrRetToStr equ <StrRetToStrA>

StrSpnA PROTO :DWORD,:DWORD
StrSpn equ <StrSpnA>

StrStrA PROTO :DWORD,:DWORD
StrStr equ <StrStrA>

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

UrlApplySchemeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlApplyScheme equ <UrlApplySchemeA>

UrlCanonicalizeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlCanonicalize equ <UrlCanonicalizeA>

UrlCombineA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlCombine equ <UrlCombineA>

UrlCompareA PROTO :DWORD,:DWORD,:DWORD
UrlCompare equ <UrlCompareA>

UrlCreateFromPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlCreateFromPath equ <UrlCreateFromPathA>

UrlEscapeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlEscape equ <UrlEscapeA>

UrlGetLocationA PROTO :DWORD
UrlGetLocation equ <UrlGetLocationA>

UrlGetPartA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UrlGetPart equ <UrlGetPartA>

UrlHashA PROTO :DWORD,:DWORD,:DWORD
UrlHash equ <UrlHashA>

UrlIsA PROTO :DWORD,:DWORD
UrlIs equ <UrlIsA>

UrlIsNoHistoryA PROTO :DWORD
UrlIsNoHistory equ <UrlIsNoHistoryA>

UrlIsOpaqueA PROTO :DWORD
UrlIsOpaque equ <UrlIsOpaqueA>

UrlUnescapeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UrlUnescape equ <UrlUnescapeA>

WhichPlatform PROTO
wvnsprintfA PROTO :DWORD,:DWORD,:DWORD,:DWORD
wvnsprintf equ <wvnsprintfA>


