; ..\X86\wecapi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EcClose PROTO :DWORD
EcDeleteSubscription PROTO :DWORD,:DWORD
EcEnumNextSubscription PROTO :DWORD,:DWORD,:DWORD,:DWORD
EcGetObjectArrayProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EcGetObjectArraySize PROTO :DWORD,:DWORD
EcGetSubscriptionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EcGetSubscriptionRunTimeStatus PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EcInsertObjectArrayElement PROTO :DWORD,:DWORD
EcOpenSubscription PROTO :DWORD,:DWORD,:DWORD
EcOpenSubscriptionEnum PROTO :DWORD
EcRemoveObjectArrayElement PROTO :DWORD,:DWORD
EcRetrySubscription PROTO :DWORD,:DWORD,:DWORD
EcSaveSubscription PROTO :DWORD,:DWORD
EcSetObjectArrayProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EcSetSubscriptionProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD

