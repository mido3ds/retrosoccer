include common.inc
include Player.inc
include Ball.inc

public bluePen, redPen, sprites

.const
.data
elapsedTime uint32 0
previousScreen uint32 0
currentScreen uint32 TYPENAME_SCREEN
userName db MAX_NAME_CHARS+1 dup(0)
opponentName db MAX_NAME_CHARS+1 dup(0)
isHost bool ?
chatAccepted bool FALSE

selectedLevel uint32 1
selectedBallType uint32 BALL_TYPE_1
selectedColor uint32 PLAYER_COLOR_BLUE

INVTYPE_CHAT equ 0
INVTYPE_GAME equ 1
invitationType uint32 ?

.code
game_asm:

; - called before window is shown
onCreate proc
	call logoScreen_onCreate
	call typenameScreen_onCreate
	call connectingScreen_onCreate
	call mainScreen_onCreate
	call sendInvitationScreen_onCreate
	call recvInvitationScreen_onCreate
	call waitingScreen_onCreate
	call selectScreen_onCreate
	call gameScreen_onCreate
	call gameoverScreen_onCreate
	call chatScreen_onCreate
	call connErrorScreen_onCreate
	call exitScreen_onCreate

	ret
onCreate endp

; - called after window is closed
onDestroy proc
	call logoScreen_onDestroy
	call typenameScreen_onDestroy
	call connectingScreen_onDestroy
	call mainScreen_onDestroy
	call sendInvitationScreen_onDestroy
	call recvInvitationScreen_onDestroy
	call waitingScreen_onDestroy
	call selectScreen_onDestroy
	call gameScreen_onDestroy
	call gameoverScreen_onDestroy
	call chatScreen_onDestroy
	call connErrorScreen_onDestroy
	call exitScreen_onDestroy

	invoke sendSig, SIG_EXIT
	call closeConnection

	ret
onDestroy endp

; - game logic
onUpdate proc t:uint32
	push t
	.if (currentScreen == LOGO_SCREEN)
		call logoScreen_onUpdate
	.elseif (currentScreen == TYPENAME_SCREEN)
		call typenameScreen_onUpdate
	.elseif (currentScreen == CONNECTING_SCREEN)
		call connectingScreen_onUpdate
	.elseif (currentScreen == MAIN_SCREEN)
		call mainScreen_onUpdate
	.elseif (currentScreen == SEND_INV_SCREEN)
		call sendInvitationScreen_onUpdate
	.elseif (currentScreen == RECV_INV_SCREEN)
		call recvInvitationScreen_onUpdate
	.elseif (currentScreen == WAIT_OP_SCREEN)
		call waitingScreen_onUpdate
	.elseif (currentScreen == SELECT_SCREEN)
		call selectScreen_onUpdate
	.elseif (currentScreen == GAME_SCREEN)
		call gameScreen_onUpdate
	.elseif (currentScreen == GAME_OVER_SCREEN)
		call gameoverScreen_onUpdate
	.elseif (currentScreen == CHAT_SCREEN)
		call chatScreen_onUpdate
	.elseif (currentScreen == CONNEC_ERROR_SCREEN)
		call connErrorScreen_onUpdate
	.elseif (currentScreen == EXIT_SCREEN)
		call exitScreen_onUpdate
	.endif 
	
	;debugging
	printf 13, 0 ;remove last line
	printf "mouse(%03i,%03i),", mousePos.x, mousePos.y
	printf "f[%i,%i,%i,%i],", p1.stickIsSelected[0], p1.stickIsSelected[1], p1.stickIsSelected[2], p1.stickIsSelected[3]
	printf "elapsedTime=%i,", elapsedTime

	ret
onUpdate endp

; - game rendering
onDraw proc
	.if (currentScreen == LOGO_SCREEN)
		call logoScreen_onDraw
	.elseif (currentScreen == TYPENAME_SCREEN)
		call typenameScreen_onDraw
	.elseif (currentScreen == CONNECTING_SCREEN)
		call connectingScreen_onDraw
	.elseif (currentScreen == MAIN_SCREEN)
		call mainScreen_onDraw
	.elseif (currentScreen == SEND_INV_SCREEN)
		call sendInvitationScreen_onDraw
	.elseif (currentScreen == RECV_INV_SCREEN)
		call recvInvitationScreen_onDraw
	.elseif (currentScreen == WAIT_OP_SCREEN) 
		call waitingScreen_onDraw
	.elseif (currentScreen == SELECT_SCREEN)
		call selectScreen_onDraw
	.elseif (currentScreen == GAME_SCREEN)
		call gameScreen_onDraw
	.elseif (currentScreen == GAME_OVER_SCREEN)
		call gameoverScreen_onDraw
	.elseif (currentScreen == CHAT_SCREEN)
		call chatScreen_onDraw
	.elseif (currentScreen == CONNEC_ERROR_SCREEN)
		call connErrorScreen_onDraw
	.elseif (currentScreen == EXIT_SCREEN)
		call exitScreen_onDraw
	.endif 

	ret
