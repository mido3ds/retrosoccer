; ..\X86\odbcbcp.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

LibMain PROTO :DWORD,:DWORD,:DWORD
SQLCloseEnumServers PROTO :DWORD
SQLGetNextEnumeration PROTO :DWORD,:DWORD,:DWORD
SQLInitEnumServers PROTO :DWORD,:DWORD
SQLLinkedCatalogsA PROTO :DWORD,:DWORD,:DWORD
SQLLinkedCatalogs equ <SQLLinkedCatalogsA>

SQLLinkedServers PROTO :DWORD
bcp_batch PROTO :DWORD
bcp_bind PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
bcp_colfmt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
bcp_collen PROTO :DWORD,:DWORD,:DWORD
bcp_colptr PROTO :DWORD,:DWORD,:DWORD
bcp_columns PROTO :DWORD,:DWORD
bcp_control PROTO :DWORD,:DWORD,:DWORD
bcp_done PROTO :DWORD
bcp_exec PROTO :DWORD,:DWORD
bcp_getcolfmt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
bcp_initA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
bcp_init equ <bcp_initA>

bcp_moretext PROTO :DWORD,:DWORD,:DWORD
bcp_readfmtA PROTO :DWORD,:DWORD
bcp_readfmt equ <bcp_readfmtA>

bcp_sendrow PROTO :DWORD
bcp_setcolfmt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
bcp_writefmtA PROTO :DWORD,:DWORD
bcp_writefmt equ <bcp_writefmtA>

dbprtypeA PROTO :DWORD
dbprtype equ <dbprtypeA>


