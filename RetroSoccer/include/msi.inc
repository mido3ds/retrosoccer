; ..\X86\Msi.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

DllGetVersion PROTO :DWORD
Migrate10CachedPackagesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
Migrate10CachedPackages equ <Migrate10CachedPackagesA>

MsiAdvertiseProductA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiAdvertiseProduct equ <MsiAdvertiseProductA>

MsiAdvertiseProductExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiAdvertiseProductEx equ <MsiAdvertiseProductExA>

MsiAdvertiseScriptA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiAdvertiseScript equ <MsiAdvertiseScriptA>

MsiApplyMultiplePatchesA PROTO :DWORD,:DWORD,:DWORD
MsiApplyMultiplePatches equ <MsiApplyMultiplePatchesA>

MsiApplyPatchA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiApplyPatch equ <MsiApplyPatchA>

MsiBeginTransactionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiBeginTransaction equ <MsiBeginTransactionA>

MsiCloseAllHandles PROTO
MsiCloseHandle PROTO :DWORD
MsiCollectUserInfoA PROTO :DWORD
MsiCollectUserInfo equ <MsiCollectUserInfoA>

MsiConfigureFeatureA PROTO :DWORD,:DWORD,:DWORD
MsiConfigureFeature equ <MsiConfigureFeatureA>

MsiConfigureFeatureFromDescriptorA PROTO :DWORD,:DWORD
MsiConfigureFeatureFromDescriptor equ <MsiConfigureFeatureFromDescriptorA>

MsiConfigureProductA PROTO :DWORD,:DWORD,:DWORD
MsiConfigureProduct equ <MsiConfigureProductA>

MsiConfigureProductExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiConfigureProductEx equ <MsiConfigureProductExA>

MsiCreateAndVerifyInstallerDirectory PROTO :DWORD
MsiCreateRecord PROTO :DWORD
MsiCreateTransformSummaryInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiCreateTransformSummaryInfo equ <MsiCreateTransformSummaryInfoA>

MsiDatabaseApplyTransformA PROTO :DWORD,:DWORD,:DWORD
MsiDatabaseApplyTransform equ <MsiDatabaseApplyTransformA>

MsiDatabaseCommit PROTO :DWORD
MsiDatabaseExportA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiDatabaseExport equ <MsiDatabaseExportA>

MsiDatabaseGenerateTransformA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiDatabaseGenerateTransform equ <MsiDatabaseGenerateTransformA>

MsiDatabaseGetPrimaryKeysA PROTO :DWORD,:DWORD,:DWORD
MsiDatabaseGetPrimaryKeys equ <MsiDatabaseGetPrimaryKeysA>

MsiDatabaseImportA PROTO :DWORD,:DWORD,:DWORD
MsiDatabaseImport equ <MsiDatabaseImportA>

MsiDatabaseIsTablePersistentA PROTO :DWORD,:DWORD
MsiDatabaseIsTablePersistent equ <MsiDatabaseIsTablePersistentA>

MsiDatabaseMergeA PROTO :DWORD,:DWORD,:DWORD
MsiDatabaseMerge equ <MsiDatabaseMergeA>

MsiDatabaseOpenViewA PROTO :DWORD,:DWORD,:DWORD
MsiDatabaseOpenView equ <MsiDatabaseOpenViewA>

MsiDecomposeDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiDecomposeDescriptor equ <MsiDecomposeDescriptorA>

MsiDeleteUserDataA PROTO :DWORD,:DWORD,:DWORD
MsiDeleteUserData equ <MsiDeleteUserDataA>

MsiDetermineApplicablePatchesA PROTO :DWORD,:DWORD,:DWORD
MsiDetermineApplicablePatches equ <MsiDetermineApplicablePatchesA>

MsiDeterminePatchSequenceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiDeterminePatchSequence equ <MsiDeterminePatchSequenceA>

MsiDoActionA PROTO :DWORD,:DWORD
MsiDoAction equ <MsiDoActionA>

MsiEnableLogA PROTO :DWORD,:DWORD,:DWORD
MsiEnableLog equ <MsiEnableLogA>

MsiEnableUIPreview PROTO :DWORD,:DWORD
MsiEndTransaction PROTO :DWORD
MsiEnumClientsA PROTO :DWORD,:DWORD,:DWORD
MsiEnumClients equ <MsiEnumClientsA>

MsiEnumClientsExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumClientsEx equ <MsiEnumClientsExA>

MsiEnumComponentCostsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumComponentCosts equ <MsiEnumComponentCostsA>

MsiEnumComponentQualifiersA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumComponentQualifiers equ <MsiEnumComponentQualifiersA>

MsiEnumComponentsA PROTO :DWORD,:DWORD
MsiEnumComponents equ <MsiEnumComponentsA>

MsiEnumComponentsExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumComponentsEx equ <MsiEnumComponentsExA>

MsiEnumFeaturesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiEnumFeatures equ <MsiEnumFeaturesA>

MsiEnumPatchesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumPatches equ <MsiEnumPatchesA>

MsiEnumPatchesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumPatchesEx equ <MsiEnumPatchesExA>

MsiEnumProductsA PROTO :DWORD,:DWORD
MsiEnumProducts equ <MsiEnumProductsA>

MsiEnumProductsExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiEnumProductsEx equ <MsiEnumProductsExA>

MsiEnumRelatedProductsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiEnumRelatedProducts equ <MsiEnumRelatedProductsA>

MsiEvaluateConditionA PROTO :DWORD,:DWORD
MsiEvaluateCondition equ <MsiEvaluateConditionA>

MsiExtractPatchXMLDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiExtractPatchXMLData equ <MsiExtractPatchXMLDataA>

MsiFormatRecordA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiFormatRecord equ <MsiFormatRecordA>

MsiGetActiveDatabase PROTO :DWORD
MsiGetComponentPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetComponentPath equ <MsiGetComponentPathA>

MsiGetComponentPathExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetComponentPathEx equ <MsiGetComponentPathExA>

MsiGetComponentStateA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetComponentState equ <MsiGetComponentStateA>

MsiGetDatabaseState PROTO :DWORD
MsiGetFeatureCostA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetFeatureCost equ <MsiGetFeatureCostA>

MsiGetFeatureInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetFeatureInfo equ <MsiGetFeatureInfoA>

MsiGetFeatureStateA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetFeatureState equ <MsiGetFeatureStateA>

MsiGetFeatureUsageA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetFeatureUsage equ <MsiGetFeatureUsageA>

MsiGetFeatureValidStatesA PROTO :DWORD,:DWORD,:DWORD
MsiGetFeatureValidStates equ <MsiGetFeatureValidStatesA>

MsiGetFileHashA PROTO :DWORD,:DWORD,:DWORD
MsiGetFileHash equ <MsiGetFileHashA>

MsiGetFileSignatureInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetFileSignatureInformation equ <MsiGetFileSignatureInformationA>

MsiGetFileVersionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetFileVersion equ <MsiGetFileVersionA>

MsiGetLanguage PROTO :DWORD
MsiGetLastErrorRecord PROTO
MsiGetMode PROTO :DWORD,:DWORD
MsiGetPatchFileListA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetPatchFileList equ <MsiGetPatchFileListA>

MsiGetPatchInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetPatchInfo equ <MsiGetPatchInfoA>

MsiGetPatchInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetPatchInfoEx equ <MsiGetPatchInfoExA>

MsiGetProductCodeA PROTO :DWORD,:DWORD
MsiGetProductCode equ <MsiGetProductCodeA>

MsiGetProductCodeFromPackageCodeA PROTO :DWORD,:DWORD
MsiGetProductCodeFromPackageCode equ <MsiGetProductCodeFromPackageCodeA>

MsiGetProductInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetProductInfo equ <MsiGetProductInfoA>

MsiGetProductInfoExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetProductInfoEx equ <MsiGetProductInfoExA>

MsiGetProductInfoFromScriptA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetProductInfoFromScript equ <MsiGetProductInfoFromScriptA>

MsiGetProductPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetProductProperty equ <MsiGetProductPropertyA>

MsiGetPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetProperty equ <MsiGetPropertyA>

MsiGetShortcutTargetA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetShortcutTarget equ <MsiGetShortcutTargetA>

MsiGetSourcePathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetSourcePath equ <MsiGetSourcePathA>

MsiGetSummaryInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetSummaryInformation equ <MsiGetSummaryInformationA>

MsiGetTargetPathA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiGetTargetPath equ <MsiGetTargetPathA>

MsiGetUserInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiGetUserInfo equ <MsiGetUserInfoA>

