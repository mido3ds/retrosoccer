; ..\X86\mspatchc.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CreatePatchFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFile equ <CreatePatchFileA>

CreatePatchFileByHandles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileByHandlesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileEx equ <CreatePatchFileExA>

ExtractPatchHeaderToFileA PROTO :DWORD,:DWORD
ExtractPatchHeaderToFile equ <ExtractPatchHeaderToFileA>

ExtractPatchHeaderToFileByHandles PROTO :DWORD,:DWORD
GetFilePatchSignatureA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignature equ <GetFilePatchSignatureA>

GetFilePatchSignatureByBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignatureByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NormalizeFileForPatchSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

