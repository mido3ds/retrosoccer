; ..\X86\tdh.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

TdhAggregatePayloadFilters PROTO :DWORD,:DWORD,:DWORD,:DWORD
TdhCleanupPayloadEventFilterDescriptor PROTO :DWORD
TdhCloseDecodingHandle PROTO :DWORD
TdhCreatePayloadFilter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhDeletePayloadFilter PROTO :DWORD
TdhEnumerateManifestProviderEvents PROTO :DWORD,:DWORD,:DWORD
TdhEnumerateProviderFieldInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
TdhEnumerateProviderFilters PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhEnumerateProviders PROTO :DWORD,:DWORD
TdhFormatProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhGetDecodingParameter PROTO :DWORD,:DWORD
TdhGetEventInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhGetEventMapInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
TdhGetManifestEventInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD
TdhGetProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhGetPropertySize PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhGetWppMessage PROTO :DWORD,:DWORD,:DWORD,:DWORD
TdhGetWppProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhLoadManifest PROTO :DWORD
TdhLoadManifestFromBinary PROTO :DWORD
TdhOpenDecodingHandle PROTO :DWORD
TdhQueryProviderFieldInformation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TdhSetDecodingParameter PROTO :DWORD,:DWORD
TdhUnloadManifest PROTO :DWORD

