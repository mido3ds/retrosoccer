; ..\X86\iscsidsc.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AddISNSServerA PROTO :DWORD
AddISNSServer equ <AddISNSServerA>

AddIScsiConnectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddIScsiConnection equ <AddIScsiConnectionA>

AddIScsiSendTargetPortalA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddIScsiSendTargetPortal equ <AddIScsiSendTargetPortalA>

AddIScsiStaticTargetA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddIScsiStaticTarget equ <AddIScsiStaticTargetA>

AddPersistentIScsiDeviceA PROTO :DWORD
AddPersistentIScsiDevice equ <AddPersistentIScsiDeviceA>

AddRadiusServerA PROTO :DWORD
AddRadiusServer equ <AddRadiusServerA>

ClearPersistentIScsiDevices PROTO
DllMain PROTO :DWORD,:DWORD,:DWORD
GetDevicesForIScsiSessionA PROTO :DWORD,:DWORD,:DWORD
GetDevicesForIScsiSession equ <GetDevicesForIScsiSessionA>

GetIScsiIKEInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetIScsiIKEInfo equ <GetIScsiIKEInfoA>

GetIScsiInitiatorNodeNameA PROTO :DWORD
GetIScsiInitiatorNodeName equ <GetIScsiInitiatorNodeNameA>

GetIScsiSessionListA PROTO :DWORD,:DWORD,:DWORD
GetIScsiSessionList equ <GetIScsiSessionListA>

GetIScsiSessionListEx PROTO :DWORD,:DWORD,:DWORD
GetIScsiTargetInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetIScsiTargetInformation equ <GetIScsiTargetInformationA>

GetIScsiVersionInformation PROTO :DWORD
LoginIScsiTargetA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LoginIScsiTarget equ <LoginIScsiTargetA>

LogoutIScsiTarget PROTO :DWORD
RefreshISNSServerA PROTO :DWORD
RefreshISNSServer equ <RefreshISNSServerA>

RefreshIScsiSendTargetPortalA PROTO :DWORD,:DWORD,:DWORD
RefreshIScsiSendTargetPortal equ <RefreshIScsiSendTargetPortalA>

RemoveISNSServerA PROTO :DWORD
RemoveISNSServer equ <RemoveISNSServerA>

RemoveIScsiConnection PROTO :DWORD,:DWORD
RemoveIScsiPersistentTargetA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RemoveIScsiPersistentTarget equ <RemoveIScsiPersistentTargetA>

RemoveIScsiSendTargetPortalA PROTO :DWORD,:DWORD,:DWORD
RemoveIScsiSendTargetPortal equ <RemoveIScsiSendTargetPortalA>

RemoveIScsiStaticTargetA PROTO :DWORD
RemoveIScsiStaticTarget equ <RemoveIScsiStaticTargetA>

RemovePersistentIScsiDeviceA PROTO :DWORD
RemovePersistentIScsiDevice equ <RemovePersistentIScsiDeviceA>

RemoveRadiusServerA PROTO :DWORD
RemoveRadiusServer equ <RemoveRadiusServerA>

ReportActiveIScsiTargetMappingsA PROTO :DWORD,:DWORD,:DWORD
ReportActiveIScsiTargetMappings equ <ReportActiveIScsiTargetMappingsA>

ReportISNSServerListA PROTO :DWORD,:DWORD
ReportISNSServerList equ <ReportISNSServerListA>

ReportIScsiInitiatorListA PROTO :DWORD,:DWORD
ReportIScsiInitiatorList equ <ReportIScsiInitiatorListA>

ReportIScsiPersistentLoginsA PROTO :DWORD,:DWORD,:DWORD
ReportIScsiPersistentLogins equ <ReportIScsiPersistentLoginsA>

ReportIScsiSendTargetPortalsA PROTO :DWORD,:DWORD
ReportIScsiSendTargetPortals equ <ReportIScsiSendTargetPortalsA>

ReportIScsiSendTargetPortalsExA PROTO :DWORD,:DWORD,:DWORD
ReportIScsiSendTargetPortalsEx equ <ReportIScsiSendTargetPortalsExA>

ReportIScsiTargetPortalsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReportIScsiTargetPortals equ <ReportIScsiTargetPortalsA>

ReportIScsiTargetsA PROTO :DWORD,:DWORD,:DWORD
ReportIScsiTargets equ <ReportIScsiTargetsA>

ReportPersistentIScsiDevicesA PROTO :DWORD,:DWORD
ReportPersistentIScsiDevices equ <ReportPersistentIScsiDevicesA>

ReportRadiusServerListA PROTO :DWORD,:DWORD
ReportRadiusServerList equ <ReportRadiusServerListA>

SendScsiInquiry PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SendScsiReadCapacity PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SendScsiReportLuns PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetIScsiGroupPresharedKey PROTO :DWORD,:DWORD,:DWORD
SetIScsiIKEInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetIScsiIKEInfo equ <SetIScsiIKEInfoA>

SetIScsiInitiatorCHAPSharedSecret PROTO :DWORD,:DWORD
SetIScsiInitiatorNodeNameA PROTO :DWORD
SetIScsiInitiatorNodeName equ <SetIScsiInitiatorNodeNameA>

SetIScsiInitiatorRADIUSSharedSecret PROTO :DWORD,:DWORD
SetIScsiTunnelModeOuterAddressA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetIScsiTunnelModeOuterAddress equ <SetIScsiTunnelModeOuterAddressA>

SetupPersistentIScsiDevices PROTO
SetupPersistentIScsiVolumes PROTO

