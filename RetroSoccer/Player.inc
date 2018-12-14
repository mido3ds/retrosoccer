ifndef PLAYER_INC
PLAYER_INC=1
include common.inc
include Vec.inc
include AABB.inc

PLAYER_COLOR_BLUE equ 0
PLAYER_COLOR_RED equ 1

Stick struct
	pos Vec <>
	selected bool ?
Stick ends

Figure struct
	pos Vec <>
	legBB AABB <>
	stick pntr ? ; ptr stick
	offsetY int32 ?
Figure ends

Player struct
	score uint32 ?
	color uint32 ?
	sticks Stick 4 dup(<>)
	figs Figure 11 dup(<>)
	kick int32 ?
	onLeft bool ? ; wether player on left side or not
Player ends

player_init proto b:ptr Player, color:uint32, onLeft:bool
player_draw proto b:ptr Player, sprites:Bitmap
player_update proto b:ptr Player
player_send proto p:ptr Player
player_recv proto p:ptr Player

player_getFigStick proto p:ptr Player, figNum:uint32
player_getFig proto p:ptr Player, i:uint32
player_getStick proto p:ptr Player, i:uint32

endif