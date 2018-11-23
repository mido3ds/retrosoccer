; ..\X86\Xinput.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DllMain PROTO :DWORD,:DWORD,:DWORD
XInputEnable PROTO :DWORD
XInputGetAudioDeviceIds PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
XInputGetBatteryInformation PROTO :DWORD,:DWORD,:DWORD
XInputGetCapabilities PROTO :DWORD,:DWORD,:DWORD
XInputGetKeystroke PROTO :DWORD,:DWORD,:DWORD
XInputGetState PROTO :DWORD,:DWORD
XInputSetState PROTO :DWORD,:DWORD

