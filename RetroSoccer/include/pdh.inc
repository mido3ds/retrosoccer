; ..\X86\Pdh.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

PdhAddCounterA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhAddCounter equ <PdhAddCounterA>

PdhAddEnglishCounterA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhAddEnglishCounter equ <PdhAddEnglishCounterA>

PdhBindInputDataSourceA PROTO :DWORD,:DWORD
PdhBindInputDataSource equ <PdhBindInputDataSourceA>

PdhBrowseCountersA PROTO :DWORD
PdhBrowseCounters equ <PdhBrowseCountersA>

PdhBrowseCountersHA PROTO :DWORD
PdhBrowseCountersH equ <PdhBrowseCountersHA>

PdhCalculateCounterFromRawValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhCloseLog PROTO :DWORD,:DWORD
PdhCloseQuery PROTO :DWORD
PdhCollectQueryData PROTO :DWORD
PdhCollectQueryDataEx PROTO :DWORD,:DWORD,:DWORD
PdhCollectQueryDataWithTime PROTO :DWORD,:DWORD
PdhComputeCounterStatistics PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhConnectMachineA PROTO :DWORD
PdhConnectMachine equ <PdhConnectMachineA>

PdhCreateSQLTablesA PROTO :DWORD
PdhCreateSQLTables equ <PdhCreateSQLTablesA>

PdhEnumLogSetNamesA PROTO :DWORD,:DWORD,:DWORD
PdhEnumLogSetNames equ <PdhEnumLogSetNamesA>

PdhEnumMachinesA PROTO :DWORD,:DWORD,:DWORD
PdhEnumMachines equ <PdhEnumMachinesA>

PdhEnumMachinesHA PROTO :DWORD,:DWORD,:DWORD
PdhEnumMachinesH equ <PdhEnumMachinesHA>

PdhEnumObjectItemsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhEnumObjectItems equ <PdhEnumObjectItemsA>

PdhEnumObjectItemsHA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhEnumObjectItemsH equ <PdhEnumObjectItemsHA>

PdhEnumObjectsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhEnumObjects equ <PdhEnumObjectsA>

PdhEnumObjectsHA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhEnumObjectsH equ <PdhEnumObjectsHA>

PdhExpandCounterPathA PROTO :DWORD,:DWORD,:DWORD
PdhExpandCounterPath equ <PdhExpandCounterPathA>

PdhExpandWildCardPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhExpandWildCardPath equ <PdhExpandWildCardPathA>

PdhExpandWildCardPathHA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhExpandWildCardPathH equ <PdhExpandWildCardPathHA>

PdhFormatFromRawValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhGetCounterInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetCounterInfo equ <PdhGetCounterInfoA>

PdhGetCounterTimeBase PROTO :DWORD,:DWORD
PdhGetDataSourceTimeRangeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetDataSourceTimeRange equ <PdhGetDataSourceTimeRangeA>

PdhGetDataSourceTimeRangeH PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetDefaultPerfCounterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhGetDefaultPerfCounter equ <PdhGetDefaultPerfCounterA>

PdhGetDefaultPerfCounterHA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhGetDefaultPerfCounterH equ <PdhGetDefaultPerfCounterHA>

PdhGetDefaultPerfObjectA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetDefaultPerfObject equ <PdhGetDefaultPerfObjectA>

PdhGetDefaultPerfObjectHA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetDefaultPerfObjectH equ <PdhGetDefaultPerfObjectHA>

PdhGetDllVersion PROTO :DWORD
PdhGetFormattedCounterArrayA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhGetFormattedCounterArray equ <PdhGetFormattedCounterArrayA>

PdhGetFormattedCounterValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetLogFileSize PROTO :DWORD,:DWORD
PdhGetLogSetGUID PROTO :DWORD,:DWORD,:DWORD
PdhGetRawCounterArrayA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhGetRawCounterArray equ <PdhGetRawCounterArrayA>

PdhGetRawCounterValue PROTO :DWORD,:DWORD,:DWORD
PdhIsRealTimeQuery PROTO :DWORD
PdhLookupPerfIndexByNameA PROTO :DWORD,:DWORD,:DWORD
PdhLookupPerfIndexByName equ <PdhLookupPerfIndexByNameA>

PdhLookupPerfNameByIndexA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhLookupPerfNameByIndex equ <PdhLookupPerfNameByIndexA>

PdhMakeCounterPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhMakeCounterPath equ <PdhMakeCounterPathA>

PdhOpenLogA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhOpenLog equ <PdhOpenLogA>

PdhOpenQueryA PROTO :DWORD,:DWORD,:DWORD
PdhOpenQuery equ <PdhOpenQueryA>

PdhOpenQueryH PROTO :DWORD,:DWORD,:DWORD
PdhParseCounterPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhParseCounterPath equ <PdhParseCounterPathA>

PdhParseInstanceNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhParseInstanceName equ <PdhParseInstanceNameA>

PdhReadRawLogRecord PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhRemoveCounter PROTO :DWORD
PdhSelectDataSourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhSelectDataSource equ <PdhSelectDataSourceA>

PdhSetCounterScaleFactor PROTO :DWORD,:DWORD
PdhSetDefaultRealTimeDataSource PROTO :DWORD
PdhSetLogSetRunID PROTO :DWORD,:DWORD
PdhSetQueryTimeRange PROTO :DWORD,:DWORD
PdhUpdateLogA PROTO :DWORD,:DWORD
PdhUpdateLog equ <PdhUpdateLogA>

PdhUpdateLogFileCatalog PROTO :DWORD
PdhValidatePathA PROTO :DWORD
PdhValidatePath equ <PdhValidatePathA>

PdhValidatePathExA PROTO :DWORD,:DWORD
PdhValidatePathEx equ <PdhValidatePathExA>

PdhVbAddCounter PROTO :DWORD,:DWORD,:DWORD
PdhVbCreateCounterPathList PROTO :DWORD,:DWORD
PdhVbGetCounterPathElements PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhVbGetCounterPathFromList PROTO :DWORD,:DWORD,:DWORD
PdhVbGetDoubleCounterValue PROTO :DWORD,:DWORD
PdhVbGetLogFileSize PROTO :DWORD,:DWORD
PdhVbGetOneCounterPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
PdhVbIsGoodStatus PROTO :DWORD
PdhVbOpenLog PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PdhVbOpenQuery PROTO :DWORD
PdhVbUpdateLog PROTO :DWORD,:DWORD
PdhVerifySQLDBA PROTO :DWORD
PdhVerifySQLDB equ <PdhVerifySQLDBA>


