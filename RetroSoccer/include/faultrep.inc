; ..\X86\FaultRep.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AddERExcludedApplicationA PROTO :DWORD
AddERExcludedApplication equ <AddERExcludedApplicationA>

CancelHangReporting PROTO :DWORD
ReportActivationHang PROTO :DWORD,:DWORD,:DWORD
ReportFault PROTO :DWORD,:DWORD
ReportHang PROTO :DWORD,:DWORD
WerReportHang PROTO :DWORD,:DWORD
WerpInitiateCrashReporting PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

