; ..\X86\winscard.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SCardAccessStartedEvent PROTO
SCardAddReaderToGroupA PROTO :DWORD,:DWORD,:DWORD
SCardAddReaderToGroup equ <SCardAddReaderToGroupA>

SCardAudit PROTO :DWORD,:DWORD
SCardBeginTransaction PROTO :DWORD
SCardCancel PROTO :DWORD
SCardConnectA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardConnect equ <SCardConnectA>

SCardControl PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardDisconnect PROTO :DWORD,:DWORD
SCardEndTransaction PROTO :DWORD,:DWORD
SCardEstablishContext PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardForgetCardTypeA PROTO :DWORD,:DWORD
SCardForgetCardType equ <SCardForgetCardTypeA>

SCardForgetReaderA PROTO :DWORD,:DWORD
SCardForgetReader equ <SCardForgetReaderA>

SCardForgetReaderGroupA PROTO :DWORD,:DWORD
SCardForgetReaderGroup equ <SCardForgetReaderGroupA>

SCardFreeMemory PROTO :DWORD,:DWORD
SCardGetAttrib PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardGetCardTypeProviderNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardGetCardTypeProviderName equ <SCardGetCardTypeProviderNameA>

SCardGetDeviceTypeIdA PROTO :DWORD,:DWORD,:DWORD
SCardGetDeviceTypeId equ <SCardGetDeviceTypeIdA>

SCardGetProviderIdA PROTO :DWORD,:DWORD,:DWORD
SCardGetProviderId equ <SCardGetProviderIdA>

SCardGetReaderDeviceInstanceIdA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardGetReaderDeviceInstanceId equ <SCardGetReaderDeviceInstanceIdA>

SCardGetReaderIconA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardGetReaderIcon equ <SCardGetReaderIconA>

SCardGetStatusChangeA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardGetStatusChange equ <SCardGetStatusChangeA>

SCardGetTransmitCount PROTO :DWORD,:DWORD
SCardIntroduceCardTypeA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardIntroduceCardType equ <SCardIntroduceCardTypeA>

SCardIntroduceReaderA PROTO :DWORD,:DWORD,:DWORD
SCardIntroduceReader equ <SCardIntroduceReaderA>

SCardIntroduceReaderGroupA PROTO :DWORD,:DWORD
SCardIntroduceReaderGroup equ <SCardIntroduceReaderGroupA>

SCardIsValidContext PROTO :DWORD
SCardListCardsA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardListCards equ <SCardListCardsA>

SCardListInterfacesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardListInterfaces equ <SCardListInterfacesA>

SCardListReaderGroupsA PROTO :DWORD,:DWORD,:DWORD
SCardListReaderGroups equ <SCardListReaderGroupsA>

SCardListReadersA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardListReaders equ <SCardListReadersA>

SCardListReadersWithDeviceInstanceIdA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardListReadersWithDeviceInstanceId equ <SCardListReadersWithDeviceInstanceIdA>

SCardLocateCardsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardLocateCards equ <SCardLocateCardsA>

SCardLocateCardsByATRA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardLocateCardsByATR equ <SCardLocateCardsByATRA>

SCardReadCacheA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardReadCache equ <SCardReadCacheA>

SCardReconnect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardReleaseContext PROTO :DWORD
SCardReleaseStartedEvent PROTO
SCardRemoveReaderFromGroupA PROTO :DWORD,:DWORD,:DWORD
SCardRemoveReaderFromGroup equ <SCardRemoveReaderFromGroupA>

SCardSetAttrib PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardSetCardTypeProviderNameA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SCardSetCardTypeProviderName equ <SCardSetCardTypeProviderNameA>

SCardState PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardStatusA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardStatus equ <SCardStatusA>

SCardTransmit PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardWriteCacheA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SCardWriteCache equ <SCardWriteCacheA>


