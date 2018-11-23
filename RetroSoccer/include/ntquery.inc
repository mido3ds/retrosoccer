; ..\X86\NtQuery.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BindIFilterFromStorage PROTO :DWORD,:DWORD,:DWORD
BindIFilterFromStream PROTO :DWORD,:DWORD,:DWORD
CIRevertToSelf PROTO
CIShutdown PROTO
InternalBindIFilterFromDocCLSID PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalBindIFilterFromFileName PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternalBindIFilterFromStorage PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternalBindIFilterFromStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
LoadIFilter PROTO :DWORD,:DWORD,:DWORD
LoadIFilterEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
LocateCatalogsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocateCatalogs equ <LocateCatalogsA>