MsiInstallMissingComponentA PROTO :DWORD,:DWORD,:DWORD
MsiInstallMissingComponent equ <MsiInstallMissingComponentA>

MsiInstallMissingFileA PROTO :DWORD,:DWORD
MsiInstallMissingFile equ <MsiInstallMissingFileA>

MsiInstallProductA PROTO :DWORD,:DWORD
MsiInstallProduct equ <MsiInstallProductA>

MsiIsProductElevatedA PROTO :DWORD,:DWORD
MsiIsProductElevated equ <MsiIsProductElevatedA>

MsiJoinTransaction PROTO :DWORD,:DWORD,:DWORD
MsiLoadStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiLoadString equ <MsiLoadStringA>

MsiLocateComponentA PROTO :DWORD,:DWORD,:DWORD
MsiLocateComponent equ <MsiLocateComponentA>

MsiMessageBoxA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiMessageBox equ <MsiMessageBoxA>

MsiMessageBoxExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiMessageBoxEx equ <MsiMessageBoxExA>

MsiNotifySidChangeA PROTO :DWORD,:DWORD
MsiNotifySidChange equ <MsiNotifySidChangeA>

MsiOpenDatabaseA PROTO :DWORD,:DWORD,:DWORD
MsiOpenDatabase equ <MsiOpenDatabaseA>

MsiOpenPackageA PROTO :DWORD,:DWORD
MsiOpenPackage equ <MsiOpenPackageA>

MsiOpenPackageExA PROTO :DWORD,:DWORD,:DWORD
MsiOpenPackageEx equ <MsiOpenPackageExA>

MsiOpenProductA PROTO :DWORD,:DWORD
MsiOpenProduct equ <MsiOpenProductA>

MsiPreviewBillboardA PROTO :DWORD,:DWORD,:DWORD
MsiPreviewBillboard equ <MsiPreviewBillboardA>

MsiPreviewDialogA PROTO :DWORD,:DWORD
MsiPreviewDialog equ <MsiPreviewDialogA>

MsiProcessAdvertiseScriptA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiProcessAdvertiseScript equ <MsiProcessAdvertiseScriptA>

MsiProcessMessage PROTO :DWORD,:DWORD,:DWORD
MsiProvideAssemblyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiProvideAssembly equ <MsiProvideAssemblyA>

MsiProvideComponentA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiProvideComponent equ <MsiProvideComponentA>

MsiProvideComponentFromDescriptorA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiProvideComponentFromDescriptor equ <MsiProvideComponentFromDescriptorA>

MsiProvideQualifiedComponentA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiProvideQualifiedComponent equ <MsiProvideQualifiedComponentA>

MsiProvideQualifiedComponentExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiProvideQualifiedComponentEx equ <MsiProvideQualifiedComponentExA>

MsiQueryComponentStateA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiQueryComponentState equ <MsiQueryComponentStateA>

MsiQueryFeatureStateA PROTO :DWORD,:DWORD
MsiQueryFeatureState equ <MsiQueryFeatureStateA>

MsiQueryFeatureStateExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiQueryFeatureStateEx equ <MsiQueryFeatureStateExA>

MsiQueryFeatureStateFromDescriptorA PROTO :DWORD
MsiQueryFeatureStateFromDescriptor equ <MsiQueryFeatureStateFromDescriptorA>

MsiQueryProductStateA PROTO :DWORD
MsiQueryProductState equ <MsiQueryProductStateA>

MsiRecordClearData PROTO :DWORD
MsiRecordDataSize PROTO :DWORD,:DWORD
MsiRecordGetFieldCount PROTO :DWORD
MsiRecordGetInteger PROTO :DWORD,:DWORD
MsiRecordGetStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiRecordGetString equ <MsiRecordGetStringA>

MsiRecordIsNull PROTO :DWORD,:DWORD
MsiRecordReadStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiRecordSetInteger PROTO :DWORD,:DWORD,:DWORD
MsiRecordSetStreamA PROTO :DWORD,:DWORD,:DWORD
MsiRecordSetStream equ <MsiRecordSetStreamA>

MsiRecordSetStringA PROTO :DWORD,:DWORD,:DWORD
MsiRecordSetString equ <MsiRecordSetStringA>

MsiReinstallFeatureA PROTO :DWORD,:DWORD,:DWORD
MsiReinstallFeature equ <MsiReinstallFeatureA>

