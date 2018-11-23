; ..\X86\dwmapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DwmAttachMilContent PROTO :DWORD
DwmDefWindowProc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DwmDetachMilContent PROTO :DWORD
DwmEnableBlurBehindWindow PROTO :DWORD,:DWORD
DwmEnableComposition PROTO :DWORD
DwmEnableMMCSS PROTO :DWORD
DwmExtendFrameIntoClientArea PROTO :DWORD,:DWORD
DwmFlush PROTO
DwmGetColorizationColor PROTO :DWORD,:DWORD
DwmGetCompositionTimingInfo PROTO :DWORD,:DWORD
DwmGetGraphicsStreamClient PROTO :DWORD,:DWORD
DwmGetGraphicsStreamTransformHint PROTO :DWORD,:DWORD
DwmGetTransportAttributes PROTO :DWORD,:DWORD,:DWORD
DwmGetWindowAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwmInvalidateIconicBitmaps PROTO :DWORD
DwmIsCompositionEnabled PROTO :DWORD
DwmModifyPreviousDxFrameDuration PROTO :DWORD,:DWORD,:DWORD
DwmQueryThumbnailSourceSize PROTO :DWORD,:DWORD
DwmRegisterThumbnail PROTO :DWORD,:DWORD,:DWORD
DwmRenderGesture PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwmSetDxFrameDuration PROTO :DWORD,:DWORD
DwmSetIconicLivePreviewBitmap PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwmSetIconicThumbnail PROTO :DWORD,:DWORD,:DWORD
DwmSetPresentParameters PROTO :DWORD,:DWORD
DwmSetWindowAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwmShowContact PROTO :DWORD,:DWORD
DwmTetherContact PROTO :DWORD,:DWORD,:DWORD,:DWORD
DwmTransitionOwnedWindow PROTO :DWORD,:DWORD
DwmUnregisterThumbnail PROTO :DWORD
DwmUpdateThumbnailProperties PROTO :DWORD,:DWORD

