; ..\X86\websocket.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

WebSocketAbortHandle PROTO :DWORD
WebSocketBeginClientHandshake PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WebSocketBeginServerHandshake PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WebSocketCompleteAction PROTO :DWORD,:DWORD,:DWORD
WebSocketCreateClientHandle PROTO :DWORD,:DWORD,:DWORD
WebSocketCreateServerHandle PROTO :DWORD,:DWORD,:DWORD
WebSocketDeleteHandle PROTO :DWORD
WebSocketEndClientHandshake PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WebSocketEndServerHandshake PROTO :DWORD
WebSocketGetAction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WebSocketGetGlobalProperty PROTO :DWORD,:DWORD,:DWORD
WebSocketReceive PROTO :DWORD,:DWORD,:DWORD
WebSocketSend PROTO :DWORD,:DWORD,:DWORD,:DWORD

