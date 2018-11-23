; ..\X86\RASDlg.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

DwTerminalDlg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetRasDialOutProtocols PROTO
RasAutodialQueryDlgA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasAutodialQueryDlg equ <RasAutodialQueryDlgA>

RasDialDlgA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RasDialDlg equ <RasDialDlgA>

RasEntryDlgA PROTO :DWORD,:DWORD,:DWORD
RasEntryDlg equ <RasEntryDlgA>

RasPhonebookDlgA PROTO :DWORD,:DWORD,:DWORD
RasPhonebookDlg equ <RasPhonebookDlgA>

RasSrvAddPropPages PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RasSrvAllowConnectionsConfig PROTO :DWORD
RasSrvCleanupService PROTO
RasSrvEnumConnections PROTO :DWORD,:DWORD,:DWORD
RasSrvHangupConnection PROTO :DWORD
RasSrvInitializeService PROTO
RasSrvIsConnectionConnected PROTO :DWORD,:DWORD
RasSrvIsICConfigured PROTO :DWORD
RasSrvIsServiceRunning PROTO :DWORD
RasUserEnableManualDial PROTO :DWORD,:DWORD,:DWORD
RasUserGetManualDial PROTO :DWORD,:DWORD,:DWORD
RasUserPrefsDlg PROTO :DWORD
RouterEntryDlgA PROTO :DWORD,:DWORD,:DWORD,:DWORD
RouterEntryDlg equ <RouterEntryDlgA>