onDraw endp

changeScreen proc screen:uint32
	mov eax, currentScreen
	mov previousScreen, eax
	mov eax, screen
	mov currentScreen, eax
	mov elapsedTime, 0
	ret
changeScreen endp

goToPrevScreen proc		
	mov eax, previousScreen
	mov currentScreen, eax
	mov previousScreen, CONNEC_ERROR_SCREEN
	mov elapsedTime, 0
	ret
goToPrevScreen endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Logo Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
logoScreenFileName db "assets/logoScreen.bmp",0

.data
_lc_alphaDir byte 1

.data?
_lc_alpha byte ?
_lc_screenBmp Bitmap ?
_lc_canExit bool ?

.code
logoScreen_onCreate proc
	invoke loadBitmap, offset logoScreenFileName
	mov _lc_screenBmp, eax
	ret
logoScreen_onCreate endp

logoScreen_onDestroy proc
	invoke deleteBitmap, _lc_screenBmp
	ret
logoScreen_onDestroy endp

logoScreen_onDraw proc
	invoke clearScreen, 0 ; white
	invoke alphaBlend, _lc_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT, _lc_alpha
	ret
logoScreen_onDraw endp

logoScreen_onUpdate proc t:uint32
	invoke isKeyPressed, VK_RETURN
	.if (eax || (_lc_alpha == 0 && _lc_canExit))
		invoke changeScreen, TYPENAME_SCREEN
		printfln "going to typename screen",0
		ret
	.endif

	mov al, _lc_alphaDir
	add _lc_alpha, al
	add _lc_alpha, al
	.if (_lc_alpha == 254)
		mov _lc_alphaDir, -1
		mov _lc_canExit, TRUE
	.endif
	ret
logoScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Type Name Screen						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
typeNameScreenFileName db "assets/typeNameScreen.bmp",0

.data
_tns_okBtn Button <364, 298, 437, 339>

.data?
_tns_screenBmp Bitmap ?
_tns_i uint32 ?

.code
typenameScreen_onCreate proc
	invoke loadBitmap, offset typeNameScreenFileName
	mov _tns_screenBmp, eax
	ret
typenameScreen_onCreate endp

typenameScreen_onDestroy proc
	invoke deleteBitmap, _tns_screenBmp
	ret
typenameScreen_onDestroy endp

typenameScreen_onDraw proc
	invoke setBkMode, TRANSPARENT
	invoke renderBitmap, _tns_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	invoke drawText, offset userName, 309, 220, 495, 247, DT_CENTER or DT_TOP
	ret
typenameScreen_onDraw endp

typenameScreen_onUpdate proc t:uint32
	local okBtnIsClicked:bool
	invoke btn_isClicked, _tns_okBtn
	mov okBtnIsClicked, al

	invoke getCharInput 
	.if (eax == VK_RETURN || okBtnIsClicked)
		.if (_tns_i != 0)
			invoke sendSig, SIG_CONNECT
			invoke changeScreen, CONNECTING_SCREEN
			printfln "going to connecting screen",0
			ret
		.endif
	.elseif (eax == VK_BACK)
		.if (_tns_i != 0)
			dec _tns_i
			mov ebx, _tns_i
			mov userName[ebx], 0
			ret
		.endif
	.elseif (eax == VK_ESCAPE || eax == VK_TAB) ;ignore those buttons
		ret
	.elseif (eax != NULL)
		.if (_tns_i < MAX_NAME_CHARS)
			mov ebx, _tns_i
			mov userName[ebx], al
			inc _tns_i
		.endif
	.endif

	ret
typenameScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Connecting Screen     					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
connectScreenFileName db "assets/ConnectingScreen.bmp", 0

.data
.data?
_cs_screenBmp Bitmap ?

.code
connectingScreen_onCreate proc
	invoke loadBitmap, offset connectScreenFileName
	mov _cs_screenBmp, eax
	ret
connectingScreen_onCreate endp

connectingScreen_onDestroy proc
	invoke deleteBitmap, _cs_screenBmp
	ret
connectingScreen_onDestroy endp

connectingScreen_onDraw proc
	invoke renderBitmap, _cs_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
connectingScreen_onDraw endp

connectingScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_CONNECT)
			invoke changeScreen, MAIN_SCREEN
			call sendName
			call recvName

			printfln "userName=%s,opponentName=%s", offset userName, offset opponentName
		.else
			printfln "connectingScreen_onUpdate failed, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
		.endif
	.endif

	ret
