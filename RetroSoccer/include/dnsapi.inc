; ..\X86\DnsAPI.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AdaptiveTimeout_ClearInterfaceSpecificConfiguration PROTO
AdaptiveTimeout_ResetAdaptiveTimeout PROTO
AddRefQueryBlobEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
BreakRecordsIntoBlob PROTO :DWORD,:DWORD,:DWORD
Coalesce_UpdateNetVersion PROTO
CombineRecordsInBlob PROTO :DWORD,:DWORD
DeRefQueryBlobEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DelaySortDAServerlist PROTO
DnsAcquireContextHandle_A PROTO :DWORD,:DWORD,:DWORD
DnsAcquireContextHandle_ equ <DnsAcquireContextHandle_A>

DnsAllocateRecord PROTO :DWORD
DnsApiAlloc PROTO :DWORD
DnsApiAllocZero PROTO :DWORD
DnsApiFree PROTO :DWORD
DnsApiHeapReset PROTO :DWORD,:DWORD,:DWORD
DnsApiRealloc PROTO :DWORD,:DWORD
DnsApiSetDebugGlobals PROTO :DWORD
DnsAsyncRegisterHostAddrs PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsAsyncRegisterInit PROTO :DWORD
DnsAsyncRegisterTerm PROTO
DnsCancelQuery PROTO :DWORD
DnsCopyStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsCreateReverseNameStringForIpAddress PROTO :DWORD
DnsCreateStandardDnsNameCopy PROTO :DWORD,:DWORD,:DWORD
DnsCreateStringCopy PROTO :DWORD,:DWORD
DnsDhcpRegisterAddrs PROTO :DWORD
DnsDhcpRegisterHostAddrs PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsDhcpRegisterInit PROTO
DnsDhcpRegisterTerm PROTO
DnsDhcpRemoveRegistrations PROTO
DnsDhcpSrvRegisterHostAddr PROTO :DWORD
DnsDhcpSrvRegisterHostAddrEx PROTO :DWORD
DnsDhcpSrvRegisterHostName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsDhcpSrvRegisterHostNameEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsDhcpSrvRegisterInit PROTO :DWORD,:DWORD
DnsDhcpSrvRegisterInitialize PROTO :DWORD
DnsDhcpSrvRegisterTerm PROTO
DnsDisableIdnEncoding PROTO :DWORD,:DWORD
DnsDowncaseDnsNameLabel PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsExtractRecordsFromMessage_UTF8 PROTO :DWORD,:DWORD,:DWORD
DnsFindAuthoritativeZone PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsFlushResolverCache PROTO
DnsFlushResolverCacheEntry_A PROTO :DWORD
DnsFlushResolverCacheEntry_ equ <DnsFlushResolverCacheEntry_A>

DnsFlushResolverCacheEntry_UTF8 PROTO :DWORD
DnsFree PROTO :DWORD,:DWORD
DnsFreeConfigStructure PROTO :DWORD,:DWORD
DnsFreePolicyConfig PROTO :DWORD
DnsFreeProxyName PROTO :DWORD
DnsGetBufferLengthForStringCopy PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsGetCacheDataTable PROTO :DWORD
DnsGetDnsServerList PROTO :DWORD
DnsGetLastFailedUpdateInfo PROTO :DWORD
DnsGetPolicyTableInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsGetPolicyTableInfoPrivate PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsGetPrimaryDomainName_A PROTO
DnsGetPrimaryDomainName_ equ <DnsGetPrimaryDomainName_A>

DnsGetProxyInfoPrivate PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsGetProxyInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsGetQueryRetryTimeouts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsIpv6AddressToString PROTO :DWORD,:DWORD
DnsIpv6StringToAddress PROTO :DWORD,:DWORD,:DWORD
DnsIsStringCountValidForTextType PROTO :DWORD,:DWORD
DnsLogEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsModifyRecordsInSet_A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsModifyRecordsInSet_ equ <DnsModifyRecordsInSet_A>

DnsModifyRecordsInSet_UTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsNameCompareEx_A PROTO :DWORD,:DWORD,:DWORD
DnsNameCompareEx_ equ <DnsNameCompareEx_A>

DnsNameCompareEx_UTF8 PROTO :DWORD,:DWORD,:DWORD
DnsNameCompare_A PROTO :DWORD,:DWORD
DnsNameCompare_ equ <DnsNameCompare_A>

