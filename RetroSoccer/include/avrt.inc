; ..\X86\avrt.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~

AvQuerySystemResponsiveness PROTO :DWORD,:DWORD
AvRevertMmThreadCharacteristics PROTO :DWORD
AvRtCreateThreadOrderingGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
AvRtCreateThreadOrderingGroupExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AvRtCreateThreadOrderingGroupEx equ <AvRtCreateThreadOrderingGroupExA>

AvRtDeleteThreadOrderingGroup PROTO :DWORD
AvRtJoinThreadOrderingGroup PROTO :DWORD,:DWORD,:DWORD
AvRtLeaveThreadOrderingGroup PROTO :DWORD
AvRtWaitOnThreadOrderingGroup PROTO :DWORD
AvSetMmMaxThreadCharacteristicsA PROTO :DWORD,:DWORD,:DWORD
AvSetMmMaxThreadCharacteristics equ <AvSetMmMaxThreadCharacteristicsA>

AvSetMmThreadCharacteristicsA PROTO :DWORD,:DWORD
AvSetMmThreadCharacteristics equ <AvSetMmThreadCharacteristicsA>

AvSetMmThreadPriority PROTO :DWORD,:DWORD

