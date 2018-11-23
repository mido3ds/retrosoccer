; ..\X86\mscorsn.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

GetHashFromAssemblyFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetHashFromBlob PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetHashFromFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetHashFromHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameCompareAssemblies PROTO :DWORD,:DWORD,:DWORD
StrongNameErrorInfo PROTO
StrongNameFreeBuffer PROTO :DWORD
StrongNameGetBlob PROTO :DWORD,:DWORD,:DWORD
StrongNameGetBlobFromImage PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrongNameGetPublicKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameHashSize PROTO :DWORD,:DWORD
StrongNameKeyDelete PROTO :DWORD
StrongNameKeyGen PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrongNameKeyGenEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameKeyInstall PROTO :DWORD,:DWORD,:DWORD
StrongNameSignatureGeneration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameSignatureGenerationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameSignatureSize PROTO :DWORD,:DWORD,:DWORD
StrongNameSignatureVerification PROTO :DWORD,:DWORD,:DWORD
StrongNameSignatureVerificationEx PROTO :DWORD,:DWORD,:DWORD
StrongNameSignatureVerificationFromImage PROTO :DWORD,:DWORD,:DWORD,:DWORD
StrongNameTokenFromAssembly PROTO :DWORD,:DWORD,:DWORD
StrongNameTokenFromAssemblyEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrongNameTokenFromPublicKey PROTO :DWORD,:DWORD,:DWORD,:DWORD

