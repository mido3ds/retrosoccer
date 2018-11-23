; ..\X86\rpcutil.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

MIDL_user_allocate PROTO :DWORD
MIDL_user_free PROTO :DWORD
MIDL_user_reallocate PROTO :DWORD,:DWORD
RpcpAddInterface PROTO :DWORD,:DWORD
RpcpBindRpc PROTO :DWORD,:DWORD,:DWORD,:DWORD
RpcpDeleteInterface PROTO :DWORD
RpcpInitRpcServer PROTO
RpcpStartRpcServer PROTO :DWORD,:DWORD
RpcpStopRpcServer PROTO :DWORD
RpcpStopRpcServerEx PROTO :DWORD
RpcpUnbindRpc PROTO :DWORD
_security_check_cookie PROTO :DWORD