MsiReinstallFeatureFromDescriptorA PROTO :DWORD,:DWORD
MsiReinstallFeatureFromDescriptor equ <MsiReinstallFeatureFromDescriptorA>

MsiReinstallProductA PROTO :DWORD,:DWORD
MsiReinstallProduct equ <MsiReinstallProductA>

MsiRemovePatchesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiRemovePatches equ <MsiRemovePatchesA>

MsiSequenceA PROTO :DWORD,:DWORD,:DWORD
MsiSequence equ <MsiSequenceA>

MsiSetComponentStateA PROTO :DWORD,:DWORD,:DWORD
MsiSetComponentState equ <MsiSetComponentStateA>

MsiSetExternalUIA PROTO :DWORD,:DWORD,:DWORD
MsiSetExternalUI equ <MsiSetExternalUIA>

MsiSetExternalUIRecord PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiSetFeatureAttributesA PROTO :DWORD,:DWORD,:DWORD
MsiSetFeatureAttributes equ <MsiSetFeatureAttributesA>

MsiSetFeatureStateA PROTO :DWORD,:DWORD,:DWORD
MsiSetFeatureState equ <MsiSetFeatureStateA>

MsiSetInstallLevel PROTO :DWORD,:DWORD
MsiSetInternalUI PROTO :DWORD,:DWORD
MsiSetMode PROTO :DWORD,:DWORD,:DWORD
MsiSetPropertyA PROTO :DWORD,:DWORD,:DWORD
MsiSetProperty equ <MsiSetPropertyA>

MsiSetTargetPathA PROTO :DWORD,:DWORD,:DWORD
MsiSetTargetPath equ <MsiSetTargetPathA>

MsiSourceListAddMediaDiskA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListAddMediaDisk equ <MsiSourceListAddMediaDiskA>

MsiSourceListAddSourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListAddSource equ <MsiSourceListAddSourceA>

MsiSourceListAddSourceExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListAddSourceEx equ <MsiSourceListAddSourceExA>

MsiSourceListClearAllA PROTO :DWORD,:DWORD,:DWORD
MsiSourceListClearAll equ <MsiSourceListClearAllA>

MsiSourceListClearAllExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListClearAllEx equ <MsiSourceListClearAllExA>

MsiSourceListClearMediaDiskA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListClearMediaDisk equ <MsiSourceListClearMediaDiskA>

MsiSourceListClearSourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListClearSource equ <MsiSourceListClearSourceA>

MsiSourceListEnumMediaDisksA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListEnumMediaDisks equ <MsiSourceListEnumMediaDisksA>

MsiSourceListEnumSourcesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListEnumSources equ <MsiSourceListEnumSourcesA>

MsiSourceListForceResolutionA PROTO :DWORD,:DWORD,:DWORD
MsiSourceListForceResolution equ <MsiSourceListForceResolutionA>

MsiSourceListForceResolutionExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListForceResolutionEx equ <MsiSourceListForceResolutionExA>

MsiSourceListGetInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListGetInfo equ <MsiSourceListGetInfoA>

MsiSourceListSetInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSourceListSetInfo equ <MsiSourceListSetInfoA>

MsiSummaryInfoGetPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSummaryInfoGetProperty equ <MsiSummaryInfoGetPropertyA>

MsiSummaryInfoGetPropertyCount PROTO :DWORD,:DWORD
MsiSummaryInfoPersist PROTO :DWORD
MsiSummaryInfoSetPropertyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MsiSummaryInfoSetProperty equ <MsiSummaryInfoSetPropertyA>

MsiUseFeatureA PROTO :DWORD,:DWORD
MsiUseFeature equ <MsiUseFeatureA>

MsiUseFeatureExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
MsiUseFeatureEx equ <MsiUseFeatureExA>

MsiVerifyDiskSpace PROTO :DWORD
MsiVerifyPackageA PROTO :DWORD
MsiVerifyPackage equ <MsiVerifyPackageA>

MsiViewClose PROTO :DWORD
MsiViewExecute PROTO :DWORD,:DWORD
MsiViewFetch PROTO :DWORD,:DWORD
MsiViewGetColumnInfo PROTO :DWORD,:DWORD,:DWORD
MsiViewGetErrorA PROTO :DWORD,:DWORD,:DWORD
MsiViewGetError equ <MsiViewGetErrorA>

MsiViewModify PROTO :DWORD,:DWORD,:DWORD

