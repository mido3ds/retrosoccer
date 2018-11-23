; ..\X86\devmgr.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DeviceAdvancedPropertiesA PROTO :DWORD,:DWORD,:DWORD
DeviceAdvancedProperties equ <DeviceAdvancedPropertiesA>

DeviceCreateHardwarePage PROTO :DWORD,:DWORD
DeviceCreateHardwarePageCustom PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeviceCreateHardwarePageEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceManager_ExecuteA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceManager_Execute equ <DeviceManager_ExecuteA>

DeviceProblemTextA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeviceProblemText equ <DeviceProblemTextA>

DeviceProblemWizardA PROTO :DWORD,:DWORD,:DWORD
DeviceProblemWizard equ <DeviceProblemWizardA>

DeviceProblenWizard_RunDLLA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceProblenWizard_RunDLL equ <DeviceProblenWizard_RunDLLA>

DevicePropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceProperties equ <DevicePropertiesA>

DevicePropertiesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DevicePropertiesEx equ <DevicePropertiesExA>

DeviceProperties_RunDLLA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceProperties_RunDLL equ <DeviceProperties_RunDLLA>


