; ..\X86\CertPolEng.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

PstAcquirePrivateKey PROTO :DWORD
PstGetCertificateChain PROTO :DWORD,:DWORD,:DWORD
PstGetCertificates PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PstGetTrustAnchors PROTO :DWORD,:DWORD,:DWORD,:DWORD
PstGetTrustAnchorsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PstGetUserNameForCertificate PROTO :DWORD,:DWORD
PstMapCertificate PROTO :DWORD,:DWORD,:DWORD
PstValidate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

