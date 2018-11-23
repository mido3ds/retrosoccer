;This file was written by vkim
;vkim@aport2000.ru
;-----------------------------------------------------------------------------

DebugPrint proto :dword

FillString macro Arr, Text
    local i
    i = 0
    forc var, <&Text>
        mov Arr[i], '&var'
        i = i + 1
    endm
    mov Arr[i], 0
endm

FillMem macro pString, Text
    local i
    i = 0
    ifdifi <&pString>, <eax>
        push eax
        mov eax, pString
    endif
    forc var, <&Text>
        mov byte ptr [eax+i], '&var'
        i = i + 1
    endm
    mov byte ptr [eax+i], 0
    ifdifi <&pString>, <eax>
        pop eax
    endif
endm

;-----------------------------------------------------------------------------

PrintString macro Var: REQ
    pushad
    invoke lstrlen, addr Var
    add eax, @SizeStr(&Var)+4
    invoke GlobalAlloc, GMEM_FIXED+GMEM_ZEROINIT, eax
    mov ebx, eax
    FillMem ebx, &Var
    mov dword ptr [eax+@SizeStr(&Var)], 203D20h
    invoke lstrcat, ebx, addr Var
    invoke DebugPrint, ebx
    invoke GlobalFree, ebx
    popad
endm

;----------------------------------------------------------------------------

PrintStringByAddr macro Var: REQ
    pushad
    push Var
    invoke lstrlen, Var
    add eax, @SizeStr(&Var)+4
    invoke GlobalAlloc, GMEM_FIXED+GMEM_ZEROINIT, eax
    mov ebx, eax
    FillMem ebx, &Var
    mov dword ptr [eax+@SizeStr(&Var)], 203D20h
    pop eax
    invoke lstrcat, ebx, eax
    invoke DebugPrint, ebx
    invoke GlobalFree, ebx
    popad
endm

;---------------------------------------------------------------------------

PrintText macro Var: REQ
    local szText
    .data
    szText byte Var, 0
    .code
    pushad
    invoke DebugPrint, addr szText
    popad
endm

;--------------------------------------------------------------------------

PrintDec macro Var: REQ
    local szDebugNum
    .data
    szDebugNum byte 12 dup(0)
    .code
    pushad
    invoke dwtoa, Var, addr szDebugNum
    invoke lstrlen, addr szDebugNum 
    add eax, @SizeStr(&Var)+4
    invoke GlobalAlloc, GMEM_FIXED+GMEM_ZEROINIT, eax
    mov ebx, eax
    FillMem eax, &Var
    mov dword ptr [eax+@SizeStr(&Var)], 203D20h
    invoke lstrcat, eax, addr szDebugNum
    invoke DebugPrint, ebx
    invoke GlobalFree, ebx
    popad
endm

PrintDword macro Var: REQ
    PrintDec &Var
endm
;---------------------------------------------------------------------------

PrintLine macro
    PrintText "------------------------------------"
endm

;---------------------------------------------------------------------------

PrintHex macro Var: REQ
    local szDebugNum
    .data
    szDebugNum byte 9 dup(0) 
    .code
    pushad
    invoke dw2hex, Var, addr szDebugNum
    invoke lstrlen, addr szDebugNum
    add eax, @SizeStr(&Var)+4
    invoke GlobalAlloc, GMEM_FIXED+GMEM_ZEROINIT, eax
    mov ebx, eax
    FillMem ebx, &Var
    mov dword ptr [eax+@SizeStr(&Var)], 203D20h
    invoke lstrcat, ebx, addr szDebugNum
    invoke DebugPrint, ebx
    invoke GlobalFree, ebx
    popad
endm

;---------------------------------------------------------------------------

PrintError macro
    local pDesc
    pushad
    .data
    pDesc dword 0
    .code
    invoke GetLastError
    invoke FormatMessage, FORMAT_MESSAGE_ALLOCATE_BUFFER or FORMAT_MESSAGE_FROM_SYSTEM, 0, eax, 0, addr pDesc, 0, 0
    invoke DebugPrint, pDesc
    invoke LocalFree, pDesc
    popad
endm

;------------------------------------------------------------------------------
;pExcept must be a pointer to EXCEPTION_RECORD structure

PrintException macro pExcept: REQ
    local Info
    .data
    Info byte 35 dup(0)
    .code
    pushad
    mov eax, pExcept
    mov eax, (EXCEPTION_RECORD ptr [eax]).ExceptionCode
    .if ax == EXCEPTION_ACCESS_VIOLATION
        FillString Info, <EXCEPTION_ACCESS_VIOLATION>
    .elseif ax == EXCEPTION_ARRAY_BOUNDS_EXCEEDED
        FillString Info, <EXCEPTION_ARRAY_BOUNDS_EXCEEDED>
    .elseif ax == EXCEPTION_BREAKPOINT
        FillString Info, <EXCEPTION_BREAKPOINT> 
    .elseif ax == EXCEPTION_DATATYPE_MISALIGNMENT
        FillString Info, <EXCEPTION_DATATYPE_MISALIGNMENT>
    .elseif ax == EXCEPTION_FLT_DENORMAL_OPERAND
        FillString Info, <EXCEPTION_FLT_DENORMAL_OPERAND>
    .elseif ax == EXCEPTION_FLT_DIVIDE_BY_ZERO
        FillString Info, <EXCEPTION_FLT_DIVIDE_BY_ZERO>     
    .elseif ax == EXCEPTION_FLT_INEXACT_RESULT
        FillString Info, <EXCEPTION_FLT_INEXACT_RESULT>
    .elseif ax == EXCEPTION_FLT_INVALID_OPERATION
        FillString Info, <EXCEPTION_FLT_INVALID_OPERATION>  
    .elseif ax == EXCEPTION_FLT_OVERFLOW
        FillString Info, <EXCEPTION_FLT_OVERFLOW>
    .elseif ax == EXCEPTION_FLT_STACK_CHECK
        FillString Info, <EXCEPTION_FLT_STACK_CHECK>
    .elseif ax == EXCEPTION_FLT_UNDERFLOW
        FillString Info, <EXCEPTION_FLT_UNDERFLOW>      
    .elseif ax == EXCEPTION_ILLEGAL_INSTRUCTION
        FillString Info, <EXCEPTION_ILLEGAL_INSTRUCTION>
    .elseif ax == EXCEPTION_IN_PAGE_ERROR
        FillString Info, <EXCEPTION_IN_PAGE_ERROR>
    .elseif ax == EXCEPTION_INT_DIVIDE_BY_ZERO
        FillString Info, <EXCEPTION_INT_DIVIDE_BY_ZERO>
    .elseif ax == EXCEPTION_INT_OVERFLOW
        FillString Info, <EXCEPTION_INVALID_DISPOSITION>
    ;.elseif ax == EXCEPTION_NONCONTINUABLE_EXCEPTION
    ;   FillString Info, <EXCEPTION_PRIV_INSTRUCTION>
    .elseif ax == EXCEPTION_SINGLE_STEP
        FillString Info, <EXCEPTION_SINGLE_STEP>
    ;.elseif ax == EXCEPTION_STACK_OVERFLOW
    ;   FillString Info, <EXCEPTION_STACK_OVERFLOW>
    .endif
    invoke DebugPrint, addr Info
    popad
endm

;=============================================================================

Spy macro Var: REQ
    ifndef __dwVar
        .data
        __dwVar dword 0
        __iTrap dword 0
        .code
    endif
    .if __iTrap == 0 
        PrintText "************************************"
        push eax
        ;install new SEH
        assume fs: nothing
        mov __dwVar, offset Var
        push offset _except_handler
        push fs:[0]
        mov fs:[0], esp
        inc __iTrap
        ;set TF
        pushf
        pop ax
        or ax, 100h
        push ax
        popf
        nop 
    .endif
endm

StopSpy macro
    mov __iTrap, 0 
    mov eax, [esp] ;restore previous SEH
    mov fs:[0], eax
    add esp, 8
    pop eax ;restore eax
    PrintText "************************************"
endm

.code
_except_handler proc C uses edx pExcept: dword, pFrame: dword, pContext: dword, pDispatch: dword
    local SpyVar: dword
    ifndef __iTrap
        .data
        __iTrap dword 0
        __dwVar dword 0
        .code
    endif
    mov edx, pContext
    assume edx: ptr CONTEXT
    .if __iTrap > 1
        pushfd
        pop eax
        or ax, 100h
        push eax
        pop [edx].regFlag ;set TF
        mov eax, __dwVar
        push dword ptr [eax]
        pop SpyVar
        PrintDec SpyVar
        inc __iTrap
    .elseif __iTrap == 1
        pushfd
        pop eax
        or ax, 100h
        push eax
        pop [edx].regFlag ;set TF
        inc __iTrap
    .endif
    assume edx: nothing
    mov eax, ExceptionContinueExecution
    ret
_except_handler endp

;==============================================================================