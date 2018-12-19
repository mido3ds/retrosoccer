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
isHost bool FALSE
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
	printf "selectedLevel=%i,", selectedLevel

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
.data
.data?
.code
logoScreen_onCreate proc
	
	ret
logoScreen_onCreate endp

logoScreen_onDestroy proc
	
	ret
logoScreen_onDestroy endp

logoScreen_onDraw proc
	ret
logoScreen_onDraw endp

logoScreen_onUpdate proc t:uint32
	invoke isKeyPressed, VK_RETURN
	.if (eax || elapsedTime >= LOGO_SCREEN_TOTAL_TIME)
		invoke changeScreen, TYPENAME_SCREEN
		printfln "going to typename screen",0
		ret
	.endif

	mov eax, t
	add elapsedTime, eax
	ret
logoScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Type Name Screen						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
typeYourNameStr db "assets/typeNameScreen.bmp",0
.data
ok Button <364, 298, 437, 339>

charIndex uint32 0
.data?
NameScreenBmp Bitmap ?
.code
typenameScreen_onCreate proc
	invoke loadBitmap, offset typeYourNameStr
	mov NameScreenBmp, eax
	ret
typenameScreen_onCreate endp

typenameScreen_onDestroy proc
	invoke deleteBitmap, NameScreenBmp
	ret
typenameScreen_onDestroy endp

typenameScreen_onDraw proc
	invoke renderBitmap, NameScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	invoke drawText, offset userName, 309, 220, 495, 247, DT_CENTER or DT_TOP
	ret
typenameScreen_onDraw endp

typenameScreen_onUpdate proc t:uint32
	invoke btn_isClicked, ok
	push ebx
	invoke getCharInput 
	pop ebx
	.if (ebx || eax == VK_RETURN)
		.if (charIndex != 0)
			invoke sendSig, SIG_CONNECT
			invoke changeScreen, CONNECTING_SCREEN
			printfln "going to connecting screen",0
			ret
		.endif
	.elseif (eax == VK_BACK)
		.if (charIndex != 0)
			dec charIndex
			mov ebx, charIndex
			mov userName[ebx], 0
			ret
		.endif
	.elseif (eax == VK_ESCAPE || eax == VK_TAB) ;ignore those buttons
		ret
	.elseif (eax != NULL)
		.if (charIndex < MAX_NAME_CHARS)
			mov ebx, charIndex
			mov userName[ebx], al
			inc charIndex
		.endif
	.endif

	ret
typenameScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Connecting Screen     					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
connectScreen db "assets/ConnectScreen.bmp", 0

.data
.data?
ConnectScreenBmp Bitmap ?
.code
connectingScreen_onCreate proc
	invoke loadBitmap, offset connectScreen
	mov ConnectScreenBmp, eax
	ret
connectingScreen_onCreate endp

connectingScreen_onDestroy proc
	invoke deleteBitmap, ConnectScreenBmp
	ret
connectingScreen_onDestroy endp

connectingScreen_onDraw proc
	invoke renderBitmap,ConnectScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
connectingScreen_onDraw endp

connectingScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (!eax)
		ret
	.elseif (eax == SIG_CONNECT)
		invoke changeScreen, MAIN_SCREEN
		call sendName
		call recvName

		printfln "userName=%s,opponentName=%s", offset userName, offset opponentName
	.else
		invoke changeScreen, CONNEC_ERROR_SCREEN
		printfln "connectingScreen_onUpdate failed",0
	.endif

	ret
connectingScreen_onUpdate endp

sendName proc
	invoke send, offset userName, MAX_NAME_CHARS
	.if (eax != MAX_NAME_CHARS)
		invoke changeScreen, CONNEC_ERROR_SCREEN
		printfln "sendName failed",0
	.endif

	ret
sendName endp

recvName proc
	invoke recv, offset opponentName, MAX_NAME_CHARS
	.if (eax != MAX_NAME_CHARS)
		invoke changeScreen, CONNEC_ERROR_SCREEN
		printfln "recvName failed",0
	.endif

	ret
recvName endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Main Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
MainScreen db "assets/mainScreen.bmp",0

.data
playBtn Button <349, 224, 450, 272>
chatBtn Button <345, 289, 452, 337>
exitBtn Button <350, 355, 452, 401>
.data?
MainScreenBmp Bitmap ?

.code
mainScreen_onCreate proc
	invoke loadBitmap, offset MainScreen
	mov MainScreenBmp, eax
	ret
mainScreen_onCreate endp

mainScreen_onDestroy proc
	invoke deleteBitmap, MainScreenBmp
	ret
mainScreen_onDestroy endp

