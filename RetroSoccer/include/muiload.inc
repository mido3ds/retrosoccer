; ..\X86\muiload.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Buffer_CchFor PROTO :DWORD,:DWORD,:DWORD
Buffer_Contains PROTO :DWORD,:DWORD,:DWORD
DownLevelGetParentLanguageName PROTO :DWORD,:DWORD,:DWORD,:DWORD
DownLevelIsValidLANGID PROTO :DWORD
DownLevelLangIDToLanguageName PROTO :DWORD,:DWORD,:DWORD,:DWORD
DownLevelLanguageNameToLangID PROTO :DWORD,:DWORD
FreeMUILibrary PROTO :DWORD
GetUILanguageFallbackList PROTO :DWORD,:DWORD,:DWORD
LoadMUILibraryA PROTO :DWORD,:DWORD,:DWORD
LoadMUILibrary equ <LoadMUILibraryA>

MultiStr_Add PROTO :DWORD,:DWORD,:DWORD
MultiStr_At PROTO :DWORD,:DWORD,:DWORD,:DWORD
MultiStr_AtC PROTO :DWORD,:DWORD,:DWORD,:DWORD
MultiStr_Clear PROTO :DWORD,:DWORD
MultiStr_Count PROTO :DWORD,:DWORD,:DWORD
MultiStr_DataLength PROTO :DWORD,:DWORD
MultiStr_Empty PROTO :DWORD
MultiStr_Equals PROTO :DWORD,:DWORD
MultiStr_FrontEquals PROTO :DWORD,:DWORD
MultiStr_Includes PROTO :DWORD,:DWORD,:DWORD
MultiStr_Next PROTO :DWORD
MultiStr_NextC PROTO :DWORD
MultiStr_NextN PROTO :DWORD,:DWORD,:DWORD
MultiStr_NextNC PROTO :DWORD,:DWORD,:DWORD
MultiStr_PushBack PROTO :DWORD,:DWORD,:DWORD
MultiStr_Size PROTO :DWORD,:DWORD
MultiStr_Terminate PROTO :DWORD,:DWORD
String_Empty PROTO :DWORD
String_Equals PROTO :DWORD,:DWORD
_guard_fids__DownLevelGetParentLanguageName PROTO :DWORD,:DWORD,:DWORD,:DWORD
_guard_fids__DownLevelIsValidLANGID PROTO :DWORD
_guard_fids__DownLevelLangIDToLanguageName PROTO :DWORD,:DWORD,:DWORD,:DWORD
_guard_fids__DownLevelLanguageNameToLangID PROTO :DWORD,:DWORD
_guard_fids__GetUILanguageFallbackList PROTO :DWORD,:DWORD,:DWORD
_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

