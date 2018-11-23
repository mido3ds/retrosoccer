; ..\X86\mincore.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcceptEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AccessCheckByTypeResultList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AcquireCredentialsHandle equ <AcquireCredentialsHandleA>

AcquireSRWLockExclusive PROTO :DWORD
AcquireSRWLockShared PROTO :DWORD
AdaptiveTimeout_ClearInterfaceSpecificConfiguration PROTO
AdaptiveTimeout_ResetAdaptiveTimeout PROTO
AddAccessAllowedAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddAccessAllowedAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessAllowedObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAccessDeniedObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessAceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddAuditAccessObjectAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddCredentials equ <AddCredentialsA>

AddDllDirectory PROTO :DWORD
AddIPAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddMandatoryAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddRefQueryBlobEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddResourceAttributeAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddSIDToBoundaryDescriptor PROTO :DWORD,:DWORD
AddScopedPolicyIDAce PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddSecurityPackageA PROTO :DWORD,:DWORD
AddSecurityPackage equ <AddSecurityPackageA>

AddVectoredContinueHandler PROTO :DWORD,:DWORD
AddVectoredExceptionHandler PROTO :DWORD,:DWORD
AdjustTokenGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdjustTokenPrivileges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocConsole PROTO
AllocateAndGetInterfaceInfoFromStack PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateAndGetIpAddrTableFromStack PROTO :DWORD,:DWORD,:DWORD,:DWORD
AllocateAndInitializeSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AllocateLocallyUniqueId PROTO :DWORD
AllocateUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
AllocateUserPhysicalPagesNuma PROTO :DWORD,:DWORD,:DWORD,:DWORD
ApplyControlToken PROTO :DWORD,:DWORD
AreAllAccessesGranted PROTO :DWORD,:DWORD
AreAnyAccessesGranted PROTO :DWORD,:DWORD
AreThereVisibleLogoffScripts PROTO :DWORD
AreThereVisibleShutdownScripts PROTO :DWORD
AttachConsole PROTO :DWORD
AuthzAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzAddSidsToContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzCachedAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzEnumerateSecurityEventSources PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzEvaluateSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzFreeAuditEvent PROTO :DWORD
AuthzFreeCentralAccessPolicyCache PROTO
AuthzFreeContext PROTO :DWORD
AuthzFreeHandle PROTO :DWORD
AuthzFreeResourceManager PROTO :DWORD
AuthzGetInformationFromContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeCompoundContext PROTO :DWORD,:DWORD,:DWORD
AuthzInitializeContextFromAuthzContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeContextFromSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeContextFromToken PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeRemoteAccessCheck PROTO :DWORD
AuthzInitializeRemoteResourceManager PROTO :DWORD,:DWORD
AuthzInitializeResourceManager PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzInitializeResourceManagerEx PROTO :DWORD,:DWORD,:DWORD
AuthzInstallSecurityEventSource PROTO :DWORD,:DWORD
AuthzModifyClaims PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzModifySecurityAttributes PROTO :DWORD,:DWORD,:DWORD
AuthzModifySids PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzOpenObjectAudit PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzRegisterCapChangeNotification PROTO :DWORD,:DWORD,:DWORD
AuthzRegisterSecurityEventSource PROTO :DWORD,:DWORD,:DWORD
AuthzReportSecurityEventFromParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AuthzSetAppContainerInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
AuthzShutdownRemoteAccessCheck PROTO
AuthzUninstallSecurityEventSource PROTO :DWORD,:DWORD
AuthzUnregisterCapChangeNotification PROTO :DWORD
AuthzUnregisterSecurityEventSource PROTO :DWORD,:DWORD
AuthziLogAuditEvent PROTO :DWORD,:DWORD,:DWORD
BCryptAddContextFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptCloseAlgorithmProvider PROTO :DWORD,:DWORD
BCryptConfigureContext PROTO :DWORD,:DWORD,:DWORD
BCryptConfigureContextFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptCreateContext PROTO :DWORD,:DWORD,:DWORD
BCryptCreateHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptCreateMultiHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDecrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDeleteContext PROTO :DWORD,:DWORD
BCryptDeriveKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDeriveKeyCapi PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDeriveKeyPBKDF2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDestroyHash PROTO :DWORD
BCryptDestroyKey PROTO :DWORD
BCryptDestroySecret PROTO :DWORD
BCryptDuplicateHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptDuplicateKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptEncrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptEnumAlgorithms PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptEnumContextFunctionProviders PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptEnumContextFunctions PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptEnumContexts PROTO :DWORD,:DWORD,:DWORD
BCryptEnumProviders PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptEnumRegisteredProviders PROTO :DWORD,:DWORD
BCryptExportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptFinalizeKeyPair PROTO :DWORD,:DWORD
BCryptFinishHash PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptFreeBuffer PROTO :DWORD
BCryptGenRandom PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptGenerateKeyPair PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptGenerateSymmetricKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptGetFipsAlgorithmMode PROTO :DWORD
BCryptGetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptHashData PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptImportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptImportKeyPair PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptKeyDerivation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptOpenAlgorithmProvider PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptProcessMultiOperations PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptQueryContextConfiguration PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptQueryContextFunctionConfiguration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptQueryContextFunctionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptQueryProviderRegistration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptRegisterConfigChangeNotify PROTO :DWORD
BCryptRemoveContextFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptResolveProviders PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptSecretAgreement PROTO :DWORD,:DWORD,:DWORD,:DWORD
BCryptSetAuditingInterface PROTO :DWORD
BCryptSetContextFunctionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptSetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptSignHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BCryptUnregisterConfigChangeNotify PROTO :DWORD
BCryptVerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BSTR_UserFree PROTO :DWORD,:DWORD
BSTR_UserMarshal PROTO :DWORD,:DWORD,:DWORD
BSTR_UserSize PROTO :DWORD,:DWORD,:DWORD
BSTR_UserUnmarshal PROTO :DWORD,:DWORD,:DWORD
Beep PROTO :DWORD,:DWORD
BreakRecordsIntoBlob PROTO :DWORD,:DWORD,:DWORD
BstrFromVector PROTO :DWORD,:DWORD
CLSIDFromProgID PROTO :DWORD,:DWORD
CLSIDFromString PROTO :DWORD,:DWORD
CM_Delete_Class_Key PROTO :DWORD,:DWORD
CM_Delete_DevNode_Key PROTO :DWORD,:DWORD,:DWORD
CM_Disable_DevNode PROTO :DWORD,:DWORD
CM_Enable_DevNode PROTO :DWORD,:DWORD
CM_Get_Child PROTO :DWORD,:DWORD,:DWORD
CM_Get_Class_Property_Keys PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Depth PROTO :DWORD,:DWORD,:DWORD
CM_Get_DevNode_Property_Keys PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_DevNode_Status PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Get_Device_ID_Size PROTO :DWORD,:DWORD,:DWORD
CM_Get_Parent PROTO :DWORD,:DWORD,:DWORD
CM_Get_Sibling PROTO :DWORD,:DWORD,:DWORD
CM_MapCrToWin32Err PROTO :DWORD,:DWORD
CM_Open_DevNode_Key PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CM_Register_Notification PROTO :DWORD,:DWORD,:DWORD,:DWORD
CM_Setup_DevNode PROTO :DWORD,:DWORD
CM_Uninstall_DevNode PROTO :DWORD,:DWORD
CM_Unregister_Notification PROTO :DWORD
CStdStubBuffer_AddRef PROTO :DWORD
CStdStubBuffer_Connect PROTO :DWORD,:DWORD
CStdStubBuffer_CountRefs PROTO :DWORD
CStdStubBuffer_DebugServerQueryInterface PROTO :DWORD,:DWORD
CStdStubBuffer_DebugServerRelease PROTO :DWORD,:DWORD
CStdStubBuffer_Disconnect PROTO :DWORD
CStdStubBuffer_Invoke PROTO :DWORD,:DWORD,:DWORD
CStdStubBuffer_IsIIDSupported PROTO :DWORD,:DWORD
CStdStubBuffer_QueryInterface PROTO :DWORD,:DWORD,:DWORD
CallNtPowerInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CallbackMayRunLong PROTO :DWORD
CancelIPChangeNotify PROTO :DWORD
CancelIo PROTO :DWORD
CancelIoEx PROTO :DWORD,:DWORD
CancelMibChangeNotify2 PROTO :DWORD
CancelSynchronousIo PROTO :DWORD
CancelThreadpoolIo PROTO :DWORD
CancelWaitableTimer PROTO :DWORD
CertAddCRLContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCRLLinkToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCTLContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCTLLinkToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCertificateContextToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddCertificateLinkToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCRLToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCTLToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToSystemStoreA PROTO :DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToSystemStore equ <CertAddEncodedCertificateToSystemStoreA>

CertAddEnhancedKeyUsageIdentifier PROTO :DWORD,:DWORD
CertAddRefServerOcspResponse PROTO :DWORD
CertAddRefServerOcspResponseContext PROTO :DWORD
CertAddSerializedElementToStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddStoreToCollection PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertAlgIdToOID PROTO :DWORD
CertCloseServerOcspResponse PROTO :DWORD,:DWORD
CertCloseStore PROTO :DWORD,:DWORD
CertCompareCertificate PROTO :DWORD,:DWORD,:DWORD
CertCompareCertificateName PROTO :DWORD,:DWORD,:DWORD
CertCompareIntegerBlob PROTO :DWORD,:DWORD
CertComparePublicKeyInfo PROTO :DWORD,:DWORD,:DWORD
CertControlStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertCreateCRLContext PROTO :DWORD,:DWORD,:DWORD
CertCreateCTLContext PROTO :DWORD,:DWORD,:DWORD
CertCreateCTLEntryFromCertificateContextProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertCreateCertificateChainEngine PROTO :DWORD,:DWORD
CertCreateCertificateContext PROTO :DWORD,:DWORD,:DWORD
CertCreateContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertCreateSelfSignCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertDeleteCRLFromStore PROTO :DWORD
CertDeleteCTLFromStore PROTO :DWORD
CertDeleteCertificateFromStore PROTO :DWORD
CertDuplicateCRLContext PROTO :DWORD
CertDuplicateCTLContext PROTO :DWORD
CertDuplicateCertificateChain PROTO :DWORD
CertDuplicateCertificateContext PROTO :DWORD
CertDuplicateStore PROTO :DWORD
CertEnumCRLContextProperties PROTO :DWORD,:DWORD
CertEnumCRLsInStore PROTO :DWORD,:DWORD
CertEnumCTLContextProperties PROTO :DWORD,:DWORD
CertEnumCTLsInStore PROTO :DWORD,:DWORD
CertEnumCertificateContextProperties PROTO :DWORD,:DWORD
CertEnumCertificatesInStore PROTO :DWORD,:DWORD
CertEnumPhysicalStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSubjectInSortedCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSystemStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSystemStoreLocation PROTO :DWORD,:DWORD,:DWORD
CertFindAttribute PROTO :DWORD,:DWORD,:DWORD
CertFindCRLInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCTLInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCertificateInCRL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCertificateInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindChainInStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindExtension PROTO :DWORD,:DWORD,:DWORD
CertFindRDNAttr PROTO :DWORD,:DWORD
CertFindSubjectInCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindSubjectInSortedCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFreeCRLContext PROTO :DWORD
CertFreeCTLContext PROTO :DWORD
CertFreeCertificateChain PROTO :DWORD
CertFreeCertificateChainEngine PROTO :DWORD
CertFreeCertificateChainList PROTO :DWORD
CertFreeCertificateContext PROTO :DWORD
CertFreeServerOcspResponseContext PROTO :DWORD
CertGetCRLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCRLFromStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCTLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetCertificateChain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertGetCertificateContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetEnhancedKeyUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetIntendedKeyUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetIssuerCertificateFromStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetNameStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertGetNameString equ <CertGetNameStringA>

CertGetPublicKeyLength PROTO :DWORD,:DWORD
CertGetServerOcspResponseContext PROTO :DWORD,:DWORD,:DWORD
CertGetStoreProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertGetSubjectCertificateFromStore PROTO :DWORD,:DWORD,:DWORD
CertGetValidUsages PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertIsRDNAttrsInCertificateName PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertIsStrongHashToSign PROTO :DWORD,:DWORD,:DWORD
CertIsValidCRLForCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertNameToStrA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertNameToStr equ <CertNameToStrA>

CertOIDToAlgId PROTO :DWORD
CertOpenServerOcspResponse PROTO :DWORD,:DWORD,:DWORD
CertOpenStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertOpenSystemStoreA PROTO :DWORD,:DWORD
CertOpenSystemStore equ <CertOpenSystemStoreA>

CertRDNValueToStrA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertRDNValueToStr equ <CertRDNValueToStrA>

CertRegisterPhysicalStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertRegisterSystemStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertRemoveEnhancedKeyUsageIdentifier PROTO :DWORD,:DWORD
CertRemoveStoreFromCollection PROTO :DWORD,:DWORD
CertResyncCertificateChainEngine PROTO :DWORD
CertRetrieveLogoOrBiometricInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertSaveStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertSelectCertificateChains PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCRLStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCTLStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCertificateStoreElement PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCRLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCTLContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetCertificateContextPropertiesFromCTLEntry PROTO :DWORD,:DWORD,:DWORD
CertSetCertificateContextProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertSetEnhancedKeyUsage PROTO :DWORD,:DWORD
CertSetStoreProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertStrToNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertStrToName equ <CertStrToNameA>

CertUnregisterPhysicalStore PROTO :DWORD,:DWORD,:DWORD
CertUnregisterSystemStore PROTO :DWORD,:DWORD
CertVerifyCRLRevocation PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertVerifyCRLTimeValidity PROTO :DWORD,:DWORD
CertVerifyCTLUsage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifyCertificateChainPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
CertVerifyRevocation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifySubjectCertificateContext PROTO :DWORD,:DWORD,:DWORD
CertVerifyTimeValidity PROTO :DWORD,:DWORD
CertVerifyValidityNesting PROTO :DWORD,:DWORD
ChangeAccountPasswordA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ChangeAccountPassword equ <ChangeAccountPasswordA>

ChangeServiceConfig2A PROTO :DWORD,:DWORD,:DWORD
ChangeServiceConfig2 equ <ChangeServiceConfig2A>

ChangeServiceConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ChangeServiceConfig equ <ChangeServiceConfigA>

CheckDirectoryOwnership PROTO :DWORD,:DWORD,:DWORD
CheckRemoteDebuggerPresent PROTO :DWORD,:DWORD
CheckTokenCapability PROTO :DWORD,:DWORD,:DWORD
CheckTokenMembership PROTO :DWORD,:DWORD,:DWORD
CheckTokenMembershipEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
CheckXForestLogon PROTO :DWORD
ClearCommBreak PROTO :DWORD
ClearCommError PROTO :DWORD,:DWORD,:DWORD
ClearCustData PROTO :DWORD
CloseCompartment PROTO :DWORD
CloseCompressor PROTO :DWORD
CloseDecompressor PROTO :DWORD
CloseGetIPPhysicalInterfaceForDestination PROTO :DWORD
CloseHandle PROTO :DWORD
ClosePrivateNamespace PROTO :DWORD,:DWORD
CloseServiceHandle PROTO :DWORD
CloseThreadpool PROTO :DWORD
CloseThreadpoolCleanupGroup PROTO :DWORD
CloseThreadpoolCleanupGroupMembers PROTO :DWORD,:DWORD,:DWORD
CloseThreadpoolIo PROTO :DWORD
CloseThreadpoolTimer PROTO :DWORD
CloseThreadpoolWait PROTO :DWORD
CloseThreadpoolWork PROTO :DWORD
CloseTrace PROTO :DWORD,:DWORD
CoAddRefServerProcess PROTO
CoAllowUnmarshalerCLSID PROTO :DWORD
CoCancelCall PROTO :DWORD,:DWORD
CoCopyProxy PROTO :DWORD,:DWORD
CoCreateFreeThreadedMarshaler PROTO :DWORD,:DWORD
CoCreateGuid PROTO :DWORD
CoCreateInstance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoCreateInstanceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoCreateInstanceFromApp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoDecodeProxy PROTO :DWORD,:DWORD,:DWORD,:DWORD
CoDecrementMTAUsage PROTO :DWORD
CoDisableCallCancellation PROTO :DWORD
CoDisconnectContext PROTO :DWORD
CoDisconnectObject PROTO :DWORD,:DWORD
CoEnableCallCancellation PROTO :DWORD
CoFreeUnusedLibraries PROTO
CoFreeUnusedLibrariesEx PROTO :DWORD,:DWORD
CoGetApartmentType PROTO :DWORD,:DWORD
CoGetCallContext PROTO :DWORD,:DWORD
CoGetCallerTID PROTO :DWORD
CoGetCancelObject PROTO :DWORD,:DWORD,:DWORD
CoGetClassObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetContextToken PROTO :DWORD
CoGetCurrentLogicalThreadId PROTO :DWORD
CoGetCurrentProcess PROTO
CoGetDefaultContext PROTO :DWORD,:DWORD,:DWORD
CoGetInterfaceAndReleaseStream PROTO :DWORD,:DWORD,:DWORD
CoGetMalloc PROTO :DWORD,:DWORD
CoGetMarshalSizeMax PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetObjectContext PROTO :DWORD,:DWORD
CoGetPSClsid PROTO :DWORD,:DWORD
CoGetStandardMarshal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetStdMarshalEx PROTO :DWORD,:DWORD,:DWORD
CoGetTreatAsClass PROTO :DWORD,:DWORD
CoImpersonateClient PROTO
CoIncrementMTAUsage PROTO :DWORD
CoInitializeEx PROTO :DWORD,:DWORD
CoInitializeSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoInvalidateRemoteMachineBindings PROTO :DWORD
CoIsHandlerConnected PROTO :DWORD
CoLockObjectExternal PROTO :DWORD,:DWORD,:DWORD
CoMarshalHresult PROTO :DWORD,:DWORD
CoMarshalInterThreadInterfaceInStream PROTO :DWORD,:DWORD,:DWORD
CoMarshalInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoQueryAuthenticationServices PROTO :DWORD,:DWORD
CoQueryClientBlanket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoQueryProxyBlanket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoRegisterActivationFilter PROTO :DWORD
CoRegisterClassObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoRegisterPSClsid PROTO :DWORD,:DWORD
CoRegisterSurrogate PROTO :DWORD
CoReleaseMarshalData PROTO :DWORD
CoReleaseServerProcess PROTO
CoResumeClassObjects PROTO
CoRevertToSelf PROTO
CoRevokeClassObject PROTO :DWORD
CoSetCancelObject PROTO :DWORD
CoSetProxyBlanket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoSuspendClassObjects PROTO
CoSwitchCallContext PROTO :DWORD,:DWORD
CoTaskMemAlloc PROTO :DWORD
CoTaskMemFree PROTO :DWORD
CoTaskMemRealloc PROTO :DWORD,:DWORD
CoTestCancel PROTO
CoUninitialize PROTO
CoUnmarshalHresult PROTO :DWORD,:DWORD
CoUnmarshalInterface PROTO :DWORD,:DWORD,:DWORD
CoWaitForMultipleHandles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoWaitForMultipleObjects PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Coalesce_UpdateNetVersion PROTO
CombineRecordsInBlob PROTO :DWORD,:DWORD
CompareFileTime PROTO :DWORD,:DWORD
CompareStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CompareStringOrdinal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CompleteAuthToken PROTO :DWORD,:DWORD
Compress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ConnectNamedPipe PROTO :DWORD,:DWORD
ContinueDebugEvent PROTO :DWORD,:DWORD,:DWORD
ControlService PROTO :DWORD,:DWORD,:DWORD
ControlServiceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ControlServiceEx equ <ControlServiceExA>

ConvertCompartmentGuidToId PROTO :DWORD,:DWORD
ConvertCompartmentIdToGuid PROTO :DWORD,:DWORD
ConvertDefaultLocale PROTO :DWORD
ConvertGuidToStringA PROTO :DWORD,:DWORD,:DWORD
ConvertGuidToString equ <ConvertGuidToStringA>

ConvertInterfaceAliasToLuid PROTO :DWORD,:DWORD
ConvertInterfaceGuidToLuid PROTO :DWORD,:DWORD
ConvertInterfaceIndexToLuid PROTO :DWORD,:DWORD
ConvertInterfaceLuidToAlias PROTO :DWORD,:DWORD,:DWORD
ConvertInterfaceLuidToGuid PROTO :DWORD,:DWORD
ConvertInterfaceLuidToIndex PROTO :DWORD,:DWORD
ConvertInterfaceLuidToNameA PROTO :DWORD,:DWORD,:DWORD
ConvertInterfaceLuidToName equ <ConvertInterfaceLuidToNameA>

ConvertInterfaceNameToLuidA PROTO :DWORD,:DWORD
ConvertInterfaceNameToLuid equ <ConvertInterfaceNameToLuidA>

ConvertInterfacePhysicalAddressToLuid PROTO :DWORD,:DWORD,:DWORD
ConvertIpv4MaskToLength PROTO :DWORD,:DWORD
ConvertLengthToIpv4Mask PROTO :DWORD,:DWORD
ConvertRemoteInterfaceAliasToLuid PROTO :DWORD,:DWORD,:DWORD
ConvertRemoteInterfaceGuidToLuid PROTO :DWORD,:DWORD,:DWORD
ConvertRemoteInterfaceIndexToLuid PROTO :DWORD,:DWORD,:DWORD
ConvertRemoteInterfaceLuidToAlias PROTO :DWORD,:DWORD,:DWORD,:DWORD
ConvertRemoteInterfaceLuidToGuid PROTO :DWORD,:DWORD,:DWORD
ConvertRemoteInterfaceLuidToIndex PROTO :DWORD,:DWORD,:DWORD
ConvertStringToGuidA PROTO :DWORD,:DWORD
ConvertStringToGuid equ <ConvertStringToGuidA>

ConvertStringToInterfacePhysicalAddress PROTO :DWORD,:DWORD
ConvertToAutoInheritPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopyContext PROTO :DWORD,:DWORD,:DWORD
CopyFile2 PROTO :DWORD,:DWORD,:DWORD
CopyProfileDirectoryEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CopySid PROTO :DWORD,:DWORD,:DWORD
CreateAnycastIpAddressEntry PROTO :DWORD
CreateAppContainerProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateAppContainerProfileInternal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateCompressor PROTO :DWORD,:DWORD,:DWORD
CreateConsoleScreenBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDecompressor PROTO :DWORD,:DWORD,:DWORD
CreateDirectoryA PROTO :DWORD,:DWORD
CreateDirectory equ <CreateDirectoryA>

CreateDirectoryJunctionsForSystem PROTO
CreateDirectoryJunctionsForUserProfile PROTO :DWORD
CreateDispTypeInfo PROTO :DWORD,:DWORD,:DWORD
CreateEnvironmentBlock PROTO :DWORD,:DWORD,:DWORD
CreateErrorInfo PROTO :DWORD
CreateEventA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEvent equ <CreateEventA>

CreateEventExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEventEx equ <CreateEventExA>

CreateFile2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFile equ <CreateFileA>

CreateFileMappingFromApp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateGroupEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateIoCompletionPort PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateIpForwardEntry PROTO :DWORD
CreateIpForwardEntry2 PROTO :DWORD
CreateIpNetEntry PROTO :DWORD
CreateIpNetEntry2 PROTO :DWORD
CreateLinkFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateMemoryResourceNotification PROTO :DWORD
CreateMutexA PROTO :DWORD,:DWORD,:DWORD
CreateMutex equ <CreateMutexA>

CreateMutexExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateMutexEx equ <CreateMutexExA>

CreatePersistentTcpPortReservation PROTO :DWORD,:DWORD,:DWORD
CreatePersistentUdpPortReservation PROTO :DWORD,:DWORD,:DWORD
CreatePipe PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrivateObjectSecurityWithMultipleInheritance PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProcessA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProcess equ <CreateProcessA>

CreateProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateProxyArpEntry PROTO :DWORD,:DWORD,:DWORD
CreateProxyFromTypeInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateRemoteThread PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateRemoteThreadEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateRestrictedToken PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateServiceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateService equ <CreateServiceA>

CreateSortedAddressPairs PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateStdDispatch PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateStreamOnHGlobal PROTO :DWORD,:DWORD,:DWORD
CreateStubFromTypeInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateThread PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateThreadpool PROTO :DWORD
CreateThreadpoolCleanupGroup PROTO
CreateThreadpoolIo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateThreadpoolTimer PROTO :DWORD,:DWORD,:DWORD
CreateThreadpoolWait PROTO :DWORD,:DWORD,:DWORD
CreateThreadpoolWork PROTO :DWORD,:DWORD,:DWORD
CreateTypeLib PROTO :DWORD,:DWORD,:DWORD
CreateTypeLib2 PROTO :DWORD,:DWORD,:DWORD
CreateUnicastIpAddressEntry PROTO :DWORD
CreateWellKnownSid PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredDeleteA PROTO :DWORD,:DWORD,:DWORD
CredDelete equ <CredDeleteA>

CredEnumerateA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredEnumerate equ <CredEnumerateA>

CredFindBestCredentialA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredFindBestCredential equ <CredFindBestCredentialA>

CredFree PROTO :DWORD
CredGetSessionTypes PROTO :DWORD,:DWORD
CredGetTargetInfoA PROTO :DWORD,:DWORD,:DWORD
CredGetTargetInfo equ <CredGetTargetInfoA>

CredIsProtectedA PROTO :DWORD,:DWORD
CredIsProtected equ <CredIsProtectedA>

CredMarshalCredentialA PROTO :DWORD,:DWORD,:DWORD
CredMarshalCredential equ <CredMarshalCredentialA>

CredProtectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredProtect equ <CredProtectA>

CredReadA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredRead equ <CredReadA>

CredReadDomainCredentialsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CredReadDomainCredentials equ <CredReadDomainCredentialsA>

CredUnmarshalCredentialA PROTO :DWORD,:DWORD,:DWORD
CredUnmarshalCredential equ <CredUnmarshalCredentialA>

CredUnprotectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CredUnprotect equ <CredUnprotectA>

CredWriteA PROTO :DWORD,:DWORD
CredWrite equ <CredWriteA>

CredWriteDomainCredentialsA PROTO :DWORD,:DWORD,:DWORD
CredWriteDomainCredentials equ <CredWriteDomainCredentialsA>

CryptAcquireCertificatePrivateKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptBinaryToStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptBinaryToString equ <CryptBinaryToStringA>

CryptCloseAsyncHandle PROTO :DWORD
CryptCreateAsyncHandle PROTO :DWORD,:DWORD
CryptCreateKeyIdentifierFromCSP PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeObjectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptAndVerifyMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncodeObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncodeObjectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumKeyIdentifierProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumOIDInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptExportPKCS8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfoFromBCryptKeyHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFindCertificateKeyProvInfo PROTO :DWORD,:DWORD,:DWORD
CryptFindLocalizedName PROTO :DWORD
CryptFindOIDInfo PROTO :DWORD,:DWORD,:DWORD
CryptFormatObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFreeOIDFunctionAddress PROTO :DWORD,:DWORD
CryptGetAsyncParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultOIDDllList PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetKeyIdentifierProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageCertificates PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageSignerCount PROTO :DWORD,:DWORD,:DWORD
CryptGetOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetOIDFunctionValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetObjectUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashCertificate2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashToBeSigned PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPKCS8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfoEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInitOIDFunctionSet PROTO :DWORD,:DWORD
CryptInstallCancelRetrieval PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptInstallDefaultContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInstallOIDFunctionAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptLoadSip PROTO :DWORD,:DWORD,:DWORD
CryptMemAlloc PROTO :DWORD
CryptMemFree PROTO :DWORD
CryptMemRealloc PROTO :DWORD,:DWORD
CryptMsgCalculateEncodedLength PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgClose PROTO :DWORD
CryptMsgControl PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersign PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersignEncoded PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgDuplicate PROTO :DWORD
CryptMsgEncodeAndSignCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetAndVerifySigner PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToDecode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToEncode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgSignCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgVerifyCountersignatureEncoded PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgVerifyCountersignatureEncodedEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptProtectData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptProtectMemory PROTO :DWORD,:DWORD,:DWORD
CryptQueryObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterDefaultOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterOIDFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterOIDInfo PROTO :DWORD,:DWORD
CryptRetrieveObjectByUrlA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRetrieveObjectByUrl equ <CryptRetrieveObjectByUrlA>

CryptRetrieveTimeStamp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPAddProvider PROTO :DWORD
CryptSIPCreateIndirectData PROTO :DWORD,:DWORD,:DWORD
CryptSIPGetCaps PROTO :DWORD,:DWORD
CryptSIPGetSealedDigest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPGetSignedDataMsg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPLoad PROTO :DWORD,:DWORD,:DWORD
CryptSIPPutSignedDataMsg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPRemoveProvider PROTO :DWORD
CryptSIPRemoveSignedDataMsg PROTO :DWORD,:DWORD
CryptSIPRetrieveSubjectGuid PROTO :DWORD,:DWORD,:DWORD
CryptSIPRetrieveSubjectGuidForCatalogFile PROTO :DWORD,:DWORD,:DWORD
CryptSIPVerifyIndirectData PROTO :DWORD,:DWORD
CryptSetAsyncParam PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptSetKeyIdentifierProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSetOIDFunctionValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignAndEncodeCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignAndEncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessageWithKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptStringToBinaryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptStringToBinary equ <CryptStringToBinaryA>

CryptUninstallCancelRetrieval PROTO :DWORD,:DWORD
CryptUninstallDefaultContext PROTO :DWORD,:DWORD,:DWORD
CryptUnprotectData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUnprotectMemory PROTO :DWORD,:DWORD,:DWORD
CryptUnregisterDefaultOIDFunction PROTO :DWORD,:DWORD,:DWORD
CryptUnregisterOIDFunction PROTO :DWORD,:DWORD,:DWORD
CryptUnregisterOIDInfo PROTO :DWORD
CryptUpdateProtectedState PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyCertificateSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyCertificateSignatureEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignatureWithKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyTimeStampSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DbgInitOSS PROTO :DWORD
DceErrorInqTextA PROTO :DWORD,:DWORD
DceErrorInqText equ <DceErrorInqTextA>

DeRefQueryBlobEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DebugActiveProcess PROTO :DWORD
DebugActiveProcessStop PROTO :DWORD
DebugBreak PROTO
DecodePointer PROTO :DWORD
DecodeSystemPointer PROTO :DWORD
Decompress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DecryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
DelaySortDAServerlist PROTO
DeleteAce PROTO :DWORD,:DWORD
DeleteAnycastIpAddressEntry PROTO :DWORD
DeleteAppContainerProfile PROTO :DWORD
DeleteAppContainerProfileInternal PROTO :DWORD,:DWORD
DeleteBoundaryDescriptor PROTO :DWORD
DeleteCriticalSection PROTO :DWORD
DeleteExtractedFiles PROTO :DWORD
DeleteFileA PROTO :DWORD
DeleteFile equ <DeleteFileA>

DeleteGroup PROTO :DWORD,:DWORD
DeleteIPAddress PROTO :DWORD
DeleteIpForwardEntry PROTO :DWORD
DeleteIpForwardEntry2 PROTO :DWORD
DeleteIpNetEntry PROTO :DWORD
DeleteIpNetEntry2 PROTO :DWORD
DeleteLinkFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeletePersistentTcpPortReservation PROTO :DWORD,:DWORD
DeletePersistentUdpPortReservation PROTO :DWORD,:DWORD
DeleteProcThreadAttributeList PROTO :DWORD
DeleteProfileA PROTO :DWORD,:DWORD,:DWORD
DeleteProfile equ <DeleteProfileA>

DeleteProfileDirectory PROTO :DWORD,:DWORD,:DWORD
DeleteProxyArpEntry PROTO :DWORD,:DWORD,:DWORD
DeleteSecurityContext PROTO :DWORD
DeleteSecurityPackageA PROTO :DWORD
DeleteSecurityPackage equ <DeleteSecurityPackageA>

DeleteService PROTO :DWORD
DeleteSynchronizationBarrier PROTO :DWORD
DeleteUnicastIpAddressEntry PROTO :DWORD
DeriveAppContainerSidFromAppContainerName PROTO :DWORD,:DWORD
DeriveRestrictedAppContainerSidFromAppContainerSidAndRestrictedName PROTO :DWORD,:DWORD,:DWORD
DestroyEnvironmentBlock PROTO :DWORD
DestroyPrivateObjectSecurity PROTO :DWORD
DeviceIoControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DisableMediaSense PROTO :DWORD,:DWORD
DisableThreadLibraryCalls PROTO :DWORD
DisassociateCurrentThreadFromCallback PROTO :DWORD
DiscardVirtualMemory PROTO :DWORD,:DWORD
DisconnectNamedPipe PROTO :DWORD
DispCallFunc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DispGetIDsOfNames PROTO :DWORD,:DWORD,:DWORD,:DWORD
DispGetParam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DispInvoke PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DllGetVersion PROTO :DWORD
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
DosDateTimeToVariantTime PROTO :DWORD,:DWORD,:DWORD
DsAddressToSiteNamesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsAddressToSiteNames equ <DsAddressToSiteNamesA>

DsAddressToSiteNamesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsAddressToSiteNamesEx equ <DsAddressToSiteNamesExA>

DsCrackSpn2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsCrackSpn2 equ <DsCrackSpn2A>

DsCrackSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsCrackSpn equ <DsCrackSpnA>

DsCrackUnquotedMangledRdnA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsCrackUnquotedMangledRdn equ <DsCrackUnquotedMangledRdnA>

DsDeregisterDnsHostRecordsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsDeregisterDnsHostRecords equ <DsDeregisterDnsHostRecordsA>

DsEnumerateDomainTrustsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsEnumerateDomainTrusts equ <DsEnumerateDomainTrustsA>

DsGetDcNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsGetDcName equ <DsGetDcNameA>

DsGetDcNameWithAccountA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsGetDcNameWithAccount equ <DsGetDcNameWithAccountA>

DsGetDcNextA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsGetDcNext equ <DsGetDcNextA>

DsGetDcOpenA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsGetDcOpen equ <DsGetDcOpenA>

DsGetDcSiteCoverageA PROTO :DWORD,:DWORD,:DWORD
DsGetDcSiteCoverage equ <DsGetDcSiteCoverageA>

DsGetSiteNameA PROTO :DWORD,:DWORD
DsGetSiteName equ <DsGetSiteNameA>

DsIsMangledDnA PROTO :DWORD,:DWORD
DsIsMangledDn equ <DsIsMangledDnA>

DsIsMangledRdnValueA PROTO :DWORD,:DWORD,:DWORD
DsIsMangledRdnValue equ <DsIsMangledRdnValueA>

DsMakeSpnA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DsMakeSpn equ <DsMakeSpnA>

DsQuoteRdnValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsQuoteRdnValue equ <DsQuoteRdnValueA>

DsRoleFreeMemory PROTO :DWORD
DsRoleGetPrimaryDomainInformation PROTO :DWORD,:DWORD,:DWORD
DsUnquoteRdnValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DsUnquoteRdnValue equ <DsUnquoteRdnValueA>

DsValidateSubnetNameA PROTO :DWORD
DsValidateSubnetName equ <DsValidateSubnetNameA>

DuplicateHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DuplicateToken PROTO :DWORD,:DWORD,:DWORD
DuplicateTokenEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableRouter PROTO :DWORD,:DWORD
EnableTraceEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EncodePointer PROTO :DWORD
EncodeSystemPointer PROTO :DWORD
EncryptMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnterCriticalPolicySection PROTO :DWORD
EnterCriticalSection PROTO :DWORD
EnterSynchronizationBarrier PROTO :DWORD,:DWORD
EnumDynamicTimeZoneInformation PROTO :DWORD,:DWORD
EnumProtocolsA PROTO :DWORD,:DWORD,:DWORD
EnumProtocols equ <EnumProtocolsA>

EnumResourceLanguagesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceLanguagesEx equ <EnumResourceLanguagesExA>

EnumResourceNamesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceNamesEx equ <EnumResourceNamesExA>

EnumResourceTypesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumResourceTypesEx equ <EnumResourceTypesExA>

EnumSystemFirmwareTables PROTO :DWORD,:DWORD,:DWORD
EnumSystemGeoID PROTO :DWORD,:DWORD,:DWORD
EnumSystemLocalesA PROTO :DWORD,:DWORD
EnumSystemLocales equ <EnumSystemLocalesA>

EnumSystemLocalesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumerateSecurityPackagesA PROTO :DWORD,:DWORD
EnumerateSecurityPackages equ <EnumerateSecurityPackagesA>

EnumerateTraceGuidsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EqualDomainSid PROTO :DWORD,:DWORD,:DWORD
EqualPrefixSid PROTO :DWORD,:DWORD
EqualSid PROTO :DWORD,:DWORD
EscapeCommFunction PROTO :DWORD,:DWORD
EventAccessControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventAccessQuery PROTO :DWORD,:DWORD,:DWORD
EventAccessRemove PROTO :DWORD
EventActivityIdControl PROTO :DWORD,:DWORD
EventEnabled PROTO :DWORD,:DWORD,:DWORD
EventProviderEnabled PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventRegister PROTO :DWORD,:DWORD,:DWORD,:DWORD
EventSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventUnregister PROTO :DWORD,:DWORD
EventWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EventWriteTransfer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExitProcess PROTO :DWORD
ExitThread PROTO :DWORD
ExpandEnvironmentStringsA PROTO :DWORD,:DWORD,:DWORD
ExpandEnvironmentStrings equ <ExpandEnvironmentStringsA>

ExpandEnvironmentStringsForUserA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ExpandEnvironmentStringsForUser equ <ExpandEnvironmentStringsForUserA>

ExportSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
ExtraInfo_Init PROTO :DWORD,:DWORD
Extract PROTO :DWORD,:DWORD
Faz_AreServerListsInSameNameSpace PROTO :DWORD,:DWORD,:DWORD
FileTimeToLocalFileTime PROTO :DWORD,:DWORD
FileTimeToSystemTime PROTO :DWORD,:DWORD
FillConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FillConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FillConsoleOutputCharacter equ <FillConsoleOutputCharacterA>

FindClose PROTO :DWORD
FindCloseChangeNotification PROTO :DWORD
FindFirstChangeNotificationA PROTO :DWORD,:DWORD,:DWORD
FindFirstChangeNotification equ <FindFirstChangeNotificationA>

FindFirstFileA PROTO :DWORD,:DWORD
FindFirstFile equ <FindFirstFileA>

FindFirstFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindFirstFileEx equ <FindFirstFileExA>

FindFirstFreeAce PROTO :DWORD,:DWORD
FindNLSString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNLSStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindNextChangeNotification PROTO :DWORD
FindNextFileA PROTO :DWORD,:DWORD
FindNextFile equ <FindNextFileA>

FindStringOrdinal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FindVolumeClose PROTO :DWORD
FlsAlloc PROTO :DWORD
FlsFree PROTO :DWORD
FlsGetValue PROTO :DWORD
FlsSetValue PROTO :DWORD,:DWORD
FlushConsoleInputBuffer PROTO :DWORD
FlushDnsPolicyUnreachableStatus PROTO
FlushFileBuffers PROTO :DWORD
FlushInstructionCache PROTO :DWORD,:DWORD,:DWORD
FlushIpNetTable PROTO :DWORD
FlushIpNetTable2 PROTO :DWORD,:DWORD
FlushIpPathTable PROTO :DWORD
FlushProcessWriteBuffers PROTO
FlushViewOfFile PROTO :DWORD,:DWORD
ForceSyncFgPolicy PROTO :DWORD
FormatMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FormatMessage equ <FormatMessageA>

FreeAddrInfoEx PROTO :DWORD
FreeConsole PROTO
FreeContextBuffer PROTO :DWORD
FreeCredentialsHandle PROTO :DWORD
FreeEnvironmentStringsA PROTO :DWORD
FreeEnvironmentStrings equ <FreeEnvironmentStringsA>

FreeGPOListA PROTO :DWORD
FreeGPOList equ <FreeGPOListA>

FreeLibrary PROTO :DWORD
FreeLibraryAndExitThread PROTO :DWORD,:DWORD
FreeLibraryWhenCallbackReturns PROTO :DWORD,:DWORD
FreeMibTable PROTO :DWORD
FreePropVariantArray PROTO :DWORD,:DWORD
FreeResource PROTO :DWORD
FreeSid PROTO :DWORD
FreeUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
GenerateConsoleCtrlEvent PROTO :DWORD,:DWORD
GenerateGPNotification PROTO :DWORD,:DWORD,:DWORD
GetACP PROTO
GetAcceptExSockaddrs PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAce PROTO :DWORD,:DWORD,:DWORD
GetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetActiveObject PROTO :DWORD,:DWORD,:DWORD
GetAdapterIndex PROTO :DWORD,:DWORD
GetAdapterOrderMap PROTO
GetAdaptersAddresses PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAdaptersInfo PROTO :DWORD,:DWORD
GetAddrInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAddrInfoEx equ <GetAddrInfoExA>

GetAddrInfoExCancel PROTO :DWORD
GetAddrInfoExOverlappedResult PROTO :DWORD
GetAddressByNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAddressByName equ <GetAddressByNameA>

GetAllUsersProfileDirectoryA PROTO :DWORD,:DWORD
GetAllUsersProfileDirectory equ <GetAllUsersProfileDirectoryA>

GetAltMonthNames PROTO :DWORD,:DWORD
GetAnycastIpAddressEntry PROTO :DWORD
GetAnycastIpAddressTable PROTO :DWORD,:DWORD
GetAppContainerAce PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetAppContainerFolderPath PROTO :DWORD,:DWORD
GetAppContainerNamedObjectPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAppContainerRegistryLocation PROTO :DWORD,:DWORD
GetAppliedGPOListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetAppliedGPOList equ <GetAppliedGPOListA>

GetBestInterface PROTO :DWORD,:DWORD
GetBestInterfaceEx PROTO :DWORD,:DWORD
GetBestRoute PROTO :DWORD,:DWORD,:DWORD
GetBestRoute2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCPInfo PROTO :DWORD,:DWORD
GetCachedSigningLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCalendarInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCommConfig PROTO :DWORD,:DWORD,:DWORD
GetCommMask PROTO :DWORD,:DWORD
GetCommModemStatus PROTO :DWORD,:DWORD
GetCommProperties PROTO :DWORD,:DWORD
GetCommState PROTO :DWORD,:DWORD
GetCommTimeouts PROTO :DWORD,:DWORD
GetCommandLineA PROTO
GetCommandLine equ <GetCommandLineA>

GetCompressedFileSizeA PROTO :DWORD,:DWORD
GetCompressedFileSize equ <GetCompressedFileSizeA>

