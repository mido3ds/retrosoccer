; ..\X86\strsafe.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

StringCopyWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringCopyWorker equ <StringCopyWorkerA>

StringExHandleFillBehindNullA PROTO :DWORD,:DWORD,:DWORD
StringExHandleFillBehindNull equ <StringExHandleFillBehindNullA>

StringExHandleOtherFlagsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringExHandleOtherFlags equ <StringExHandleOtherFlagsA>

StringExValidateDestA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StringExValidateDest equ <StringExValidateDestA>

StringExValidateDestAndLengthA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringExValidateDestAndLength equ <StringExValidateDestAndLengthA>

StringExValidateSrcA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StringExValidateSrc equ <StringExValidateSrcA>

StringLengthWorkerA PROTO :DWORD,:DWORD,:DWORD
StringLengthWorker equ <StringLengthWorkerA>

StringVPrintfWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringVPrintfWorker equ <StringVPrintfWorkerA>

StringVPrintf_lWorkerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StringVPrintf_lWorker equ <StringVPrintf_lWorkerA>

StringValidateDestA PROTO :DWORD,:DWORD,:DWORD
StringValidateDest equ <StringValidateDestA>

StringValidateDestAndLengthA PROTO :DWORD,:DWORD,:DWORD,:DWORD
StringValidateDestAndLength equ <StringValidateDestAndLengthA>


