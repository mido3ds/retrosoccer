; ..\X86\esent.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

DebugExtensionInitialize PROTO :DWORD,:DWORD
DebugExtensionNotify PROTO :DWORD,:DWORD,:DWORD
DebugExtensionUninitialize PROTO
JetAddColumnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetAddColumn equ <JetAddColumnA>

JetAttachDatabase PROTO :DWORD,:DWORD,:DWORD
JetAttachDatabase2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetAttachDatabase2 equ <JetAttachDatabase2A>

JetAttachDatabaseA PROTO :DWORD,:DWORD,:DWORD
JetAttachDatabase equ <JetAttachDatabaseA>

JetAttachDatabaseWithStreamingA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetAttachDatabaseWithStreaming equ <JetAttachDatabaseWithStreamingA>

JetBackupA PROTO :DWORD,:DWORD,:DWORD
JetBackup equ <JetBackupA>

JetBackupInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetBackupInstance equ <JetBackupInstanceA>

JetBeginDatabaseIncrementalReseedA PROTO :DWORD,:DWORD,:DWORD
JetBeginDatabaseIncrementalReseed equ <JetBeginDatabaseIncrementalReseedA>

JetBeginExternalBackup PROTO :DWORD
JetBeginExternalBackupInstance PROTO :DWORD,:DWORD
JetBeginSessionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetBeginSession equ <JetBeginSessionA>

JetBeginSurrogateBackup PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetBeginTransaction PROTO :DWORD
JetBeginTransaction2 PROTO :DWORD,:DWORD
JetBeginTransaction3 PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCloseDatabase PROTO :DWORD,:DWORD,:DWORD
JetCloseFile PROTO :DWORD
JetCloseFileInstance PROTO :DWORD,:DWORD
JetCloseTable PROTO :DWORD,:DWORD
JetCommitTransaction PROTO :DWORD,:DWORD
JetCommitTransaction2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCompactA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCompact equ <JetCompactA>

JetComputeStats PROTO :DWORD,:DWORD
JetConfigureProcessForCrashDump PROTO :DWORD
JetConsumeLogData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetConvertDDLA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetConvertDDL equ <JetConvertDDLA>

JetCreateDatabase PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateDatabase2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateDatabase2 equ <JetCreateDatabase2A>

JetCreateDatabaseA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateDatabase equ <JetCreateDatabaseA>

JetCreateDatabaseWithStreamingA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateDatabaseWithStreaming equ <JetCreateDatabaseWithStreamingA>

JetCreateIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateIndex2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCreateIndex2 equ <JetCreateIndex2A>

JetCreateIndex3A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCreateIndex3 equ <JetCreateIndex3A>

JetCreateIndex4A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCreateIndex4 equ <JetCreateIndex4A>

JetCreateIndexA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateIndex equ <JetCreateIndexA>

JetCreateInstance PROTO :DWORD,:DWORD
JetCreateInstance2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetCreateInstance2 equ <JetCreateInstance2A>

JetCreateInstanceA PROTO :DWORD,:DWORD
JetCreateInstance equ <JetCreateInstanceA>

JetCreateTableA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetCreateTable equ <JetCreateTableA>

JetCreateTableColumnIndex PROTO :DWORD,:DWORD,:DWORD
JetCreateTableColumnIndex2A PROTO :DWORD,:DWORD,:DWORD
JetCreateTableColumnIndex2 equ <JetCreateTableColumnIndex2A>

JetCreateTableColumnIndex3A PROTO :DWORD,:DWORD,:DWORD
JetCreateTableColumnIndex3 equ <JetCreateTableColumnIndex3A>

JetCreateTableColumnIndex4A PROTO :DWORD,:DWORD,:DWORD
JetCreateTableColumnIndex4 equ <JetCreateTableColumnIndex4A>

JetCreateTableColumnIndexA PROTO :DWORD,:DWORD,:DWORD
JetCreateTableColumnIndex equ <JetCreateTableColumnIndexA>

JetDBUtilitiesA PROTO :DWORD
JetDBUtilities equ <JetDBUtilitiesA>

JetDatabaseScan PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetDefragment PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetDefragment2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetDefragment2 equ <JetDefragment2A>

JetDefragment3A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetDefragment3 equ <JetDefragment3A>

JetDefragmentA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetDefragment equ <JetDefragmentA>

JetDelete PROTO :DWORD,:DWORD
JetDeleteColumn PROTO :DWORD,:DWORD,:DWORD
JetDeleteColumn2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetDeleteColumn2 equ <JetDeleteColumn2A>

JetDeleteColumnA PROTO :DWORD,:DWORD,:DWORD
JetDeleteColumn equ <JetDeleteColumnA>

JetDeleteIndexA PROTO :DWORD,:DWORD,:DWORD
JetDeleteIndex equ <JetDeleteIndexA>

