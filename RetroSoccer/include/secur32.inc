; ..\X86\Secur32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandle equ <AcquireCredentialsHandleA>

AddCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddCredentials equ <AddCredentialsA>

AddSecurityPackageA PROTO :DWORD,:DWORD
AddSecurityPackage equ <AddSecurityPackageA>

ApplyControlToken PROTO :DWORD,:DWORD
ChangeAccountPasswordA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ChangeAccountPassword equ <ChangeAccountPasswordA>

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
GetComputerObjectNameA PROTO :DWORD,:DWORD,:DWORD
GetComputerObjectName equ <GetComputerObjectNameA>

GetSecurityUserInfo PROTO :DWORD,:DWORD,:DWORD
GetUserNameExA PROTO :DWORD,:DWORD,:DWORD
GetUserNameEx equ <GetUserNameExA>

ImpersonateSecurityContext PROTO :DWORD
ImportSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImportSecurityContext equ <ImportSecurityContextA>

InitSecurityInterfaceA PROTO
InitSecurityInterface equ <InitSecurityInterfaceA>

InitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitializeSecurityContext equ <InitializeSecurityContextA>

LsaCallAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaConnectUntrusted PROTO :DWORD
LsaDeregisterLogonProcess PROTO :DWORD
LsaEnumerateLogonSessions PROTO :DWORD,:DWORD
LsaFreeReturnBuffer PROTO :DWORD
LsaGetLogonSessionData PROTO :DWORD,:DWORD
LsaLogonUser PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD
LsaRegisterLogonProcess PROTO :DWORD,:DWORD,:DWORD
LsaRegisterPolicyChangeNotification PROTO :DWORD,:DWORD
LsaUnregisterPolicyChangeNotification PROTO :DWORD,:DWORD
MakeSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryContextAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryContextAttributes equ <QueryContextAttributesA>

QueryCredentialsAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryCredentialsAttributes equ <QueryCredentialsAttributesA>

QuerySecurityContextToken PROTO :DWORD,:DWORD
QuerySecurityPackageInfoA PROTO :DWORD,:DWORD
QuerySecurityPackageInfo equ <QuerySecurityPackageInfoA>

RevertSecurityContext PROTO :DWORD
SaslAcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslEnumerateProfilesA PROTO :DWORD,:DWORD
SaslEnumerateProfiles equ <SaslEnumerateProfilesA>

SaslGetContextOption PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslGetProfilePackageA PROTO :DWORD,:DWORD
SaslGetProfilePackage equ <SaslGetProfilePackageA>

SaslIdentifyPackageA PROTO :DWORD,:DWORD
SaslIdentifyPackage equ <SaslIdentifyPackageA>

SaslInitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslInitializeSecurityContext equ <SaslInitializeSecurityContextA>

SaslSetContextOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
SealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
SeciAllocateAndSetCallFlags PROTO :DWORD,:DWORD
SeciAllocateAndSetIPAddress PROTO :DWORD,:DWORD,:DWORD
SeciFreeCallContext PROTO
SetContextAttributesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetContextAttributes equ <SetContextAttributesA>

SetCredentialsAttributesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCredentialsAttributes equ <SetCredentialsAttributesA>

SspiCompareAuthIdentities PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiCopyAuthIdentity PROTO :DWORD,:DWORD
SspiDecryptAuthIdentity PROTO :DWORD
SspiEncodeAuthIdentityAsStrings PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiEncodeStringsAsAuthIdentity PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiEncryptAuthIdentity PROTO :DWORD
SspiExcludePackage PROTO :DWORD,:DWORD,:DWORD
SspiFreeAuthIdentity PROTO :DWORD
SspiGetTargetHostName PROTO :DWORD,:DWORD
SspiIsAuthIdentityEncrypted PROTO :DWORD
SspiLocalFree PROTO :DWORD
SspiMarshalAuthIdentity PROTO :DWORD,:DWORD,:DWORD
SspiPrepareForCredRead PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiPrepareForCredWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SspiUnmarshalAuthIdentity PROTO :DWORD,:DWORD,:DWORD
SspiValidateAuthIdentity PROTO :DWORD
SspiZeroAuthIdentity PROTO :DWORD
TranslateNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TranslateName equ <TranslateNameA>

UnsealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD

