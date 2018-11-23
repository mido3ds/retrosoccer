; ..\X86\NtDsAPI.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DsAddSidHistoryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsAddSidHistory equ <DsAddSidHistoryA>

DsBindA PROTO :DWORD,:DWORD,:DWORD
DsBind equ <DsBindA>

DsBindByInstanceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsBindByInstance equ <DsBindByInstanceA>

DsBindToISTGA PROTO :DWORD,:DWORD
DsBindToISTG equ <DsBindToISTGA>

DsBindWithCredA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsBindWithCred equ <DsBindWithCredA>

DsBindWithSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsBindWithSpn equ <DsBindWithSpnA>

DsBindWithSpnExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsBindWithSpnEx equ <DsBindWithSpnExA>

DsBindingSetTimeout PROTO :DWORD,:DWORD
DsClientMakeSpnForTargetServerA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsClientMakeSpnForTargetServer equ <DsClientMakeSpnForTargetServerA>

DsCrackNamesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsCrackNames equ <DsCrackNamesA>

DsCrackSpn2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsCrackSpn2 equ <DsCrackSpn2A>

DsCrackSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsCrackSpn equ <DsCrackSpnA>

DsCrackUnquotedMangledRdnA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsCrackUnquotedMangledRdn equ <DsCrackUnquotedMangledRdnA>

DsFreeCloneDcResult PROTO :DWORD
DsFreeDomainControllerInfoA PROTO :DWORD,:DWORD,:DWORD
DsFreeDomainControllerInfo equ <DsFreeDomainControllerInfoA>

DsFreeNameResultA PROTO :DWORD
DsFreeNameResult equ <DsFreeNameResultA>

DsFreePasswordCredentials PROTO :DWORD
DsFreeSchemaGuidMapA PROTO :DWORD
DsFreeSchemaGuidMap equ <DsFreeSchemaGuidMapA>

DsFreeSpnArrayA PROTO :DWORD,:DWORD
DsFreeSpnArray equ <DsFreeSpnArrayA>

DsGetBindInstGuid PROTO :DWORD
DsGetDomainControllerInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsGetDomainControllerInfo equ <DsGetDomainControllerInfoA>

DsGetSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsGetSpn equ <DsGetSpnA>

DsInheritSecurityIdentityA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsInheritSecurityIdentity equ <DsInheritSecurityIdentityA>

DsIsMangledDnA PROTO :DWORD,:DWORD
DsIsMangledDn equ <DsIsMangledDnA>

DsIsMangledRdnValueA PROTO :DWORD,:DWORD,:DWORD
DsIsMangledRdnValue equ <DsIsMangledRdnValueA>

DsListDomainsInSiteA PROTO :DWORD,:DWORD,:DWORD
DsListDomainsInSite equ <DsListDomainsInSiteA>

DsListInfoForServerA PROTO :DWORD,:DWORD,:DWORD
DsListInfoForServer equ <DsListInfoForServerA>

DsListRolesA PROTO :DWORD,:DWORD
DsListRoles equ <DsListRolesA>

DsListServersForDomainInSiteA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsListServersForDomainInSite equ <DsListServersForDomainInSiteA>

DsListServersInSiteA PROTO :DWORD,:DWORD,:DWORD
DsListServersInSite equ <DsListServersInSiteA>

DsListSitesA PROTO :DWORD,:DWORD
DsListSites equ <DsListSitesA>

DsMakePasswordCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsMakePasswordCredentials equ <DsMakePasswordCredentialsA>

DsMakeSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsMakeSpn equ <DsMakeSpnA>

DsMapSchemaGuidsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsMapSchemaGuids equ <DsMapSchemaGuidsA>

DsQuerySitesByCostA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsQuerySitesByCost equ <DsQuerySitesByCostA>

DsQuerySitesFree PROTO :DWORD
DsQuoteRdnValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsQuoteRdnValue equ <DsQuoteRdnValueA>

DsRemoveDsDomainA PROTO :DWORD,:DWORD
DsRemoveDsDomain equ <DsRemoveDsDomainA>

DsRemoveDsServerA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsRemoveDsServer equ <DsRemoveDsServerA>

DsReplicaAddA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsReplicaAdd equ <DsReplicaAddA>

DsReplicaConsistencyCheck PROTO :DWORD,:DWORD,:DWORD
DsReplicaDelA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsReplicaDel equ <DsReplicaDelA>

DsReplicaFreeInfo PROTO :DWORD,:DWORD
DsReplicaModifyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsReplicaModify equ <DsReplicaModifyA>

DsReplicaSyncA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsReplicaSync equ <DsReplicaSyncA>

DsReplicaSyncAllA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsReplicaSyncAll equ <DsReplicaSyncAllA>

DsReplicaUpdateRefsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsReplicaUpdateRefs equ <DsReplicaUpdateRefsA>

DsReplicaVerifyObjectsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsReplicaVerifyObjects equ <DsReplicaVerifyObjectsA>

DsServerRegisterSpnA PROTO :DWORD,:DWORD,:DWORD
DsServerRegisterSpn equ <DsServerRegisterSpnA>

DsUnBindA PROTO :DWORD
DsUnBind equ <DsUnBindA>

DsUnquoteRdnValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsUnquoteRdnValue equ <DsUnquoteRdnValueA>

DsWriteAccountSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsWriteAccountSpn equ <DsWriteAccountSpnA>

DsaopBind PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsaopBindWithCred PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsaopBindWithSpn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsaopExecuteScript PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsaopPrepareScript PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsaopUnBind PROTO :DWORD