connectingScreen_onUpdate endp

sendName proc
	invoke send, offset userName, MAX_NAME_CHARS
	.if (eax != MAX_NAME_CHARS)
		printfln "sendName failed going to connec error screen, received=%ibytes expected=%ibytes",eax, MAX_NAME_CHARS
		invoke changeScreen, CONNEC_ERROR_SCREEN
	.endif

	ret
sendName endp

recvName proc
	invoke recv, offset opponentName, MAX_NAME_CHARS
	.if (eax != MAX_NAME_CHARS)
		printfln "recvName failed going to connec error screen, received=%ibytes expected=%ibytes",eax, MAX_NAME_CHARS
		invoke changeScreen, CONNEC_ERROR_SCREEN
	.endif

	ret
recvName endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Main Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
mainScreenFileName db "assets/mainScreen.bmp",0

.data
_ms_playBtn Button <349, 224, 450, 272>
_ms_chatBtn Button <345, 289, 452, 337>
_ms_exitBtn Button <350, 355, 452, 401>

.data?
_ms_screenBmp Bitmap ?

.code
mainScreen_onCreate proc
	invoke loadBitmap, offset mainScreenFileName
	mov _ms_screenBmp, eax
	ret
mainScreen_onCreate endp

mainScreen_onDestroy proc
	invoke deleteBitmap, _ms_screenBmp
	ret
mainScreen_onDestroy endp

mainScreen_onDraw proc
	invoke renderBitmap, _ms_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
mainScreen_onDraw endp

mainScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_GAME_INV)
			mov invitationType, INVTYPE_GAME
			invoke changeScreen, RECV_INV_SCREEN
			printfln "going to recv invitation screen[game]",0
			ret
		.elseif (eax == SIG_CHAT_INV)
			mov invitationType, INVTYPE_CHAT
			invoke changeScreen, RECV_INV_SCREEN
			printfln "going to recv invitation screen[chat]",0
			ret
		.elseif (eax == SIG_CHAT_START)
			invoke changeScreen, CHAT_SCREEN
			printfln "going to chat screen immediately",0
			ret
		.elseif (eax == SIG_EXIT)
			invoke changeScreen, CONNECTING_SCREEN
			printfln "going to connecting screen[exit]",0
			ret
		.elseif
			printfln "mainScreen_onUpdate failed, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif

	invoke btn_isClicked, _ms_playBtn
	.if (eax)
		invoke sendSig, SIG_GAME_INV
		invoke changeScreen, SEND_INV_SCREEN
		mov invitationType, INVTYPE_GAME
		printfln "going to send invitation screen[game]",0
	.endif

	invoke btn_isClicked, _ms_chatBtn
	.if (eax)
		.if (!chatAccepted)
			invoke sendSig, SIG_CHAT_INV
			invoke changeScreen, SEND_INV_SCREEN
			mov invitationType, INVTYPE_CHAT
			printfln "going to send invitation screen[chat]",0
		.else
			invoke sendSig, SIG_CHAT_START
			invoke changeScreen, CHAT_SCREEN
			printfln "going to chat screen immediately",0
		.endif
	.endif

	invoke btn_isClicked, _ms_exitBtn
	.if (eax)
		invoke changeScreen, EXIT_SCREEN
		printfln "going to exit screen",0
	.endif
	ret
mainScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Send Invitation Screen     				   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
snedInvitationScreenFileName db "assets/sendInvitationScreen.bmp",0

.data
_sis_cancelBtn Button <339, 301, 461, 350>

.data?
_sis_screenBmp Bitmap ?

.code
sendInvitationScreen_onCreate proc
	invoke loadBitmap, offset snedInvitationScreenFileName
	mov _sis_screenBmp, eax
	ret
sendInvitationScreen_onCreate endp

sendInvitationScreen_onDestroy proc
	invoke deleteBitmap, _sis_screenBmp
	ret
sendInvitationScreen_onDestroy endp

sendInvitationScreen_onDraw proc
	invoke renderBitmap, _sis_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
sendInvitationScreen_onDraw endp

sendInvitationScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_ACCEPT_INV)
			.if (invitationType == INVTYPE_CHAT) 
				invoke changeScreen, CHAT_SCREEN
				printfln "going to chat screen",0
				ret
			.elseif (invitationType == INVTYPE_GAME) 
				invoke changeScreen, GAME_SCREEN
				printfln "going to game screen",0
				ret
			.endif
		.elseif (eax == SIG_DECLINE_INV)
			invoke changeScreen, MAIN_SCREEN
			printfln "invitation declined, going back to main screen",0
			ret
		.elseif (eax == SIG_EXIT)
			invoke changeScreen, CONNECTING_SCREEN
			printfln "other user exited, going to connecting screen",0
			ret
		.else
			printfln "snedInvitationScreen_onUpdate failed, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif

	invoke btn_isClicked, _sis_cancelBtn
	.if (eax)
		invoke sendSig, SIG_CANCEL_INV
		invoke changeScreen, MAIN_SCREEN
		printfln "going to main screen[canecel]",0
	.endif
	ret
sendInvitationScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;						Receive Invitation Screen        			   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
receiveInvScreenFileName db "assets/recvInvitationScreen.bmp",0

.data
_ris_acceptBtn Button <256, 300, 385, 354>
_ris_declineBtn Button <417, 300, 542, 354>

.data?
_ris_screenBmp Bitmap ?

.code
recvInvitationScreen_onCreate proc
	invoke loadBitmap, offset receiveInvScreenFileName
	mov _ris_screenBmp, eax
	ret
recvInvitationScreen_onCreate endp

recvInvitationScreen_onDestroy proc
	invoke deleteBitmap, _ris_screenBmp
	ret
recvInvitationScreen_onDestroy endp

recvInvitationScreen_onDraw proc
	invoke renderBitmap, _ris_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT

	; draw main text
	.const 
	_ris_mainTextFormat_game byte "%s Sent You Game Invitation",0
	_ris_mainTextFormat_chat byte "%s Sent You Chat Invitation",0
	.data?
	_ris_buf byte 256 dup(0)
	.code
	.if (invitationType == INVTYPE_CHAT) 
		invoke sprintf, offset _ris_buf, offset _ris_mainTextFormat_chat, offset opponentName
	.else
		invoke sprintf, offset _ris_buf, offset _ris_mainTextFormat_game, offset opponentName
	.endif
	invoke setBkMode, TRANSPARENT
	invoke drawText, offset _ris_buf, 215, 211, 574, 277, DT_CENTER

	ret
recvInvitationScreen_onDraw endp

recvInvitationScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_CANCEL_INV)
			invoke changeScreen, MAIN_SCREEN
			printfln "invitation canceled, going back to main screen",0
			ret
		.elseif (eax == SIG_EXIT)
			invoke changeScreen, CONNECTING_SCREEN
			printfln "other user exited, going to connecting screen",0
			ret
		.else
			printfln "recvInvitationScreen_onUpdate failed, goint to connec error screen, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif

	invoke btn_isClicked, _ris_acceptBtn
	.if (eax)
		invoke sendSig, SIG_ACCEPT_INV

		.if (invitationType == INVTYPE_GAME)
			invoke changeScreen, WAIT_OP_SCREEN
			printfln "going to waiting op screen[accept]",0
		.elseif (invitationType == INVTYPE_CHAT)
			mov chatAccepted, TRUE
			invoke changeScreen, CHAT_SCREEN
			printfln "going to chat screen[accept]",0
		.endif
	.endif

	invoke btn_isClicked, _ris_declineBtn
	.if (eax)
		invoke sendSig, SIG_DECLINE_INV
		invoke changeScreen, MAIN_SCREEN
		printfln "going to main screen[decline]",0
	.endif
	ret
recvInvitationScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;						Waiting Opponent Screen         			   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
waitOpScreenFileName db "assets/waitOpScreen.bmp",0

.data
.data?
_wos_screenBmp Bitmap ?

.code
waitingScreen_onCreate proc
	invoke loadBitmap, offset waitOpScreenFileName
	mov _wos_screenBmp, eax
	ret
waitingScreen_onCreate endp

waitingScreen_onDestroy proc
	invoke deleteBitmap, _wos_screenBmp
	ret
waitingScreen_onDestroy endp

waitingScreen_onDraw proc
	invoke renderBitmap, _wos_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
waitingScreen_onDraw endp

waitingScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_GAME_START)
			mov isHost, FALSE
			call recvGameInitialData

			call initNonHostGameData

			invoke changeScreen, GAME_SCREEN
			printfln "game started, going to game screen",0
			ret
		.elseif (eax == SIG_EXIT)
			invoke changeScreen, CONNECTING_SCREEN
			printfln "other user exited, going to connecting screen",0
			ret
		.else
			printfln "waitingScreen_onUpdate failed, going to connec error screen, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif
	ret
waitingScreen_onUpdate endp

recvGameInitialData proc
	invoke recv, offset selectedLevel, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't receive selectedLevel, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	invoke recv, offset selectedColor, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't receive selectedColor, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	invoke recv, offset selectedBallType, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't receive selectedBallType, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	ret
