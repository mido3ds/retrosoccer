; ..\X86\appmgmts.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

CsCreateClassStore PROTO :DWORD,:DWORD
CsEnumApps PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CsGetAppCategories PROTO :DWORD
CsGetClassAccess PROTO :DWORD
CsGetClassStore PROTO :DWORD,:DWORD
CsGetClassStorePath PROTO :DWORD,:DWORD
CsRegisterAppCategory PROTO :DWORD
CsServerGetClassStore PROTO :DWORD,:DWORD,:DWORD
CsUnregisterAppCategory PROTO :DWORD
GenerateGroupPolicy PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ProcessGroupPolicyObjectsEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReleaseAppCategoryInfoList PROTO :DWORD
ReleasePackageDetail PROTO :DWORD
ReleasePackageInfo PROTO :DWORD
ServiceMain PROTO :DWORD,:DWORD

