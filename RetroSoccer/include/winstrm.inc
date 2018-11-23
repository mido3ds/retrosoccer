; ..\X86\WinStrm.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

MapNtToPosixStatus PROTO :DWORD
OpenStream PROTO :DWORD
StringCbCopyA PROTO :DWORD,:DWORD,:DWORD
StringCbCopy equ <StringCbCopyA>

StringCopyWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringCopyWorker equ <StringCopyWorkerA>

StringValidateDestA PROTO :DWORD,:DWORD,:DWORD
StringValidateDest equ <StringValidateDestA>

WSA_perror PROTO :DWORD,:DWORD
_security_check_cookie PROTO :DWORD
getmsg PROTO :DWORD,:DWORD,:DWORD,:DWORD
poll PROTO :DWORD,:DWORD,:DWORD
putmsg PROTO :DWORD,:DWORD,:DWORD,:DWORD
s_debug PROTO :DWORD,:DWORD
s_fdinsert PROTO :DWORD,:DWORD
s_ioctl PROTO :DWORD,:DWORD,:DWORD
s_link PROTO :DWORD,:DWORD
s_open PROTO :DWORD,:DWORD,:DWORD
s_perror PROTO :DWORD,:DWORD
s_push PROTO :DWORD,:DWORD
s_sioctl PROTO :DWORD,:DWORD
s_unlink PROTO :DWORD,:DWORD