recvGameInitialData endp

initNonHostGameData proc
	; init ball
	invoke vec_set, addr ball.pos, BALL_START_SEC
	invoke vec_set, addr ball.spd, 0, 0
	.if (selectedLevel == 1)
		mov ball.speedScalar, LV1_BALL_SPD
	.else 
		mov ball.speedScalar, LV2_BALL_SPD
	.endif
	mov eax, selectedBallType
	mov ball.ballType, eax

	; init players
	invoke player1_reset
	invoke player2_reset

	; p2
	mov eax, selectedColor
	mov p2.color, eax

	; get my color
	mov eax, 1
	sub eax, selectedColor
	; p1
	mov p1.color, eax
	ret
initNonHostGameData endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Select Screen	    					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
_SS_ROUND_RADIUS equ <9,9>

.const
selectScreenFileName db "assets/selectScreen.bmp",0

.data
_ss_lvl1Btn Button <397, 170, 435, 207>
_ss_lvl2Btn Button <462, 170, 499, 208>
_ss_okBtn Button <361, 352, 436, 400>
_ss_blueClrBtn Button <466, 232, 502, 267>
_ss_redClrBtn Button <398, 232, 434, 268>
_ss_ball1Btn Button <399, 289, 436, 327>
_ss_ball2Btn Button <465, 288, 502, 326>

.data?
_ss_screenBmp Bitmap ?

.code
selectScreen_onCreate proc
	invoke loadBitmap, offset selectScreenFileName
	mov _ss_screenBmp, eax
	ret
selectScreen_onCreate endp

selectScreen_onDestroy proc
	invoke deleteBitmap, _ss_screenBmp
	ret
selectScreen_onDestroy endp

selectScreen_onDraw proc
	invoke renderBitmap, _ss_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT

	.if (selectedLevel == 1)
		invoke drawFrameRect, offset _ss_lvl1Btn
	.else
		invoke drawFrameRect, offset _ss_lvl2Btn
	.endif

	.if (selectedColor == PLAYER_COLOR_BLUE)
		invoke drawFrameRect, offset _ss_blueClrBtn
	.else
		invoke drawFrameRect, offset _ss_redClrBtn
	.endif

	.if (selectedBallType == BALL_TYPE_1)
		invoke drawFrameRect, offset _ss_ball1Btn
	.else
		invoke drawFrameRect, offset _ss_ball2Btn
	.endif

	ret
selectScreen_onDraw endp

selectScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_EXIT)
			printfln "other player exited, going to connecting screen",0
			invoke changeScreen, CONNECTING_SCREEN
			ret
		.else
			printfln "selectScreen_onUpdate failed, going to connec error screen, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif

	invoke btn_isClicked, _ss_lvl1Btn
	.if (eax) 
		mov matchTotalTime, LV1_MATCH_TIME
		mov selectedLevel, 1
	.endif
	invoke btn_isClicked, _ss_lvl2Btn
	.if (eax)
		mov matchTotalTime, LV2_MATCH_TIME
		mov selectedLevel, 2
	.endif

	invoke btn_isClicked, _ss_blueClrBtn
	.if (eax)
		mov selectedColor, PLAYER_COLOR_BLUE
	.endif
	invoke btn_isClicked, _ss_redClrBtn
	.if (eax)
		mov selectedColor, PLAYER_COLOR_RED
	.endif

	invoke btn_isClicked, _ss_ball1Btn
	.if (eax)
		mov selectedBallType, BALL_TYPE_1
	.endif
	invoke btn_isClicked, _ss_ball2Btn
	.if (eax)
		mov selectedBallType, BALL_TYPE_2
	.endif
	
	invoke btn_isClicked, _ss_okBtn
	.if (eax)
		printfln "selectedLevel=%i,selectedColor=%i,selectedBallType=%i",selectedLevel, selectedColor, selectedBallType

		mov isHost, TRUE
		call initHostGameData

		invoke sendSig, SIG_GAME_START
		call sendGameInitialData

		invoke changeScreen, GAME_SCREEN
		printfln "ok clicked, going to game screen",0
	.endif

	ret
selectScreen_onUpdate endp

sendGameInitialData proc
	invoke send, offset selectedLevel, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't send selectedLevel, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	invoke send, offset selectedColor, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't send selectedColor, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	invoke send, offset selectedBallType, sizeof uint32
	.if (eax != sizeof uint32)
		printfln "couldn't send selectedBallType, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN
		ret
	.endif

	ret
sendGameInitialData endp

