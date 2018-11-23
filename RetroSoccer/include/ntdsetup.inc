; ..\X86\ntdsetup.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AdamFetchDemotionInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdamGetCrossRefs PROTO :DWORD,:DWORD,:DWORD,:DWORD
FreeDemotionInfo PROTO :DWORD
NtdsAdamValidateInst PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtdsAdamValidateServiceAccount PROTO :DWORD,:DWORD
NtdsAdamVerifyBind PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtdsCheckMachineAccountFlags PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtdsDemote PROTO :DWORD,:DWORD
NtdsFreeDnsRRInfo PROTO :DWORD
NtdsGetDefaultDnsName PROTO :DWORD,:DWORD
NtdsInstall PROTO :DWORD,:DWORD,:DWORD,:DWORD
NtdsInstallCancel PROTO
NtdsInstallReplicateFull PROTO :DWORD,:DWORD,:DWORD
NtdsInstallShutdown PROTO
NtdsInstallUndo PROTO
NtdsPrepareForDemotion PROTO :DWORD,:DWORD
NtdsPrepareForDemotionUndo PROTO :DWORD
NtdsPrepareForDsUpgrade PROTO :DWORD,:DWORD
NtdsSetReplicaMachineAccount PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
NtdspConfigRegistry PROTO :DWORD,:DWORD
NtdspDNStoRFC1779Name PROTO :DWORD,:DWORD,:DWORD
NtdspFindSite PROTO :DWORD,:DWORD
NtdspValidateInstallParameters PROTO :DWORD
NtdspVerifyDsEnvironment PROTO :DWORD,:DWORD

