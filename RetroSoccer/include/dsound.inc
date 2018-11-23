; ..\X86\dsound.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DirectSoundCaptureCreate PROTO :DWORD,:DWORD,:DWORD
DirectSoundCaptureCreate8 PROTO :DWORD,:DWORD,:DWORD
DirectSoundCaptureEnumerateA PROTO :DWORD,:DWORD
DirectSoundCaptureEnumerate equ <DirectSoundCaptureEnumerateA>

DirectSoundCreate PROTO :DWORD,:DWORD,:DWORD
DirectSoundCreate8 PROTO :DWORD,:DWORD,:DWORD
DirectSoundEnumerateA PROTO :DWORD,:DWORD
DirectSoundEnumerate equ <DirectSoundEnumerateA>

DirectSoundFullDuplexCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDeviceID PROTO :DWORD,:DWORD

