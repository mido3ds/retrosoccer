; ..\X86\mspatcha.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

ApplyPatchToFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ApplyPatchToFile equ <ApplyPatchToFileA>

ApplyPatchToFileByBuffers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ApplyPatchToFileByHandles PROTO :DWORD,:DWORD,:DWORD,:DWORD
ApplyPatchToFileByHandlesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ApplyPatchToFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ApplyPatchToFileEx equ <ApplyPatchToFileExA>

GetFilePatchSignatureA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignature equ <GetFilePatchSignatureA>

GetFilePatchSignatureByBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignatureByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NormalizeFileForPatchSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TestApplyPatchToFileA PROTO :DWORD,:DWORD,:DWORD
TestApplyPatchToFile equ <TestApplyPatchToFileA>

TestApplyPatchToFileByBuffers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TestApplyPatchToFileByHandles PROTO :DWORD,:DWORD,:DWORD