initHostGameData proc
	; init ball
	invoke vec_set, addr ball.pos, BALL_START_FIRST 
	invoke vec_set, addr ball.spd, 0, 0
	.if (selectedLevel == 1)
		mov ball.speedScalar, LV1_BALL_SPD
	.else 
		mov ball.speedScalar, LV2_BALL_SPD
	.endif
	mov eax, selectedBallType
	mov ball.ballType, eax

	; init players
	invoke player1_reset
	invoke player2_reset

	; p1
	mov eax, selectedColor
	mov p1.color, eax

	; get other color
	mov eax, 1
	sub eax, selectedColor
	; p2
	mov p2.color, eax
	ret
initHostGameData endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Game Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/spritesheet.bmp",0

.data
.data?
field Bitmap ?
sprites Bitmap ?
bluePen Pen ?
redPen Pen ?
matchTotalTime uint32 ?

.code
gameScreen_onCreate proc
	invoke loadBitmap, offset fieldFileName
	mov field, eax
	invoke loadBitmap, offset spritesFileName
	mov sprites, eax
	invoke createPen, 3, 0ff0000h ;blue
	mov bluePen, eax
	invoke createPen, 3, 0000ffh ;red
	mov redPen, eax
	ret
gameScreen_onCreate endp

gameScreen_onDestroy proc
	invoke deleteBitmap, field
	invoke deleteBitmap, sprites
	invoke deletePen, bluePen
	invoke deletePen, redPen

	ret
gameScreen_onDestroy endp

gameScreen_onDraw proc
	call field_draw
	call ball_draw
	call player1_draw
	call player2_draw
	call writeScore

	ret
gameScreen_onDraw endp

gameScreen_onUpdate proc t:uint32
	call player1_update
	call player1_send
	call player2_recv
	call ball_update

	mov eax, t
	add elapsedTime, eax
	mov eax, elapsedTime
	.if (eax >= matchTotalTime)
		invoke changeScreen, GAME_OVER_SCREEN
		mov elapsedTime, 0
	.endif

	ret
gameScreen_onUpdate endp

field_draw proc
	invoke renderBitmap, field, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
field_draw endp

writeScore proc
	.CONST
	playersNamesFormat db "%s - %s",0
	scoreFormat db "%02i - %02i",0 
	timeFormat db "Time: %03i",0
	.DATA
	buf db 100 dup(0)
	.CODE
	invoke sprintf, offset buf, offset playersNamesFormat, offset userName, offset opponentName
	invoke drawText, offset buf, 615, 17, 777, 63, DT_LEFT or DT_CENTER

	invoke sprintf, offset buf, offset scoreFormat, p1.score, p2.score
	invoke drawText, offset buf, 615, 17+20, 777, 63+20, DT_LEFT or DT_CENTER

	mov eax, elapsedTime
	mov ebx, 1000
	mov edx, 0
	div ebx
	invoke sprintf, offset buf, offset timeFormat, eax
	invoke drawText, offset buf, 36, 17, 128, 63, DT_LEFT or DT_TOP
	ret
writeScore endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Gameover Screen     					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
gameOverScreenFileName db "assets/gameOverScreen.bmp",0

.data
.data?
_gs_screenBmp Bitmap ?

.code
gameoverScreen_onCreate proc
	invoke loadBitmap, offset gameOverScreenFileName
	mov _gs_screenBmp, eax
	ret
gameoverScreen_onCreate endp

gameoverScreen_onDestroy proc
	invoke deleteBitmap, _gs_screenBmp
	ret
gameoverScreen_onDestroy endp

gameoverScreen_onDraw proc
	invoke renderBitmap, _gs_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	call writeFinalResult
	ret
gameoverScreen_onDraw endp

gameoverScreen_onUpdate proc t:uint32
	mov eax, t
	add elapsedTime, eax
	mov eax, elapsedTime
	.if (eax >= GAME_OVER_SCREEN_TOTAL_TIME)
		invoke sendSig, SIG_GAME_FINISH

		invoke changeScreen, MAIN_SCREEN
		printfln "game ended, going to game over screen",0
		mov elapsedTime, 0
	.endif

	ret
gameoverScreen_onUpdate endp

writeFinalResult proc
	local playerWon:pntr

	.CONST
	finalResultFormat db "%s",0
	finalScoreFormat db "Score: %i - %i",0
	drawResultStr db "Draw",0
	.DATA
	finalResultBuf db 100 dup(0)
	.CODE

	mov eax, p2.score
	mov playerWon, offset opponentName
	.if (p1.score > eax)
		mov playerWon, offset userName
	.elseif (p1.score == eax)
		invoke drawText, offset drawResultStr, 283, 297, 514, 385, DT_LEFT or DT_CENTER
		ret
	.endif

	invoke sprintf, offset finalResultBuf, offset finalResultFormat, playerWon
	invoke drawText, offset finalResultBuf, 283, 297, 514, 385, DT_LEFT or DT_CENTER

	invoke sprintf, offset finalResultBuf, offset finalScoreFormat, p1.score, p2.score
	invoke drawText, offset finalResultBuf, 283, 297+20, 514, 385+20, DT_LEFT or DT_CENTER
	ret