JetDeleteTableA PROTO :DWORD,:DWORD,:DWORD
JetDeleteTable equ <JetDeleteTableA>

JetDetachDatabase PROTO :DWORD,:DWORD
JetDetachDatabase2A PROTO :DWORD,:DWORD,:DWORD
JetDetachDatabase2 equ <JetDetachDatabase2A>

JetDetachDatabaseA PROTO :DWORD,:DWORD
JetDetachDatabase equ <JetDetachDatabaseA>

JetDupCursor PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetDupSession PROTO :DWORD,:DWORD
JetEnableMultiInstanceA PROTO :DWORD,:DWORD,:DWORD
JetEnableMultiInstance equ <JetEnableMultiInstanceA>

JetEndDatabaseIncrementalReseedA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetEndDatabaseIncrementalReseed equ <JetEndDatabaseIncrementalReseedA>

JetEndExternalBackup PROTO
JetEndExternalBackupInstance PROTO :DWORD
JetEndExternalBackupInstance2 PROTO :DWORD,:DWORD
JetEndSession PROTO :DWORD,:DWORD
JetEndSurrogateBackup PROTO :DWORD,:DWORD
JetEnumerateColumns PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetEscrowUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetExternalRestore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetExternalRestore2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetExternalRestore2 equ <JetExternalRestore2A>

JetExternalRestoreA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetExternalRestore equ <JetExternalRestoreA>

JetFreeBuffer PROTO :DWORD
JetGetAttachInfoA PROTO :DWORD,:DWORD,:DWORD
JetGetAttachInfo equ <JetGetAttachInfoA>

JetGetAttachInfoInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetAttachInfoInstance equ <JetGetAttachInfoInstanceA>

JetGetBookmark PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetColumnInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetColumnInfo equ <JetGetColumnInfoA>

JetGetCounter PROTO :DWORD,:DWORD,:DWORD
JetGetCurrentIndexA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetCurrentIndex equ <JetGetCurrentIndexA>

JetGetCursorInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetDatabaseFileInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetDatabaseFileInfo equ <JetGetDatabaseFileInfoA>

JetGetDatabaseInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetDatabaseInfo equ <JetGetDatabaseInfoA>

JetGetDatabasePages PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetIndexInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetIndexInfo equ <JetGetIndexInfoA>

JetGetInstanceInfoA PROTO :DWORD,:DWORD
JetGetInstanceInfo equ <JetGetInstanceInfoA>

JetGetInstanceMiscInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetLS PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetLock PROTO :DWORD,:DWORD,:DWORD
JetGetLogFileInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetLogFileInfo equ <JetGetLogFileInfoA>

JetGetLogInfoA PROTO :DWORD,:DWORD,:DWORD
JetGetLogInfo equ <JetGetLogInfoA>

JetGetLogInfoInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetLogInfoInstance2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetLogInfoInstance2 equ <JetGetLogInfoInstance2A>

JetGetLogInfoInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetLogInfoInstance equ <JetGetLogInfoInstanceA>

JetGetMaxDatabaseSize PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetObjectInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetObjectInfo equ <JetGetObjectInfoA>

JetGetPageInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetPageInfo2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetRecordPosition PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetRecordSize PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetRecordSize2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetResourceParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetSecondaryIndexBookmark PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetSessionInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetSessionParameter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetSystemParameterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetSystemParameter equ <JetGetSystemParameterA>

JetGetTableColumnInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetTableColumnInfo equ <JetGetTableColumnInfoA>

JetGetTableIndexInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetTableIndexInfo equ <JetGetTableIndexInfoA>

JetGetTableInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGetTableInfo equ <JetGetTableInfoA>

JetGetThreadStats PROTO :DWORD,:DWORD
JetGetTruncateLogInfoInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGetTruncateLogInfoInstance equ <JetGetTruncateLogInfoInstanceA>

JetGetVersion PROTO :DWORD,:DWORD
JetGotoBookmark PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetGotoPosition PROTO :DWORD,:DWORD,:DWORD
JetGotoSecondaryIndexBookmark PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetGrowDatabase PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetIdle PROTO :DWORD,:DWORD
JetIndexRecordCount PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetInit PROTO :DWORD
JetInit2 PROTO :DWORD,:DWORD
JetInit3A PROTO :DWORD,:DWORD,:DWORD
JetInit3 equ <JetInit3A>

JetInit4A PROTO :DWORD,:DWORD,:DWORD
JetInit4 equ <JetInit4A>

JetIntersectIndexes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetMakeKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetMove PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetOSSnapshotAbort PROTO :DWORD,:DWORD
JetOSSnapshotEnd PROTO :DWORD,:DWORD
JetOSSnapshotFreezeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetOSSnapshotFreeze equ <JetOSSnapshotFreezeA>

JetOSSnapshotGetFreezeInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetOSSnapshotGetFreezeInfo equ <JetOSSnapshotGetFreezeInfoA>

JetOSSnapshotPrepare PROTO :DWORD,:DWORD
JetOSSnapshotPrepareInstance PROTO :DWORD,:DWORD,:DWORD
JetOSSnapshotThaw PROTO :DWORD,:DWORD
JetOSSnapshotTruncateLog PROTO :DWORD,:DWORD
JetOSSnapshotTruncateLogInstance PROTO :DWORD,:DWORD,:DWORD
JetOnlinePatchDatabasePage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenDatabaseA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenDatabase equ <JetOpenDatabaseA>

JetOpenFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetOpenFile equ <JetOpenFileA>

JetOpenFileInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenFileInstance equ <JetOpenFileInstanceA>

JetOpenFileSectionInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenFileSectionInstance equ <JetOpenFileSectionInstanceA>

JetOpenTableA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenTable equ <JetOpenTableA>

JetOpenTempTable PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenTempTable2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenTempTable3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetOpenTemporaryTable PROTO :DWORD,:DWORD
JetOpenTemporaryTable2 PROTO :DWORD,:DWORD
JetPatchDatabasePagesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetPatchDatabasePages equ <JetPatchDatabasePagesA>

JetPrepareToCommitTransaction PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetPrepareUpdate PROTO :DWORD,:DWORD,:DWORD
JetPrereadIndexRanges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetPrereadKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetReadFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetReadFileInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRegisterCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRemoveLogfileA PROTO :DWORD,:DWORD,:DWORD
JetRemoveLogfile equ <JetRemoveLogfileA>

JetRenameColumnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRenameColumn equ <JetRenameColumnA>

JetRenameTableA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetRenameTable equ <JetRenameTableA>

JetResetCounter PROTO :DWORD,:DWORD
JetResetSessionContext PROTO :DWORD
JetResetTableSequential PROTO :DWORD,:DWORD,:DWORD
JetResizeDatabase PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRestore PROTO :DWORD,:DWORD
JetRestore2A PROTO :DWORD,:DWORD,:DWORD
JetRestore2 equ <JetRestore2A>

JetRestoreA PROTO :DWORD,:DWORD
JetRestore equ <JetRestoreA>

JetRestoreInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetRestoreInstance equ <JetRestoreInstanceA>

JetRetrieveColumn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRetrieveColumns PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetRetrieveKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRetrieveTaggedColumnList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetRollback PROTO :DWORD,:DWORD
JetSeek PROTO :DWORD,:DWORD,:DWORD
JetSetColumn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetColumnDefaultValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetColumnDefaultValue equ <JetSetColumnDefaultValueA>

JetSetColumns PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetCurrentIndex PROTO :DWORD,:DWORD,:DWORD
JetSetCurrentIndex2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetCurrentIndex2 equ <JetSetCurrentIndex2A>

JetSetCurrentIndex3A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetCurrentIndex3 equ <JetSetCurrentIndex3A>

JetSetCurrentIndex4A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetCurrentIndex4 equ <JetSetCurrentIndex4A>

JetSetCurrentIndexA PROTO :DWORD,:DWORD,:DWORD
JetSetCurrentIndex equ <JetSetCurrentIndexA>

JetSetCursorFilter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetDatabaseSizeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetDatabaseSize equ <JetSetDatabaseSizeA>

JetSetIndexRange PROTO :DWORD,:DWORD,:DWORD
JetSetLS PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetMaxDatabaseSize PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetResourceParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetSessionContext PROTO :DWORD,:DWORD
JetSetSessionParameter PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetSetSystemParameterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetSetSystemParameter equ <JetSetSystemParameterA>

JetSetTableSequential PROTO :DWORD,:DWORD,:DWORD
JetSnapshotStartA PROTO :DWORD,:DWORD,:DWORD
JetSnapshotStart equ <JetSnapshotStartA>

JetSnapshotStop PROTO :DWORD,:DWORD
JetStopBackup PROTO
JetStopBackupInstance PROTO :DWORD
JetStopService PROTO
JetStopServiceInstance PROTO :DWORD
JetStopServiceInstance2 PROTO :DWORD,:DWORD
JetTerm PROTO :DWORD
JetTerm2 PROTO :DWORD,:DWORD
JetTestHook PROTO :DWORD,:DWORD
JetTracing PROTO :DWORD,:DWORD,:DWORD
JetTruncateLog PROTO
JetTruncateLogInstance PROTO :DWORD
JetUnregisterCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetUpdate2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
JetUpgradeDatabaseA PROTO :DWORD,:DWORD,:DWORD,:DWORD
JetUpgradeDatabase equ <JetUpgradeDatabaseA>

ese PROTO :DWORD,:DWORD

