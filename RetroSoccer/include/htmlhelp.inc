; ..\X86\Htmlhelp.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

HtmlHelpA PROTO :DWORD,:DWORD,:DWORD,:DWORD
HtmlHelp equ <HtmlHelpA>

_security_check_cookie PROTO :DWORD
guard_check_icall PROTO :DWORD
guard_check_icall_nop PROTO :DWORD

