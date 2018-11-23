; ..\X86\advpack.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AddDelBackupEntryA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddDelBackupEntry equ <AddDelBackupEntryA>

AdvInstallFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AdvInstallFile equ <AdvInstallFileA>

CloseINFEngine PROTO :DWORD
DelNodeA PROTO :DWORD,:DWORD
DelNode equ <DelNodeA>

ExecuteCabA PROTO :DWORD,:DWORD,:DWORD
ExecuteCab equ <ExecuteCabA>

ExtractFilesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtractFiles equ <ExtractFilesA>

FileSaveMarkNotExistA PROTO :DWORD,:DWORD,:DWORD
FileSaveMarkNotExist equ <FileSaveMarkNotExistA>

FileSaveRestoreOnINFA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FileSaveRestoreOnINF equ <FileSaveRestoreOnINFA>

GetVersionFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVersionFromFile equ <GetVersionFromFileA>

GetVersionFromFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVersionFromFileEx equ <GetVersionFromFileExA>

IsNTAdmin PROTO :DWORD,:DWORD
LaunchINFSection PROTO :DWORD,:DWORD,:DWORD,:DWORD
NeedReboot PROTO :DWORD
NeedRebootInit PROTO
OpenINFEngineA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OpenINFEngine equ <OpenINFEngineA>

RebootCheckOnInstallA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RebootCheckOnInstall equ <RebootCheckOnInstallA>

RegInstallA PROTO :DWORD,:DWORD,:DWORD
RegInstall equ <RegInstallA>

RegRestoreAllA PROTO :DWORD,:DWORD,:DWORD
RegRestoreAll equ <RegRestoreAllA>

RegSaveRestoreA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSaveRestore equ <RegSaveRestoreA>

RegSaveRestoreOnINFA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSaveRestoreOnINF equ <RegSaveRestoreOnINFA>

RunSetupCommandA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RunSetupCommand equ <RunSetupCommandA>

SetPerUserSecValuesA PROTO :DWORD
SetPerUserSecValues equ <SetPerUserSecValuesA>

TranslateInfStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TranslateInfString equ <TranslateInfStringA>

TranslateInfStringExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TranslateInfStringEx equ <TranslateInfStringExA>

UserInstStubWrapperA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UserInstStubWrapper equ <UserInstStubWrapperA>

UserUnInstStubWrapperA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UserUnInstStubWrapper equ <UserUnInstStubWrapperA>


