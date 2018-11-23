; ..\X86\OleAcc.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AccNotifyTouchInteraction PROTO :DWORD,:DWORD,:DWORD,:DWORD
AccSetRunningUtilityState PROTO :DWORD,:DWORD,:DWORD
AccessibleChildren PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessibleObjectFromEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessibleObjectFromPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD
AccessibleObjectFromWindow PROTO :DWORD,:DWORD,:DWORD,:DWORD
AccessibleObjectFromWindowTimeout PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateStdAccessibleObject PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateStdAccessibleProxyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateStdAccessibleProxy equ <CreateStdAccessibleProxyA>

GetOleaccVersionInfo PROTO :DWORD,:DWORD
GetProcessHandleFromHwnd PROTO :DWORD
GetRoleTextA PROTO :DWORD,:DWORD,:DWORD
GetRoleText equ <GetRoleTextA>

GetStateTextA PROTO :DWORD,:DWORD,:DWORD
GetStateText equ <GetStateTextA>

LresultFromObject PROTO :DWORD,:DWORD,:DWORD
ObjectFromLresult PROTO :DWORD,:DWORD,:DWORD,:DWORD
PropMgrClient_LookupProp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WindowFromAccessibleObject PROTO :DWORD,:DWORD

