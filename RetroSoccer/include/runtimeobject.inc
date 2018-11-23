; ..\X86\runtimeobject.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

GetRestrictedErrorInfo PROTO :DWORD
HSTRING_UserFree PROTO :DWORD,:DWORD
HSTRING_UserMarshal PROTO :DWORD,:DWORD,:DWORD
HSTRING_UserSize PROTO :DWORD,:DWORD,:DWORD
HSTRING_UserUnmarshal PROTO :DWORD,:DWORD,:DWORD
IsErrorPropagationEnabled PROTO
RoActivateInstance PROTO :DWORD,:DWORD
RoCaptureErrorContext PROTO :DWORD
RoClearError PROTO
RoFailFastWithErrorContext PROTO :DWORD
RoFreeParameterizedTypeExtra PROTO :DWORD
RoGetActivatableClassRegistration PROTO :DWORD,:DWORD
RoGetActivationFactory PROTO :DWORD,:DWORD,:DWORD
RoGetApartmentIdentifier PROTO :DWORD
RoGetBufferMarshaler PROTO :DWORD
RoGetErrorReportingFlags PROTO :DWORD
RoGetMatchingRestrictedErrorInfo PROTO :DWORD,:DWORD
RoGetMetaDataFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoGetParameterizedTypeInstanceIID PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoGetServerActivatableClasses PROTO :DWORD,:DWORD,:DWORD
RoInitialize PROTO :DWORD
RoInspectCapturedStackBackTrace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoInspectThreadErrorInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoOriginateError PROTO :DWORD,:DWORD
RoOriginateLanguageException PROTO :DWORD,:DWORD,:DWORD
RoParameterizedTypeExtraGetTypeSignature PROTO :DWORD
RoParseTypeName PROTO :DWORD,:DWORD,:DWORD
RoRegisterActivationFactories PROTO :DWORD,:DWORD,:DWORD,:DWORD
RoRegisterForApartmentShutdown PROTO :DWORD,:DWORD,:DWORD
RoReportFailedDelegate PROTO :DWORD,:DWORD
RoReportUnhandledError PROTO :DWORD
RoResolveNamespace PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RoResolveRestrictedErrorInfoReference PROTO :DWORD,:DWORD
RoRevokeActivationFactories PROTO :DWORD
RoSetErrorReportingFlags PROTO :DWORD
RoTransformError PROTO :DWORD,:DWORD,:DWORD
RoUninitialize PROTO
RoUnregisterForApartmentShutdown PROTO :DWORD
SetRestrictedErrorInfo PROTO :DWORD
WindowsCompareStringOrdinal PROTO :DWORD,:DWORD,:DWORD
WindowsConcatString PROTO :DWORD,:DWORD,:DWORD
WindowsCreateString PROTO :DWORD,:DWORD,:DWORD
WindowsCreateStringReference PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsDeleteString PROTO :DWORD
WindowsDeleteStringBuffer PROTO :DWORD
WindowsDuplicateString PROTO :DWORD,:DWORD
WindowsGetStringLen PROTO :DWORD
WindowsGetStringRawBuffer PROTO :DWORD,:DWORD
WindowsInspectString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WindowsIsStringEmpty PROTO :DWORD
WindowsPreallocateStringBuffer PROTO :DWORD,:DWORD,:DWORD
WindowsPromoteStringBuffer PROTO :DWORD,:DWORD
WindowsReplaceString PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsStringHasEmbeddedNull PROTO :DWORD,:DWORD
WindowsSubstring PROTO :DWORD,:DWORD,:DWORD
WindowsSubstringWithSpecifiedLength PROTO :DWORD,:DWORD,:DWORD,:DWORD
WindowsTrimStringEnd PROTO :DWORD,:DWORD,:DWORD
WindowsTrimStringStart PROTO :DWORD,:DWORD,:DWORD

