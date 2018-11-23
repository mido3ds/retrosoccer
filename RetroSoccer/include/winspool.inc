; ..\X86\WinSpool.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AbortPrinter PROTO :DWORD
AddFormA PROTO :DWORD,:DWORD,:DWORD
AddForm equ <AddFormA>

AddJobA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AddJob equ <AddJobA>

AddMonitorA PROTO :DWORD,:DWORD,:DWORD
AddMonitor equ <AddMonitorA>

AddPerMachineConnectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddPerMachineConnection equ <AddPerMachineConnectionA>

AddPortA PROTO :DWORD,:DWORD,:DWORD
AddPort equ <AddPortA>

AddPortExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddPortEx equ <AddPortExA>

AddPrintProcessorA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddPrintProcessor equ <AddPrintProcessorA>

AddPrintProvidorA PROTO :DWORD,:DWORD,:DWORD
AddPrintProvidor equ <AddPrintProvidorA>

AddPrinterA PROTO :DWORD,:DWORD,:DWORD
AddPrinter equ <AddPrinterA>

AddPrinterConnection2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddPrinterConnection2 equ <AddPrinterConnection2A>

AddPrinterConnectionA PROTO :DWORD
AddPrinterConnection equ <AddPrinterConnectionA>

AddPrinterDriverA PROTO :DWORD,:DWORD,:DWORD
AddPrinterDriver equ <AddPrinterDriverA>

AddPrinterDriverExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddPrinterDriverEx equ <AddPrinterDriverExA>

AdvancedDocumentPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdvancedDocumentProperties equ <AdvancedDocumentPropertiesA>

ClosePrinter PROTO :DWORD
CloseSpoolFileHandle PROTO :DWORD,:DWORD
CommitSpoolData PROTO :DWORD,:DWORD,:DWORD
ConfigurePortA PROTO :DWORD,:DWORD,:DWORD
ConfigurePort equ <ConfigurePortA>

ConnectToPrinterDlg PROTO :DWORD,:DWORD
CorePrinterDriverInstalledA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CorePrinterDriverInstalled equ <CorePrinterDriverInstalledA>

CreatePrintAsyncNotifyChannel PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePrinterIC PROTO :DWORD,:DWORD
DEVICECAPABILITIES PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeleteFormA PROTO :DWORD,:DWORD
DeleteForm equ <DeleteFormA>

DeleteJobNamedProperty PROTO :DWORD,:DWORD,:DWORD
DeleteMonitorA PROTO :DWORD,:DWORD,:DWORD
DeleteMonitor equ <DeleteMonitorA>

DeletePerMachineConnectionA PROTO :DWORD,:DWORD
DeletePerMachineConnection equ <DeletePerMachineConnectionA>

DeletePortA PROTO :DWORD,:DWORD,:DWORD
DeletePort equ <DeletePortA>

DeletePrintProcessorA PROTO :DWORD,:DWORD,:DWORD
DeletePrintProcessor equ <DeletePrintProcessorA>

DeletePrintProvidorA PROTO :DWORD,:DWORD,:DWORD
DeletePrintProvidor equ <DeletePrintProvidorA>

DeletePrinter PROTO :DWORD
DeletePrinterConnectionA PROTO :DWORD
DeletePrinterConnection equ <DeletePrinterConnectionA>

DeletePrinterDataA PROTO :DWORD,:DWORD
DeletePrinterData equ <DeletePrinterDataA>

DeletePrinterDataExA PROTO :DWORD,:DWORD,:DWORD
DeletePrinterDataEx equ <DeletePrinterDataExA>

DeletePrinterDriverA PROTO :DWORD,:DWORD,:DWORD
DeletePrinterDriver equ <DeletePrinterDriverA>

DeletePrinterDriverExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeletePrinterDriverEx equ <DeletePrinterDriverExA>

DeletePrinterDriverPackageA PROTO :DWORD,:DWORD,:DWORD
DeletePrinterDriverPackage equ <DeletePrinterDriverPackageA>

DeletePrinterIC PROTO :DWORD
DeletePrinterKeyA PROTO :DWORD,:DWORD
DeletePrinterKey equ <DeletePrinterKeyA>

DevQueryPrint PROTO :DWORD,:DWORD,:DWORD
DevQueryPrintEx PROTO :DWORD
DeviceCapabilitiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeviceCapabilities equ <DeviceCapabilitiesA>

DevicePropertySheets PROTO :DWORD,:DWORD
DocumentPropertiesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DocumentProperties equ <DocumentPropertiesA>

DocumentPropertySheets PROTO :DWORD,:DWORD
EXTDEVICEMODE PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EndDocPrinter PROTO :DWORD
EndPagePrinter PROTO :DWORD
EnumFormsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumForms equ <EnumFormsA>

EnumJobNamedProperties PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumJobsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumJobs equ <EnumJobsA>

EnumMonitorsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumMonitors equ <EnumMonitorsA>

EnumPerMachineConnectionsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPerMachineConnections equ <EnumPerMachineConnectionsA>

EnumPortsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPorts equ <EnumPortsA>

EnumPrintProcessorDatatypesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrintProcessorDatatypes equ <EnumPrintProcessorDatatypesA>

EnumPrintProcessorsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrintProcessors equ <EnumPrintProcessorsA>

EnumPrinterDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrinterData equ <EnumPrinterDataA>

EnumPrinterDataExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrinterDataEx equ <EnumPrinterDataExA>

EnumPrinterDriversA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrinterDrivers equ <EnumPrinterDriversA>

EnumPrinterKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrinterKey equ <EnumPrinterKeyA>

EnumPrinterPropertySheets PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumPrintersA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumPrinters equ <EnumPrintersA>

ExtDeviceMode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExternalConnectToLd64In32Server PROTO :DWORD
FindClosePrinterChangeNotification PROTO :DWORD
FindFirstPrinterChangeNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
FindNextPrinterChangeNotification PROTO :DWORD,:DWORD,:DWORD,:DWORD
FlushPrinter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ForceUnloadDriver PROTO :DWORD
FreePrintNamedPropertyArray PROTO :DWORD,:DWORD
FreePrintPropertyValue PROTO :DWORD
FreePrinterNotifyInfo PROTO :DWORD
GetCorePrinterDriversA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCorePrinterDrivers equ <GetCorePrinterDriversA>

GetDefaultPrinterA PROTO :DWORD,:DWORD
GetDefaultPrinter equ <GetDefaultPrinterA>

GetFormA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetForm equ <GetFormA>

GetJobA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetJob equ <GetJobA>

GetJobNamedPropertyValue PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPrintClassObject PROTO :DWORD,:DWORD,:DWORD
GetPrintExecutionData PROTO :DWORD
GetPrintOutputInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPrintProcessorDirectoryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrintProcessorDirectory equ <GetPrintProcessorDirectoryA>

GetPrinterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinter equ <GetPrinterA>

GetPrinterDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterData equ <GetPrinterDataA>

GetPrinterDataExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterDataEx equ <GetPrinterDataExA>

GetPrinterDriver2A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterDriver2 equ <GetPrinterDriver2A>

GetPrinterDriverA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterDriver equ <GetPrinterDriverA>

GetPrinterDriverDirectoryA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterDriverDirectory equ <GetPrinterDriverDirectoryA>

GetPrinterDriverPackagePathA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetPrinterDriverPackagePath equ <GetPrinterDriverPackagePathA>

GetSpoolFileHandle PROTO :DWORD
InstallPrinterDriverFromPackageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InstallPrinterDriverFromPackage equ <InstallPrinterDriverFromPackageA>

IsValidDevmodeA PROTO :DWORD,:DWORD
IsValidDevmode equ <IsValidDevmodeA>

LoadPrinterDriver PROTO :DWORD
OpenPrinter2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
OpenPrinter2 equ <OpenPrinter2A>

OpenPrinterA PROTO :DWORD,:DWORD,:DWORD
OpenPrinter equ <OpenPrinterA>

PlayGdiScriptOnPrinterIC PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PrintUICreateInstance PROTO :DWORD,:DWORD
PrintUIWebPnpEntry PROTO :DWORD
PrintUIWebPnpPostEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
PrinterMessageBoxA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PrinterMessageBox equ <PrinterMessageBoxA>

PrinterProperties PROTO :DWORD,:DWORD
PublishPrinterA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PublishPrinter equ <PublishPrinterA>

ReadPrinter PROTO :DWORD,:DWORD,:DWORD,:DWORD
RefCntLoadDriver PROTO :DWORD,:DWORD,:DWORD,:DWORD
RefCntUnloadDriver PROTO :DWORD,:DWORD
RegisterForPrintAsyncNotifications PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReportJobProcessingProgress PROTO :DWORD,:DWORD,:DWORD,:DWORD
ResetPrinterA PROTO :DWORD,:DWORD
ResetPrinter equ <ResetPrinterA>

RouterFreeBidiResponseContainer PROTO :DWORD
ScheduleJob PROTO :DWORD,:DWORD
SeekPrinter PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SendRecvBidiData PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetDefaultPrinterA PROTO :DWORD
SetDefaultPrinter equ <SetDefaultPrinterA>

SetFormA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetForm equ <SetFormA>

SetJobA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetJob equ <SetJobA>

SetJobNamedProperty PROTO :DWORD,:DWORD,:DWORD
SetPortA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPort equ <SetPortA>

SetPrintExecutionData PROTO :DWORD,:DWORD,:DWORD
SetPrinterA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPrinter equ <SetPrinterA>

SetPrinterDataA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPrinterData equ <SetPrinterDataA>

SetPrinterDataExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPrinterDataEx equ <SetPrinterDataExA>

SetWinspoolOptions PROTO :DWORD,:DWORD
SplDriverUnloadComplete PROTO :DWORD
SplReadPrinter PROTO :DWORD,:DWORD,:DWORD
SpoolerPrinterEvent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SpoolerSetPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StartDocDlgA PROTO :DWORD,:DWORD
StartDocDlg equ <StartDocDlgA>

StartDocPrinterA PROTO :DWORD,:DWORD,:DWORD
StartDocPrinter equ <StartDocPrinterA>

StartPagePrinter PROTO :DWORD
UnRegisterForPrintAsyncNotifications PROTO :DWORD
UploadPrinterDriverPackageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UploadPrinterDriverPackage equ <UploadPrinterDriverPackageA>

WaitForPrinterChange PROTO :DWORD,:DWORD
WritePrinter PROTO :DWORD,:DWORD,:DWORD,:DWORD

