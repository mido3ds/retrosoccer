; ..\X86\cryptui.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

ACUIProviderInvokeUI PROTO :DWORD
CertSelectionGetSerializedBlob PROTO :DWORD,:DWORD,:DWORD
CommonInit PROTO
CryptDllProtectPrompt PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptUIDlgCertMgr PROTO :DWORD
CryptUIDlgFreeCAContext PROTO :DWORD
CryptUIDlgFreePolicyServerContext PROTO :DWORD
CryptUIDlgSelectCA PROTO :DWORD
CryptUIDlgSelectC equ <CryptUIDlgSelectCA>

CryptUIDlgSelectCertificateA PROTO :DWORD
CryptUIDlgSelectCertificate equ <CryptUIDlgSelectCertificateA>

CryptUIDlgSelectCertificateFromStore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIDlgSelectPolicyServer PROTO :DWORD
CryptUIDlgSelectStoreA PROTO :DWORD
CryptUIDlgSelectStore equ <CryptUIDlgSelectStoreA>

CryptUIDlgViewCRLA PROTO :DWORD
CryptUIDlgViewCRL equ <CryptUIDlgViewCRLA>

CryptUIDlgViewCTLA PROTO :DWORD
CryptUIDlgViewCTL equ <CryptUIDlgViewCTLA>

CryptUIDlgViewCertificateA PROTO :DWORD,:DWORD
CryptUIDlgViewCertificate equ <CryptUIDlgViewCertificateA>

CryptUIDlgViewCertificatePropertiesA PROTO :DWORD,:DWORD
CryptUIDlgViewCertificateProperties equ <CryptUIDlgViewCertificatePropertiesA>

CryptUIDlgViewContext PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIDlgViewSignerInfoA PROTO :DWORD
CryptUIDlgViewSignerInfo equ <CryptUIDlgViewSignerInfoA>

CryptUIFreeCertificatePropertiesPagesA PROTO :DWORD,:DWORD
CryptUIFreeCertificatePropertiesPages equ <CryptUIFreeCertificatePropertiesPagesA>

CryptUIFreeViewSignaturesPagesA PROTO :DWORD,:DWORD
CryptUIFreeViewSignaturesPages equ <CryptUIFreeViewSignaturesPagesA>

CryptUIGetCertificatePropertiesPagesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptUIGetCertificatePropertiesPages equ <CryptUIGetCertificatePropertiesPagesA>

CryptUIGetViewSignaturesPagesA PROTO :DWORD,:DWORD,:DWORD
CryptUIGetViewSignaturesPages equ <CryptUIGetViewSignaturesPagesA>

CryptUIStartCertMgr PROTO :DWORD,:DWORD,:DWORD,:DWORD
CryptUIViewExpiringCerts PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIWizBuildCTL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIWizDigitalSign PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIWizExport PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIWizFreeDigitalSignContext PROTO :DWORD
CryptUIWizImport PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUIWizImportInternal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsWizardExtensionAvailable PROTO

