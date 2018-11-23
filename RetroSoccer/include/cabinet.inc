; ..\X86\Cabinet.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CloseCompressor PROTO :DWORD
CloseDecompressor PROTO :DWORD
Compress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateCompressor PROTO :DWORD,:DWORD,:DWORD
CreateDecompressor PROTO :DWORD,:DWORD,:DWORD
Decompress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeleteExtractedFiles PROTO :DWORD
DllGetVersion PROTO :DWORD
Extract PROTO :DWORD,:DWORD
GetDllVersion PROTO
QueryCompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryDecompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
ResetCompressor PROTO :DWORD
ResetDecompressor PROTO :DWORD
SetCompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetDecompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD

