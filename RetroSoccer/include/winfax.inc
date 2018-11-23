; ..\X86\winfax.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FaxAbort PROTO :DWORD,:DWORD
FaxAccessCheck PROTO :DWORD,:DWORD
FaxClose PROTO :DWORD
FaxCompleteJobParamsA PROTO :DWORD,:DWORD
FaxCompleteJobParams equ <FaxCompleteJobParamsA>

FaxConnectFaxServerA PROTO :DWORD,:DWORD
FaxConnectFaxServer equ <FaxConnectFaxServerA>

FaxEnableRoutingMethodA PROTO :DWORD,:DWORD,:DWORD
FaxEnableRoutingMethod equ <FaxEnableRoutingMethodA>

FaxEnumGlobalRoutingInfoA PROTO :DWORD,:DWORD,:DWORD
FaxEnumGlobalRoutingInfo equ <FaxEnumGlobalRoutingInfoA>

FaxEnumJobsA PROTO :DWORD,:DWORD,:DWORD
FaxEnumJobs equ <FaxEnumJobsA>

FaxEnumPortsA PROTO :DWORD,:DWORD,:DWORD
FaxEnumPorts equ <FaxEnumPortsA>

FaxEnumRoutingMethodsA PROTO :DWORD,:DWORD,:DWORD
FaxEnumRoutingMethods equ <FaxEnumRoutingMethodsA>

FaxFreeBuffer PROTO :DWORD
FaxGetConfigurationA PROTO :DWORD,:DWORD
FaxGetConfiguration equ <FaxGetConfigurationA>

FaxGetDeviceStatusA PROTO :DWORD,:DWORD
FaxGetDeviceStatus equ <FaxGetDeviceStatusA>

FaxGetJobA PROTO :DWORD,:DWORD,:DWORD
FaxGetJob equ <FaxGetJobA>

FaxGetLoggingCategoriesA PROTO :DWORD,:DWORD,:DWORD
FaxGetLoggingCategories equ <FaxGetLoggingCategoriesA>

FaxGetPageData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FaxGetPortA PROTO :DWORD,:DWORD
FaxGetPort equ <FaxGetPortA>

FaxGetRoutingInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FaxGetRoutingInfo equ <FaxGetRoutingInfoA>

FaxInitializeEventQueue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FaxOpenPort PROTO :DWORD,:DWORD,:DWORD,:DWORD
FaxPrintCoverPageA PROTO :DWORD,:DWORD
FaxPrintCoverPage equ <FaxPrintCoverPageA>

FaxSendDocumentA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FaxSendDocument equ <FaxSendDocumentA>

FaxSendDocumentForBroadcastA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FaxSendDocumentForBroadcast equ <FaxSendDocumentForBroadcastA>

FaxSetConfigurationA PROTO :DWORD,:DWORD
FaxSetConfiguration equ <FaxSetConfigurationA>

FaxSetGlobalRoutingInfoA PROTO :DWORD,:DWORD
FaxSetGlobalRoutingInfo equ <FaxSetGlobalRoutingInfoA>

FaxSetJobA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FaxSetJob equ <FaxSetJobA>

FaxSetLoggingCategoriesA PROTO :DWORD,:DWORD,:DWORD
FaxSetLoggingCategories equ <FaxSetLoggingCategoriesA>

FaxSetPortA PROTO :DWORD,:DWORD
FaxSetPort equ <FaxSetPortA>

FaxSetRoutingInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FaxSetRoutingInfo equ <FaxSetRoutingInfoA>

FaxStartPrintJobA PROTO :DWORD,:DWORD,:DWORD,:DWORD
FaxStartPrintJob equ <FaxStartPrintJobA>


