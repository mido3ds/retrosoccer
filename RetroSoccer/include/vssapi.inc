; ..\X86\vssapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CreateVssBackupComponentsInternal PROTO :DWORD
CreateVssExamineWriterMetadataInternal PROTO :DWORD,:DWORD
CreateVssExpressWriterInternal PROTO :DWORD
CreateWriter PROTO :DWORD,:DWORD
CreateWriterEx PROTO :DWORD,:DWORD
GetProviderMgmtInterfaceInternal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsVolumeSnapshottedInternal PROTO :DWORD,:DWORD,:DWORD
ShouldBlockRevertInternal PROTO :DWORD,:DWORD
VssFreeSnapshotPropertiesInternal PROTO :DWORD