GetComputerNameExA PROTO :DWORD,:DWORD,:DWORD
GetComputerNameEx equ <GetComputerNameExA>

GetConsoleCP PROTO
GetConsoleCursorInfo PROTO :DWORD,:DWORD
GetConsoleMode PROTO :DWORD,:DWORD
GetConsoleOutputCP PROTO
GetConsoleScreenBufferInfo PROTO :DWORD,:DWORD
GetConsoleScreenBufferInfoEx PROTO :DWORD,:DWORD
GetCurrentDirectoryA PROTO :DWORD,:DWORD
GetCurrentDirectory equ <GetCurrentDirectoryA>

GetCurrentProcess PROTO
GetCurrentProcessId PROTO
GetCurrentProcessorNumber PROTO
GetCurrentProcessorNumberEx PROTO :DWORD
GetCurrentThread PROTO
GetCurrentThreadCompartmentId PROTO
GetCurrentThreadId PROTO
GetCurrentThreadStackLimits PROTO :DWORD,:DWORD
GetCurrentTimeInSeconds PROTO
GetDateFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDateFormat equ <GetDateFormatA>

GetDateFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDefaultUserProfileDirectoryA PROTO :DWORD,:DWORD
GetDefaultUserProfileDirectory equ <GetDefaultUserProfileDirectoryA>

GetDiskFreeSpaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDiskFreeSpace equ <GetDiskFreeSpaceA>

GetDiskFreeSpaceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetDiskFreeSpaceEx equ <GetDiskFreeSpaceExA>

GetDllVersion PROTO
GetDriveTypeA PROTO :DWORD
GetDriveType equ <GetDriveTypeA>

GetDynamicTimeZoneInformation PROTO :DWORD
GetDynamicTimeZoneInformationEffectiveYears PROTO :DWORD,:DWORD,:DWORD
GetEnabledXStateFeatures PROTO
GetEnvironmentStrings PROTO
GetEnvironmentVariableA PROTO :DWORD,:DWORD,:DWORD
GetEnvironmentVariable equ <GetEnvironmentVariableA>

GetErrorInfo PROTO :DWORD,:DWORD
GetErrorMode PROTO
GetExitCodeProcess PROTO :DWORD,:DWORD
GetExitCodeThread PROTO :DWORD,:DWORD
GetExtendedTcpTable PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetExtendedUdpTable PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFileAttributesA PROTO :DWORD
GetFileAttributes equ <GetFileAttributesA>

GetFileAttributesExA PROTO :DWORD,:DWORD,:DWORD
GetFileAttributesEx equ <GetFileAttributesExA>

GetFileInformationByHandle PROTO :DWORD,:DWORD
GetFileInformationByHandleEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileMUIInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileMUIPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFileSize PROTO :DWORD,:DWORD
GetFileSizeEx PROTO :DWORD,:DWORD
GetFileTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFileType PROTO :DWORD
GetFinalPathNameByHandleA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFinalPathNameByHandle equ <GetFinalPathNameByHandleA>

GetFriendlyIfIndex PROTO :DWORD
GetFullPathNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetFullPathName equ <GetFullPathNameA>

GetGPOListA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetGPOList equ <GetGPOListA>

GetHGlobalFromStream PROTO :DWORD,:DWORD
GetHandleInformation PROTO :DWORD,:DWORD
GetIcmpStatistics PROTO :DWORD
GetIcmpStatisticsEx PROTO :DWORD,:DWORD
GetIfEntry PROTO :DWORD
GetIfEntry2 PROTO :DWORD
GetIfStackTable PROTO :DWORD
GetIfTable PROTO :DWORD,:DWORD,:DWORD
GetIfTable2 PROTO :DWORD
GetIfTable2Ex PROTO :DWORD,:DWORD
GetInterfaceInfo PROTO :DWORD,:DWORD
GetInvertedIfStackTable PROTO :DWORD
GetIpAddrTable PROTO :DWORD,:DWORD,:DWORD
GetIpErrorString PROTO :DWORD,:DWORD,:DWORD
GetIpForwardEntry2 PROTO :DWORD
GetIpForwardTable PROTO :DWORD,:DWORD,:DWORD
GetIpForwardTable2 PROTO :DWORD,:DWORD
GetIpInterfaceEntry PROTO :DWORD
GetIpInterfaceTable PROTO :DWORD,:DWORD
GetIpNetEntry2 PROTO :DWORD
GetIpNetTable PROTO :DWORD,:DWORD,:DWORD
GetIpNetTable2 PROTO :DWORD,:DWORD
GetIpNetworkConnectionBandwidthEstimates PROTO :DWORD,:DWORD,:DWORD
GetIpPathEntry PROTO :DWORD
GetIpPathTable PROTO :DWORD,:DWORD
GetIpStatistics PROTO :DWORD
GetIpStatisticsEx PROTO :DWORD,:DWORD
GetIsolationServerInterface PROTO :DWORD,:DWORD,:DWORD
GetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetKeyStorageInterface PROTO :DWORD,:DWORD,:DWORD
GetLargePageMinimum PROTO
GetLargestConsoleWindowSize PROTO :DWORD
GetLastError PROTO
GetLengthSid PROTO :DWORD
GetLocalTime PROTO :DWORD
GetLocaleInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetLocaleInfo equ <GetLocaleInfoA>

GetLocaleInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetLogicalDrives PROTO
GetLogicalProcessorInformation PROTO :DWORD,:DWORD
GetLogicalProcessorInformationEx PROTO :DWORD,:DWORD,:DWORD
GetLongPathNameA PROTO :DWORD,:DWORD,:DWORD
GetLongPathName equ <GetLongPathNameA>

GetLongProfilePathName PROTO :DWORD,:DWORD,:DWORD
GetMemoryErrorHandlingCapabilities PROTO :DWORD
GetModuleFileNameA PROTO :DWORD,:DWORD,:DWORD
GetModuleFileName equ <GetModuleFileNameA>

GetModuleHandleA PROTO :DWORD
GetModuleHandle equ <GetModuleHandleA>

GetModuleHandleExA PROTO :DWORD,:DWORD,:DWORD
GetModuleHandleEx equ <GetModuleHandleExA>

GetMulticastIpAddressEntry PROTO :DWORD
GetMulticastIpAddressTable PROTO :DWORD,:DWORD
GetNLSVersion PROTO :DWORD,:DWORD,:DWORD
GetNLSVersionEx PROTO :DWORD,:DWORD,:DWORD
GetNameByTypeA PROTO :DWORD,:DWORD,:DWORD
GetNameByType equ <GetNameByTypeA>

GetNativeSystemInfo PROTO :DWORD
GetNetworkInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetNetworkParams PROTO :DWORD,:DWORD
GetNextFgPolicyRefreshInfo PROTO :DWORD,:DWORD
GetNumaHighestNodeNumber PROTO :DWORD
GetNumaNodeProcessorMaskEx PROTO :DWORD,:DWORD
GetNumberOfConsoleInputEvents PROTO :DWORD,:DWORD
GetNumberOfInterfaces PROTO :DWORD
GetOEMCP PROTO
GetOsSafeBootMode PROTO :DWORD
GetOverlappedResult PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetOverlappedResultEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetOwnerModuleFromPidAndInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetOwnerModuleFromTcp6Entry PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetOwnerModuleFromTcpEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetOwnerModuleFromUdp6Entry PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetOwnerModuleFromUdpEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPerAdapterInfo PROTO :DWORD,:DWORD,:DWORD
GetPerTcp6ConnectionEStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPerTcp6ConnectionStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPerTcpConnectionEStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPerTcpConnectionStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPhysicallyInstalledSystemMemory PROTO :DWORD
GetPreviousFgPolicyRefreshInfo PROTO :DWORD,:DWORD
GetPriorityClass PROTO :DWORD
GetPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProcAddress PROTO :DWORD,:DWORD
GetProcessGroupAffinity PROTO :DWORD,:DWORD,:DWORD
GetProcessHandleCount PROTO :DWORD,:DWORD
GetProcessHeap PROTO
GetProcessHeaps PROTO :DWORD,:DWORD
GetProcessId PROTO :DWORD
GetProcessIdOfThread PROTO :DWORD
GetProcessMitigationPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProcessPriorityBoost PROTO :DWORD,:DWORD
GetProcessTimes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProcessVersion PROTO :DWORD
GetProcessWorkingSetSizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetProductInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetProfileType PROTO :DWORD
GetProfilesDirectoryA PROTO :DWORD,:DWORD
GetProfilesDirectory equ <GetProfilesDirectoryA>

GetPwrCapabilities PROTO :DWORD
GetQueuedCompletionStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetQueuedCompletionStatusEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetRTTAndHopCount PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetRecordInfoFromGuids PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetRecordInfoFromTypeInfo PROTO :DWORD,:DWORD
GetRestrictedErrorInfo PROTO :DWORD
GetSChannelInterface PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorLength PROTO :DWORD
GetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
GetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
GetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetServiceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetService equ <GetServiceA>

GetSessionCompartmentId PROTO :DWORD
GetSidIdentifierAuthority PROTO :DWORD
GetSidLengthRequired PROTO :DWORD
GetSidSubAuthority PROTO :DWORD,:DWORD
GetSidSubAuthorityCount PROTO :DWORD
GetStdHandle PROTO :DWORD
GetSystemDefaultLCID PROTO
GetSystemDefaultLangID PROTO
GetSystemDirectoryA PROTO :DWORD,:DWORD
GetSystemDirectory equ <GetSystemDirectoryA>

GetSystemFileCacheSize PROTO :DWORD,:DWORD,:DWORD
GetSystemFirmwareTable PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemInfo PROTO :DWORD
GetSystemPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemTime PROTO :DWORD
GetSystemTimeAdjustment PROTO :DWORD,:DWORD,:DWORD
GetSystemTimeAsFileTime PROTO :DWORD
GetSystemTimePreciseAsFileTime PROTO :DWORD
GetSystemTimes PROTO :DWORD,:DWORD,:DWORD
GetSystemWindowsDirectoryA PROTO :DWORD,:DWORD
GetSystemWindowsDirectory equ <GetSystemWindowsDirectoryA>

GetTcp6Table PROTO :DWORD,:DWORD,:DWORD
GetTcp6Table2 PROTO :DWORD,:DWORD,:DWORD
GetTcpStatistics PROTO :DWORD
GetTcpStatisticsEx PROTO :DWORD,:DWORD
GetTcpTable PROTO :DWORD,:DWORD,:DWORD
GetTcpTable2 PROTO :DWORD,:DWORD,:DWORD
GetTeredoPort PROTO :DWORD
GetThreadContext PROTO :DWORD,:DWORD
GetThreadGroupAffinity PROTO :DWORD,:DWORD
GetThreadIOPendingFlag PROTO :DWORD,:DWORD
GetThreadId PROTO :DWORD
GetThreadIdealProcessorEx PROTO :DWORD,:DWORD
GetThreadInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThreadLocale PROTO
GetThreadPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThreadPriority PROTO :DWORD
GetThreadPriorityBoost PROTO :DWORD,:DWORD
GetThreadTimes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThreadUILanguage PROTO
GetTickCount PROTO
GetTickCount64 PROTO
GetTimeFormatA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTimeFormat equ <GetTimeFormatA>

GetTimeFormatEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTimeZoneInformation PROTO :DWORD
GetTimeZoneInformationForYear PROTO :DWORD,:DWORD,:DWORD
GetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTraceEnableFlags PROTO :DWORD,:DWORD
GetTraceEnableLevel PROTO :DWORD,:DWORD
GetTraceLoggerHandle PROTO :DWORD
GetTypeByNameA PROTO :DWORD,:DWORD
GetTypeByName equ <GetTypeByNameA>

GetUILanguageInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetUdp6Table PROTO :DWORD,:DWORD,:DWORD
GetUdpStatistics PROTO :DWORD
GetUdpStatisticsEx PROTO :DWORD,:DWORD
GetUdpTable PROTO :DWORD,:DWORD,:DWORD
GetUniDirectionalAdapterInfo PROTO :DWORD,:DWORD
GetUnicastIpAddressEntry PROTO :DWORD
GetUnicastIpAddressTable PROTO :DWORD,:DWORD
GetUserDefaultLCID PROTO
GetUserDefaultLangID PROTO
GetUserDefaultLocaleName PROTO :DWORD,:DWORD
GetUserGeoID PROTO :DWORD
GetUserNameExA PROTO :DWORD,:DWORD,:DWORD
GetUserNameEx equ <GetUserNameExA>

GetUserPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetUserProfileDirectoryA PROTO :DWORD,:DWORD,:DWORD
GetUserProfileDirectory equ <GetUserProfileDirectoryA>

GetVarConversionLocaleSetting PROTO :DWORD
GetVersion PROTO
GetVersionExA PROTO :DWORD
GetVersionEx equ <GetVersionExA>

GetWindowsAccountDomainSid PROTO :DWORD,:DWORD,:DWORD
GetWindowsDirectoryA PROTO :DWORD,:DWORD
GetWindowsDirectory equ <GetWindowsDirectoryA>

GetWriteWatch PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetXStateFeaturesMask PROTO :DWORD,:DWORD
GlobalMemoryStatusEx PROTO :DWORD
HSTRING_UserFree PROTO :DWORD,:DWORD
HSTRING_UserMarshal PROTO :DWORD,:DWORD,:DWORD
HSTRING_UserSize PROTO :DWORD,:DWORD,:DWORD
HSTRING_UserUnmarshal PROTO :DWORD,:DWORD,:DWORD
HasPolicyForegroundProcessingCompleted PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HeapAlloc PROTO :DWORD,:DWORD,:DWORD
HeapCompact PROTO :DWORD,:DWORD
HeapCreate PROTO :DWORD,:DWORD,:DWORD
HeapDestroy PROTO :DWORD
HeapFree PROTO :DWORD,:DWORD,:DWORD
HeapLock PROTO :DWORD
HeapQueryInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HeapReAlloc PROTO :DWORD,:DWORD,:DWORD,:DWORD
HeapSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
HeapSize PROTO :DWORD,:DWORD,:DWORD
HeapUnlock PROTO :DWORD
HeapValidate PROTO :DWORD,:DWORD,:DWORD
HeapWalk PROTO :DWORD,:DWORD
HostsFile_Close PROTO :DWORD
HostsFile_Open PROTO :DWORD
HostsFile_ReadLine PROTO :DWORD
HttpAddFragmentToCache PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpAddUrl PROTO :DWORD,:DWORD,:DWORD
HttpAddUrlToUrlGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpCancelHttpRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpCloseRequestQueue PROTO :DWORD
HttpCloseServerSession PROTO :DWORD,:DWORD
HttpCloseUrlGroup PROTO :DWORD,:DWORD
HttpControlService PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpCreateHttpHandle PROTO :DWORD,:DWORD
HttpCreateRequestQueue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpCreateServerSession PROTO :DWORD,:DWORD,:DWORD
HttpCreateUrlGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpDeleteServiceConfiguration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpEvaluateRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpFlushResponseCache PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpGetCounters PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpInitialize PROTO :DWORD,:DWORD,:DWORD
HttpPrepareUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpQueryRequestQueueProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpQueryServerSessionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpQueryServiceConfiguration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpQueryUrlGroupProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpReadFragmentFromCache PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpReceiveClientCertificate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpReceiveHttpRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpReceiveRequestEntityBody PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpRemoveUrl PROTO :DWORD,:DWORD
HttpRemoveUrlFromUrlGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpSendHttpResponse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSendResponseEntityBody PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSetRequestQueueProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSetServerSessionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSetServiceConfiguration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpSetUrlGroupProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HttpShutdownRequestQueue PROTO :DWORD
HttpTerminate PROTO :DWORD,:DWORD
HttpWaitForDemandStart PROTO :DWORD,:DWORD
HttpWaitForDisconnect PROTO :DWORD,:DWORD,:DWORD,:DWORD
HttpWaitForDisconnectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IIDFromString PROTO :DWORD,:DWORD
IUnknown_AddRef_Proxy PROTO :DWORD
IUnknown_QueryInterface_Proxy PROTO :DWORD,:DWORD,:DWORD
IUnknown_Release_Proxy PROTO :DWORD
I_RpcAllocate PROTO :DWORD
I_RpcAsyncAbortCall PROTO :DWORD,:DWORD
I_RpcAsyncSetHandle PROTO :DWORD,:DWORD
I_RpcBCacheAllocate PROTO :DWORD
I_RpcBCacheFree PROTO :DWORD
I_RpcBindingCopy PROTO :DWORD,:DWORD
I_RpcBindingCreateNP PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcBindingHandleToAsyncHandle PROTO :DWORD,:DWORD
I_RpcBindingInqClientTokenAttributes PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcBindingInqDynamicEndpointA PROTO :DWORD,:DWORD
I_RpcBindingInqDynamicEndpoint equ <I_RpcBindingInqDynamicEndpointA>

I_RpcBindingInqLocalClientPID PROTO :DWORD,:DWORD
I_RpcBindingInqMarshalledTargetInfo PROTO :DWORD,:DWORD,:DWORD
I_RpcBindingInqSecurityContext PROTO :DWORD,:DWORD
I_RpcBindingInqSecurityContextKeyInfo PROTO :DWORD,:DWORD
I_RpcBindingInqTransportType PROTO :DWORD,:DWORD
I_RpcBindingInqWireIdForSnego PROTO :DWORD,:DWORD
I_RpcBindingIsClientLocal PROTO :DWORD,:DWORD
I_RpcBindingIsServerLocal PROTO :DWORD,:DWORD
I_RpcBindingSetPrivateOption PROTO :DWORD,:DWORD,:DWORD
I_RpcCertProcessAndProvision PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcClearMutex PROTO :DWORD
I_RpcCompleteAndFree PROTO :DWORD,:DWORD,:DWORD
I_RpcConnectionInqSockBuffSize PROTO :DWORD,:DWORD
I_RpcConnectionSetSockBuffSize PROTO :DWORD,:DWORD
I_RpcDeleteMutex PROTO :DWORD
I_RpcEnableWmiTrace PROTO :DWORD,:DWORD
I_RpcExceptionFilter PROTO :DWORD
I_RpcFilterDCOMActivation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_RpcFree PROTO :DWORD
I_RpcFreeBuffer PROTO :DWORD
I_RpcFreePipeBuffer PROTO :DWORD
I_RpcGetBuffer PROTO :DWORD
I_RpcGetBufferWithObject PROTO :DWORD,:DWORD
I_RpcGetCurrentCallHandle PROTO
I_RpcGetDefaultSD PROTO :DWORD
I_RpcGetExtendedError PROTO
I_RpcGetPortAllocationData PROTO :DWORD
I_RpcIfInqTransferSyntaxes PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcLogEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_RpcMapWin32Status PROTO :DWORD
I_RpcMarshalBindingHandleAndInterfaceForNDF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_RpcMgmtEnableDedicatedThreadPool PROTO
I_RpcNDRCGetWireRepresentation PROTO :DWORD,:DWORD
I_RpcNDRSContextEmergencyCleanup PROTO :DWORD,:DWORD
I_RpcNegotiateTransferSyntax PROTO :DWORD
I_RpcNsBindingSetEntryNameA PROTO :DWORD,:DWORD,:DWORD
I_RpcNsBindingSetEntryName equ <I_RpcNsBindingSetEntryNameA>

I_RpcNsInterfaceExported PROTO :DWORD,:DWORD,:DWORD
I_RpcNsInterfaceUnexported PROTO :DWORD,:DWORD,:DWORD
I_RpcOpenClientProcess PROTO :DWORD,:DWORD,:DWORD
I_RpcParseSecurity PROTO :DWORD,:DWORD
I_RpcPauseExecution PROTO :DWORD
I_RpcReallocPipeBuffer PROTO :DWORD,:DWORD
I_RpcReceive PROTO :DWORD,:DWORD
I_RpcRecordCalloutFailure PROTO :DWORD,:DWORD,:DWORD
I_RpcRequestMutex PROTO :DWORD
I_RpcSNCHOption PROTO :DWORD,:DWORD
I_RpcSend PROTO :DWORD
I_RpcSendReceive PROTO :DWORD
I_RpcServerAllocateIpPort PROTO :DWORD,:DWORD
I_RpcServerCheckClientRestriction PROTO :DWORD
I_RpcServerDisableExceptionFilter PROTO
I_RpcServerGetAssociationID PROTO :DWORD,:DWORD
I_RpcServerInqAddressChangeFn PROTO
I_RpcServerInqLocalConnAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcServerInqRemoteConnAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcServerInqTransportType PROTO :DWORD
I_RpcServerIsClientDisconnected PROTO :DWORD,:DWORD
I_RpcServerRegisterForwardFunction PROTO :DWORD
I_RpcServerSetAddressChangeFn PROTO :DWORD
I_RpcServerStartService PROTO :DWORD,:DWORD,:DWORD
I_RpcServerSubscribeForDisconnectNotification PROTO :DWORD,:DWORD
I_RpcServerUseProtseq2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_RpcServerUseProtseq2 equ <I_RpcServerUseProtseq2A>

I_RpcServerUseProtseqEp2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
I_RpcServerUseProtseqEp2 equ <I_RpcServerUseProtseqEp2A>

I_RpcSessionStrictContextHandle PROTO
I_RpcSetDCOMAppId PROTO :DWORD
I_RpcSsDontSerializeContext PROTO
I_RpcSystemFunction001 PROTO :DWORD,:DWORD,:DWORD
I_RpcTransConnectionAllocatePacket PROTO :DWORD,:DWORD
I_RpcTransConnectionFreePacket PROTO :DWORD,:DWORD
I_RpcTransConnectionReallocPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcTransDatagramAllocate PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcTransDatagramAllocate2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
I_RpcTransDatagramFree PROTO :DWORD,:DWORD
I_RpcTransGetThreadEvent PROTO
I_RpcTransGetThreadEventThreadOptional PROTO
I_RpcTransIoCancelled PROTO :DWORD,:DWORD
I_RpcTransServerNewConnection PROTO :DWORD
I_RpcTurnOnEEInfoPropagation PROTO
I_UuidCreate PROTO :DWORD
Icmp6CreateFile PROTO
Icmp6ParseReplies PROTO :DWORD,:DWORD
Icmp6SendEcho2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IcmpCloseHandle PROTO :DWORD
IcmpCreateFile PROTO
IcmpParseReplies PROTO :DWORD,:DWORD
IcmpSendEcho PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IcmpSendEcho2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IcmpSendEcho2Ex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IdnToAscii PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IdnToUnicode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ImpersonateAnonymousToken PROTO :DWORD
ImpersonateLoggedOnUser PROTO :DWORD
ImpersonateNamedPipeClient PROTO :DWORD
ImpersonateSecurityContext PROTO :DWORD
ImpersonateSelf PROTO :DWORD
ImportSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ImportSecurityContext equ <ImportSecurityContextA>

InitOnceBeginInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitOnceComplete PROTO :DWORD,:DWORD,:DWORD
InitOnceExecuteOnce PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitOnceInitialize PROTO :DWORD
InitSecurityInterfaceA PROTO
InitSecurityInterface equ <InitSecurityInterfaceA>

InitializeAcl PROTO :DWORD,:DWORD,:DWORD
InitializeConditionVariable PROTO :DWORD
InitializeContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitializeCriticalSection PROTO :DWORD
InitializeCriticalSectionAndSpinCount PROTO :DWORD,:DWORD
InitializeCriticalSectionEx PROTO :DWORD,:DWORD,:DWORD
InitializeIpForwardEntry PROTO :DWORD
InitializeIpInterfaceEntry PROTO :DWORD
InitializeProcThreadAttributeList PROTO :DWORD,:DWORD,:DWORD,:DWORD
InitializeSListHead PROTO :DWORD
InitializeSRWLock PROTO :DWORD
InitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InitializeSecurityContext equ <InitializeSecurityContextA>

InitializeSecurityDescriptor PROTO :DWORD,:DWORD
InitializeSid PROTO :DWORD,:DWORD,:DWORD
InitializeSynchronizationBarrier PROTO :DWORD,:DWORD,:DWORD
InitializeUnicastIpAddressEntry PROTO :DWORD
InstallELAMCertificateInfo PROTO :DWORD
InterlockedCompareExchange PROTO :DWORD,:DWORD,:DWORD
InterlockedCompareExchange64 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InterlockedDecrement PROTO :DWORD
InterlockedExchange PROTO :DWORD,:DWORD
InterlockedExchangeAdd PROTO :DWORD,:DWORD
InterlockedFlushSList PROTO :DWORD
InterlockedIncrement PROTO :DWORD
InterlockedPopEntrySList PROTO :DWORD
InterlockedPushEntrySList PROTO :DWORD,:DWORD
InterlockedPushListSListEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternalCleanupPersistentStore PROTO :DWORD,:DWORD
InternalCreateAnycastIpAddressEntry PROTO :DWORD,:DWORD
InternalCreateIpForwardEntry PROTO :DWORD
InternalCreateIpForwardEntry2 PROTO :DWORD,:DWORD
InternalCreateIpNetEntry PROTO :DWORD
InternalCreateIpNetEntry2 PROTO :DWORD,:DWORD
InternalCreateUnicastIpAddressEntry PROTO :DWORD,:DWORD
InternalDeleteAnycastIpAddressEntry PROTO :DWORD,:DWORD
InternalDeleteIpForwardEntry PROTO :DWORD
InternalDeleteIpForwardEntry2 PROTO :DWORD,:DWORD
InternalDeleteIpNetEntry PROTO :DWORD
InternalDeleteIpNetEntry2 PROTO :DWORD,:DWORD
InternalDeleteUnicastIpAddressEntry PROTO :DWORD,:DWORD
InternalFindInterfaceByAddress PROTO :DWORD,:DWORD
InternalGetAnycastIpAddressEntry PROTO :DWORD,:DWORD
InternalGetAnycastIpAddressTable PROTO :DWORD,:DWORD,:DWORD
InternalGetForwardIpTable2 PROTO :DWORD,:DWORD,:DWORD
InternalGetIPPhysicalInterfaceForDestination PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetIfEntry2 PROTO :DWORD,:DWORD
InternalGetIfTable PROTO :DWORD,:DWORD,:DWORD
InternalGetIfTable2 PROTO :DWORD,:DWORD
InternalGetIpAddrTable PROTO :DWORD,:DWORD,:DWORD
InternalGetIpForwardEntry2 PROTO :DWORD,:DWORD
InternalGetIpForwardTable PROTO :DWORD,:DWORD,:DWORD
InternalGetIpInterfaceEntry PROTO :DWORD,:DWORD
InternalGetIpInterfaceTable PROTO :DWORD,:DWORD,:DWORD
InternalGetIpNetEntry2 PROTO :DWORD,:DWORD
InternalGetIpNetTable PROTO :DWORD,:DWORD,:DWORD
InternalGetIpNetTable2 PROTO :DWORD,:DWORD,:DWORD
InternalGetMulticastIpAddressEntry PROTO :DWORD,:DWORD
InternalGetMulticastIpAddressTable PROTO :DWORD,:DWORD,:DWORD
InternalGetRtcSlotInformation PROTO :DWORD,:DWORD,:DWORD
InternalGetTcp6Table2 PROTO :DWORD,:DWORD,:DWORD
InternalGetTcp6TableWithOwnerModule PROTO :DWORD,:DWORD,:DWORD
InternalGetTcp6TableWithOwnerPid PROTO :DWORD,:DWORD,:DWORD
InternalGetTcpTable PROTO :DWORD,:DWORD,:DWORD
InternalGetTcpTable2 PROTO :DWORD,:DWORD,:DWORD
InternalGetTcpTableEx PROTO :DWORD,:DWORD,:DWORD
InternalGetTcpTableWithOwnerModule PROTO :DWORD,:DWORD,:DWORD
InternalGetTcpTableWithOwnerPid PROTO :DWORD,:DWORD,:DWORD
InternalGetTunnelPhysicalAdapter PROTO :DWORD,:DWORD
InternalGetUdp6TableWithOwnerModule PROTO :DWORD,:DWORD,:DWORD
InternalGetUdp6TableWithOwnerPid PROTO :DWORD,:DWORD,:DWORD
InternalGetUdpTable PROTO :DWORD,:DWORD,:DWORD
InternalGetUdpTableEx PROTO :DWORD,:DWORD,:DWORD
InternalGetUdpTableWithOwnerModule PROTO :DWORD,:DWORD,:DWORD
InternalGetUdpTableWithOwnerPid PROTO :DWORD,:DWORD,:DWORD
InternalGetUnicastIpAddressEntry PROTO :DWORD,:DWORD
InternalGetUnicastIpAddressTable PROTO :DWORD,:DWORD,:DWORD
InternalIcmpCreateFileEx PROTO :DWORD
InternalSetIfEntry PROTO :DWORD
InternalSetIpForwardEntry PROTO :DWORD
InternalSetIpForwardEntry2 PROTO :DWORD,:DWORD
InternalSetIpInterfaceEntry PROTO :DWORD,:DWORD
InternalSetIpNetEntry PROTO :DWORD
InternalSetIpNetEntry2 PROTO :DWORD,:DWORD
InternalSetIpStats PROTO :DWORD
InternalSetTcpEntry PROTO :DWORD
InternalSetTeredoPort PROTO :DWORD
InternalSetUnicastIpAddressEntry PROTO :DWORD,:DWORD
IpHelp_IsAddrOnLink PROTO :DWORD
IpReleaseAddress PROTO :DWORD
IpRenewAddress PROTO :DWORD
IsBypassExclusionDisabled PROTO
IsDBCSLeadByte PROTO :DWORD
IsDBCSLeadByteEx PROTO :DWORD,:DWORD
IsDebuggerPresent PROTO
IsErrorPropagationEnabled PROTO
IsNLSDefinedString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsProcessCritical PROTO :DWORD,:DWORD
IsProcessInJob PROTO :DWORD,:DWORD,:DWORD
IsProcessorFeaturePresent PROTO :DWORD
IsThreadAFiber PROTO
IsThreadpoolTimerSet PROTO :DWORD
IsTokenRestricted PROTO :DWORD
IsValidAcl PROTO :DWORD
IsValidCodePage PROTO :DWORD
IsValidLanguageGroup PROTO :DWORD,:DWORD
IsValidLocale PROTO :DWORD,:DWORD
IsValidLocaleName PROTO :DWORD
IsValidNLSVersion PROTO :DWORD,:DWORD,:DWORD
IsValidSecurityDescriptor PROTO :DWORD
IsValidSid PROTO :DWORD
IsWellKnownSid PROTO :DWORD,:DWORD
K32EmptyWorkingSet PROTO :DWORD
K32EnumDeviceDrivers PROTO :DWORD,:DWORD,:DWORD
K32EnumProcesses PROTO :DWORD,:DWORD,:DWORD
K32GetPerformanceInfo PROTO :DWORD,:DWORD
K32GetProcessMemoryInfo PROTO :DWORD,:DWORD,:DWORD
K32GetWsChanges PROTO :DWORD,:DWORD,:DWORD
K32GetWsChangesEx PROTO :DWORD,:DWORD,:DWORD
K32InitializeProcessForWsWatch PROTO :DWORD
K32QueryWorkingSet PROTO :DWORD,:DWORD,:DWORD
K32QueryWorkingSetEx PROTO :DWORD,:DWORD,:DWORD
LCMapStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LCMapString equ <LCMapStringA>

LCMapStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LHashValOfNameSysA PROTO :DWORD,:DWORD,:DWORD
LHashValOfNameSys equ <LHashValOfNameSysA>

LPSAFEARRAY_Marshal PROTO :DWORD,:DWORD,:DWORD,:DWORD
LPSAFEARRAY_Size PROTO :DWORD,:DWORD,:DWORD,:DWORD
LPSAFEARRAY_Unmarshal PROTO :DWORD,:DWORD,:DWORD,:DWORD
LPSAFEARRAY_UserFree PROTO :DWORD,:DWORD
LPSAFEARRAY_UserMarshal PROTO :DWORD,:DWORD,:DWORD
LPSAFEARRAY_UserSize PROTO :DWORD,:DWORD,:DWORD
LPSAFEARRAY_UserUnmarshal PROTO :DWORD,:DWORD,:DWORD
LeaveCriticalPolicySection PROTO :DWORD
LeaveCriticalSection PROTO :DWORD
LeaveCriticalSectionWhenCallbackReturns PROTO :DWORD,:DWORD
LoadLibraryExA PROTO :DWORD,:DWORD,:DWORD
LoadLibraryEx equ <LoadLibraryExA>

LoadRegTypeLib PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LoadResource PROTO :DWORD,:DWORD
LoadStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
LoadString equ <LoadStringA>

LoadTypeLib PROTO :DWORD,:DWORD
LoadTypeLibEx PROTO :DWORD,:DWORD,:DWORD
LoadUserProfileA PROTO :DWORD,:DWORD
LoadUserProfile equ <LoadUserProfileA>

LocalAliasGet PROTO :DWORD,:DWORD
LocalFileClose PROTO :DWORD,:DWORD,:DWORD
LocalFileEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalFileEnumEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalFileGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
LocalFileGetInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalFileTimeToFileTime PROTO :DWORD,:DWORD
LocalSessionDel PROTO :DWORD,:DWORD,:DWORD
LocalSessionEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalSessionEnumEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalSessionGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
LocalSessionGetInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalShareAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalShareDelEx PROTO :DWORD,:DWORD
LocalShareEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD
LocalShareEnumEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalShareGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
LocalShareGetInfoEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocalShareSetInfo PROTO :DWORD,:DWORD
Local_GetRecordsForLocalName PROTO :DWORD,:DWORD
Local_GetRecordsForLocalNameEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LocaleNameToLCID PROTO :DWORD,:DWORD
LocateXStateFeature PROTO :DWORD,:DWORD,:DWORD
LockFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LockFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LockResource PROTO :DWORD
LookupAppContainerDisplayName PROTO :DWORD,:DWORD
LookupPersistentTcpPortReservation PROTO :DWORD,:DWORD,:DWORD
LookupPersistentUdpPortReservation PROTO :DWORD,:DWORD,:DWORD
LsaCallAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaConnectUntrusted PROTO :DWORD
LsaDeregisterLogonProcess PROTO :DWORD
LsaEnumerateLogonSessions PROTO :DWORD,:DWORD
LsaEnumerateTrustedDomains PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaFreeReturnBuffer PROTO :DWORD
LsaGetLogonSessionData PROTO :DWORD,:DWORD
LsaLogonUser PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LsaLookupAuthenticationPackage PROTO :DWORD,:DWORD,:DWORD
LsaManageSidNameMapping PROTO :DWORD,:DWORD,:DWORD
LsaRegisterLogonProcess PROTO :DWORD,:DWORD,:DWORD
LsaRegisterPolicyChangeNotification PROTO :DWORD,:DWORD
LsaUnregisterPolicyChangeNotification PROTO :DWORD,:DWORD
MakeAbsoluteSD PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MakeSelfRelativeSD PROTO :DWORD,:DWORD,:DWORD
MakeSignature PROTO :DWORD,:DWORD,:DWORD,:DWORD
MapGenericMask PROTO :DWORD,:DWORD
MapUserPhysicalPages PROTO :DWORD,:DWORD,:DWORD
MapViewOfFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapViewOfFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MapViewOfFileFromApp PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MesBufferHandleReset PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MesDecodeBufferHandleCreate PROTO :DWORD,:DWORD,:DWORD
MesDecodeIncrementalHandleCreate PROTO :DWORD,:DWORD,:DWORD
MesEncodeDynBufferHandleCreate PROTO :DWORD,:DWORD,:DWORD
MesEncodeFixedBufferHandleCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD
MesEncodeIncrementalHandleCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD
MesHandleFree PROTO :DWORD
MesIncrementalHandleReset PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MesInqProcEncodingId PROTO :DWORD,:DWORD,:DWORD
MigrateWinsockConfiguration PROTO :DWORD,:DWORD,:DWORD
MigrateWinsockConfigurationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
MultiByteToWideChar PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MultinetGetConnectionPerformanceA PROTO :DWORD,:DWORD
MultinetGetConnectionPerformance equ <MultinetGetConnectionPerformanceA>

NCryptCloseProtectionDescriptor PROTO :DWORD
NCryptCreatePersistedKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptCreateProtectionDescriptor PROTO :DWORD,:DWORD,:DWORD
NCryptDecrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptDeleteKey PROTO :DWORD,:DWORD
NCryptDeriveKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptEncrypt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptEnumAlgorithms PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptEnumKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptEnumStorageProviders PROTO :DWORD,:DWORD,:DWORD
NCryptExportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptFinalizeKey PROTO :DWORD,:DWORD
NCryptFreeBuffer PROTO :DWORD
NCryptFreeObject PROTO :DWORD
NCryptGetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptGetProtectionDescriptorInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NCryptImportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptIsAlgSupported PROTO :DWORD,:DWORD,:DWORD
NCryptIsKeyHandle PROTO :DWORD
NCryptKeyDerivation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptNotifyChangeKey PROTO :DWORD,:DWORD,:DWORD
NCryptOpenKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptOpenStorageProvider PROTO :DWORD,:DWORD,:DWORD
NCryptProtectSecret PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptQueryProtectionDescriptorName PROTO :DWORD,:DWORD,:DWORD,:DWORD
NCryptRegisterProtectionDescriptorName PROTO :DWORD,:DWORD,:DWORD
NCryptSecretAgreement PROTO :DWORD,:DWORD,:DWORD,:DWORD
NCryptSetAuditingInterface PROTO :DWORD
NCryptSetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptSignHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptStreamClose PROTO :DWORD
NCryptStreamOpenToProtect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptStreamOpenToUnprotect PROTO :DWORD,:DWORD,:DWORD,:DWORD
NCryptStreamUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD
NCryptTranslateHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptUnprotectSecret PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NCryptVerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NDRCContextBinding PROTO :DWORD
NDRCContextMarshall PROTO :DWORD,:DWORD
NDRCContextUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NDRSContextMarshall PROTO :DWORD,:DWORD,:DWORD
NDRSContextMarshall2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NDRSContextMarshallEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
NDRSContextUnmarshall PROTO :DWORD,:DWORD
NDRSContextUnmarshall2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NDRSContextUnmarshallEx PROTO :DWORD,:DWORD,:DWORD
NPLoadNameSpaces PROTO :DWORD,:DWORD,:DWORD
NTPTimeToNTFileTime PROTO :DWORD,:DWORD,:DWORD
NTTimeToNTPTime PROTO :DWORD,:DWORD
NdrAllocate PROTO :DWORD,:DWORD
NdrAsyncServerCall PROTO :DWORD
NdrByteCountPointerBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrByteCountPointerFree PROTO :DWORD,:DWORD,:DWORD
NdrByteCountPointerMarshall PROTO :DWORD,:DWORD,:DWORD
NdrByteCountPointerUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrCStdStubBuffer2_Release PROTO :DWORD,:DWORD
NdrCStdStubBuffer_Release PROTO :DWORD,:DWORD
NdrClearOutParameters PROTO :DWORD,:DWORD,:DWORD
NdrClientContextMarshall PROTO :DWORD,:DWORD,:DWORD
NdrClientContextUnmarshall PROTO :DWORD,:DWORD,:DWORD
NdrClientInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrClientInitializeNew PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrComplexArrayBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrComplexArrayFree PROTO :DWORD,:DWORD,:DWORD
NdrComplexArrayMarshall PROTO :DWORD,:DWORD,:DWORD
NdrComplexArrayMemorySize PROTO :DWORD,:DWORD
NdrComplexArrayUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrComplexStructBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrComplexStructFree PROTO :DWORD,:DWORD,:DWORD
NdrComplexStructMarshall PROTO :DWORD,:DWORD,:DWORD
NdrComplexStructMemorySize PROTO :DWORD,:DWORD
NdrComplexStructUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrConformantArrayBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrConformantArrayFree PROTO :DWORD,:DWORD,:DWORD
NdrConformantArrayMarshall PROTO :DWORD,:DWORD,:DWORD
NdrConformantArrayMemorySize PROTO :DWORD,:DWORD
NdrConformantArrayUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrConformantStringBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrConformantStringMarshall PROTO :DWORD,:DWORD,:DWORD
NdrConformantStringMemorySize PROTO :DWORD,:DWORD
NdrConformantStringUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrConformantStructBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrConformantStructFree PROTO :DWORD,:DWORD,:DWORD
NdrConformantStructMarshall PROTO :DWORD,:DWORD,:DWORD
NdrConformantStructMemorySize PROTO :DWORD,:DWORD
NdrConformantStructUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrConformantVaryingArrayBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingArrayFree PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingArrayMarshall PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingArrayMemorySize PROTO :DWORD,:DWORD
NdrConformantVaryingArrayUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrConformantVaryingStructBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingStructFree PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingStructMarshall PROTO :DWORD,:DWORD,:DWORD
NdrConformantVaryingStructMemorySize PROTO :DWORD,:DWORD
NdrConformantVaryingStructUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrContextHandleInitialize PROTO :DWORD,:DWORD
NdrContextHandleSize PROTO :DWORD,:DWORD,:DWORD
NdrConvert PROTO :DWORD,:DWORD
NdrConvert2 PROTO :DWORD,:DWORD,:DWORD
NdrCorrelationFree PROTO :DWORD
NdrCorrelationInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrCorrelationPass PROTO :DWORD
NdrCreateServerInterfaceFromStub PROTO :DWORD,:DWORD
NdrDcomAsyncStubCall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrDllCanUnloadNow PROTO :DWORD
NdrDllGetClassObject PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrDllRegisterProxy PROTO :DWORD,:DWORD,:DWORD
NdrDllUnregisterProxy PROTO :DWORD,:DWORD,:DWORD
NdrEncapsulatedUnionBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrEncapsulatedUnionFree PROTO :DWORD,:DWORD,:DWORD
NdrEncapsulatedUnionMarshall PROTO :DWORD,:DWORD,:DWORD
NdrEncapsulatedUnionMemorySize PROTO :DWORD,:DWORD
NdrEncapsulatedUnionUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrFixedArrayBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrFixedArrayFree PROTO :DWORD,:DWORD,:DWORD
NdrFixedArrayMarshall PROTO :DWORD,:DWORD,:DWORD
NdrFixedArrayMemorySize PROTO :DWORD,:DWORD
NdrFixedArrayUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrFreeBuffer PROTO :DWORD
NdrFullPointerXlatFree PROTO :DWORD
NdrFullPointerXlatInit PROTO :DWORD,:DWORD
NdrGetBaseInterfaceFromStub PROTO :DWORD,:DWORD,:DWORD
NdrGetBuffer PROTO :DWORD,:DWORD,:DWORD
NdrGetDcomProtocolVersion PROTO :DWORD,:DWORD
NdrGetSimpleTypeBufferAlignment PROTO :DWORD
NdrGetSimpleTypeBufferSize PROTO :DWORD
NdrGetSimpleTypeMemorySize PROTO :DWORD
NdrGetTypeFlags PROTO :DWORD
NdrGetUserMarshalInfo PROTO :DWORD,:DWORD,:DWORD
NdrInterfacePointerBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrInterfacePointerFree PROTO :DWORD,:DWORD,:DWORD
NdrInterfacePointerMarshall PROTO :DWORD,:DWORD,:DWORD
NdrInterfacePointerMemorySize PROTO :DWORD,:DWORD
NdrInterfacePointerUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMapCommAndFaultStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMesSimpleTypeAlignSize PROTO :DWORD
NdrMesSimpleTypeDecode PROTO :DWORD,:DWORD,:DWORD
NdrMesSimpleTypeEncode PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeAlignSize PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeAlignSize2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeDecode PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeDecode2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeEncode PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeEncode2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrMesTypeFree2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrNonConformantStringBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrNonConformantStringMarshall PROTO :DWORD,:DWORD,:DWORD
NdrNonConformantStringMemorySize PROTO :DWORD,:DWORD
NdrNonConformantStringUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrNonEncapsulatedUnionBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrNonEncapsulatedUnionFree PROTO :DWORD,:DWORD,:DWORD
NdrNonEncapsulatedUnionMarshall PROTO :DWORD,:DWORD,:DWORD
NdrNonEncapsulatedUnionMemorySize PROTO :DWORD,:DWORD
NdrNonEncapsulatedUnionUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrNsGetBuffer PROTO :DWORD,:DWORD,:DWORD
NdrNsSendReceive PROTO :DWORD,:DWORD,:DWORD
NdrOleAllocate PROTO :DWORD
NdrOleFree PROTO :DWORD
NdrOutInit PROTO :DWORD,:DWORD,:DWORD
NdrPartialIgnoreClientBufferSize PROTO :DWORD,:DWORD
NdrPartialIgnoreClientMarshall PROTO :DWORD,:DWORD
NdrPartialIgnoreServerInitialize PROTO :DWORD,:DWORD,:DWORD
NdrPartialIgnoreServerUnmarshall PROTO :DWORD,:DWORD
NdrPointerBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrPointerFree PROTO :DWORD,:DWORD,:DWORD
NdrPointerMarshall PROTO :DWORD,:DWORD,:DWORD
NdrPointerMemorySize PROTO :DWORD,:DWORD
NdrPointerUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrProxyErrorHandler PROTO :DWORD
NdrProxyFreeBuffer PROTO :DWORD,:DWORD
NdrProxyGetBuffer PROTO :DWORD,:DWORD
NdrProxyInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrProxySendReceive PROTO :DWORD,:DWORD
NdrRangeUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrRpcSmClientAllocate PROTO :DWORD
NdrRpcSmClientFree PROTO :DWORD
NdrRpcSmSetClientToOsf PROTO :DWORD
NdrRpcSsDefaultAllocate PROTO :DWORD
NdrRpcSsDefaultFree PROTO :DWORD
NdrRpcSsDisableAllocate PROTO :DWORD
NdrRpcSsEnableAllocate PROTO :DWORD
NdrSendReceive PROTO :DWORD,:DWORD
NdrServerCall PROTO :DWORD
NdrServerCall2 PROTO :DWORD
NdrServerContextMarshall PROTO :DWORD,:DWORD,:DWORD
NdrServerContextNewMarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrServerContextNewUnmarshall PROTO :DWORD,:DWORD
NdrServerContextUnmarshall PROTO :DWORD
NdrServerInitialize PROTO :DWORD,:DWORD,:DWORD
NdrServerInitializeMarshall PROTO :DWORD,:DWORD
NdrServerInitializeNew PROTO :DWORD,:DWORD,:DWORD
NdrServerInitializePartial PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrServerInitializeUnmarshall PROTO :DWORD,:DWORD,:DWORD
NdrServerMarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrServerUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrSimpleStructBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrSimpleStructFree PROTO :DWORD,:DWORD,:DWORD
NdrSimpleStructMarshall PROTO :DWORD,:DWORD,:DWORD
NdrSimpleStructMemorySize PROTO :DWORD,:DWORD
NdrSimpleStructUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrSimpleTypeMarshall PROTO :DWORD,:DWORD,:DWORD
NdrSimpleTypeUnmarshall PROTO :DWORD,:DWORD,:DWORD
NdrStubCall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrStubCall2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrStubForwardingFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrStubGetBuffer PROTO :DWORD,:DWORD,:DWORD
NdrStubInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrStubInitializeMarshall PROTO :DWORD,:DWORD,:DWORD
NdrTypeFree PROTO :DWORD,:DWORD,:DWORD
NdrTypeMarshall PROTO :DWORD,:DWORD,:DWORD
NdrTypeSize PROTO :DWORD,:DWORD,:DWORD
NdrTypeUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrUnmarshallBasetypeInline PROTO :DWORD,:DWORD,:DWORD
NdrUserMarshalBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrUserMarshalFree PROTO :DWORD,:DWORD,:DWORD
NdrUserMarshalMarshall PROTO :DWORD,:DWORD,:DWORD
NdrUserMarshalMemorySize PROTO :DWORD,:DWORD
NdrUserMarshalSimpleTypeConvert PROTO :DWORD,:DWORD,:DWORD
NdrUserMarshalUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrVaryingArrayBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrVaryingArrayFree PROTO :DWORD,:DWORD,:DWORD
NdrVaryingArrayMarshall PROTO :DWORD,:DWORD,:DWORD
NdrVaryingArrayMemorySize PROTO :DWORD,:DWORD
NdrVaryingArrayUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrXmitOrRepAsBufferSize PROTO :DWORD,:DWORD,:DWORD
NdrXmitOrRepAsFree PROTO :DWORD,:DWORD,:DWORD
NdrXmitOrRepAsMarshall PROTO :DWORD,:DWORD,:DWORD
NdrXmitOrRepAsMemorySize PROTO :DWORD,:DWORD
NdrXmitOrRepAsUnmarshall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrpCreateProxy PROTO :DWORD,:DWORD,:DWORD,:DWORD
NdrpCreateStub PROTO :DWORD,:DWORD,:DWORD
NdrpGetProcFormatString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NdrpGetTypeFormatString PROTO :DWORD,:DWORD,:DWORD
NdrpGetTypeGenCookie PROTO :DWORD
NdrpMemoryIncrement PROTO :DWORD,:DWORD,:DWORD
NdrpReleaseTypeFormatString PROTO :DWORD
NdrpReleaseTypeGenCookie PROTO :DWORD
NdrpVarVtOfTypeDesc PROTO :DWORD,:DWORD,:DWORD
NeedCurrentDirectoryForExePathA PROTO :DWORD
NeedCurrentDirectoryForExePath equ <NeedCurrentDirectoryForExePathA>

