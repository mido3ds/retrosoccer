; ..\X86\CryptNet.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CryptGetObjectUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInstallCancelRetrieval PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptRetrieveObjectByUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRetrieveObjectByUrl equ <CryptRetrieveObjectByUrlA>

CryptUninstallCancelRetrieval PROTO :DWORD,:DWORD

