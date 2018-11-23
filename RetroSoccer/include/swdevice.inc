; ..\X86\swdevice.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SwDeviceClose PROTO :DWORD
SwDeviceCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SwDeviceGetLifetime PROTO :DWORD,:DWORD
SwDeviceInterfacePropertySet PROTO :DWORD,:DWORD,:DWORD,:DWORD
SwDeviceInterfaceRegister PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SwDeviceInterfaceSetState PROTO :DWORD,:DWORD,:DWORD
SwDevicePropertySet PROTO :DWORD,:DWORD,:DWORD
SwDeviceSetLifetime PROTO :DWORD,:DWORD
SwMemFree PROTO :DWORD