writeFinalResult endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Chat Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
_CHS_UPPER_BAR_DIM equ <0,0,0,0,WND_WIDTH,59>
_CHS_LOWER_BAR_DIM equ <0,453,0,453,WND_WIDTH,WND_HEIGHT-453>
_CHS_TEXTBOX_HEIGHT equ 33
_CHS_TEXTBOX_DIM equ <30, 458, 720, 458+_CHS_TEXTBOX_HEIGHT>
_CHS_TEXT_H_MARGIN equ 7
_CHS_TEXT_V_MARGIN equ 15
_CHS_SCREEN_X0 equ _CHS_TEXT_H_MARGIN
_CHS_SCREEN_X1 equ WND_WIDTH-_CHS_TEXT_H_MARGIN
_CHS_SCREEN_Y1 equ 452-20

.const
chatScreenFileName db "assets/chatScreen.bmp",0

.data
_chs_closeBtn Button <10,5,57,53>
_chs_sendBtn Button <736,458,785,497>
_chs_y1 uint32 _CHS_SCREEN_Y1

.data?
_chs_screenBmp Bitmap ?
_chs_buffer db CHAT_BUFFER_SIZE dup(?)
_chs_i uint32 ?
_chs_list pntr ? ; first node is dummy

.code
chatScreen_onCreate proc
	invoke loadBitmap, offset chatScreenFileName
	mov _chs_screenBmp, eax
	ret
chatScreen_onCreate endp

chatScreen_onDestroy proc
	invoke deleteBitmap, _chs_screenBmp
	.if (_chs_list)
		invoke list_delete, _chs_list, offset chatmsg_delete
	.endif
	ret
chatScreen_onDestroy endp

chatScreen_onDraw proc
	invoke renderBitmap, _chs_screenBmp, 0, 0, 0, 0, WND_WIDTH,WND_HEIGHT ; all screen

	invoke setBkMode, TRANSPARENT	
	call drawChatMessages ; messages

	invoke renderBitmap, _chs_screenBmp, _CHS_UPPER_BAR_DIM ; upper bar
	invoke renderBitmap, _chs_screenBmp, _CHS_LOWER_BAR_DIM ; lower bar
	invoke drawText, offset _chs_buffer, _CHS_TEXTBOX_DIM, DT_WORDBREAK or DT_LEFT ; to be send msg
	ret
chatScreen_onDraw endp

chatScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax) 
		.if (eax == SIG_CHAT_DATA)
			call receiveChatData
		.elseif (eax == SIG_CHAT_CLOSE)
			printfln "going to main screen",0
			invoke changeScreen, MAIN_SCREEN
			ret
		.elseif (eax == SIG_EXIT)
			printfln "going to connect screen[exited]",0
			invoke changeScreen, CONNECTING_SCREEN
			ret
		.else
			printfln "chatScreen_onUpdate failed, going to connec error, SIG=%i",eax
			invoke changeScreen, CONNEC_ERROR_SCREEN
			ret
		.endif
	.endif

	invoke btn_isClicked, _chs_closeBtn
	.if (eax)
		invoke sendSig, SIG_CHAT_CLOSE
		invoke changeScreen, MAIN_SCREEN
		printfln "going to main screen",0
	.endif

	; send msg
	.if (_chs_i > 0)
		invoke btn_isClicked, _chs_sendBtn
		push eax
		invoke isKeyPressed, VK_RETURN
		pop ebx
		.if (eax || ebx)
			call sendChatData
		.endif 
	.endif

	; update scrolling 
	call getScroll
	mov ebx, 15
	imul ebx
	add _chs_y1, eax
	.if (_chs_y1 < _CHS_SCREEN_Y1)
		mov _chs_y1, _CHS_SCREEN_Y1
	.endif

	call editMsg
	ret
chatScreen_onUpdate endp

editMsg proc
	invoke getCharInput 
	.if (eax == VK_BACK)
		.if (_chs_i != 0)
			dec _chs_i
			mov ebx, _chs_i
			mov _chs_buffer[ebx], 0
			ret
		.endif
	.elseif (eax == VK_ESCAPE || eax == VK_TAB || eax == VK_RETURN) ;ignore those buttons
		ret
	.elseif (eax != NULL)
		.if (_chs_i < CHAT_BUFFER_SIZE)
			mov ebx, _chs_i
			mov _chs_buffer[ebx], al
			inc _chs_i
		.endif
	.endif
	ret
