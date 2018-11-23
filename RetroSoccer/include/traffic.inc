; ..\X86\Traffic.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TcAddFilter PROTO :DWORD,:DWORD,:DWORD
TcAddFlow PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TcCloseInterface PROTO :DWORD
TcDeleteFilter PROTO :DWORD
TcDeleteFlow PROTO :DWORD
TcDeregisterClient PROTO :DWORD
TcEnumerateFlows PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TcEnumerateInterfaces PROTO :DWORD,:DWORD,:DWORD
TcGetFlowNameA PROTO :DWORD,:DWORD,:DWORD
TcGetFlowName equ <TcGetFlowNameA>

TcGetInterfaceList PROTO :DWORD,:DWORD,:DWORD
TcModifyFlow PROTO :DWORD,:DWORD
TcOpenInterfaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
TcOpenInterface equ <TcOpenInterfaceA>

TcQueryFlowA PROTO :DWORD,:DWORD,:DWORD,:DWORD
TcQueryFlow equ <TcQueryFlowA>

TcQueryInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TcRegisterClient PROTO :DWORD,:DWORD,:DWORD,:DWORD
TcSetFlowA PROTO :DWORD,:DWORD,:DWORD,:DWORD
TcSetFlow equ <TcSetFlowA>

TcSetInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD
TcSetSocketFlow PROTO :DWORD,:DWORD

