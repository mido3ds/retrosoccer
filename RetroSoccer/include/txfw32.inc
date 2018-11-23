; ..\X86\txfw32.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TxfGetThreadMiniVersionForCreate PROTO :DWORD
TxfLogCreateFileReadContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TxfLogCreateRangeReadContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TxfLogDestroyReadContext PROTO :DWORD
TxfLogReadRecords PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TxfLogRecordGetFileName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TxfLogRecordGetGenericType PROTO :DWORD,:DWORD,:DWORD,:DWORD
TxfReadMetadataInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TxfSetThreadMiniVersionForCreate PROTO :DWORD