editMsg endp

receiveChatData proc
	local chatmsg:ptr ChatMsg

	; recv chatmsg
	call chatmsg_recv
	.if (!eax)
		printfln "couldn't send chat data, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN		
		ret
	.endif
	mov chatmsg, eax

	; add it to list
	.if (!_chs_list)
		invoke list_init, chatmsg
	.else
		invoke list_insert, _chs_list, chatmsg
	.endif
	mov _chs_list, eax

	ret
receiveChatData endp

sendChatData proc
	local chatmsg:ptr ChatMsg

	; create chatmsg
	invoke chatmsg_new, ME_IS_SENDER, offset _chs_buffer, _chs_i
	mov chatmsg, eax

	.if (!_chs_list)
		invoke list_init, chatmsg
	.else
		invoke list_insert, _chs_list, chatmsg
	.endif
	mov _chs_list, eax
	
	; send it
	invoke sendSig, SIG_CHAT_DATA
	invoke chatmsg_send, chatmsg
	.if (!eax)
		printfln "couldn't send chat data, going to connec error screen",0
		invoke changeScreen, CONNEC_ERROR_SCREEN		
		ret
	.endif

	invoke memzero, offset _chs_buffer, CHAT_BUFFER_SIZE
	mov _chs_i, 0
	ret
sendChatData endp

drawChatMessages proc
	local fitBB:AABB, node:ptr Node, chatmsg:ptr ChatMsg

	mov eax, _chs_list
	mov node, eax

	mov eax, _chs_y1
	mov fitBB.y0, eax
	sub fitBB.y0, 20
	mov fitBB.y1, eax

	.while (node)
		; chatmsg = node->value
		mov eax, node
		assume eax:ptr Node
		mov ebx, [eax].value
		mov chatmsg, ebx

		mov fitBB.x0, _CHS_SCREEN_X0
		mov fitBB.x1, _CHS_SCREEN_X1

		invoke chatmsg_draw, chatmsg, addr fitBB, _CHS_TEXT_V_MARGIN

		; node = node->next
		mov eax, node
		assume eax:ptr Node
		mov ebx, [eax].next
		mov node, ebx
	.endw
	ret
drawChatMessages endp
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;						Connection Error Screen         			   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
connnectionErrorScreenFileName db "assets/connErrorScreen.bmp",0

.data
_ces_reconnectBtn Button <307, 225, 489, 279>
_ces_exitBtn Button <345, 291, 454, 345>

.data?
_ces_screenBmp Bitmap ?

.code
connErrorScreen_onCreate proc
	invoke loadBitmap, offset connnectionErrorScreenFileName
	mov _ces_screenBmp, eax
	ret
connErrorScreen_onCreate endp

connErrorScreen_onDestroy proc
	invoke deleteBitmap, _ces_screenBmp
	ret
connErrorScreen_onDestroy endp

connErrorScreen_onDraw proc
	invoke renderBitmap, _ces_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
connErrorScreen_onDraw endp

connErrorScreen_onUpdate proc t:uint32
	call cleanPort

	invoke btn_isClicked, _ces_reconnectBtn
	.if (eax)
		invoke sendSig, SIG_CONNECT

		invoke changeScreen, CONNECTING_SCREEN
		printfln "going to connecting screen",0
		ret
	.endif

	invoke btn_isClicked, _ces_exitBtn
	.if (eax)
		invoke sendSig, SIG_EXIT

		call exit
		printfln "going to exit",0
	.endif

	ret
connErrorScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Exit Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
exitScreenFileName db "assets/exitScreen.bmp",0

.data
_es_yesBtn Button <269, 248, 381, 305>
_es_noBtn Button <419, 251, 531, 304>

.data?
_es_screenBmp Bitmap ?

.code
exitScreen_onCreate proc
	invoke loadBitmap, offset exitScreenFileName
	mov _es_screenBmp, eax
	ret
exitScreen_onCreate endp

exitScreen_onDestroy proc
	invoke deleteBitmap, _es_screenBmp
	ret
exitScreen_onDestroy endp

exitScreen_onDraw proc
	invoke renderBitmap, _es_screenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
exitScreen_onDraw endp

exitScreen_onUpdate proc t:uint32
	invoke btn_isClicked, _es_yesBtn
	.if (eax)
		invoke sendSig, SIG_EXIT
		printfln "going to exit",0
		call exit
	.endif

	invoke btn_isClicked, _es_noBtn
	.if (eax)
		printfln "exit canceled, going to previous screen",0
		call goToPrevScreen
	.endif

	ret
exitScreen_onUpdate endp

end game_asm