mainScreen_onDraw proc
	invoke renderBitmap, MainScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
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
		.elseif (eax == SIG_EXIT)
			invoke changeScreen, CONNECTING_SCREEN
			printfln "going to connecting screen[exit]",0
			ret
		.elseif
			invoke changeScreen, CONNEC_ERROR_SCREEN
			printfln "mainScreen_onUpdate failed",0
			ret
		.endif
	.endif

	invoke btn_isClicked, playBtn
	.if (eax)
		invoke sendSig, SIG_GAME_INV
		invoke changeScreen, SEND_INV_SCREEN
		mov invitationType, INVTYPE_GAME
		printfln "going to send invitation screen[game]",0
	.endif

	invoke btn_isClicked, chatBtn
	.if (eax)
		invoke sendSig, SIG_CHAT_INV
		invoke changeScreen, SEND_INV_SCREEN
		mov invitationType, INVTYPE_CHAT
		printfln "going to send invitation screen[chat]",0
	.endif

	invoke btn_isClicked, exitBtn
	.if (eax)
		invoke sendSig, SIG_EXIT
		invoke changeScreen, EXIT_SCREEN
		printfln "going to exit screen",0
	.endif
	ret
mainScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Send Invitation Screen     				   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const

sendingInvStr db "assets/sendInvitationScreen.bmp",0
cancelStr db "[Cancel]",0
.data
cancelBtn Button <339, 301, 461, 350>
.data?
SendInvitationBmp Bitmap ?

.code
sendInvitationScreen_onCreate proc
	invoke loadBitmap, offset sendingInvStr
	mov SendInvitationBmp, eax
	ret
sendInvitationScreen_onCreate endp

sendInvitationScreen_onDestroy proc
	invoke deleteBitmap, SendInvitationBmp
	ret
sendInvitationScreen_onDestroy endp

sendInvitationScreen_onDraw proc
invoke renderBitmap, SendInvitationBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	
	ret
sendInvitationScreen_onDraw endp

sendInvitationScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_ACCEPT_INV)
			.if (invitationType == INVTYPE_CHAT) 
				invoke sendSig, SIG_CHAT_START
				invoke changeScreen, CHAT_SCREEN
				printfln "going to chat screen",0
				ret
			.elseif (invitationType == INVTYPE_GAME) 
				invoke sendSig, SIG_GAME_START
				invoke changeScreen, GAME_SCREEN
				printfln "going to game screen",0
				ret
			.endif
		.elseif (eax == SIG_DECLINE_INV)
			invoke changeScreen, MAIN_SCREEN
			printfln "invitation declined, going back to main screen",0
			ret
		.else
			invoke changeScreen, CONNEC_ERROR_SCREEN
			printfln "snedInvitationScreen_onUpdate failed",0
		.endif
	.endif

	invoke btn_isClicked, cancelBtn
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
acceptStr db "Accept",0
declineStr db "Decline",0
.data
acceptBtn Button <305, 156, 305+200, 156+30>
declineBtn Button <305, 156+30, 305+200, 156+30+30>
.data?
.code
recvInvitationScreen_onCreate proc
	
	ret
recvInvitationScreen_onCreate endp

recvInvitationScreen_onDestroy proc
	
	ret
recvInvitationScreen_onDestroy endp

recvInvitationScreen_onDraw proc
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
	invoke drawText, offset _ris_buf, 233, 176, 538,256, DT_LEFT or DT_CENTER

	ret
recvInvitationScreen_onDraw endp

recvInvitationScreen_onUpdate proc t:uint32
	invoke recvSig
	.if (eax)
		.if (eax == SIG_CANCEL_INV)
			invoke changeScreen, MAIN_SCREEN
			printfln "invitation canceled, going back to main screen",0
		.else
			invoke changeScreen, CONNEC_ERROR_SCREEN
			printfln "recvInvitationScreen_onUpdate failed, goint to connec error screen",0
		.endif
	.endif

	invoke btn_isClicked, acceptBtn
	.if (eax)
		invoke sendSig, SIG_ACCEPT_INV

		.if (invitationType == INVTYPE_GAME)
			invoke changeScreen, WAIT_OP_SCREEN
			printfln "going to waiting op screen[accept]",0
		.elseif (invitationType == INVTYPE_CHAT)
			invoke changeScreen, CHAT_SCREEN
			printfln "going to chat screen[accept]",0
		.endif
	.endif

	invoke btn_isClicked, declineBtn
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
waitingOpStr db "assets/waitOpScreen.bmp",0
.data
.data?
WaitingOpponentBmp Bitmap ?
.code
waitingScreen_onCreate proc
	invoke loadBitmap, offset waitingOpStr
	mov WaitingOpponentBmp, eax
	ret
waitingScreen_onCreate endp

waitingScreen_onDestroy proc
	invoke deleteBitmap, WaitingOpponentBmp
	ret
waitingScreen_onDestroy endp

waitingScreen_onDraw proc
invoke renderBitmap, WaitingOpponentBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	invoke drawText, offset waitingOpStr, 305, 156, 305+200, 156+30, DT_CENTER or DT_TOP
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
		.else
			invoke changeScreen, CONNEC_ERROR_SCREEN
			printfln "waitingScreen_onUpdate failed, going to connec error screen",0
			ret
		.endif
	.endif
	ret
waitingScreen_onUpdate endp

recvGameInitialData proc
	invoke recv, offset selectedLevel, 1
	invoke recv, offset selectedColor, 1
	invoke recv, offset selectedBallType, 1
	; TODO check errors
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
	mov p2.color, eax
	ret
