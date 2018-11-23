; ..\X86\DhcpCSvc6.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Dhcpv6AcquireParameters PROTO :DWORD
Dhcpv6CApiCleanup PROTO
Dhcpv6CApiInitialize PROTO :DWORD
Dhcpv6CancelOperation PROTO
Dhcpv6EnableDhcp PROTO :DWORD,:DWORD
Dhcpv6EnableTracing PROTO :DWORD
Dhcpv6FreeLeaseInfo PROTO :DWORD
Dhcpv6FreeLeaseInfoArray PROTO :DWORD,:DWORD
Dhcpv6GetTraceArray PROTO :DWORD
Dhcpv6GetUserClasses PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6IsEnabled PROTO :DWORD,:DWORD
Dhcpv6QueryLeaseInfo PROTO :DWORD,:DWORD
Dhcpv6QueryLeaseInfoArray PROTO :DWORD,:DWORD,:DWORD
Dhcpv6ReleaseParameters PROTO :DWORD
Dhcpv6ReleasePrefix PROTO :DWORD,:DWORD,:DWORD
Dhcpv6ReleasePrefixEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6RenewPrefix PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6RenewPrefixEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6RequestParams PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6RequestPrefix PROTO :DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6RequestPrefixEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
Dhcpv6SetUserClass PROTO :DWORD,:DWORD,:DWORD