NetAddAlternateComputerName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetAddServiceAccount PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetApiBufferAllocate PROTO :DWORD,:DWORD
NetApiBufferFree PROTO :DWORD
NetApiBufferReallocate PROTO :DWORD,:DWORD,:DWORD
NetApiBufferSize PROTO :DWORD,:DWORD
NetConnectionEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsAddFtRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsAddRootTarget PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsAddStdRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsAddStdRootForced PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetClientInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetDcAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetFtContainerSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetStdContainerSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsGetSupportedNamespaceVersion PROTO :DWORD,:DWORD,:DWORD
NetDfsManagerInitialize PROTO :DWORD,:DWORD
NetDfsManagerSendSiteInfo PROTO :DWORD,:DWORD,:DWORD
NetDfsMove PROTO :DWORD,:DWORD,:DWORD
NetDfsRemove PROTO :DWORD,:DWORD,:DWORD
NetDfsRemoveFtRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetDfsRemoveFtRootForced PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsRemoveRootTarget PROTO :DWORD,:DWORD,:DWORD
NetDfsRemoveStdRoot PROTO :DWORD,:DWORD,:DWORD
NetDfsSetClientInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsSetFtContainerSecurity PROTO :DWORD,:DWORD,:DWORD
NetDfsSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetDfsSetSecurity PROTO :DWORD,:DWORD,:DWORD
NetDfsSetStdContainerSecurity PROTO :DWORD,:DWORD,:DWORD
NetEnumerateComputerNames PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetEnumerateServiceAccounts PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetFileClose PROTO :DWORD,:DWORD
NetFileEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetFileGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetGetAnyDCName PROTO :DWORD,:DWORD,:DWORD
NetGetDCName PROTO :DWORD,:DWORD,:DWORD
NetGetDisplayInformationIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetGetJoinInformation PROTO :DWORD,:DWORD,:DWORD
NetGetJoinableOUs PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetGroupAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetGroupAddUser PROTO :DWORD,:DWORD,:DWORD
NetGroupDel PROTO :DWORD,:DWORD
NetGroupDelUser PROTO :DWORD,:DWORD,:DWORD
NetGroupEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetGroupGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetGroupGetUsers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetGroupSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetGroupSetUsers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
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
NetIsServiceAccount PROTO :DWORD,:DWORD,:DWORD
NetJoinDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupAddMember PROTO :DWORD,:DWORD,:DWORD
NetLocalGroupAddMembers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupDel PROTO :DWORD,:DWORD
NetLocalGroupDelMember PROTO :DWORD,:DWORD,:DWORD
NetLocalGroupDelMembers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupGetMembers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLocalGroupSetMembers PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetLogonGetTimeServiceParentDomain PROTO :DWORD,:DWORD,:DWORD
NetQueryDisplayInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetQueryServiceAccount PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetRemoteComputerSupports PROTO :DWORD,:DWORD,:DWORD
NetRemoteTOD PROTO :DWORD,:DWORD
NetRemoveAlternateComputerName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetRemoveServiceAccount PROTO :DWORD,:DWORD,:DWORD
NetRenameMachineInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetScheduleJobAdd PROTO :DWORD,:DWORD,:DWORD
NetScheduleJobDel PROTO :DWORD,:DWORD,:DWORD
NetScheduleJobEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetScheduleJobGetInfo PROTO :DWORD,:DWORD,:DWORD
NetServerAliasAdd PROTO :DWORD,:DWORD,:DWORD
NetServerAliasDel PROTO :DWORD,:DWORD,:DWORD
NetServerAliasEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetServerComputerNameAdd PROTO :DWORD,:DWORD,:DWORD
NetServerComputerNameDel PROTO :DWORD,:DWORD
NetServerDiskEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetServerGetInfo PROTO :DWORD,:DWORD,:DWORD
NetServerSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetServerStatisticsGet PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetServerTransportAdd PROTO :DWORD,:DWORD,:DWORD
NetServerTransportAddEx PROTO :DWORD,:DWORD,:DWORD
NetServerTransportDel PROTO :DWORD,:DWORD,:DWORD
NetServerTransportEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetSessionDel PROTO :DWORD,:DWORD,:DWORD
NetSessionEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetSessionGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetSetPrimaryComputerName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetShareAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetShareCheck PROTO :DWORD,:DWORD,:DWORD
NetShareDel PROTO :DWORD,:DWORD,:DWORD
NetShareDelEx PROTO :DWORD,:DWORD,:DWORD
NetShareDelSticky PROTO :DWORD,:DWORD,:DWORD
NetShareEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetShareEnumSticky PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetShareGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetShareSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUnjoinDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUseAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUseDel PROTO :DWORD,:DWORD,:DWORD
NetUseEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUseGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserChangePassword PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserDel PROTO :DWORD,:DWORD
NetUserEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUserGetGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUserGetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserGetInternetIdentityInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserGetLocalGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUserModalsGet PROTO :DWORD,:DWORD,:DWORD
NetUserModalsSet PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetUserSetGroups PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetUserSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetValidateName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetValidatePasswordPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetValidatePasswordPolicyFree PROTO :DWORD
NetWkstaGetInfo PROTO :DWORD,:DWORD,:DWORD
NetWkstaSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetWkstaStatisticsGet PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetWkstaTransportAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD
NetWkstaTransportDel PROTO :DWORD,:DWORD,:DWORD
NetWkstaTransportEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetWkstaUserEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NetWkstaUserGetInfo PROTO :DWORD,:DWORD,:DWORD
NetWkstaUserSetInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
NhGetGuidFromInterfaceName PROTO :DWORD,:DWORD,:DWORD,:DWORD
NhGetInterfaceDescriptionFromGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NhGetInterfaceNameFromDeviceGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NhGetInterfaceNameFromGuid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NhpAllocateAndGetInterfaceInfoFromStack PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NlSetDsIsCloningPDC PROTO :DWORD
NotifyAddrChange PROTO :DWORD,:DWORD
NotifyCompartmentChange PROTO :DWORD,:DWORD,:DWORD,:DWORD
NotifyIpInterfaceChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NotifyRouteChange PROTO :DWORD,:DWORD
NotifyRouteChange2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NotifyServiceStatusChangeA PROTO :DWORD,:DWORD,:DWORD
NotifyServiceStatusChange equ <NotifyServiceStatusChangeA>

NotifyStableUnicastIpAddressTable PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NotifyTeredoPortChange PROTO :DWORD,:DWORD,:DWORD,:DWORD
NotifyUnicastIpAddressChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OACreateTypeLib2 PROTO :DWORD,:DWORD,:DWORD
OaBuildVersion PROTO
OaEnablePerUserTLibRegistration PROTO
OfferVirtualMemory PROTO :DWORD,:DWORD,:DWORD
OleCreateFontIndirect PROTO :DWORD,:DWORD,:DWORD
OleCreatePictureIndirect PROTO :DWORD,:DWORD,:DWORD,:DWORD
OleCreatePropertyFrame PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreatePropertyFrameIndirect PROTO :DWORD
OleIconToCursor PROTO :DWORD,:DWORD
OleLoadPicture PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleLoadPictureEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleLoadPictureFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleLoadPictureFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleLoadPicturePath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleSavePictureFile PROTO :DWORD,:DWORD
OleTranslateColor PROTO :DWORD,:DWORD,:DWORD
OpenCompartment PROTO :DWORD,:DWORD
OpenEventA PROTO :DWORD,:DWORD,:DWORD
OpenEvent equ <OpenEventA>

OpenFileById PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OpenProcess PROTO :DWORD,:DWORD,:DWORD
OpenProcessToken PROTO :DWORD,:DWORD,:DWORD
OpenSCManagerA PROTO :DWORD,:DWORD,:DWORD
OpenSCManager equ <OpenSCManagerA>

OpenServiceA PROTO :DWORD,:DWORD,:DWORD
OpenService equ <OpenServiceA>

OpenThread PROTO :DWORD,:DWORD,:DWORD
OpenThreadToken PROTO :DWORD,:DWORD,:DWORD,:DWORD
OutputDebugStringA PROTO :DWORD
OutputDebugString equ <OutputDebugStringA>

PFXExportCertStore PROTO :DWORD,:DWORD,:DWORD,:DWORD
PFXExportCertStore2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
PFXExportCertStoreEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PFXImportCertStore PROTO :DWORD,:DWORD,:DWORD
PFXIsPFXBlob PROTO :DWORD
PFXVerifyPassword PROTO :DWORD,:DWORD,:DWORD
ParseNetworkString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathAllocCanonicalize PROTO :DWORD,:DWORD,:DWORD
PathAllocCombine PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchAddBackslash PROTO :DWORD,:DWORD
PathCchAddBackslashEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchAddExtension PROTO :DWORD,:DWORD,:DWORD
PathCchAppend PROTO :DWORD,:DWORD,:DWORD
PathCchAppendEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchCanonicalize PROTO :DWORD,:DWORD,:DWORD
PathCchCanonicalizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchCombine PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchCombineEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathCchFindExtension PROTO :DWORD,:DWORD,:DWORD
PathCchIsRoot PROTO :DWORD
PathCchRemoveBackslash PROTO :DWORD,:DWORD
PathCchRemoveBackslashEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
PathCchRemoveExtension PROTO :DWORD,:DWORD
PathCchRemoveFileSpec PROTO :DWORD,:DWORD
PathCchRenameExtension PROTO :DWORD,:DWORD,:DWORD
PathCchSkipRoot PROTO :DWORD,:DWORD
PathCchStripPrefix PROTO :DWORD,:DWORD
PathCchStripToRoot PROTO :DWORD,:DWORD
PathIsUNCEx PROTO :DWORD,:DWORD
PeekConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeekConsoleInput equ <PeekConsoleInputA>

PeekNamedPipe PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfAddFiltersToInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfAddGlobalFilterToInterface PROTO :DWORD,:DWORD
PfBindInterfaceToIPAddress PROTO :DWORD,:DWORD,:DWORD
PfBindInterfaceToIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD
PfCreateInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfDeleteInterface PROTO :DWORD
PfDeleteLog PROTO
PfGetInterfaceStatistics PROTO :DWORD,:DWORD,:DWORD,:DWORD
PfMakeLog PROTO :DWORD
PfRebindFilters PROTO :DWORD,:DWORD
PfRemoveFilterHandles PROTO :DWORD,:DWORD,:DWORD
PfRemoveFiltersFromInterface PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfRemoveGlobalFilterFromInterface PROTO :DWORD,:DWORD
PfSetLogBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfTestPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PfUnBindInterface PROTO :DWORD
PingComputer PROTO :DWORD,:DWORD
PostQueuedCompletionStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerDeterminePlatformRoleEx PROTO :DWORD
PowerGetActiveScheme PROTO :DWORD,:DWORD
PowerReadACValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadDCValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerRegisterSuspendResumeNotification PROTO :DWORD,:DWORD,:DWORD
PowerSetActiveScheme PROTO :DWORD,:DWORD
PowerSettingRegisterNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerSettingUnregisterNotification PROTO :DWORD
PowerUnregisterSuspendResumeNotification PROTO :DWORD
PowerWriteACValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteDCValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PrefetchVirtualMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD
PrivilegeCheck PROTO :DWORD,:DWORD,:DWORD
ProcessGroupPolicyCompleted PROTO :DWORD,:DWORD,:DWORD
ProcessGroupPolicyCompletedEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
ProcessIdToSessionId PROTO :DWORD,:DWORD
ProcessTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD
ProgIDFromCLSID PROTO :DWORD,:DWORD
PropVariantClear PROTO :DWORD
PropVariantCopy PROTO :DWORD,:DWORD
PurgeComm PROTO :DWORD,:DWORD
QueryCompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryContextAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryContextAttributes equ <QueryContextAttributesA>

QueryCredentialsAttributesA PROTO :DWORD,:DWORD,:DWORD
QueryCredentialsAttributes equ <QueryCredentialsAttributesA>

QueryDecompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryDepthSList PROTO :DWORD
QueryDirectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryIdleProcessorCycleTime PROTO :DWORD,:DWORD
QueryIdleProcessorCycleTimeEx PROTO :DWORD,:DWORD,:DWORD
QueryMemoryResourceNotification PROTO :DWORD,:DWORD
QueryPathOfRegTypeLib PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryPerformanceCounter PROTO :DWORD
QueryPerformanceFrequency PROTO :DWORD
QueryProcessAffinityUpdateMode PROTO :DWORD,:DWORD
QueryProcessCycleTime PROTO :DWORD,:DWORD
QueryProtectedPolicy PROTO :DWORD,:DWORD
QuerySecurityAccessMask PROTO :DWORD,:DWORD
QuerySecurityContextToken PROTO :DWORD,:DWORD
QuerySecurityPackageInfoA PROTO :DWORD,:DWORD
QuerySecurityPackageInfo equ <QuerySecurityPackageInfoA>

QueryServiceConfig2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryServiceConfig2 equ <QueryServiceConfig2A>

QueryServiceConfigA PROTO :DWORD,:DWORD,:DWORD,:DWORD
QueryServiceConfig equ <QueryServiceConfigA>

QueryServiceDynamicInformation PROTO :DWORD,:DWORD,:DWORD
QueryServiceObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryServiceStatus PROTO :DWORD,:DWORD
QueryServiceStatusEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QueryThreadCycleTime PROTO :DWORD,:DWORD
QueryThreadpoolStackInformation PROTO :DWORD,:DWORD
QueryUnbiasedInterruptTime PROTO :DWORD
Query_Cancel PROTO :DWORD,:DWORD,:DWORD
Query_Main PROTO :DWORD
QueueUserAPC PROTO :DWORD,:DWORD,:DWORD
QuirkGetData PROTO :DWORD,:DWORD
QuirkGetData2 PROTO :DWORD,:DWORD
QuirkIsEnabled PROTO :DWORD
QuirkIsEnabled2 PROTO :DWORD,:DWORD,:DWORD
QuirkIsEnabled3 PROTO :DWORD,:DWORD
QuirkIsEnabledForPackage PROTO :DWORD,:DWORD,:DWORD,:DWORD
QuirkIsEnabledForPackage2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
QuirkIsEnabledForProcess PROTO :DWORD,:DWORD,:DWORD
RaiseException PROTO :DWORD,:DWORD,:DWORD,:DWORD
ReOpenFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsole equ <ReadConsoleA>

ReadConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleInput equ <ReadConsoleInputA>

ReadConsoleOutputA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutput equ <ReadConsoleOutputA>

ReadConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadConsoleOutputCharacter equ <ReadConsoleOutputCharacterA>

ReadFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadFileScatter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadPacketName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadPacketNameAllocate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadProcessMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReclaimVirtualMemory PROTO :DWORD,:DWORD
RefreshPolicy PROTO :DWORD
RefreshPolicyEx PROTO :DWORD,:DWORD
RegCloseKey PROTO :DWORD
RegCreateKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegCreateKeyEx equ <RegCreateKeyExA>

RegDeleteKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegDeleteKeyEx equ <RegDeleteKeyExA>

RegDeleteTreeA PROTO :DWORD,:DWORD
RegDeleteTree equ <RegDeleteTreeA>

RegDeleteValueA PROTO :DWORD,:DWORD
RegDeleteValue equ <RegDeleteValueA>