initNonHostGameData endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Select Screen	    					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
selectScreenFileName db "assets/selectScreen.bmp",0
selectRectangleFileName db "assets/selectRectangle.bmp",0

.data
lvl1Btn Button <313, 237, 484, 300>
lvl2Btn Button <313, 313, 484, 376>
okBtn Button <>
blueClrBtn Button <>
redClrBtn Button <>
ball1Btn Button <>
ball2Btn Button <>;TODO

.data?
selectScreenBmp Bitmap ?
selectRectangleBmp Bitmap ?

.code
selectScreen_onCreate proc
	invoke loadBitmap, offset selectScreenFileName
	mov selectScreenBmp, eax
	ret
selectScreen_onCreate endp

selectScreen_onDestroy proc
	invoke deleteBitmap, selectScreenBmp
	ret
selectScreen_onDestroy endp

selectScreen_onDraw proc
	invoke renderBitmap, selectScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
selectScreen_onDraw endp

selectScreen_onUpdate proc t:uint32
	invoke btn_isClicked, lvl1Btn
	.if (eax) 
		mov matchTotalTime, LV1_MATCH_TIME
		mov selectedLevel, 1
	.endif
	invoke btn_isClicked, lvl2Btn
	.if (eax)
		mov matchTotalTime, LV2_MATCH_TIME
		mov selectedLevel, 2
	.endif

	invoke btn_isClicked, blueClrBtn
	.if (eax)
		mov selectedColor, PLAYER_COLOR_BLUE
	.endif
	invoke btn_isClicked, redClrBtn
	.if (eax)
		mov selectedColor, PLAYER_COLOR_RED
	.endif

	invoke btn_isClicked, ball1Btn
	.if (eax)
		mov selectedBallType, BALL_TYPE_1
	.endif
	invoke btn_isClicked, ball2Btn
	.if (eax)
		mov selectedBallType, BALL_TYPE_2
	.endif

	invoke btn_isClicked, okBtn
	.if (eax)
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
	invoke send, offset selectedLevel, 1
	invoke send, offset selectedColor, 1
	invoke send, offset selectedBallType, 1
	; TODO check errors
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
gameOverScreenBmp Bitmap ?

.code
gameoverScreen_onCreate proc
	invoke loadBitmap, offset gameOverScreenFileName
	mov gameOverScreenBmp, eax
	ret
gameoverScreen_onCreate endp

gameoverScreen_onDestroy proc
	invoke deleteBitmap, gameOverScreenBmp
	ret
gameoverScreen_onDestroy endp

gameoverScreen_onDraw proc
	invoke renderBitmap, gameOverScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
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
.const
ChatScreen db "assets/chatScreen.bmp",0
.data
.data?
chatScreenbmp Bitmap ?

.code
chatScreen_onCreate proc
	invoke loadBitmap, offset ChatScreen
	mov chatScreenbmp, eax
	ret
chatScreen_onCreate endp

chatScreen_onDestroy proc
	invoke deleteBitmap, chatScreenbmp
	ret
chatScreen_onDestroy endp

chatScreen_onDraw proc
invoke renderBitmap, chatScreenbmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
chatScreen_onDraw endp

chatScreen_onUpdate proc t:uint32

	ret
chatScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;						Connection Error Screen         			   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
ConnnectionrErrorScreen db "assets/ConnectionErrorScreen.bmp",0
.data
_ces_reconnectBtn Button <>
_ces_exitBtn Button <> ; TODO

.data?
ConnectionErrorScreenBmp Bitmap ?
.code
connErrorScreen_onCreate proc
	invoke loadBitmap, offset ConnnectionrErrorScreen
	mov ConnectionErrorScreenBmp, eax
	ret
connErrorScreen_onCreate endp

connErrorScreen_onDestroy proc
	invoke deleteBitmap, ConnectionErrorScreenBmp
	ret
connErrorScreen_onDestroy endp

connErrorScreen_onDraw proc
	invoke renderBitmap, ConnectionErrorScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
connErrorScreen_onDraw endp

connErrorScreen_onUpdate proc t:uint32
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
ExitScreen db "assets/exitScreen.bmp",0
.data
_es_yesBtn Button <>
_es_noBtn Button <> ; TODO

.data?
ExitScreenBit Bitmap ?
.code
exitScreen_onCreate proc
	invoke loadBitmap, offset ExitScreen
	mov ExitScreenBit, eax
	ret
exitScreen_onCreate endp

exitScreen_onDestroy proc
	invoke deleteBitmap, ExitScreenBit
	ret
exitScreen_onDestroy endp

exitScreen_onDraw proc
	invoke renderBitmap, ExitScreenBit, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
exitScreen_onDraw endp

exitScreen_onUpdate proc t:uint32
	invoke btn_isClicked, _es_yesBtn
	.if (eax)
		call exit
		printfln "going to exit",0
	.endif

	invoke btn_isClicked, _es_noBtn
	.if (eax)
		call goToPrevScreen
		printfln "exit canceled, going to previous screen",0
	.endif

	ret
exitScreen_onUpdate endp

end game_asm