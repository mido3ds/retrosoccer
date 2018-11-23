; ..\X86\powrprof.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CallNtPowerInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CanUserWritePwrScheme PROTO
DeletePwrScheme PROTO :DWORD
DevicePowerClose PROTO
DevicePowerEnumDevices PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DevicePowerOpen PROTO :DWORD
DevicePowerSetDeviceState PROTO :DWORD,:DWORD,:DWORD
EnumPwrSchemes PROTO :DWORD,:DWORD
GUIDFormatToGlobalPowerPolicy PROTO :DWORD,:DWORD
GUIDFormatToPowerPolicy PROTO :DWORD,:DWORD
GetActivePwrScheme PROTO :DWORD
GetCurrentPowerPolicies PROTO :DWORD,:DWORD
GetPwrCapabilities PROTO :DWORD
GetPwrDiskSpindownRange PROTO :DWORD,:DWORD
IsAdminOverrideActive PROTO :DWORD
IsPwrHibernateAllowed PROTO
IsPwrShutdownAllowed PROTO
IsPwrSuspendAllowed PROTO
LoadCurrentPwrScheme PROTO :DWORD,:DWORD,:DWORD,:DWORD
MergeLegacyPwrScheme PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerApplyPowerRequestOverride PROTO
PowerCanRestoreIndividualDefaultPowerScheme PROTO :DWORD
PowerCreatePossibleSetting PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerCreateSetting PROTO :DWORD,:DWORD,:DWORD
PowerCustomizePlatformPowerSettings PROTO
PowerDebugDifPowerPolicies PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerDebugDifSystemPowerPolicies PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerDebugDumpPowerPolicy PROTO :DWORD,:DWORD,:DWORD
PowerDebugDumpPowerScheme PROTO :DWORD,:DWORD,:DWORD
PowerDebugDumpSystemPowerCapabilities PROTO :DWORD,:DWORD,:DWORD
PowerDebugDumpSystemPowerPolicy PROTO :DWORD,:DWORD,:DWORD
PowerDeleteScheme PROTO :DWORD,:DWORD
PowerDeterminePlatformRole PROTO
PowerDeterminePlatformRoleEx PROTO :DWORD
PowerDuplicateScheme PROTO :DWORD,:DWORD,:DWORD
PowerEnumerate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerGetActiveScheme PROTO :DWORD,:DWORD
PowerImportPowerScheme PROTO :DWORD,:DWORD,:DWORD
PowerIsSettingRangeDefined PROTO :DWORD,:DWORD
PowerOpenSystemPowerKey PROTO :DWORD,:DWORD,:DWORD
PowerOpenUserPowerKey PROTO :DWORD,:DWORD,:DWORD
PowerPolicyToGUIDFormat PROTO :DWORD,:DWORD
PowerReadACDefaultIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadACValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadACValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadDCDefaultIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadDCValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadDCValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadDescription PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadFriendlyName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadIconResourceSpecifier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadPossibleDescription PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadPossibleFriendlyName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadPossibleValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerReadSecurityDescriptor PROTO :DWORD,:DWORD,:DWORD
PowerReadSettingAttributes PROTO :DWORD,:DWORD
PowerReadValueIncrement PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerReadValueMax PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerReadValueMin PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerReadValueUnitsSpecifier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerRegisterSuspendResumeNotification PROTO :DWORD,:DWORD,:DWORD
PowerRemovePowerSetting PROTO :DWORD,:DWORD
PowerReplaceDefaultPowerSchemes PROTO
PowerReportThermalEvent PROTO :DWORD
PowerRestoreDefaultPowerSchemes PROTO
PowerRestoreIndividualDefaultPowerScheme PROTO :DWORD
PowerSetActiveScheme PROTO :DWORD,:DWORD
PowerSetAlsBrightnessOffset PROTO :DWORD
PowerSettingAccessCheck PROTO :DWORD,:DWORD
PowerSettingAccessCheckEx PROTO :DWORD,:DWORD,:DWORD
PowerSettingRegisterNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerSettingUnregisterNotification PROTO :DWORD
PowerUnregisterSuspendResumeNotification PROTO :DWORD
PowerWriteACDefaultIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteACValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteDCDefaultIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteDCValueIndex PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteDescription PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteFriendlyName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteIconResourceSpecifier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWritePossibleDescription PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWritePossibleFriendlyName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWritePossibleValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PowerWriteSecurityDescriptor PROTO :DWORD,:DWORD,:DWORD
PowerWriteSettingAttributes PROTO :DWORD,:DWORD,:DWORD
PowerWriteValueIncrement PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerWriteValueMax PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerWriteValueMin PROTO :DWORD,:DWORD,:DWORD,:DWORD
PowerWriteValueUnitsSpecifier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadGlobalPwrPolicy PROTO :DWORD
ReadProcessorPwrScheme PROTO :DWORD,:DWORD
ReadPwrScheme PROTO :DWORD,:DWORD
SetActivePwrScheme PROTO :DWORD,:DWORD,:DWORD
SetSuspendState PROTO :DWORD,:DWORD,:DWORD
ValidatePowerPolicies PROTO :DWORD,:DWORD
WriteGlobalPwrPolicy PROTO :DWORD
WriteProcessorPwrScheme PROTO :DWORD,:DWORD
WritePwrScheme PROTO :DWORD,:DWORD,:DWORD,:DWORD

