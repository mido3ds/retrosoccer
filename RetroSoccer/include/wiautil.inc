; ..\X86\wiautil.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

== PROTO :DWORD,:DWORD
GdipAlloc PROTO :DWORD
GdipCloneImage PROTO :DWORD,:DWORD
GdipDisposeImage PROTO :DWORD
GdipFree PROTO :DWORD
GdipGetImageDimension PROTO :DWORD,:DWORD,:DWORD
GdipGetImageEncoders PROTO :DWORD,:DWORD,:DWORD
GdipGetImageEncodersSize PROTO :DWORD,:DWORD
GdipGetImagePixelFormat PROTO :DWORD,:DWORD
GdipLoadImageFromStream PROTO :DWORD,:DWORD
GdipLoadImageFromStreamICM PROTO :DWORD,:DWORD
GdipSaveImageToStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
GdiplusShutdown PROTO :DWORD
GdiplusStartup PROTO :DWORD,:DWORD,:DWORD
HRESULT_FROM_WIN32 PROTO :DWORD
IsEqualGUID PROTO :DWORD,:DWORD
PropVariantInit PROTO :DWORD
StringCbCopyA PROTO :DWORD,:DWORD,:DWORD
StringCbCopy equ <StringCbCopyA>

StringCchCopyA PROTO :DWORD,:DWORD,:DWORD
StringCchCopy equ <StringCchCopyA>

StringCchVPrintfA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StringCchVPrintf equ <StringCchVPrintfA>

StringCopyWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringCopyWorker equ <StringCopyWorkerA>

StringVPrintfWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringVPrintfWorker equ <StringVPrintfWorkerA>

StringValidateDestA PROTO :DWORD,:DWORD,:DWORD
StringValidateDest equ <StringValidateDestA>

_real PROTO
_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD
wiasGetDrvItem PROTO :DWORD,:DWORD
wiasReadPropGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
wiasSetItemPropAttribs PROTO :DWORD,:DWORD,:DWORD,:DWORD
wiasSetItemPropNames PROTO :DWORD,:DWORD,:DWORD,:DWORD
wiasWriteMultiple PROTO :DWORD,:DWORD,:DWORD,:DWORD
wiauDbgHelper PROTO :DWORD,:DWORD,:DWORD,:DWORD
wiauDbgInit PROTO :DWORD

