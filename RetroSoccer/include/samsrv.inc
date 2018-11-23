; ..\X86\samsrv.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

RtlDeleteElementGenericTable2 PROTO :DWORD,:DWORD
RtlInitializeGenericTable2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
RtlInsertElementGenericTable2 PROTO :DWORD,:DWORD,:DWORD
RtlLookupElementGenericTable2 PROTO :DWORD,:DWORD
SAM_MIDL_user_allocate PROTO :DWORD
SAM_MIDL_user_free PROTO :DWORD
SamDsExtAlloc PROTO :DWORD
SamDsExtFree PROTO :DWORD
SamIAccountRestrictions PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIAddDSNameToAlias PROTO :DWORD,:DWORD,:DWORD
SamIChangePasswordForeignUser PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIClaimIsValid PROTO :DWORD
SamIConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIConvertSecurityAttributesToClaimsBlob PROTO :DWORD,:DWORD,:DWORD
SamICopyCurrentDomainAccountSettings PROTO :DWORD
SamICreateKrbTgt PROTO :DWORD,:DWORD,:DWORD
SamIDecodeClaimsBlob PROTO :DWORD,:DWORD,:DWORD
SamIDecodeClaimsBlobIntoClaimsSet PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIDecodeClaimsBlobToAuthz PROTO :DWORD,:DWORD,:DWORD
SamIDemote PROTO :DWORD,:DWORD,:DWORD
SamIDemoteUndo PROTO
SamIDoFSMORoleChange PROTO :DWORD
SamIFreeAuthzSecurityAttributesInfo PROTO :DWORD
SamIFreeClaimsBlob PROTO :DWORD
SamIFreeDecodedClaimsSet PROTO :DWORD,:DWORD
SamIFreeLookupNamesInfo PROTO :DWORD
SamIFreeLookupSidsInfo PROTO :DWORD
SamIFreeOidList PROTO :DWORD
SamIFreeRealmList PROTO :DWORD
SamIFreeSecurityAttributesInfo PROTO :DWORD
SamIFreeSidAndAttributesList PROTO :DWORD
SamIFreeSidArray PROTO :DWORD
SamIFreeVoid PROTO :DWORD
SamIFree_SAMPR_DISPLAY_INFO_BUFFER PROTO :DWORD,:DWORD
SamIFree_SAMPR_DOMAIN_INFO_BUFFER PROTO :DWORD,:DWORD
SamIFree_SAMPR_ENUMERATION_BUFFER PROTO :DWORD
SamIFree_SAMPR_GET_GROUPS_BUFFER PROTO :DWORD
SamIFree_SAMPR_RETURNED_USTRING_ARRAY PROTO :DWORD
SamIFree_SAMPR_ULONG_ARRAY PROTO :DWORD
SamIFree_SAMPR_USER_INFO_BUFFER PROTO :DWORD,:DWORD
SamIFree_UserInternal6Information PROTO :DWORD
SamIGetAliasMembership PROTO :DWORD,:DWORD,:DWORD
SamIGetConfigurationOidList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIGetDefaultAdministratorName PROTO :DWORD,:DWORD
SamIGetResourceGroupMembershipsTransitive PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIGetUserLogonInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIGetUserLogonInformation2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIGetUserLogonInformation3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIGetUserLogonInformationEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIHandleObjectUpdate PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIImpersonateNullSession PROTO
SamIInitialize PROTO
SamIIsDownlevelDcUpgrade PROTO
SamIIsExtendedSidMode PROTO :DWORD
SamIIsRebootAfterPromotion PROTO
SamIIsSetupInProgress PROTO :DWORD
SamILoadDownlevelDatabase PROTO :DWORD
SamILookupNamesBySid PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamILookupNamesInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamILookupSidsByName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamILoopbackConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIMixedDomain PROTO :DWORD
SamIMixedDomain2 PROTO :DWORD,:DWORD
SamINT4UpgradeInProgress PROTO
SamINetLogonPing PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamINotifyRoleChange PROTO :DWORD,:DWORD
SamIOpenUserByAlternateId PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIPromote PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIPromoteUndo PROTO
SamIPurgeSecrets PROTO :DWORD
SamIQueryAccountSecretsCachability PROTO :DWORD,:DWORD,:DWORD
SamIQueryCapabilities PROTO
SamIQueryRealmList PROTO :DWORD,:DWORD
SamIQueryServerRole PROTO :DWORD,:DWORD
SamIQueryServerRole2 PROTO :DWORD,:DWORD
SamIRemoveDSNameFromAlias PROTO :DWORD,:DWORD,:DWORD
SamIReplaceDownlevelDatabase PROTO :DWORD,:DWORD,:DWORD
SamIReplicateAccountData PROTO :DWORD,:DWORD,:DWORD
SamIResetBadPwdCountOnPdc PROTO :DWORD
SamIRetrieveMultiplePrimaryCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIRetrievePrimaryCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamIRevertNullSession PROTO
SamIScorePassword PROTO :DWORD,:DWORD
SamISetAuditingInformation PROTO :DWORD
SamISetMachinePassword PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamISetPasswordForeignUser2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamISetPasswordForeignUser3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamISetPasswordInfoOnDc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIStorePrimaryCredentials PROTO :DWORD,:DWORD
SamITransformClaims PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamIUPNFromUserHandle PROTO :DWORD,:DWORD,:DWORD
SamIUnLoadDownlevelDatabase PROTO :DWORD
SamIUninitialize PROTO
SamIUpdateLogonStatistics PROTO :DWORD,:DWORD
SamIValidateAccountName PROTO :DWORD,:DWORD
SamIValidateNewAccountName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampAccountControlToFlags PROTO :DWORD
SampAcquireReadLock PROTO
SampAcquireSamLockExclusive PROTO
SampAcquireWriteLock PROTO :DWORD
SampAddAccountToGroupMembers PROTO :DWORD,:DWORD,:DWORD
SampAddAccountsAndApplyMemberships PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampAddDeltaTime PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampAddNonLocalDomainRelativeMemberships PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampAddSameDomainMemberToGlobalOrUniversalGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampAddUserToGroup PROTO :DWORD,:DWORD,:DWORD
SampAlInvalidateAliasInformation PROTO :DWORD
SampAllocateNextCurrentRidFromIndex PROTO :DWORD
SampApplyDomainUpdatesForAllDomains PROTO :DWORD,:DWORD
SampAssignPrimaryGroup PROTO :DWORD,:DWORD
SampAuditAccountEnableDisableChange PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampAuditAccountNameChange PROTO :DWORD,:DWORD,:DWORD
SampAuditAnyEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampAuditGroupTypeChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampAuditSidHistory PROTO :DWORD,:DWORD
SampBuildDsNameFromSid PROTO :DWORD,:DWORD
SampBuildSamProtection PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCalculateLmAndNtOwfPasswords PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampChangeAliasAccountName PROTO :DWORD,:DWORD,:DWORD
SampChangeGroupAccountName PROTO :DWORD,:DWORD,:DWORD
SampChangeUserAccountName PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampCheckForAccountLockout PROTO :DWORD,:DWORD,:DWORD
SampCheckGroupTypeBits PROTO :DWORD,:DWORD
SampCheckSidType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCommitBufferedWrites PROTO :DWORD
SampCompareDisplayStrings PROTO :DWORD,:DWORD,:DWORD
SampComputePasswordExpired PROTO :DWORD,:DWORD
SampConnect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampConvertUiListToApiList PROTO :DWORD,:DWORD,:DWORD
SampCreateAccountContext2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCreateAliasInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCreateContextEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCreateDefaultUPN PROTO :DWORD,:DWORD,:DWORD
SampCreateFullSid PROTO :DWORD,:DWORD,:DWORD
SampCreateGroupInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCreateUserInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampCurrentThreadOwnsLock PROTO
SampDeReferenceContext PROTO :DWORD,:DWORD
SampDecrementActiveThreads PROTO
SampDecryptCredentialData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDeleteContext PROTO :DWORD
SampDeleteDsDirsToDeleteKey PROTO
SampDeleteKeyForPostBootPromote PROTO
SampDeltaChangeNotify PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDsChangePasswordUser PROTO :DWORD,:DWORD,:DWORD
SampDsConvertReadAttrBlock PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDsGetPrimaryDomainStart PROTO
SampDsInitializeSingleDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDsIsRunning PROTO
SampDsMakeAttrBlock PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDsSetBuiltinDomainPolicy PROTO :DWORD
SampDsSetDomainPolicy PROTO :DWORD,:DWORD
SampDsSetPasswordUser PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampDsUpdateContextAttributes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampDuplicateGroupInfo PROTO :DWORD,:DWORD,:DWORD
SampDuplicateMachineInfo PROTO :DWORD,:DWORD,:DWORD
SampDuplicateOemGroupInfo PROTO :DWORD,:DWORD,:DWORD
SampDuplicateOemUserInfo PROTO :DWORD,:DWORD,:DWORD
SampDuplicateUnicodeString PROTO :DWORD,:DWORD
SampDuplicateUserInfo PROTO :DWORD,:DWORD,:DWORD
SampEncryptCredentialData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampExamineSid PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampExtendDefinedDomains PROTO :DWORD
SampFlagsToAccountControl PROTO :DWORD,:DWORD
SampFreeGroupInfo PROTO :DWORD
SampFreeMachineInfo PROTO :DWORD
SampFreeOemGroupInfo PROTO :DWORD
SampFreeOemUserInfo PROTO :DWORD
SampFreeUnicodeString PROTO :DWORD
SampFreeUserInfo PROTO :DWORD
SampGenerateRandomPassword PROTO :DWORD,:DWORD
SampGetAccessAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetAccountDomainInfo PROTO :DWORD,:DWORD
SampGetBehaviorVersion PROTO :DWORD
SampGetCurrentOwnerAndPrimaryGroup PROTO :DWORD,:DWORD
SampGetDisableOutboundRSO PROTO
SampGetDisableRSOOnPDCForward PROTO
SampGetDisableResetBadPwdCountForward PROTO
SampGetDisableSingleObjectRepl PROTO
SampGetDnsDomainNameFromIndex PROTO :DWORD
SampGetDomainContextFromIndex PROTO :DWORD
SampGetDomainObjectFromAccountContext PROTO :DWORD
SampGetDomainObjectFromIndex PROTO :DWORD
SampGetDomainServerRoleFromIndex PROTO :DWORD
SampGetDomainSidFromAccountContext PROTO :DWORD
SampGetDomainSidFromIndex PROTO :DWORD
SampGetDomainSidListForSam PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetDomainUpgradeTasks PROTO :DWORD,:DWORD
SampGetDownLevelDomainControllersPresent PROTO :DWORD
SampGetExtendedAttribute PROTO :DWORD,:DWORD,:DWORD
SampGetExternalNameFromIndex PROTO :DWORD
SampGetFixedAttributes PROTO :DWORD,:DWORD,:DWORD
SampGetHasNeverTime PROTO
SampGetIgnoreGCFailures PROTO
SampGetLogLevel PROTO
SampGetNT4UpgradeInProgress PROTO
SampGetNewAccountSecurityNt4 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetNextUnmodifiedRidFromIndex PROTO :DWORD
SampGetNoGcLogonEnforceKerberosIpCheck PROTO
SampGetNoGcLogonEnforceNTLMCheck PROTO
SampGetObjectSD PROTO :DWORD,:DWORD,:DWORD
SampGetObjectTypeNameFromIndex PROTO :DWORD
SampGetPasswordMustChangeWithUF_UAC PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampGetReverseMembershipTransitive PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetSamSubsystemName PROTO
SampGetSerialNumberDomain2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetServerObjectName PROTO
SampGetSidArrayAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetSidAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampGetSuccessAccountAuditingEnabled PROTO
SampGetUlongArrayAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetUnicodeStringAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampGetUserAccountControlComputed PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampGetUserAccountSettings PROTO :DWORD,:DWORD
SampGetWillNeverTime PROTO
SampImpersonateClient PROTO :DWORD
SampIncreaseBadPwdCountLoopback PROTO :DWORD
SampIncrementActiveThreads PROTO
SampIncrementNetlogonChangeLogSerialNumber PROTO :DWORD
SampInvalidateDomainCache PROTO
SampIsAccountBuiltIn PROTO :DWORD
SampIsAuditingEnabled PROTO :DWORD,:DWORD
SampIsBuiltinDomain PROTO :DWORD
SampIsDomainHosted PROTO :DWORD
SampIsServiceRunning PROTO
SampIsSetupInProgress PROTO :DWORD
SampLookupContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampMarkPerAttributeInvalidFromWhichFields PROTO :DWORD,:DWORD
SampNeedUserAccountSettingsDuringQuery PROTO :DWORD,:DWORD,:DWORD
SampNetLogonNotificationRequired PROTO :DWORD,:DWORD
SampNotifyAuditChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampNotifyReplicatedInChange PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampPasswordChangeNotify PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampPasswordChangeNotifyWorker PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampPositionOfHighestBit PROTO :DWORD
SampQueryCapabilities PROTO :DWORD,:DWORD
SampQueryInformationUserInternal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampReadExtendedAttributes PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampRecordSystemSchemaVerisonInRegistry PROTO
SampReferenceContext PROTO :DWORD
SampRegObjToDsObj PROTO :DWORD,:DWORD
SampReleaseReadLock PROTO
SampReleaseSamLockExclusive PROTO
SampReleaseWriteLock PROTO :DWORD
SampRemoveAccountFromGroupMembers PROTO :DWORD,:DWORD,:DWORD
SampRemoveSameDomainMemberFromGlobalOrUniversalGroup PROTO :DWORD,:DWORD,:DWORD
SampRemoveUserFromGroup PROTO :DWORD,:DWORD,:DWORD
SampRenameKrbtgtAccount PROTO
SampReplaceUserLogonHours PROTO :DWORD,:DWORD
SampReplaceUserV1aFixed PROTO :DWORD,:DWORD
SampRetrieveGroupV1Fixed PROTO :DWORD,:DWORD
SampRetrieveMultipleCredentials PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampRetrieveUserPasswords PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampRetrieveUserV1aFixed PROTO :DWORD,:DWORD
SampRevertToSelf PROTO :DWORD
SampRtlWellKnownPrivilegeCheck PROTO :DWORD,:DWORD,:DWORD
SampSetAccessAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampSetAdminPassword PROTO :DWORD
SampSetAttributeAccess PROTO :DWORD,:DWORD,:DWORD
SampSetComputerObjectDsName PROTO :DWORD
SampSetDSRMPasswordWorker PROTO :DWORD,:DWORD
SampSetExtendedAttributeAccess PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampSetFixedAttributes PROTO :DWORD,:DWORD
SampSetGlobalDsSids PROTO :DWORD,:DWORD,:DWORD
SampSetPassword PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampSetPasswordInfoOnPdcByHandle PROTO :DWORD,:DWORD,:DWORD
SampSetPasswordInfoOnPdcByIndex PROTO :DWORD,:DWORD,:DWORD
SampSetSerialNumberDomain2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampSetTransactionDomain PROTO :DWORD
SampSetTransactionWithinDomain PROTO :DWORD
SampSetUnicodeStringAttribute PROTO :DWORD,:DWORD,:DWORD
SampSetUserAccountControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampSplitSid PROTO :DWORD,:DWORD,:DWORD
SampStoreObjectAttributes PROTO :DWORD,:DWORD
SampStringFromGuid PROTO :DWORD,:DWORD
SampTraceEvent PROTO :DWORD,:DWORD,:DWORD
SampUpdateAccountDisabledFlag PROTO :DWORD,:DWORD
SampUpdateComputedUserAccountControlBits PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampUpdateMixedModeAndFindDomain PROTO :DWORD,:DWORD
SampUpdatePerformanceCounters PROTO :DWORD,:DWORD,:DWORD
SampUpgradeUserParmsActual PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SampUsingDsData PROTO
SampValidateDomainCacheCallback PROTO :DWORD
SampValidateDomainControllerCreation PROTO :DWORD
SampValidatePwdSettingAttempt PROTO :DWORD,:DWORD,:DWORD,:DWORD
SampValidateRegAttributes PROTO :DWORD,:DWORD
SampWriteGroupType PROTO :DWORD,:DWORD,:DWORD
SamrAddMemberToAlias PROTO :DWORD,:DWORD
SamrAddMemberToGroup PROTO :DWORD,:DWORD,:DWORD
SamrCloseHandle PROTO :DWORD
SamrCreateUser2InDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrCreateUserInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrDeleteAlias PROTO :DWORD
SamrDeleteGroup PROTO :DWORD
SamrDeleteUser PROTO :DWORD
SamrEnumerateUsersInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrEnumerateUsersInDomain2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrGetAliasMembership PROTO :DWORD,:DWORD,:DWORD
SamrGetGroupsForUser PROTO :DWORD,:DWORD
SamrLookupIdsInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrLookupNamesInDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrLookupNamesInDomain2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrOpenAlias PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamrOpenDomain PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamrOpenGroup PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamrOpenUser PROTO :DWORD,:DWORD,:DWORD,:DWORD
SamrQueryDisplayInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SamrQueryInformationDomain PROTO :DWORD,:DWORD,:DWORD
SamrQueryInformationUser PROTO :DWORD,:DWORD,:DWORD
SamrQueryInformationUser2 PROTO :DWORD,:DWORD,:DWORD
SamrQuerySecurityObject PROTO :DWORD,:DWORD,:DWORD
SamrRemoveMemberFromAlias PROTO :DWORD,:DWORD
SamrRemoveMemberFromGroup PROTO :DWORD,:DWORD
SamrRidToSid PROTO :DWORD,:DWORD,:DWORD
SamrSetInformationAlias PROTO :DWORD,:DWORD,:DWORD
SamrSetInformationGroup PROTO :DWORD,:DWORD,:DWORD
SamrSetInformationUser PROTO :DWORD,:DWORD,:DWORD
SamrSetSecurityObject PROTO :DWORD,:DWORD,:DWORD
SamrValidatePassword PROTO :DWORD,:DWORD,:DWORD,:DWORD

