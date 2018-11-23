; ..\X86\kerbcli.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

KerbChangePasswordUser PROTO :DWORD,:DWORD,:DWORD,:DWORD
KerbSetPasswordUser PROTO :DWORD,:DWORD,:DWORD,:DWORD
KerbSetPasswordUserEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaCallAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaConnectUntrusted PROTO :DWORD
LsaDeregisterLogonProcess PROTO :DWORD
LsaFreeReturnBuffer PROTO :DWORD
LsaLookupAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD

