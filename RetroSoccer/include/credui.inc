; ..\X86\credui.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CredPackAuthenticationBufferA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredPackAuthenticationBuffer equ <CredPackAuthenticationBufferA>

CredUICmdLinePromptForCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUICmdLinePromptForCredentials equ <CredUICmdLinePromptForCredentialsA>

CredUIConfirmCredentialsA PROTO :DWORD,:DWORD
CredUIConfirmCredentials equ <CredUIConfirmCredentialsA>

CredUIParseUserNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUIParseUserName equ <CredUIParseUserNameA>

CredUIPromptForCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUIPromptForCredentials equ <CredUIPromptForCredentialsA>

CredUIPromptForWindowsCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUIPromptForWindowsCredentials equ <CredUIPromptForWindowsCredentialsA>

CredUnPackAuthenticationBufferA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUnPackAuthenticationBuffer equ <CredUnPackAuthenticationBufferA>

SspiGetCredUIContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SspiIsPromptingNeeded PROTO :DWORD
SspiPromptForCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SspiPromptForCredentials equ <SspiPromptForCredentialsA>

SspiUnmarshalCredUIContext PROTO :DWORD,:DWORD,:DWORD
SspiUpdateCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD

