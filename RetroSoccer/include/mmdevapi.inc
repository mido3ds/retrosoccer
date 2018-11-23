; ..\X86\mmdevapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

ActivateAudioInterfaceAsync PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CleanupDeviceAPI PROTO
FlushDeviceTopologyCache PROTO
GenerateMediaEvent PROTO :DWORD,:DWORD
GetClassFromEndpointId PROTO :DWORD
GetEndpointGuidFromEndpointId PROTO :DWORD,:DWORD
GetEndpointIdFromDeviceInterfaceId PROTO :DWORD,:DWORD
GetSessionIdFromEndpointId PROTO :DWORD
InitializeDeviceAPI PROTO
MMDeviceCreateRegistryPropertyStore PROTO :DWORD,:DWORD,:DWORD
MMDeviceGetDeviceEnumerator PROTO :DWORD
MMDeviceGetEndpointManager PROTO :DWORD
MMDeviceGetPolicyConfig PROTO :DWORD
RegisterForMediaCallback PROTO :DWORD,:DWORD
UnregisterMediaCallback PROTO :DWORD

