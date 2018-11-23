; ..\X86\schannel.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandle equ <AcquireCredentialsHandleA>

ApplyControlToken PROTO :DWORD,:DWORD
CompleteAuthToken PROTO :DWORD,:DWORD
DeleteSecurityContext PROTO :DWORD
EnumerateSecurityPackagesA PROTO :DWORD,:DWORD
EnumerateSecurityPackages equ <EnumerateSecurityPackagesA>

FreeContextBuffer PROTO :DWORD
FreeCredentialsHandle PROTO :DWORD
ImpersonateSecurityContext PROTO :DWORD
InitSecurityInterfaceA PROTO
InitSecurityInterface equ <InitSecurityInterfaceA>

InitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitializeSecurityContext equ <InitializeSecurityContextA>

MakeSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryContextAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryContextAttributes equ <QueryContextAttributesA>

QuerySecurityPackageInfoA PROTO :DWORD,:DWORD
QuerySecurityPackageInfo equ <QuerySecurityPackageInfoA>

RevertSecurityContext PROTO :DWORD
SealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
SpUserModeInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
SslCrackCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD
SslEmptyCacheA PROTO :DWORD,:DWORD
SslEmptyCache equ <SslEmptyCacheA>

SslFreeCertificate PROTO :DWORD
SslFreeCustomBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD
SslGenerateRandomBits PROTO :DWORD,:DWORD
SslGetMaximumKeySize PROTO :DWORD
SslGetServerIdentity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslLoadCertificate PROTO :DWORD,:DWORD,:DWORD
UnsealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD

