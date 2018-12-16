ifndef PLAYER_INC
PLAYER_INC=1
include common.inc

Player struct
	score uint32 ?
	color uint32 ?
	kickDir int32 ?

	; sticks
	stickPos Vec 4 dup(<>)
	stickIsSelected bool 4 dup(FALSE)

	; figures
	figPos Vec 11 dup(<>)
	legPos Vec 11 dup(<>)
Player ends

ifndef EXCLUDE_EXTERNS
	extern p1:Player
	extern p2:Player
endif ;EXCLUDE_EXTERNS

player1_reset proto
player1_resetSticks proto
player1_draw proto
player1_update proto
player1_send proto

player2_reset proto
player2_resetSticks proto
player2_resetFigs proto
player2_draw proto
player2_recv proto

endif