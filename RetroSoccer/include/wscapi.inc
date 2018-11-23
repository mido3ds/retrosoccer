; ..\X86\wscapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WscGetAntiMalwareUri PROTO :DWORD
WscGetSecurityProviderHealth PROTO :DWORD,:DWORD
WscQueryAntiMalwareUri PROTO
WscRegisterForChanges PROTO :DWORD,:DWORD,:DWORD,:DWORD
WscRegisterForUserNotifications PROTO
WscUnRegisterChanges PROTO :DWORD
wscAntiSpywareGetStatus PROTO :DWORD,:DWORD
wscAntiVirusExpiredBeyondThreshold PROTO :DWORD,:DWORD,:DWORD
wscAntiVirusGetStatus PROTO :DWORD,:DWORD
wscAutoUpdatesEnableScheduledMode PROTO
wscAutoUpdatesGetStatus PROTO :DWORD
wscFirewallGetStatus PROTO :DWORD,:DWORD
wscGeneralSecurityGetStatus PROTO :DWORD,:DWORD
wscGetAlertStatus PROTO :DWORD,:DWORD
wscIcfEnable PROTO
wscIeSettingsFix PROTO
wscIsDefenderAntivirusSupported PROTO :DWORD
wscLuaSettingsFix PROTO :DWORD
wscOverrideComponentStatus PROTO :DWORD,:DWORD
wscPing PROTO
wscProductInfoFree PROTO :DWORD,:DWORD
wscRegisterChangeNotification PROTO :DWORD,:DWORD
wscRegisterSecurityProduct PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
wscUnRegisterChangeNotification PROTO :DWORD
wscUnregisterSecurityProduct PROTO :DWORD
wscUpdateProductStatus PROTO :DWORD,:DWORD,:DWORD

