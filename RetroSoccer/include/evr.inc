; ..\X86\evr.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

MFCreateVideoMixer PROTO :DWORD,:DWORD,:DWORD,:DWORD
MFCreateVideoMixerAndPresenter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MFCreateVideoOTA PROTO :DWORD,:DWORD
MFCreateVideoOT equ <MFCreateVideoOTA>

MFCreateVideoPresenter PROTO :DWORD,:DWORD,:DWORD,:DWORD
MFCreateVideoPresenter2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
MFCreateVideoSampleAllocator PROTO :DWORD,:DWORD
MFCreateVideoSampleFromSurface PROTO :DWORD,:DWORD
MFGetPlaneSize PROTO :DWORD,:DWORD,:DWORD,:DWORD
MFIsFormatYUV PROTO :DWORD