DnsNameCompare_UTF8 PROTO :DWORD,:DWORD
DnsNameCopy PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsNameCopyAllocate PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsNetworkInfo_CreateFromFAZ PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsNetworkInformation_CreateFromFAZ PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsNotifyResolver PROTO :DWORD,:DWORD
DnsNotifyResolverClusterIp PROTO :DWORD,:DWORD
DnsNotifyResolverEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsQueryConfig PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsQueryConfigAllocEx PROTO :DWORD,:DWORD,:DWORD
DnsQueryConfigDword PROTO :DWORD,:DWORD
DnsQueryExA PROTO :DWORD
DnsQueryEx equ <DnsQueryExA>

DnsQueryExUTF8 PROTO :DWORD
DnsQuery_A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsQuery_ equ <DnsQuery_A>

DnsQuery_UTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsRecordBuild_UTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsRecordCompare PROTO :DWORD,:DWORD
DnsRecordCopyEx PROTO :DWORD,:DWORD,:DWORD
DnsRecordListFree PROTO :DWORD,:DWORD
DnsRecordListUnmapV4MappedAAAAInPlace PROTO :DWORD
DnsRecordSetCompare PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsRecordSetCopyEx PROTO :DWORD,:DWORD,:DWORD
DnsRecordSetDetach PROTO :DWORD
DnsRecordStringForType PROTO :DWORD
DnsRecordStringForWritableType PROTO :DWORD
DnsRecordTypeForName PROTO :DWORD,:DWORD
DnsReleaseContextHandle PROTO :DWORD
DnsRemoveRegistrations PROTO
DnsReplaceRecordSetA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsReplaceRecordSet equ <DnsReplaceRecordSetA>

DnsReplaceRecordSetUTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsResetQueryRetryTimeouts PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsResolverOp PROTO :DWORD,:DWORD,:DWORD
DnsScreenLocalAddrsForRegistration PROTO :DWORD,:DWORD,:DWORD
DnsSetConfigDword PROTO :DWORD,:DWORD,:DWORD
DnsSetQueryRetryTimeouts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsStringCopyAllocateEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsTraceServerConfig PROTO :DWORD,:DWORD,:DWORD
DnsUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsUpdateMachinePresence PROTO
DnsUpdateTest_A PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsUpdateTest_ equ <DnsUpdateTest_A>

DnsUpdateTest_UTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD
DnsValidateName_A PROTO :DWORD,:DWORD
DnsValidateName_ equ <DnsValidateName_A>

DnsValidateName_UTF8 PROTO :DWORD,:DWORD
DnsValidateServerArray_A PROTO :DWORD,:DWORD,:DWORD
DnsValidateServerArray_ equ <DnsValidateServerArray_A>

DnsValidateServerStatus PROTO :DWORD,:DWORD,:DWORD
DnsValidateServer_A PROTO :DWORD,:DWORD,:DWORD
DnsValidateServer_ equ <DnsValidateServer_A>

DnsValidateUtf8Byte PROTO :DWORD,:DWORD
DnsWriteQuestionToBuffer_UTF8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DnsWriteReverseNameStringForIpAddress PROTO :DWORD,:DWORD
Dns_AddRecordsToMessage PROTO :DWORD,:DWORD,:DWORD
Dns_AllocateMsgBuf PROTO :DWORD
Dns_BuildPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_CacheServiceCleanup PROTO
Dns_CacheServiceInit PROTO
Dns_CacheServiceStopIssued PROTO
Dns_CleanupWinsock PROTO
Dns_CloseConnection PROTO :DWORD
Dns_CloseSocket PROTO :DWORD
Dns_CreateMulticastSocket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_CreateSocket PROTO :DWORD,:DWORD,:DWORD
Dns_CreateSocketEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_ExtractRecordsFromMessage PROTO :DWORD,:DWORD,:DWORD
Dns_FindAuthoritativeZoneLib PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dns_FreeMsgBuf PROTO :DWORD
Dns_GetRandomXid PROTO :DWORD
Dns_InitializeMsgBuf PROTO :DWORD
Dns_InitializeMsgRemoteSockaddr PROTO :DWORD,:DWORD
Dns_InitializeWinsock PROTO
Dns_OpenTcpConnectionAndSend PROTO :DWORD,:DWORD,:DWORD
Dns_ParseMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_ParsePacketRecord PROTO :DWORD,:DWORD,:DWORD
Dns_PingAdapterServers PROTO :DWORD
Dns_ReadRecordStructureFromPacket PROTO :DWORD,:DWORD,:DWORD
Dns_RecvTcp PROTO :DWORD
Dns_ResetNetworkInfo PROTO :DWORD
Dns_SendAndRecvUdp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_SendEx PROTO :DWORD,:DWORD,:DWORD
Dns_SetRecordDatalength PROTO :DWORD,:DWORD
Dns_SetRecordsSection PROTO :DWORD,:DWORD
Dns_SetRecordsTtl PROTO :DWORD,:DWORD
Dns_SkipToRecord PROTO :DWORD,:DWORD,:DWORD
Dns_UpdateLib PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_UpdateLibEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dns_WriteQuestionToMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dns_WriteRecordStructureToPacketEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtraInfo_Init PROTO :DWORD,:DWORD
Faz_AreServerListsInSameNameSpace PROTO :DWORD,:DWORD,:DWORD
FlushDnsPolicyUnreachableStatus PROTO
GetCurrentTimeInSeconds PROTO
HostsFile_Close PROTO :DWORD
HostsFile_Open PROTO :DWORD
HostsFile_ReadLine PROTO :DWORD
IpHelp_IsAddrOnLink PROTO :DWORD
Local_GetRecordsForLocalName PROTO :DWORD,:DWORD
Local_GetRecordsForLocalNameEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetInfo_Build PROTO :DWORD
NetInfo_Clean PROTO :DWORD,:DWORD
NetInfo_Copy PROTO :DWORD
NetInfo_CopyNetworkIndex PROTO :DWORD,:DWORD
NetInfo_CreatePerNetworkNetinfo PROTO :DWORD,:DWORD
NetInfo_Free PROTO :DWORD
NetInfo_GetAdapterByAddress PROTO :DWORD,:DWORD,:DWORD
NetInfo_GetAdapterByInterfaceIndex PROTO :DWORD,:DWORD,:DWORD
NetInfo_GetAdapterByName PROTO :DWORD,:DWORD
NetInfo_IsAddrConfig PROTO :DWORD,:DWORD
NetInfo_IsForUpdate PROTO :DWORD
NetInfo_IsTcpipConfigChange PROTO :DWORD
NetInfo_ResetServerPriorities PROTO :DWORD,:DWORD
NetInfo_UpdateDnsInterfaceConfigChange PROTO :DWORD
NetInfo_UpdateNetworkProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetInfo_UpdateServerReachability PROTO :DWORD,:DWORD,:DWORD
QueryDirectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Query_Cancel PROTO :DWORD,:DWORD,:DWORD
Query_Main PROTO :DWORD
ReadPacketName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadPacketNameAllocate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Reg_FreeUpdateInfo PROTO :DWORD,:DWORD
Reg_GetValueEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Reg_ReadGlobalsEx PROTO :DWORD,:DWORD
Reg_ReadUpdateInfo PROTO :DWORD,:DWORD
Security_ContextListTimeout PROTO :DWORD
Send_AndRecvUdpWithParam PROTO :DWORD
Send_MessagePrivate PROTO :DWORD,:DWORD,:DWORD
Send_OpenTcpConnectionAndSend PROTO :DWORD,:DWORD,:DWORD
SkipPacketName PROTO :DWORD,:DWORD
Socket_CacheCleanup PROTO
Socket_CacheInit PROTO :DWORD
Socket_CleanupWinsock PROTO
Socket_ClearMessageSockets PROTO :DWORD
Socket_CloseEx PROTO :DWORD,:DWORD
Socket_CloseMessageSockets PROTO :DWORD
Socket_Create PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Socket_CreateMulticast PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Socket_InitWinsock PROTO :DWORD
Socket_JoinMulticast PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Socket_RecvFrom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Socket_SetMulticastInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD
Socket_SetMulticastLoopBack PROTO :DWORD,:DWORD,:DWORD
Socket_SetTtl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Socket_TcpListen PROTO :DWORD
Trace_Reset PROTO
Util_IsIp6Running PROTO
WriteDottedNameToPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

