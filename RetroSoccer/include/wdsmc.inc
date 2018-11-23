; ..\X86\wdsmc.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

WdsTransportServerAllocateBuffer PROTO :DWORD,:DWORD
WdsTransportServerCompleteRead PROTO :DWORD,:DWORD,:DWORD,:DWORD
WdsTransportServerFreeBuffer PROTO :DWORD,:DWORD
WdsTransportServerRegisterCallback PROTO :DWORD,:DWORD,:DWORD
WdsTransportServerTraceV PROTO :DWORD,:DWORD,:DWORD,:DWORD

