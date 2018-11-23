; ..\X86\security.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandle equ <AcquireCredentialsHandleA>

AddSecurityPackageA PROTO :DWORD,:DWORD
AddSecurityPackage equ <AddSecurityPackageA>

ApplyControlToken PROTO :DWORD,:DWORD
CompleteAuthToken PROTO :DWORD,:DWORD
DecryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeleteSecurityContext PROTO :DWORD
DeleteSecurityPackageA PROTO :DWORD
DeleteSecurityPackage equ <DeleteSecurityPackageA>

EncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumerateSecurityPackagesA PROTO :DWORD,:DWORD
EnumerateSecurityPackages equ <EnumerateSecurityPackagesA>

ExportSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
FreeContextBuffer PROTO :DWORD
FreeCredentialsHandle PROTO :DWORD
ImpersonateSecurityContext PROTO :DWORD
ImportSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImportSecurityContext equ <ImportSecurityContextA>

InitSecurityInterfaceA PROTO
InitSecurityInterface equ <InitSecurityInterfaceA>

InitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitializeSecurityContext equ <InitializeSecurityContextA>

MakeSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryContextAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryContextAttributes equ <QueryContextAttributesA>

QueryCredentialsAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryCredentialsAttributes equ <QueryCredentialsAttributesA>

QuerySecurityContextToken PROTO :DWORD,:DWORD
QuerySecurityPackageInfoA PROTO :DWORD,:DWORD
QuerySecurityPackageInfo equ <QuerySecurityPackageInfoA>

RevertSecurityContext PROTO :DWORD
SealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
UnsealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD

