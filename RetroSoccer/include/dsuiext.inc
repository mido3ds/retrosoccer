; ..\X86\DSUIExt.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CheckDsPolicy PROTO :DWORD,:DWORD
DsBrowseForContainerA PROTO :DWORD
DsBrowseForContainer equ <DsBrowseForContainerA>

DsGetFriendlyClassName PROTO :DWORD,:DWORD,:DWORD
DsGetIcon PROTO :DWORD,:DWORD,:DWORD,:DWORD
FormatDirectoryName PROTO :DWORD,:DWORD,:DWORD
GetArrayContents PROTO :DWORD,:DWORD,:DWORD
GetDisplayNameFromADsPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetStringElementA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetStringElement equ <GetStringElementA>

LocalAllocStringA PROTO :DWORD,:DWORD
LocalAllocString equ <LocalAllocStringA>

LocalAllocStringLenA PROTO :DWORD,:DWORD
LocalAllocStringLen equ <LocalAllocStringLenA>

LocalAllocStringW2A PROTO :DWORD,:DWORD
LocalAllocStringW2 equ <LocalAllocStringW2A>

LocalFreeStringA PROTO :DWORD
LocalFreeString equ <LocalFreeStringA>

LocalQueryStringA PROTO :DWORD,:DWORD,:DWORD
LocalQueryString equ <LocalQueryStringA>

ObjectClassFromSearchColumn PROTO :DWORD,:DWORD
PutStringElementA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PutStringElement equ <PutStringElementA>

ShowDirectoryUI PROTO
StringDPA_AppendStringA PROTO :DWORD,:DWORD,:DWORD
StringDPA_AppendString equ <StringDPA_AppendStringA>

StringDPA_DeleteString PROTO :DWORD,:DWORD
StringDPA_Destroy PROTO :DWORD
StringDPA_InsertStringA PROTO :DWORD,:DWORD,:DWORD
StringDPA_InsertString equ <StringDPA_InsertStringA>

StringFromSearchColumn PROTO :DWORD,:DWORD

