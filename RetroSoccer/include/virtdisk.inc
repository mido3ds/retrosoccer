; ..\X86\Virtdisk.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AddVirtualDiskParent PROTO :DWORD,:DWORD
AttachVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BreakMirrorVirtualDisk PROTO :DWORD
CompactVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeleteVirtualDiskMetadata PROTO :DWORD,:DWORD
DetachVirtualDisk PROTO :DWORD,:DWORD,:DWORD
EnumerateVirtualDiskMetadata PROTO :DWORD,:DWORD,:DWORD
ExpandVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetAllAttachedVirtualDiskPhysicalPaths PROTO :DWORD,:DWORD
GetStorageDependencyInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetVirtualDiskInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVirtualDiskMetadata PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVirtualDiskOperationProgress PROTO :DWORD,:DWORD,:DWORD
GetVirtualDiskPhysicalPath PROTO :DWORD,:DWORD,:DWORD
MergeVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD
MirrorVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD
OpenVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ResizeVirtualDisk PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetVirtualDiskInformation PROTO :DWORD,:DWORD
SetVirtualDiskMetadata PROTO :DWORD,:DWORD,:DWORD,:DWORD