RegDisablePredefinedCacheEx PROTO
RegEnumKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegEnumKeyEx equ <RegEnumKeyExA>

RegEnumValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegEnumValue equ <RegEnumValueA>

RegFlushKey PROTO :DWORD
RegGetKeySecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegGetValueA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegGetValue equ <RegGetValueA>

RegLoadAppKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegLoadAppKey equ <RegLoadAppKeyA>

RegLoadKeyA PROTO :DWORD,:DWORD,:DWORD
RegLoadKey equ <RegLoadKeyA>

RegLoadMUIStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegLoadMUIString equ <RegLoadMUIStringA>

RegNotifyChangeKeyValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenCurrentUser PROTO :DWORD,:DWORD
RegOpenKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegOpenKeyEx equ <RegOpenKeyExA>

RegOpenUserClassesRoot PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryInfoKey equ <RegQueryInfoKeyA>

RegQueryValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegQueryValueEx equ <RegQueryValueExA>

RegRestoreKeyA PROTO :DWORD,:DWORD,:DWORD
RegRestoreKey equ <RegRestoreKeyA>

RegSaveKeyExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegSaveKeyEx equ <RegSaveKeyExA>

RegSetKeySecurity PROTO :DWORD,:DWORD,:DWORD
RegSetValueExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSetValueEx equ <RegSetValueExA>

RegUnLoadKeyA PROTO :DWORD,:DWORD
RegUnLoadKey equ <RegUnLoadKeyA>

Reg_FreeUpdateInfo PROTO :DWORD,:DWORD
Reg_GetValueEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Reg_ReadGlobalsEx PROTO :DWORD,:DWORD
Reg_ReadUpdateInfo PROTO :DWORD,:DWORD
RegisterActiveObject PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegisterBadMemoryNotification PROTO :DWORD
RegisterGPNotification PROTO :DWORD,:DWORD
RegisterServiceCtrlHandlerA PROTO :DWORD,:DWORD
RegisterServiceCtrlHandler equ <RegisterServiceCtrlHandlerA>

RegisterServiceCtrlHandlerExA PROTO :DWORD,:DWORD,:DWORD
RegisterServiceCtrlHandlerEx equ <RegisterServiceCtrlHandlerExA>

RegisterTypeLib PROTO :DWORD,:DWORD,:DWORD
RegisterTypeLibForUser PROTO :DWORD,:DWORD,:DWORD
ReleaseMutex PROTO :DWORD
ReleaseMutexWhenCallbackReturns PROTO :DWORD,:DWORD
ReleaseSRWLockExclusive PROTO :DWORD
ReleaseSRWLockShared PROTO :DWORD
ReleaseSemaphore PROTO :DWORD,:DWORD,:DWORD
ReleaseSemaphoreWhenCallbackReturns PROTO :DWORD,:DWORD,:DWORD
RemapProfile PROTO :DWORD,:DWORD,:DWORD
RemoveDirectoryA PROTO :DWORD
RemoveDirectory equ <RemoveDirectoryA>

RemoveDllDirectory PROTO :DWORD
RemoveVectoredContinueHandler PROTO :DWORD
RemoveVectoredExceptionHandler PROTO :DWORD
ResetCompressor PROTO :DWORD
ResetDecompressor PROTO :DWORD
ResetEvent PROTO :DWORD
ResetWriteWatch PROTO :DWORD,:DWORD
ResolveIpNetEntry2 PROTO :DWORD,:DWORD
ResolveLocaleName PROTO :DWORD,:DWORD,:DWORD
ResolveNeighbor PROTO :DWORD,:DWORD,:DWORD
RestoreLastError PROTO :DWORD
RestoreMediaSense PROTO :DWORD,:DWORD
ResumeThread PROTO :DWORD
RevertSecurityContext PROTO :DWORD
RevertToSelf PROTO
RevokeActiveObject PROTO :DWORD,:DWORD
RoActivateInstance PROTO :DWORD,:DWORD
RoCaptureErrorContext PROTO :DWORD
RoClearError PROTO
RoFailFastWithErrorContext PROTO :DWORD
RoGetActivationFactory PROTO :DWORD,:DWORD,:DWORD
RoGetAgileReference PROTO :DWORD,:DWORD,:DWORD,:DWORD
RoGetApartmentIdentifier PROTO :DWORD
RoGetErrorReportingFlags PROTO :DWORD
RoGetMatchingRestrictedErrorInfo PROTO :DWORD,:DWORD
RoInitialize PROTO :DWORD
RoInspectCapturedStackBackTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoInspectThreadErrorInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoOriginateError PROTO :DWORD,:DWORD
RoOriginateLanguageException PROTO :DWORD,:DWORD,:DWORD
RoRegisterActivationFactories PROTO :DWORD,:DWORD,:DWORD,:DWORD
RoRegisterForApartmentShutdown PROTO :DWORD,:DWORD,:DWORD
RoReportFailedDelegate PROTO :DWORD,:DWORD
RoReportUnhandledError PROTO :DWORD
RoResolveRestrictedErrorInfoReference PROTO :DWORD,:DWORD
RoRevokeActivationFactories PROTO :DWORD
RoSetErrorReportingFlags PROTO :DWORD
RoTransformError PROTO :DWORD,:DWORD,:DWORD
RoUninitialize PROTO
RoUnregisterForApartmentShutdown PROTO :DWORD
RpcAsyncAbortCall PROTO :DWORD,:DWORD
RpcAsyncCancelCall PROTO :DWORD,:DWORD
RpcAsyncCompleteCall PROTO :DWORD,:DWORD
RpcAsyncGetCallStatus PROTO :DWORD
RpcAsyncInitializeHandle PROTO :DWORD,:DWORD
RpcAsyncRegisterInfo PROTO :DWORD
RpcBindingBind PROTO :DWORD,:DWORD,:DWORD
RpcBindingCopy PROTO :DWORD,:DWORD
RpcBindingCreateA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcBindingCreate equ <RpcBindingCreateA>

RpcBindingFree PROTO :DWORD
RpcBindingFromStringBindingA PROTO :DWORD,:DWORD
RpcBindingFromStringBinding equ <RpcBindingFromStringBindingA>

RpcBindingInqAuthClientA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingInqAuthClient equ <RpcBindingInqAuthClientA>

RpcBindingInqAuthClientExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingInqAuthClientEx equ <RpcBindingInqAuthClientExA>

RpcBindingInqAuthInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingInqAuthInfo equ <RpcBindingInqAuthInfoA>

RpcBindingInqAuthInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingInqAuthInfoEx equ <RpcBindingInqAuthInfoExA>

RpcBindingInqObject PROTO :DWORD,:DWORD
RpcBindingInqOption PROTO :DWORD,:DWORD,:DWORD
RpcBindingReset PROTO :DWORD
RpcBindingServerFromClient PROTO :DWORD,:DWORD
RpcBindingSetAuthInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingSetAuthInfo equ <RpcBindingSetAuthInfoA>

RpcBindingSetAuthInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcBindingSetAuthInfoEx equ <RpcBindingSetAuthInfoExA>

RpcBindingSetObject PROTO :DWORD,:DWORD
RpcBindingSetOption PROTO :DWORD,:DWORD,:DWORD
RpcBindingToStringBindingA PROTO :DWORD,:DWORD
RpcBindingToStringBinding equ <RpcBindingToStringBindingA>

RpcBindingUnbind PROTO :DWORD
RpcBindingVectorFree PROTO :DWORD
RpcCancelThread PROTO :DWORD
RpcCancelThreadEx PROTO :DWORD,:DWORD
RpcCertGeneratePrincipalNameA PROTO :DWORD,:DWORD,:DWORD
RpcCertGeneratePrincipalName equ <RpcCertGeneratePrincipalNameA>

RpcEpRegisterA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcEpRegister equ <RpcEpRegisterA>

RpcEpRegisterNoReplaceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcEpRegisterNoReplace equ <RpcEpRegisterNoReplaceA>

RpcEpResolveBinding PROTO :DWORD,:DWORD
RpcEpUnregister PROTO :DWORD,:DWORD,:DWORD
RpcErrorAddRecord PROTO :DWORD
RpcErrorClearInformation PROTO
RpcErrorEndEnumeration PROTO :DWORD
RpcErrorGetNextRecord PROTO :DWORD,:DWORD,:DWORD
RpcErrorGetNumberOfRecords PROTO :DWORD,:DWORD
RpcErrorLoadErrorInfo PROTO :DWORD,:DWORD,:DWORD
RpcErrorResetEnumeration PROTO :DWORD
RpcErrorSaveErrorInfo PROTO :DWORD,:DWORD,:DWORD
RpcErrorStartEnumeration PROTO :DWORD
RpcExceptionFilter PROTO :DWORD
RpcFreeAuthorizationContext PROTO :DWORD
RpcGetAuthorizationContextForClient PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcIfIdVectorFree PROTO :DWORD
RpcIfInqId PROTO :DWORD,:DWORD
RpcImpersonateClient PROTO :DWORD
RpcImpersonateClient2 PROTO :DWORD
RpcMgmtEnableIdleCleanup PROTO
RpcMgmtEpEltInqBegin PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcMgmtEpEltInqDone PROTO :DWORD
RpcMgmtEpEltInqNextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcMgmtEpEltInqNext equ <RpcMgmtEpEltInqNextA>

RpcMgmtEpUnregister PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcMgmtInqComTimeout PROTO :DWORD,:DWORD
RpcMgmtInqDefaultProtectLevel PROTO :DWORD,:DWORD
RpcMgmtInqIfIds PROTO :DWORD,:DWORD
RpcMgmtInqServerPrincNameA PROTO :DWORD,:DWORD,:DWORD
RpcMgmtInqServerPrincName equ <RpcMgmtInqServerPrincNameA>

RpcMgmtInqStats PROTO :DWORD,:DWORD
RpcMgmtIsServerListening PROTO :DWORD
RpcMgmtSetAuthorizationFn PROTO :DWORD
RpcMgmtSetCancelTimeout PROTO :DWORD
RpcMgmtSetComTimeout PROTO :DWORD,:DWORD
RpcMgmtSetServerStackSize PROTO :DWORD
RpcMgmtStatsVectorFree PROTO :DWORD
RpcMgmtStopServerListening PROTO :DWORD
RpcMgmtWaitServerListen PROTO
RpcNetworkInqProtseqsA PROTO :DWORD
RpcNetworkInqProtseqs equ <RpcNetworkInqProtseqsA>

RpcNetworkIsProtseqValidA PROTO :DWORD
RpcNetworkIsProtseqValid equ <RpcNetworkIsProtseqValidA>

RpcNsBindingInqEntryNameA PROTO :DWORD,:DWORD,:DWORD
RpcNsBindingInqEntryName equ <RpcNsBindingInqEntryNameA>

RpcObjectInqType PROTO :DWORD,:DWORD
RpcObjectSetInqFn PROTO :DWORD
RpcObjectSetType PROTO :DWORD,:DWORD
RpcProtseqVectorFreeA PROTO :DWORD
RpcProtseqVectorFree equ <RpcProtseqVectorFreeA>

RpcRaiseException PROTO :DWORD
RpcRevertToSelf PROTO
RpcRevertToSelfEx PROTO :DWORD
RpcServerCompleteSecurityCallback PROTO :DWORD,:DWORD
RpcServerInqBindingHandle PROTO :DWORD
RpcServerInqBindings PROTO :DWORD
RpcServerInqCallAttributesA PROTO :DWORD,:DWORD
RpcServerInqCallAttributes equ <RpcServerInqCallAttributesA>

RpcServerInqDefaultPrincNameA PROTO :DWORD,:DWORD
RpcServerInqDefaultPrincName equ <RpcServerInqDefaultPrincNameA>

RpcServerInqIf PROTO :DWORD,:DWORD,:DWORD
RpcServerInterfaceGroupActivate PROTO :DWORD
RpcServerInterfaceGroupClose PROTO :DWORD
RpcServerInterfaceGroupCreateA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerInterfaceGroupCreate equ <RpcServerInterfaceGroupCreateA>

RpcServerInterfaceGroupDeactivate PROTO :DWORD,:DWORD
RpcServerInterfaceGroupInqBindings PROTO :DWORD,:DWORD
RpcServerListen PROTO :DWORD,:DWORD,:DWORD
RpcServerRegisterAuthInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerRegisterAuthInfo equ <RpcServerRegisterAuthInfoA>

RpcServerRegisterIf PROTO :DWORD,:DWORD,:DWORD
RpcServerRegisterIf2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerRegisterIf3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerRegisterIfEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerSubscribeForNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerTestCancel PROTO :DWORD
RpcServerUnregisterIf PROTO :DWORD,:DWORD,:DWORD
RpcServerUnregisterIfEx PROTO :DWORD,:DWORD,:DWORD
RpcServerUnsubscribeForNotification PROTO :DWORD,:DWORD,:DWORD
RpcServerUseAllProtseqs PROTO :DWORD,:DWORD
RpcServerUseAllProtseqsEx PROTO :DWORD,:DWORD,:DWORD
RpcServerUseAllProtseqsIf PROTO :DWORD,:DWORD,:DWORD
RpcServerUseAllProtseqsIfEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqA PROTO :DWORD,:DWORD,:DWORD
RpcServerUseProtseq equ <RpcServerUseProtseqA>

RpcServerUseProtseqEpA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqEp equ <RpcServerUseProtseqEpA>

RpcServerUseProtseqEpExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqEpEx equ <RpcServerUseProtseqEpExA>

RpcServerUseProtseqExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqEx equ <RpcServerUseProtseqExA>

RpcServerUseProtseqIfA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqIf equ <RpcServerUseProtseqIfA>

RpcServerUseProtseqIfExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcServerUseProtseqIfEx equ <RpcServerUseProtseqIfExA>

RpcServerYield PROTO
RpcSmAllocate PROTO :DWORD,:DWORD
RpcSmClientFree PROTO :DWORD
RpcSmDestroyClientContext PROTO :DWORD
RpcSmDisableAllocate PROTO
RpcSmEnableAllocate PROTO
RpcSmFree PROTO :DWORD
RpcSmGetThreadHandle PROTO :DWORD
RpcSmSetClientAllocFree PROTO :DWORD,:DWORD
RpcSmSetThreadHandle PROTO :DWORD
RpcSmSwapClientAllocFree PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcSsAllocate PROTO :DWORD
RpcSsContextLockExclusive PROTO :DWORD,:DWORD
RpcSsContextLockShared PROTO :DWORD,:DWORD
RpcSsDestroyClientContext PROTO :DWORD
RpcSsDisableAllocate PROTO
RpcSsDontSerializeContext PROTO
RpcSsEnableAllocate PROTO
RpcSsFree PROTO :DWORD
RpcSsGetContextBinding PROTO :DWORD,:DWORD
RpcSsGetThreadHandle PROTO
RpcSsSetClientAllocFree PROTO :DWORD,:DWORD
RpcSsSetThreadHandle PROTO :DWORD
RpcSsSwapClientAllocFree PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcStringBindingComposeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcStringBindingCompose equ <RpcStringBindingComposeA>

RpcStringBindingParseA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RpcStringBindingParse equ <RpcStringBindingParseA>

RpcStringFreeA PROTO :DWORD
RpcStringFree equ <RpcStringFreeA>

RpcTestCancel PROTO
RpcUserFree PROTO :DWORD,:DWORD
RsopAccessCheckByType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RsopFileAccessCheck PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RsopResetPolicySettingStatus PROTO :DWORD,:DWORD,:DWORD
RsopSetPolicySettingStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RtlCaptureContext PROTO :DWORD
RtlCaptureStackBackTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtlCompareMemory PROTO :DWORD,:DWORD,:DWORD
RtlCopyContext PROTO :DWORD,:DWORD,:DWORD
RtlCopyExtendedContext PROTO :DWORD,:DWORD,:DWORD
RtlGetEnabledExtendedFeatures PROTO :DWORD,:DWORD
RtlGetExtendedContextLength PROTO :DWORD,:DWORD
RtlGetExtendedFeaturesMask PROTO :DWORD
RtlInitializeExtendedContext PROTO :DWORD,:DWORD,:DWORD
RtlLocateExtendedFeature PROTO :DWORD,:DWORD,:DWORD
RtlLocateLegacyContext PROTO :DWORD,:DWORD
RtlPcToFileHeader PROTO :DWORD,:DWORD
RtlRaiseException PROTO :DWORD
RtlSetExtendedFeaturesMask PROTO :DWORD,:DWORD,:DWORD
RtlUnwind PROTO :DWORD,:DWORD,:DWORD,:DWORD
SafeArrayAccessData PROTO :DWORD,:DWORD
SafeArrayAllocData PROTO :DWORD
SafeArrayAllocDescriptor PROTO :DWORD,:DWORD
SafeArrayAllocDescriptorEx PROTO :DWORD,:DWORD,:DWORD
SafeArrayCopy PROTO :DWORD,:DWORD
SafeArrayCopyData PROTO :DWORD,:DWORD
SafeArrayCreate PROTO :DWORD,:DWORD,:DWORD
SafeArrayCreateEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SafeArrayCreateVector PROTO :DWORD,:DWORD,:DWORD
SafeArrayCreateVectorEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SafeArrayDestroy PROTO :DWORD
SafeArrayDestroyData PROTO :DWORD
SafeArrayDestroyDescriptor PROTO :DWORD
SafeArrayGetDim PROTO :DWORD
SafeArrayGetElement PROTO :DWORD,:DWORD,:DWORD
SafeArrayGetElemsize PROTO :DWORD
SafeArrayGetIID PROTO :DWORD,:DWORD
SafeArrayGetLBound PROTO :DWORD,:DWORD,:DWORD
SafeArrayGetRecordInfo PROTO :DWORD,:DWORD
SafeArrayGetUBound PROTO :DWORD,:DWORD,:DWORD
SafeArrayGetVartype PROTO :DWORD,:DWORD
SafeArrayLock PROTO :DWORD
SafeArrayPtrOfIndex PROTO :DWORD,:DWORD,:DWORD
SafeArrayPutElement PROTO :DWORD,:DWORD,:DWORD
SafeArrayRedim PROTO :DWORD,:DWORD
SafeArraySetIID PROTO :DWORD,:DWORD
SafeArraySetRecordInfo PROTO :DWORD,:DWORD
SafeArrayUnaccessData PROTO :DWORD
SafeArrayUnlock PROTO :DWORD
SaslAcceptSecurityContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslEnumerateProfilesA PROTO :DWORD,:DWORD
SaslEnumerateProfiles equ <SaslEnumerateProfilesA>

SaslGetContextOption PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslGetProfilePackageA PROTO :DWORD,:DWORD
SaslGetProfilePackage equ <SaslGetProfilePackageA>

SaslIdentifyPackageA PROTO :DWORD,:DWORD
SaslIdentifyPackage equ <SaslIdentifyPackageA>

SaslInitializeSecurityContextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaslInitializeSecurityContext equ <SaslInitializeSecurityContextA>

SaslSetContextOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
ScrollConsoleScreenBufferA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ScrollConsoleScreenBuffer equ <ScrollConsoleScreenBufferA>

SealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
SearchPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SearchPath equ <SearchPathA>

Security_ContextListTimeout PROTO :DWORD
SendARP PROTO :DWORD,:DWORD,:DWORD,:DWORD
Send_AndRecvUdpWithParam PROTO :DWORD
Send_MessagePrivate PROTO :DWORD,:DWORD,:DWORD
Send_OpenTcpConnectionAndSend PROTO :DWORD,:DWORD,:DWORD
SetAclInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetAdapterIpAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetAddrInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetAddrInfoEx equ <SetAddrInfoExA>

SetCachedSigningLevel PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCommBreak PROTO :DWORD
SetCommConfig PROTO :DWORD,:DWORD,:DWORD
SetCommMask PROTO :DWORD,:DWORD
SetCommState PROTO :DWORD,:DWORD
SetCommTimeouts PROTO :DWORD,:DWORD
SetCompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetConsoleActiveScreenBuffer PROTO :DWORD
SetConsoleCP PROTO :DWORD
SetConsoleCtrlHandler PROTO :DWORD,:DWORD
SetConsoleCursorInfo PROTO :DWORD,:DWORD
SetConsoleCursorPosition PROTO :DWORD,:DWORD
SetConsoleMode PROTO :DWORD,:DWORD
SetConsoleOutputCP PROTO :DWORD
SetConsoleScreenBufferInfoEx PROTO :DWORD,:DWORD
SetConsoleScreenBufferSize PROTO :DWORD,:DWORD
SetConsoleTextAttribute PROTO :DWORD,:DWORD
SetConsoleWindowInfo PROTO :DWORD,:DWORD,:DWORD
SetContextAttributesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetContextAttributes equ <SetContextAttributesA>

SetCredentialsAttributesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetCredentialsAttributes equ <SetCredentialsAttributesA>

SetCriticalSectionSpinCount PROTO :DWORD,:DWORD
SetCurrentDirectoryA PROTO :DWORD
SetCurrentDirectory equ <SetCurrentDirectoryA>

SetCurrentThreadCompartmentId PROTO :DWORD
SetDecompressorInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetDefaultDllDirectories PROTO :DWORD
SetDynamicTimeZoneInformation PROTO :DWORD
SetEndOfFile PROTO :DWORD
SetEnvironmentVariableA PROTO :DWORD,:DWORD
SetEnvironmentVariable equ <SetEnvironmentVariableA>

SetErrorInfo PROTO :DWORD,:DWORD
SetErrorMode PROTO :DWORD
SetEvent PROTO :DWORD
SetEventWhenCallbackReturns PROTO :DWORD,:DWORD
SetFileAttributesA PROTO :DWORD,:DWORD
SetFileAttributes equ <SetFileAttributesA>

SetFileInformationByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFileIoOverlappedRange PROTO :DWORD,:DWORD,:DWORD
SetFilePointer PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFilePointerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetFileTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetFileValidData PROTO :DWORD,:DWORD,:DWORD
SetHandleInformation PROTO :DWORD,:DWORD,:DWORD
SetIfEntry PROTO :DWORD
SetIpForwardEntry PROTO :DWORD
SetIpForwardEntry2 PROTO :DWORD
SetIpInterfaceEntry PROTO :DWORD
SetIpNetEntry PROTO :DWORD
SetIpNetEntry2 PROTO :DWORD
SetIpStatistics PROTO :DWORD
SetIpStatisticsEx PROTO :DWORD,:DWORD
SetIpTTL PROTO :DWORD
SetKernelObjectSecurity PROTO :DWORD,:DWORD,:DWORD
SetLastError PROTO :DWORD
SetLocalTime PROTO :DWORD
SetNamedPipeHandleState PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetNetworkInformation PROTO :DWORD,:DWORD,:DWORD
SetPerTcp6ConnectionEStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPerTcp6ConnectionStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPerTcpConnectionEStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPerTcpConnectionStats PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPriorityClass PROTO :DWORD,:DWORD
SetPrivateObjectSecurity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPrivateObjectSecurityEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetProcessAffinityUpdateMode PROTO :DWORD,:DWORD
SetProcessMitigationPolicy PROTO :DWORD,:DWORD,:DWORD
SetProcessPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD
SetProcessPriorityBoost PROTO :DWORD,:DWORD
SetProcessShutdownParameters PROTO :DWORD,:DWORD
SetProcessWorkingSetSizeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetProtectedPolicy PROTO :DWORD,:DWORD,:DWORD
SetRestrictedErrorInfo PROTO :DWORD
SetSecurityAccessMask PROTO :DWORD,:DWORD
SetSecurityDescriptorControl PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorDacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetSecurityDescriptorGroup PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorOwner PROTO :DWORD,:DWORD,:DWORD
SetSecurityDescriptorRMControl PROTO :DWORD,:DWORD
SetSecurityDescriptorSacl PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetServiceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetService equ <SetServiceA>

SetServiceObjectSecurity PROTO :DWORD,:DWORD,:DWORD
SetServiceStatus PROTO :DWORD,:DWORD
SetSessionCompartmentId PROTO :DWORD,:DWORD
SetStdHandle PROTO :DWORD,:DWORD
SetStdHandleEx PROTO :DWORD,:DWORD,:DWORD
SetSystemFileCacheSize PROTO :DWORD,:DWORD,:DWORD
SetSystemTime PROTO :DWORD
SetSystemTimeAdjustment PROTO :DWORD,:DWORD
SetTcpEntry PROTO :DWORD
SetThreadContext PROTO :DWORD,:DWORD
SetThreadGroupAffinity PROTO :DWORD,:DWORD,:DWORD
SetThreadIdealProcessorEx PROTO :DWORD,:DWORD,:DWORD
SetThreadInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadLocale PROTO :DWORD
SetThreadPreferredUILanguages PROTO :DWORD,:DWORD,:DWORD
SetThreadPriority PROTO :DWORD,:DWORD
SetThreadPriorityBoost PROTO :DWORD,:DWORD
SetThreadStackGuarantee PROTO :DWORD
SetThreadToken PROTO :DWORD,:DWORD
SetThreadUILanguage PROTO :DWORD
SetThreadpoolStackInformation PROTO :DWORD,:DWORD
SetThreadpoolThreadMaximum PROTO :DWORD,:DWORD
SetThreadpoolThreadMinimum PROTO :DWORD,:DWORD
SetThreadpoolTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadpoolTimerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetThreadpoolWait PROTO :DWORD,:DWORD,:DWORD
SetThreadpoolWaitEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetTimeZoneInformation PROTO :DWORD
SetTokenInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetUnhandledExceptionFilter PROTO :DWORD
SetUnicastIpAddressEntry PROTO :DWORD
SetUserGeoID PROTO :DWORD
SetVarConversionLocaleSetting PROTO :DWORD
SetWaitableTimer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetWaitableTimerEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetXStateFeaturesMask PROTO :DWORD,:DWORD,:DWORD
SetupComm PROTO :DWORD,:DWORD,:DWORD
SignalObjectAndWait PROTO :DWORD,:DWORD,:DWORD,:DWORD
SizeofResource PROTO :DWORD,:DWORD
SkipPacketName PROTO :DWORD,:DWORD
Sleep PROTO :DWORD
SleepConditionVariableCS PROTO :DWORD,:DWORD,:DWORD
SleepEx PROTO :DWORD,:DWORD
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
SslChangeNotify PROTO :DWORD,:DWORD
SslComputeClientAuthHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslComputeEapKeyBlock PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslComputeFinishedHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslCreateClientAuthHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslCreateEphemeralKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslCreateHandshakeHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslDecrementProviderReferenceCount PROTO :DWORD
SslDecryptPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslEncryptPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslEnumCipherSuites PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslEnumProtocolProviders PROTO :DWORD,:DWORD,:DWORD
SslExportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslFreeBuffer PROTO :DWORD
SslFreeObject PROTO :DWORD,:DWORD
SslGenerateMasterKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslGenerateSessionKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslGetCipherSuitePRFHashAlgorithm PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslGetKeyProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslGetProviderProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslHashHandshake PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslImportKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslImportMasterKey PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslIncrementProviderReferenceCount PROTO :DWORD
SslLookupCipherLengths PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslLookupCipherSuiteInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslOpenPrivateKey PROTO :DWORD,:DWORD,:DWORD,:DWORD
SslOpenProvider PROTO :DWORD,:DWORD,:DWORD
SslSignHash PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SslVerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SspiCompareAuthIdentities PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiCopyAuthIdentity PROTO :DWORD,:DWORD
SspiDecryptAuthIdentity PROTO :DWORD
SspiDecryptAuthIdentityEx PROTO :DWORD,:DWORD
SspiEncodeAuthIdentityAsStrings PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiEncodeStringsAsAuthIdentity PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiEncryptAuthIdentity PROTO :DWORD
SspiEncryptAuthIdentityEx PROTO :DWORD,:DWORD
SspiExcludePackage PROTO :DWORD,:DWORD,:DWORD
SspiFreeAuthIdentity PROTO :DWORD
SspiGetTargetHostName PROTO :DWORD,:DWORD
SspiIsAuthIdentityEncrypted PROTO :DWORD
SspiLocalFree PROTO :DWORD
SspiMarshalAuthIdentity PROTO :DWORD,:DWORD,:DWORD
SspiPrepareForCredRead PROTO :DWORD,:DWORD,:DWORD,:DWORD
SspiPrepareForCredWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SspiUnmarshalAuthIdentity PROTO :DWORD,:DWORD,:DWORD
SspiValidateAuthIdentity PROTO :DWORD
SspiZeroAuthIdentity PROTO :DWORD
StartServiceA PROTO :DWORD,:DWORD,:DWORD
StartService equ <StartServiceA>

StartServiceCtrlDispatcherA PROTO :DWORD
StartServiceCtrlDispatcher equ <StartServiceCtrlDispatcherA>

StartThreadpoolIo PROTO :DWORD
StringFromCLSID PROTO :DWORD,:DWORD
StringFromGUID2 PROTO :DWORD,:DWORD,:DWORD
StringFromIID PROTO :DWORD,:DWORD
SubmitThreadpoolWork PROTO :DWORD
SuspendThread PROTO :DWORD
SwitchToThread PROTO
SysAllocString PROTO :DWORD
SysAllocStringByteLen PROTO :DWORD,:DWORD
SysAllocStringLen PROTO :DWORD,:DWORD
SysFreeString PROTO :DWORD
SysReAllocString PROTO :DWORD,:DWORD
SysReAllocStringLen PROTO :DWORD,:DWORD,:DWORD
SysStringByteLen PROTO :DWORD
SysStringLen PROTO :DWORD
SystemFunction001 PROTO :DWORD,:DWORD,:DWORD
SystemFunction002 PROTO :DWORD,:DWORD,:DWORD
SystemFunction003 PROTO :DWORD,:DWORD
SystemFunction004 PROTO :DWORD,:DWORD,:DWORD
SystemFunction005 PROTO :DWORD,:DWORD,:DWORD
SystemFunction028 PROTO :DWORD,:DWORD
SystemFunction029 PROTO :DWORD,:DWORD
SystemFunction034 PROTO :DWORD,:DWORD,:DWORD
SystemFunction036 PROTO :DWORD,:DWORD
SystemFunction040 PROTO :DWORD,:DWORD,:DWORD
SystemFunction041 PROTO :DWORD,:DWORD,:DWORD
SystemTimeToFileTime PROTO :DWORD,:DWORD
SystemTimeToTzSpecificLocalTime PROTO :DWORD,:DWORD,:DWORD
SystemTimeToTzSpecificLocalTimeEx PROTO :DWORD,:DWORD,:DWORD
SystemTimeToVariantTime PROTO :DWORD,:DWORD
TerminateProcess PROTO :DWORD,:DWORD
TerminateThread PROTO :DWORD,:DWORD
TlsAlloc PROTO
TlsFree PROTO :DWORD
TlsGetValue PROTO :DWORD
TlsSetValue PROTO :DWORD,:DWORD
TowerConstruct PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TowerExplode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceEvent PROTO :DWORD,:DWORD,:DWORD
TraceMessageVa PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceQueryInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TraceSetInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Trace_Reset PROTO
TransactNamedPipe PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TransmitCommChar PROTO :DWORD,:DWORD
TransmitFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TryAcquireSRWLockExclusive PROTO :DWORD
TryAcquireSRWLockShared PROTO :DWORD
TryEnterCriticalSection PROTO :DWORD
TrySubmitThreadpoolCallback PROTO :DWORD,:DWORD,:DWORD
TzSpecificLocalTimeToSystemTime PROTO :DWORD,:DWORD,:DWORD
TzSpecificLocalTimeToSystemTimeEx PROTO :DWORD,:DWORD,:DWORD
UnRegisterTypeLib PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnRegisterTypeLibForUser PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnenableRouter PROTO :DWORD,:DWORD
UnhandledExceptionFilter PROTO :DWORD
UnloadUserProfile PROTO :DWORD,:DWORD
UnlockFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnlockFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UnmapViewOfFile PROTO :DWORD
UnmapViewOfFileEx PROTO :DWORD,:DWORD
UnregisterBadMemoryNotification PROTO :DWORD
UnregisterGPNotification PROTO :DWORD
UnregisterTraceGuids PROTO :DWORD,:DWORD
UnsealMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
UpdateAppContainerProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UpdateProcThreadAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Util_IsIp6Running PROTO
UuidCompare PROTO :DWORD,:DWORD,:DWORD
UuidCreate PROTO :DWORD
UuidCreateNil PROTO :DWORD
UuidCreateSequential PROTO :DWORD
UuidEqual PROTO :DWORD,:DWORD,:DWORD
UuidFromStringA PROTO :DWORD,:DWORD
UuidFromString equ <UuidFromStringA>

UuidHash PROTO :DWORD,:DWORD
UuidIsNil PROTO :DWORD,:DWORD
UuidToStringA PROTO :DWORD,:DWORD
UuidToString equ <UuidToStringA>

VARIANT_UserFree PROTO :DWORD,:DWORD
VARIANT_UserMarshal PROTO :DWORD,:DWORD,:DWORD
VARIANT_UserSize PROTO :DWORD,:DWORD,:DWORD
VARIANT_UserUnmarshal PROTO :DWORD,:DWORD,:DWORD
VarAbs PROTO :DWORD,:DWORD
VarAdd PROTO :DWORD,:DWORD,:DWORD
VarAnd PROTO :DWORD,:DWORD,:DWORD
VarBoolFromCy PROTO :DWORD,:DWORD,:DWORD
VarBoolFromDate PROTO :DWORD,:DWORD,:DWORD
VarBoolFromDec PROTO :DWORD,:DWORD
VarBoolFromDisp PROTO :DWORD,:DWORD,:DWORD
VarBoolFromI1 PROTO :DWORD,:DWORD
VarBoolFromI2 PROTO :DWORD,:DWORD
VarBoolFromI4 PROTO :DWORD,:DWORD
VarBoolFromI8 PROTO :DWORD,:DWORD,:DWORD
VarBoolFromR4 PROTO :DWORD,:DWORD
VarBoolFromR8 PROTO :DWORD,:DWORD,:DWORD
VarBoolFromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBoolFromUI1 PROTO :DWORD,:DWORD
VarBoolFromUI2 PROTO :DWORD,:DWORD
VarBoolFromUI4 PROTO :DWORD,:DWORD
VarBoolFromUI8 PROTO :DWORD,:DWORD,:DWORD
VarBstrCat PROTO :DWORD,:DWORD,:DWORD
VarBstrCmp PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromBool PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromCy PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromDate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromDec PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromDisp PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromI1 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromI2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromI4 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromI8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromR4 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromR8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromUI1 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromUI2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromUI4 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarBstrFromUI8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarCat PROTO :DWORD,:DWORD,:DWORD
VarCmp PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCyAbs PROTO :DWORD,:DWORD,:DWORD
VarCyAdd PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarCyCmp PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCyCmpR8 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCyFix PROTO :DWORD,:DWORD,:DWORD
VarCyFromBool PROTO :DWORD,:DWORD
VarCyFromDate PROTO :DWORD,:DWORD,:DWORD
VarCyFromDec PROTO :DWORD,:DWORD
VarCyFromDisp PROTO :DWORD,:DWORD,:DWORD
VarCyFromI1 PROTO :DWORD,:DWORD
VarCyFromI2 PROTO :DWORD,:DWORD
VarCyFromI4 PROTO :DWORD,:DWORD
VarCyFromI8 PROTO :DWORD,:DWORD,:DWORD
VarCyFromR4 PROTO :DWORD,:DWORD
VarCyFromR8 PROTO :DWORD,:DWORD,:DWORD
VarCyFromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCyFromUI1 PROTO :DWORD,:DWORD
VarCyFromUI2 PROTO :DWORD,:DWORD
VarCyFromUI4 PROTO :DWORD,:DWORD
VarCyFromUI8 PROTO :DWORD,:DWORD,:DWORD
VarCyInt PROTO :DWORD,:DWORD,:DWORD
VarCyMul PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarCyMulI4 PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCyMulI8 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarCyNeg PROTO :DWORD,:DWORD,:DWORD
VarCyRound PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarCySub PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarDateFromBool PROTO :DWORD,:DWORD
VarDateFromCy PROTO :DWORD,:DWORD,:DWORD
VarDateFromDec PROTO :DWORD,:DWORD
VarDateFromDisp PROTO :DWORD,:DWORD,:DWORD
VarDateFromI1 PROTO :DWORD,:DWORD
VarDateFromI2 PROTO :DWORD,:DWORD
VarDateFromI4 PROTO :DWORD,:DWORD
VarDateFromI8 PROTO :DWORD,:DWORD,:DWORD
VarDateFromR4 PROTO :DWORD,:DWORD
VarDateFromR8 PROTO :DWORD,:DWORD,:DWORD
VarDateFromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarDateFromUI1 PROTO :DWORD,:DWORD
VarDateFromUI2 PROTO :DWORD,:DWORD
VarDateFromUI4 PROTO :DWORD,:DWORD
VarDateFromUI8 PROTO :DWORD,:DWORD,:DWORD
VarDateFromUdate PROTO :DWORD,:DWORD,:DWORD
VarDateFromUdateEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarDecAbs PROTO :DWORD,:DWORD
VarDecAdd PROTO :DWORD,:DWORD,:DWORD
VarDecCmp PROTO :DWORD,:DWORD
VarDecCmpR8 PROTO :DWORD,:DWORD,:DWORD
VarDecDiv PROTO :DWORD,:DWORD,:DWORD
VarDecFix PROTO :DWORD,:DWORD
VarDecFromBool PROTO :DWORD,:DWORD
VarDecFromCy PROTO :DWORD,:DWORD,:DWORD
VarDecFromDate PROTO :DWORD,:DWORD,:DWORD
VarDecFromDisp PROTO :DWORD,:DWORD,:DWORD
VarDecFromI1 PROTO :DWORD,:DWORD
VarDecFromI2 PROTO :DWORD,:DWORD
VarDecFromI4 PROTO :DWORD,:DWORD
VarDecFromI8 PROTO :DWORD,:DWORD,:DWORD
VarDecFromR4 PROTO :DWORD,:DWORD
VarDecFromR8 PROTO :DWORD,:DWORD,:DWORD
VarDecFromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarDecFromUI1 PROTO :DWORD,:DWORD
VarDecFromUI2 PROTO :DWORD,:DWORD
VarDecFromUI4 PROTO :DWORD,:DWORD
VarDecFromUI8 PROTO :DWORD,:DWORD,:DWORD
VarDecInt PROTO :DWORD,:DWORD
VarDecMul PROTO :DWORD,:DWORD,:DWORD
VarDecNeg PROTO :DWORD,:DWORD
VarDecRound PROTO :DWORD,:DWORD,:DWORD
VarDecSub PROTO :DWORD,:DWORD,:DWORD
VarDiv PROTO :DWORD,:DWORD,:DWORD
VarEqv PROTO :DWORD,:DWORD,:DWORD
VarFix PROTO :DWORD,:DWORD
VarFormat PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarFormatCurrency PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarFormatDateTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarFormatFromTokens PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarFormatNumber PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarFormatPercent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarI1FromBool PROTO :DWORD,:DWORD
VarI1FromCy PROTO :DWORD,:DWORD,:DWORD
VarI1FromDate PROTO :DWORD,:DWORD,:DWORD
VarI1FromDec PROTO :DWORD,:DWORD
VarI1FromDisp PROTO :DWORD,:DWORD,:DWORD
VarI1FromI2 PROTO :DWORD,:DWORD
VarI1FromI4 PROTO :DWORD,:DWORD
VarI1FromI8 PROTO :DWORD,:DWORD,:DWORD
VarI1FromR4 PROTO :DWORD,:DWORD
VarI1FromR8 PROTO :DWORD,:DWORD,:DWORD
VarI1FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarI1FromUI1 PROTO :DWORD,:DWORD
VarI1FromUI2 PROTO :DWORD,:DWORD
VarI1FromUI4 PROTO :DWORD,:DWORD
VarI1FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarI2FromBool PROTO :DWORD,:DWORD
VarI2FromCy PROTO :DWORD,:DWORD,:DWORD
VarI2FromDate PROTO :DWORD,:DWORD,:DWORD
VarI2FromDec PROTO :DWORD,:DWORD
VarI2FromDisp PROTO :DWORD,:DWORD,:DWORD
VarI2FromI1 PROTO :DWORD,:DWORD
VarI2FromI4 PROTO :DWORD,:DWORD
VarI2FromI8 PROTO :DWORD,:DWORD,:DWORD
VarI2FromR4 PROTO :DWORD,:DWORD
VarI2FromR8 PROTO :DWORD,:DWORD,:DWORD
VarI2FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarI2FromUI1 PROTO :DWORD,:DWORD
VarI2FromUI2 PROTO :DWORD,:DWORD
VarI2FromUI4 PROTO :DWORD,:DWORD
VarI2FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarI4FromBool PROTO :DWORD,:DWORD
VarI4FromCy PROTO :DWORD,:DWORD,:DWORD
VarI4FromDate PROTO :DWORD,:DWORD,:DWORD
VarI4FromDec PROTO :DWORD,:DWORD
VarI4FromDisp PROTO :DWORD,:DWORD,:DWORD
VarI4FromI1 PROTO :DWORD,:DWORD
VarI4FromI2 PROTO :DWORD,:DWORD
VarI4FromI8 PROTO :DWORD,:DWORD,:DWORD
VarI4FromR4 PROTO :DWORD,:DWORD
VarI4FromR8 PROTO :DWORD,:DWORD,:DWORD
VarI4FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarI4FromUI1 PROTO :DWORD,:DWORD
VarI4FromUI2 PROTO :DWORD,:DWORD
VarI4FromUI4 PROTO :DWORD,:DWORD
VarI4FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarI8FromBool PROTO :DWORD,:DWORD
VarI8FromCy PROTO :DWORD,:DWORD,:DWORD
VarI8FromDate PROTO :DWORD,:DWORD,:DWORD
VarI8FromDec PROTO :DWORD,:DWORD
VarI8FromDisp PROTO :DWORD,:DWORD,:DWORD
VarI8FromI1 PROTO :DWORD,:DWORD
VarI8FromI2 PROTO :DWORD,:DWORD
VarI8FromR4 PROTO :DWORD,:DWORD
VarI8FromR8 PROTO :DWORD,:DWORD,:DWORD
VarI8FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarI8FromUI1 PROTO :DWORD,:DWORD
VarI8FromUI2 PROTO :DWORD,:DWORD
VarI8FromUI4 PROTO :DWORD,:DWORD
VarI8FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarIdiv PROTO :DWORD,:DWORD,:DWORD
VarImp PROTO :DWORD,:DWORD,:DWORD
VarInt PROTO :DWORD,:DWORD
VarMod PROTO :DWORD,:DWORD,:DWORD
VarMonthName PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarMul PROTO :DWORD,:DWORD,:DWORD
VarNeg PROTO :DWORD,:DWORD
VarNot PROTO :DWORD,:DWORD
VarNumFromParseNum PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarOr PROTO :DWORD,:DWORD,:DWORD
VarParseNumFromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarPow PROTO :DWORD,:DWORD,:DWORD
VarR4CmpR8 PROTO :DWORD,:DWORD,:DWORD
VarR4FromBool PROTO :DWORD,:DWORD
VarR4FromCy PROTO :DWORD,:DWORD,:DWORD
VarR4FromDate PROTO :DWORD,:DWORD,:DWORD
VarR4FromDec PROTO :DWORD,:DWORD
VarR4FromDisp PROTO :DWORD,:DWORD,:DWORD
VarR4FromI1 PROTO :DWORD,:DWORD
VarR4FromI2 PROTO :DWORD,:DWORD
VarR4FromI4 PROTO :DWORD,:DWORD
VarR4FromI8 PROTO :DWORD,:DWORD,:DWORD
VarR4FromR8 PROTO :DWORD,:DWORD,:DWORD
VarR4FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarR4FromUI1 PROTO :DWORD,:DWORD
VarR4FromUI2 PROTO :DWORD,:DWORD
VarR4FromUI4 PROTO :DWORD,:DWORD
VarR4FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarR8FromBool PROTO :DWORD,:DWORD
VarR8FromCy PROTO :DWORD,:DWORD,:DWORD
VarR8FromDate PROTO :DWORD,:DWORD,:DWORD
VarR8FromDec PROTO :DWORD,:DWORD
VarR8FromDisp PROTO :DWORD,:DWORD,:DWORD
VarR8FromI1 PROTO :DWORD,:DWORD
VarR8FromI2 PROTO :DWORD,:DWORD
VarR8FromI4 PROTO :DWORD,:DWORD
VarR8FromI8 PROTO :DWORD,:DWORD,:DWORD
VarR8FromR4 PROTO :DWORD,:DWORD
VarR8FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarR8FromUI1 PROTO :DWORD,:DWORD
VarR8FromUI2 PROTO :DWORD,:DWORD
VarR8FromUI4 PROTO :DWORD,:DWORD
VarR8FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarR8Pow PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarR8Round PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarRound PROTO :DWORD,:DWORD,:DWORD
VarSub PROTO :DWORD,:DWORD,:DWORD
VarTokenizeFormatString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarUI1FromBool PROTO :DWORD,:DWORD
VarUI1FromCy PROTO :DWORD,:DWORD,:DWORD
VarUI1FromDate PROTO :DWORD,:DWORD,:DWORD
VarUI1FromDec PROTO :DWORD,:DWORD
VarUI1FromDisp PROTO :DWORD,:DWORD,:DWORD
VarUI1FromI1 PROTO :DWORD,:DWORD
VarUI1FromI2 PROTO :DWORD,:DWORD
VarUI1FromI4 PROTO :DWORD,:DWORD
VarUI1FromI8 PROTO :DWORD,:DWORD,:DWORD
VarUI1FromR4 PROTO :DWORD,:DWORD
VarUI1FromR8 PROTO :DWORD,:DWORD,:DWORD
VarUI1FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarUI1FromUI2 PROTO :DWORD,:DWORD
VarUI1FromUI4 PROTO :DWORD,:DWORD
VarUI1FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarUI2FromBool PROTO :DWORD,:DWORD
VarUI2FromCy PROTO :DWORD,:DWORD,:DWORD
VarUI2FromDate PROTO :DWORD,:DWORD,:DWORD
VarUI2FromDec PROTO :DWORD,:DWORD
VarUI2FromDisp PROTO :DWORD,:DWORD,:DWORD
VarUI2FromI1 PROTO :DWORD,:DWORD
VarUI2FromI2 PROTO :DWORD,:DWORD
VarUI2FromI4 PROTO :DWORD,:DWORD
VarUI2FromI8 PROTO :DWORD,:DWORD,:DWORD
VarUI2FromR4 PROTO :DWORD,:DWORD
VarUI2FromR8 PROTO :DWORD,:DWORD,:DWORD
VarUI2FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarUI2FromUI1 PROTO :DWORD,:DWORD
VarUI2FromUI4 PROTO :DWORD,:DWORD
VarUI2FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarUI4FromBool PROTO :DWORD,:DWORD
VarUI4FromCy PROTO :DWORD,:DWORD,:DWORD
VarUI4FromDate PROTO :DWORD,:DWORD,:DWORD
VarUI4FromDec PROTO :DWORD,:DWORD
VarUI4FromDisp PROTO :DWORD,:DWORD,:DWORD
VarUI4FromI1 PROTO :DWORD,:DWORD
VarUI4FromI2 PROTO :DWORD,:DWORD
VarUI4FromI4 PROTO :DWORD,:DWORD
VarUI4FromI8 PROTO :DWORD,:DWORD,:DWORD
VarUI4FromR4 PROTO :DWORD,:DWORD
VarUI4FromR8 PROTO :DWORD,:DWORD,:DWORD
VarUI4FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarUI4FromUI1 PROTO :DWORD,:DWORD
VarUI4FromUI2 PROTO :DWORD,:DWORD
VarUI4FromUI8 PROTO :DWORD,:DWORD,:DWORD
VarUI8FromBool PROTO :DWORD,:DWORD
VarUI8FromCy PROTO :DWORD,:DWORD,:DWORD
VarUI8FromDate PROTO :DWORD,:DWORD,:DWORD
VarUI8FromDec PROTO :DWORD,:DWORD
VarUI8FromDisp PROTO :DWORD,:DWORD,:DWORD
VarUI8FromI1 PROTO :DWORD,:DWORD
VarUI8FromI2 PROTO :DWORD,:DWORD
VarUI8FromI8 PROTO :DWORD,:DWORD,:DWORD
VarUI8FromR4 PROTO :DWORD,:DWORD
VarUI8FromR8 PROTO :DWORD,:DWORD,:DWORD
VarUI8FromStr PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarUI8FromUI1 PROTO :DWORD,:DWORD
VarUI8FromUI2 PROTO :DWORD,:DWORD
VarUI8FromUI4 PROTO :DWORD,:DWORD
VarUdateFromDate PROTO :DWORD,:DWORD,:DWORD,:DWORD
VarWeekdayName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VarXor PROTO :DWORD,:DWORD,:DWORD
VariantChangeType PROTO :DWORD,:DWORD,:DWORD,:DWORD
VariantChangeTypeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VariantClear PROTO :DWORD
VariantCopy PROTO :DWORD,:DWORD
VariantCopyInd PROTO :DWORD,:DWORD
VariantInit PROTO :DWORD
VariantTimeToDosDateTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
VariantTimeToSystemTime PROTO :DWORD,:DWORD,:DWORD
VectorFromBstr PROTO :DWORD,:DWORD
VerLanguageNameA PROTO :DWORD,:DWORD,:DWORD
VerLanguageName equ <VerLanguageNameA>

VerSetConditionMask PROTO :DWORD,:DWORD,:DWORD,:DWORD
VerifySignature PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualAlloc PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualAllocEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualAllocExNuma PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualFree PROTO :DWORD,:DWORD,:DWORD
VirtualFreeEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualLock PROTO :DWORD,:DWORD
VirtualProtect PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualProtectEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
VirtualQuery PROTO :DWORD,:DWORD,:DWORD
VirtualQueryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
VirtualUnlock PROTO :DWORD,:DWORD
WEP PROTO
WNetAddConnection2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetAddConnection2 equ <WNetAddConnection2A>

WNetAddConnection3A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetAddConnection3 equ <WNetAddConnection3A>

WNetAddConnectionA PROTO :DWORD,:DWORD,:DWORD
WNetAddConnection equ <WNetAddConnectionA>

WNetCancelConnection2A PROTO :DWORD,:DWORD,:DWORD
WNetCancelConnection2 equ <WNetCancelConnection2A>

WNetCancelConnectionA PROTO :DWORD,:DWORD
WNetCancelConnection equ <WNetCancelConnectionA>

WNetCloseEnum PROTO :DWORD
WNetConnectionDialog PROTO :DWORD,:DWORD
WNetConnectionDialog1A PROTO :DWORD
WNetConnectionDialog1 equ <WNetConnectionDialog1A>

WNetDisconnectDialog PROTO :DWORD,:DWORD
WNetDisconnectDialog1A PROTO :DWORD
WNetDisconnectDialog1 equ <WNetDisconnectDialog1A>

WNetEnumResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetEnumResource equ <WNetEnumResourceA>

WNetGetConnectionA PROTO :DWORD,:DWORD,:DWORD
WNetGetConnection equ <WNetGetConnectionA>

WNetGetLastErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetGetLastError equ <WNetGetLastErrorA>

WNetGetNetworkInformationA PROTO :DWORD,:DWORD
WNetGetNetworkInformation equ <WNetGetNetworkInformationA>

WNetGetProviderNameA PROTO :DWORD,:DWORD,:DWORD
WNetGetProviderName equ <WNetGetProviderNameA>

WNetGetResourceInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetGetResourceInformation equ <WNetGetResourceInformationA>

WNetGetResourceParentA PROTO :DWORD,:DWORD,:DWORD
WNetGetResourceParent equ <WNetGetResourceParentA>

WNetGetUniversalNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetGetUniversalName equ <WNetGetUniversalNameA>

WNetGetUserA PROTO :DWORD,:DWORD,:DWORD
WNetGetUser equ <WNetGetUserA>

WNetOpenEnumA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetOpenEnum equ <WNetOpenEnumA>

WNetSetLastErrorA PROTO :DWORD,:DWORD,:DWORD
WNetSetLastError equ <WNetSetLastErrorA>

WNetUseConnectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetUseConnection equ <WNetUseConnectionA>

WPUCompleteOverlappedRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WPUGetProviderPathEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAccept PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAddressToStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAddressToString equ <WSAAddressToStringA>

WSAAdvertiseProvider PROTO :DWORD,:DWORD
WSAAsyncGetHostByAddr PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncGetHostByName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncGetProtoByName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncGetProtoByNumber PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncGetServByName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncGetServByPort PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAAsyncSelect PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSACancelAsyncRequest PROTO :DWORD
WSACancelBlockingCall PROTO
WSACleanup PROTO
WSACloseEvent PROTO :DWORD
WSAConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAConnectByList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAConnectByNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAConnectByName equ <WSAConnectByNameA>

WSACreateEvent PROTO
WSADuplicateSocketA PROTO :DWORD,:DWORD,:DWORD
WSADuplicateSocket equ <WSADuplicateSocketA>

WSAEnumNameSpaceProvidersA PROTO :DWORD,:DWORD
WSAEnumNameSpaceProviders equ <WSAEnumNameSpaceProvidersA>

WSAEnumNameSpaceProvidersExA PROTO :DWORD,:DWORD
WSAEnumNameSpaceProvidersEx equ <WSAEnumNameSpaceProvidersExA>

WSAEnumNetworkEvents PROTO :DWORD,:DWORD,:DWORD
WSAEnumProtocolsA PROTO :DWORD,:DWORD,:DWORD
WSAEnumProtocols equ <WSAEnumProtocolsA>

WSAEventSelect PROTO :DWORD,:DWORD,:DWORD
WSAGetLastError PROTO
WSAGetOverlappedResult PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAGetQOSByName PROTO :DWORD,:DWORD,:DWORD
WSAGetServiceClassInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSAGetServiceClassInfo equ <WSAGetServiceClassInfoA>

WSAGetServiceClassNameByClassIdA PROTO :DWORD,:DWORD,:DWORD
WSAGetServiceClassNameByClassId equ <WSAGetServiceClassNameByClassIdA>

WSAHtonl PROTO :DWORD,:DWORD,:DWORD
WSAHtons PROTO :DWORD,:DWORD,:DWORD
WSAInstallServiceClassA PROTO :DWORD
WSAInstallServiceClass equ <WSAInstallServiceClassA>

WSAIoctl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAIsBlocking PROTO
WSAJoinLeaf PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSALookupServiceBeginA PROTO :DWORD,:DWORD,:DWORD
WSALookupServiceBegin equ <WSALookupServiceBeginA>

WSALookupServiceEnd PROTO :DWORD
WSALookupServiceNextA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSALookupServiceNext equ <WSALookupServiceNextA>

WSANSPIoctl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSANtohl PROTO :DWORD,:DWORD,:DWORD
WSANtohs PROTO :DWORD,:DWORD,:DWORD
WSAPoll PROTO :DWORD,:DWORD,:DWORD
WSAProviderCompleteAsyncCall PROTO :DWORD,:DWORD
WSAProviderConfigChange PROTO :DWORD,:DWORD,:DWORD
WSARecv PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSARecvDisconnect PROTO :DWORD,:DWORD
WSARecvEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSARecvFrom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSARemoveServiceClass PROTO :DWORD
WSAResetEvent PROTO :DWORD
WSASend PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSASendDisconnect PROTO :DWORD,:DWORD
WSASendMsg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSASendTo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSASetBlockingHook PROTO :DWORD
WSASetEvent PROTO :DWORD
WSASetLastError PROTO :DWORD
WSASetServiceA PROTO :DWORD,:DWORD,:DWORD
WSASetService equ <WSASetServiceA>

WSASocketA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSASocket equ <WSASocketA>

WSAStartup PROTO :DWORD,:DWORD
WSAStringToAddressA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSAStringToAddress equ <WSAStringToAddressA>

WSAUnadvertiseProvider PROTO :DWORD
WSAUnhookBlockingHook PROTO
WSAWaitForMultipleEvents PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCDeinstallProvider PROTO :DWORD,:DWORD
WSCDeinstallProviderEx PROTO :DWORD,:DWORD,:DWORD
WSCEnableNSProvider PROTO :DWORD,:DWORD
WSCEnumProtocols PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSCEnumProtocolsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCGetApplicationCategory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCGetApplicationCategoryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCGetProviderInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCGetProviderPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSCInstallNameSpace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCInstallNameSpaceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCInstallNameSpaceEx2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCInstallProvider PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCInstallProviderAndChains PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCInstallProviderEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCSetApplicationCategory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCSetApplicationCategoryEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCSetProviderInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCUnInstallNameSpace PROTO :DWORD
WSCUnInstallNameSpaceEx2 PROTO :DWORD,:DWORD
WSCUpdateProvider PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCUpdateProviderEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSCWriteNameSpaceOrder PROTO :DWORD,:DWORD
WSCWriteProviderOrder PROTO :DWORD,:DWORD
WSCWriteProviderOrderEx PROTO :DWORD,:DWORD,:DWORD
WahCloseApcHelper PROTO :DWORD
WahCloseHandleHelper PROTO :DWORD
WahCloseNotificationHandleHelper PROTO :DWORD
WahCloseSocketHandle PROTO :DWORD,:DWORD
WahCloseThread PROTO :DWORD,:DWORD
WahCompleteRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WahCreateHandleContextTable PROTO :DWORD
WahCreateNotificationHandle PROTO :DWORD,:DWORD
WahCreateSocketHandle PROTO :DWORD,:DWORD
WahDestroyHandleContextTable PROTO :DWORD
WahDisableNonIFSHandleSupport PROTO
WahEnableNonIFSHandleSupport PROTO
WahEnumerateHandleContexts PROTO :DWORD,:DWORD,:DWORD
WahInsertHandleContext PROTO :DWORD,:DWORD
WahNotifyAllProcesses PROTO :DWORD
WahOpenApcHelper PROTO :DWORD
WahOpenCurrentThread PROTO :DWORD,:DWORD
WahOpenHandleHelper PROTO :DWORD
WahOpenNotificationHandleHelper PROTO :DWORD
WahQueueUserApc PROTO :DWORD,:DWORD,:DWORD,:DWORD
WahReferenceContextByHandle PROTO :DWORD,:DWORD
WahRemoveHandleContext PROTO :DWORD,:DWORD
WahWaitForNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
WahWriteLSPEvent PROTO :DWORD,:DWORD
WaitCommEvent PROTO :DWORD,:DWORD,:DWORD
WaitForDebugEvent PROTO :DWORD,:DWORD
WaitForMachinePolicyForegroundProcessing PROTO
WaitForMultipleObjectsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WaitForSingleObject PROTO :DWORD,:DWORD
WaitForSingleObjectEx PROTO :DWORD,:DWORD,:DWORD
WaitForThreadpoolIoCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolTimerCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolWaitCallbacks PROTO :DWORD,:DWORD
WaitForThreadpoolWorkCallbacks PROTO :DWORD,:DWORD
WaitForUserPolicyForegroundProcessing PROTO
WaitOnAddress PROTO :DWORD,:DWORD,:DWORD,:DWORD
WakeAllConditionVariable PROTO :DWORD
WakeByAddressAll PROTO :DWORD
WakeByAddressSingle PROTO :DWORD
WakeConditionVariable PROTO :DWORD
WideCharToMultiByte PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpAddRequestHeaders PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpAutoProxySvcMain PROTO :DWORD,:DWORD
WinHttpCheckPlatform PROTO
WinHttpCloseHandle PROTO :DWORD
WinHttpConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpCrackUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpCreateProxyResolver PROTO :DWORD,:DWORD
WinHttpCreateUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpDetectAutoProxyConfigUrl PROTO :DWORD,:DWORD
WinHttpFreeProxyResult PROTO :DWORD
WinHttpGetDefaultProxyConfiguration PROTO :DWORD
WinHttpGetIEProxyConfigForCurrentUser PROTO :DWORD
WinHttpGetProxyForUrl PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpGetProxyForUrlEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpGetProxyResult PROTO :DWORD,:DWORD
WinHttpOpen PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpOpenRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpProbeConnectivity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryAuthSchemes PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryDataAvailable PROTO :DWORD,:DWORD
WinHttpQueryHeaders PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpQueryOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpReadData PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpReceiveResponse PROTO :DWORD,:DWORD
WinHttpResetAutoProxy PROTO :DWORD,:DWORD
WinHttpSaveProxyCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSendRequest PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetDefaultProxyConfiguration PROTO :DWORD
WinHttpSetOption PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetStatusCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpSetTimeouts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpTimeFromSystemTime PROTO :DWORD,:DWORD
WinHttpTimeToSystemTime PROTO :DWORD,:DWORD
WinHttpWebSocketClose PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketCompleteUpgrade PROTO :DWORD,:DWORD
WinHttpWebSocketQueryCloseStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketReceive PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketSend PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWebSocketShutdown PROTO :DWORD,:DWORD,:DWORD,:DWORD
WinHttpWriteData PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsCompareStringOrdinal PROTO :DWORD,:DWORD,:DWORD
WindowsConcatString PROTO :DWORD,:DWORD,:DWORD
WindowsCreateString PROTO :DWORD,:DWORD,:DWORD
WindowsCreateStringReference PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsDeleteString PROTO :DWORD
WindowsDeleteStringBuffer PROTO :DWORD
WindowsDuplicateString PROTO :DWORD,:DWORD
WindowsGetStringLen PROTO :DWORD
WindowsGetStringRawBuffer PROTO :DWORD,:DWORD
WindowsInspectString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WindowsIsStringEmpty PROTO :DWORD
WindowsPreallocateStringBuffer PROTO :DWORD,:DWORD,:DWORD
WindowsPromoteStringBuffer PROTO :DWORD,:DWORD
WindowsReplaceString PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsStringHasEmbeddedNull PROTO :DWORD,:DWORD
WindowsSubstring PROTO :DWORD,:DWORD,:DWORD
WindowsSubstringWithSpecifiedLength PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsTrimStringEnd PROTO :DWORD,:DWORD,:DWORD
WindowsTrimStringStart PROTO :DWORD,:DWORD,:DWORD
WriteConsoleA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsole equ <WriteConsoleA>

WriteConsoleInputA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleInput equ <WriteConsoleInputA>

WriteConsoleOutputA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutput equ <WriteConsoleOutputA>

WriteConsoleOutputAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutputCharacterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteConsoleOutputCharacter equ <WriteConsoleOutputCharacterA>

WriteDottedNameToPacket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteFileGather PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WriteProcessMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
__WSAFDIsSet PROTO :DWORD,:DWORD
accept PROTO :DWORD,:DWORD,:DWORD
bind PROTO :DWORD,:DWORD,:DWORD
closesocket PROTO :DWORD
connect PROTO :DWORD,:DWORD,:DWORD
dn_expand PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
freeaddrinfo PROTO :DWORD
getaddrinfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
gethostbyaddr PROTO :DWORD,:DWORD,:DWORD
gethostbyname PROTO :DWORD
gethostname PROTO :DWORD,:DWORD
getnameinfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
getnetbyname PROTO :DWORD
getpeername PROTO :DWORD,:DWORD,:DWORD
getprotobyname PROTO :DWORD
getprotobynumber PROTO :DWORD
getservbyname PROTO :DWORD,:DWORD
getservbyport PROTO :DWORD,:DWORD
getsockname PROTO :DWORD,:DWORD,:DWORD
getsockopt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
htonl PROTO :DWORD
htons PROTO :DWORD
if_indextoname PROTO :DWORD,:DWORD
if_nametoindex PROTO :DWORD
inet_addr PROTO :DWORD
inet_network PROTO :DWORD
inet_ntoa PROTO :DWORD
inet_ntop PROTO :DWORD,:DWORD,:DWORD,:DWORD
inet_pton PROTO :DWORD,:DWORD,:DWORD
ioctlsocket PROTO :DWORD,:DWORD,:DWORD
listen PROTO :DWORD,:DWORD
ntohl PROTO :DWORD
ntohs PROTO :DWORD
rcmd PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
recv PROTO :DWORD,:DWORD,:DWORD,:DWORD
recvfrom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
rexec PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
rresvport PROTO :DWORD
s_perror PROTO :DWORD,:DWORD
select PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
send PROTO :DWORD,:DWORD,:DWORD,:DWORD
sendto PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
sethostname PROTO :DWORD,:DWORD
setsockopt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
shutdown PROTO :DWORD,:DWORD
socket PROTO :DWORD,:DWORD,:DWORD

