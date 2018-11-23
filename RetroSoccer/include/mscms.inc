; ..\X86\Mscms.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

AssociateColorProfileWithDeviceA PROTO :DWORD,:DWORD,:DWORD
AssociateColorProfileWithDevice equ <AssociateColorProfileWithDeviceA>

CheckBitmapBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CheckColors PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CloseColorProfile PROTO :DWORD
CloseDisplay PROTO :DWORD
ColorCplGetDefaultProfileScope PROTO :DWORD,:DWORD,:DWORD,:DWORD
ColorCplGetDefaultRenderingIntentScope PROTO :DWORD
ColorCplGetProfileProperties PROTO :DWORD,:DWORD
ColorCplHasSystemWideAssociationListChanged PROTO :DWORD,:DWORD,:DWORD
ColorCplInitialize PROTO
ColorCplLoadAssociationList PROTO :DWORD,:DWORD,:DWORD,:DWORD
ColorCplMergeAssociationLists PROTO :DWORD,:DWORD
ColorCplOverwritePerUserAssociationList PROTO :DWORD,:DWORD
ColorCplReleaseProfileProperties PROTO :DWORD
ColorCplResetSystemWideAssociationListChangedWarning PROTO :DWORD,:DWORD
ColorCplSaveAssociationList PROTO :DWORD,:DWORD,:DWORD,:DWORD
ColorCplSetUsePerUserProfiles PROTO :DWORD,:DWORD,:DWORD
ColorCplUninitialize PROTO
ConvertColorNameToIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD
ConvertIndexToColorName PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateColorTransformA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateColorTransform equ <CreateColorTransformA>

CreateDeviceLinkProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateMultiProfileTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateProfileFromLogColorSpaceA PROTO :DWORD,:DWORD
CreateProfileFromLogColorSpace equ <CreateProfileFromLogColorSpaceA>

DccwCreateDisplayProfileAssociationList PROTO :DWORD
DccwGetDisplayProfileAssociationList PROTO :DWORD,:DWORD,:DWORD
DccwGetGamutSize PROTO :DWORD,:DWORD
DccwReleaseDisplayProfileAssociationList PROTO :DWORD
DccwSetDisplayProfileAssociationList PROTO :DWORD,:DWORD,:DWORD
DeleteColorTransform PROTO :DWORD
DeviceRenameEvent PROTO :DWORD,:DWORD,:DWORD
DisassociateColorProfileFromDeviceA PROTO :DWORD,:DWORD,:DWORD
DisassociateColorProfileFromDevice equ <DisassociateColorProfileFromDeviceA>

EnumColorProfilesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumColorProfiles equ <EnumColorProfilesA>

GenerateCopyFilePaths PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCMMInfo PROTO :DWORD,:DWORD
GetColorDirectoryA PROTO :DWORD,:DWORD,:DWORD
GetColorDirectory equ <GetColorDirectoryA>

GetColorProfileElement PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetColorProfileElementTag PROTO :DWORD,:DWORD,:DWORD
GetColorProfileFromHandle PROTO :DWORD,:DWORD,:DWORD
GetColorProfileHeader PROTO :DWORD,:DWORD
GetCountColorProfileElements PROTO :DWORD,:DWORD
GetNamedProfileInfo PROTO :DWORD,:DWORD
GetPS2ColorRenderingDictionary PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPS2ColorRenderingIntent PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPS2ColorSpaceArray PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetStandardColorSpaceProfileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetStandardColorSpaceProfile equ <GetStandardColorSpaceProfileA>

InstallColorProfileA PROTO :DWORD,:DWORD
InstallColorProfile equ <InstallColorProfileA>

InternalGetDeviceConfig PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2CSAFromLCS PROTO :DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2ColorRenderingDictionary PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2ColorRenderingDictionary2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2ColorSpaceArray PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2ColorSpaceArray2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2PreviewCRD PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalGetPS2PreviewCRD2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalRefreshCalibration PROTO :DWORD,:DWORD
InternalSetDeviceConfig PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InternalWcsAssociateColorProfileWithDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD
IsColorProfileTagPresent PROTO :DWORD,:DWORD,:DWORD
IsColorProfileValid PROTO :DWORD,:DWORD
OpenColorProfileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
OpenColorProfile equ <OpenColorProfileA>

OpenDisplay PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegisterCMMA PROTO :DWORD,:DWORD,:DWORD
RegisterCMM equ <RegisterCMMA>

SelectCMM PROTO :DWORD
SetColorProfileElement PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetColorProfileElementReference PROTO :DWORD,:DWORD,:DWORD
SetColorProfileElementSize PROTO :DWORD,:DWORD,:DWORD
SetColorProfileHeader PROTO :DWORD,:DWORD
SetStandardColorSpaceProfileA PROTO :DWORD,:DWORD,:DWORD
SetStandardColorSpaceProfile equ <SetStandardColorSpaceProfileA>

SpoolerCopyFileEvent PROTO :DWORD,:DWORD,:DWORD
TranslateBitmapBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TranslateColors PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UninstallColorProfileA PROTO :DWORD,:DWORD,:DWORD
UninstallColorProfile equ <UninstallColorProfileA>

UnregisterCMMA PROTO :DWORD,:DWORD
UnregisterCMM equ <UnregisterCMMA>

WcsAssociateColorProfileWithDevice PROTO :DWORD,:DWORD,:DWORD
WcsCheckColors PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsCreateIccProfile PROTO :DWORD,:DWORD
WcsDisassociateColorProfileFromDevice PROTO :DWORD,:DWORD,:DWORD
WcsEnumColorProfiles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsEnumColorProfilesSize PROTO :DWORD,:DWORD,:DWORD
WcsGetCalibrationManagementState PROTO :DWORD
WcsGetDefaultColorProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsGetDefaultColorProfileSize PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsGetDefaultRenderingIntent PROTO :DWORD,:DWORD
WcsGetUsePerUserProfiles PROTO :DWORD,:DWORD,:DWORD
WcsGpCanInstallOrUninstallProfiles PROTO :DWORD
WcsOpenColorProfileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsOpenColorProfile equ <WcsOpenColorProfileA>

WcsSetCalibrationManagementState PROTO :DWORD
WcsSetDefaultColorProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WcsSetDefaultRenderingIntent PROTO :DWORD,:DWORD
WcsSetUsePerUserProfiles PROTO :DWORD,:DWORD,:DWORD
WcsTranslateColors PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

