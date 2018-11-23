; ..\X86\Mpr.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

MultinetGetConnectionPerformanceA PROTO :DWORD,:DWORD
MultinetGetConnectionPerformance equ <MultinetGetConnectionPerformanceA>

WNetAddConnection2A PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetAddConnection2 equ <WNetAddConnection2A>

WNetAddConnection3A PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetAddConnection3 equ <WNetAddConnection3A>

WNetAddConnectionA PROTO :DWORD,:DWORD,:DWORD
WNetAddConnection equ <WNetAddConnectionA>

WNetCancelConnection2A PROTO :DWORD,:DWORD,:DWORD
WNetCancelConnection2 equ <WNetCancelConnection2A>

WNetCancelConnectionA PROTO :DWORD,:DWORD
WNetCancelConnection equ <WNetCancelConnectionA>

WNetCloseEnum PROTO :DWORD
WNetConnectionDialog PROTO :DWORD,:DWORD
WNetConnectionDialog1A PROTO :DWORD
WNetConnectionDialog1 equ <WNetConnectionDialog1A>

WNetDisconnectDialog PROTO :DWORD,:DWORD
WNetDisconnectDialog1A PROTO :DWORD
WNetDisconnectDialog1 equ <WNetDisconnectDialog1A>

WNetEnumResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetEnumResource equ <WNetEnumResourceA>

WNetGetConnectionA PROTO :DWORD,:DWORD,:DWORD
WNetGetConnection equ <WNetGetConnectionA>

WNetGetLastErrorA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetGetLastError equ <WNetGetLastErrorA>

WNetGetNetworkInformationA PROTO :DWORD,:DWORD
WNetGetNetworkInformation equ <WNetGetNetworkInformationA>

WNetGetProviderNameA PROTO :DWORD,:DWORD,:DWORD
WNetGetProviderName equ <WNetGetProviderNameA>

WNetGetResourceInformationA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetGetResourceInformation equ <WNetGetResourceInformationA>

WNetGetResourceParentA PROTO :DWORD,:DWORD,:DWORD
WNetGetResourceParent equ <WNetGetResourceParentA>

WNetGetUniversalNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
WNetGetUniversalName equ <WNetGetUniversalNameA>

WNetGetUserA PROTO :DWORD,:DWORD,:DWORD
WNetGetUser equ <WNetGetUserA>

WNetOpenEnumA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetOpenEnum equ <WNetOpenEnumA>

WNetSetLastErrorA PROTO :DWORD,:DWORD,:DWORD
WNetSetLastError equ <WNetSetLastErrorA>

WNetUseConnectionA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WNetUseConnection equ <WNetUseConnectionA>


