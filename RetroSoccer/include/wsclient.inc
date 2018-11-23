; ..\X86\wsclient.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AcquireDeveloperLicense PROTO :DWORD,:DWORD
CheckDeveloperLicense PROTO :DWORD
GetApplicationURL PROTO :DWORD,:DWORD
RefreshBannedAppsList PROTO :DWORD,:DWORD,:DWORD,:DWORD
RemoveDeveloperLicense PROTO :DWORD
WSCallServer PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSCheckForConsumable PROTO :DWORD,:DWORD,:DWORD
WSEvaluatePackage PROTO :DWORD,:DWORD,:DWORD
WSGetEvaluatePackageAttempted PROTO :DWORD,:DWORD,:DWORD
WSLicenseCleanUpState PROTO
WSLicenseClose PROTO :DWORD
WSLicenseFilterValidAppCategoryIds PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSLicenseGetAllUserTokens PROTO :DWORD,:DWORD,:DWORD
WSLicenseGetAllValidAppCategoryIds PROTO :DWORD,:DWORD,:DWORD
WSLicenseGetDevInstalledApps PROTO :DWORD,:DWORD,:DWORD
WSLicenseGetExtendedUserInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSLicenseGetFeatureLicenseResults PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSLicenseGetLicensesForProducts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSLicenseGetOAuthServiceTicket PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WSLicenseGetProductLicenseResults PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSLicenseInstallLicense PROTO :DWORD,:DWORD,:DWORD,:DWORD
WSLicenseOpen PROTO :DWORD
WSLicenseRefreshLicense PROTO :DWORD,:DWORD
WSLicenseRetrieveMachineID PROTO :DWORD,:DWORD
WSLicenseRevokeLicenses PROTO :DWORD,:DWORD,:DWORD
WSLicenseUninstallLicense PROTO :DWORD,:DWORD,:DWORD
WSNotifyOOBECompletion PROTO
WSNotifyPackageInstalled PROTO :DWORD,:DWORD,:DWORD
WSTriggerOOBEFileValidation PROTO

