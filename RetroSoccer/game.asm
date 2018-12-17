include common.inc
include Player.inc
include Ball.inc

public bluePen, redPen, sprites

.const
.data
elapsedTime uint32 0
previousScreen uint32 0
currentScreen uint32 0
level uint32 ?
userName db MAX_NAME_CHARS+1 dup(0)
opponentName db "Player2",0 ;TODO: sync names
isHost bool FALSE
chatAccepted bool FALSE

.code
game_asm:

; - called before window is shown
onCreate proc
	call logoScreen_onCreate
	call typenameScreen_onCreate
	call connectingScreen_onCreate
	call mainScreen_onCreate
	call invitationScreen_onCreate
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
	call invitationScreen_onDestroy
	call selectScreen_onDestroy
	call gameScreen_onDestroy
	call gameoverScreen_onDestroy
	call chatScreen_onDestroy
	call connErrorScreen_onDestroy
	call exitScreen_onDestroy

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
	.elseif (currentScreen == INVITATION_SCREEN)
		call invitationScreen_onUpdate
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
	printf "level=%i,", level

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
	.elseif (currentScreen == INVITATION_SCREEN)
		call invitationScreen_onDraw
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
	.if (eax == TRUE || elapsedTime >= LOGO_SCREEN_TOTAL_TIME)
		invoke changeScreen, TYPENAME_SCREEN
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
typeYourNameStr db "Type your name:",0
.data
charIndex uint32 0
.data?
.code
typenameScreen_onCreate proc
	
	ret
typenameScreen_onCreate endp

typenameScreen_onDestroy proc
	
	ret
typenameScreen_onDestroy endp

typenameScreen_onDraw proc
	invoke drawText, offset typeYourNameStr, 305, 156, 305+200, 156+30, DT_CENTER or DT_TOP
	invoke drawText, offset userName, 305, 156+40, 305+200, 156+40+30, DT_CENTER or DT_TOP
	ret
typenameScreen_onDraw endp

typenameScreen_onUpdate proc t:uint32
	invoke getCharInput 
	.if (eax == VK_RETURN)
		.if (charIndex != 0)
			invoke changeScreen, CONNECTING_SCREEN
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
.data
.data?
.code
connectingScreen_onCreate proc
	
	ret
connectingScreen_onCreate endp

connectingScreen_onDestroy proc
	
	ret
connectingScreen_onDestroy endp

connectingScreen_onDraw proc

	ret
connectingScreen_onDraw endp

connectingScreen_onUpdate proc t:uint32
	; TODO: connect

	ret
connectingScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Main Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
.data
.data?
.code
mainScreen_onCreate proc
	
	ret
mainScreen_onCreate endp

mainScreen_onDestroy proc
	
	ret
mainScreen_onDestroy endp

mainScreen_onDraw proc

	ret
mainScreen_onDraw endp

mainScreen_onUpdate proc t:uint32

	ret
mainScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							invitation Screen     					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
.data
.data?
.code
invitationScreen_onCreate proc
	
	ret
invitationScreen_onCreate endp

invitationScreen_onDestroy proc
	
	ret
invitationScreen_onDestroy endp

invitationScreen_onDraw proc

	ret
invitationScreen_onDraw endp

invitationScreen_onUpdate proc t:uint32

	ret
invitationScreen_onUpdate endp


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Select Screen	    					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
selectScreenFileName db "assets/mainScreen.bmp",0

.data
.data?
selectScreenBmp Bitmap ?

; level buttons
lvl1Btn Button <>
lvl2Btn Button <>

.code
selectScreen_onCreate proc
	invoke loadBitmap, offset selectScreenFileName
	mov selectScreenBmp, eax

	; buttons
	invoke btn_init, addr lvl1Btn, 313, 237, 171, 63
	invoke btn_init, addr lvl2Btn, 313, 313, 171, 63

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
	.if (eax == TRUE) 
		invoke ball_init, LV1_BALL_SPD
		mov matchTotalTime, LV1_MATCH_TIME
		mov level, 1
		invoke changeScreen, GAME_SCREEN
	.endif

	invoke btn_isClicked, lvl2Btn
	.if (eax == TRUE)
		invoke ball_init, LV2_BALL_SPD
		mov matchTotalTime, LV2_MATCH_TIME
		mov level, 2
		invoke changeScreen, GAME_SCREEN
	.endif

	ret
selectScreen_onUpdate endp

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

	; players
	invoke player1_reset
	mov p1.color, PLAYER_COLOR_BLUE
	invoke player2_reset
	mov p2.color, PLAYER_COLOR_RED

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
		invoke changeScreen, MAIN_SCREEN
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
.data
.data?
.code
chatScreen_onCreate proc
	
	ret
chatScreen_onCreate endp

chatScreen_onDestroy proc
	
	ret
chatScreen_onDestroy endp

chatScreen_onDraw proc

	ret
chatScreen_onDraw endp

chatScreen_onUpdate proc t:uint32

	ret
chatScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;						Connection Error Screen         			   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
.data
.data?
.code
connErrorScreen_onCreate proc
	
	ret
connErrorScreen_onCreate endp

connErrorScreen_onDestroy proc
	
	ret
connErrorScreen_onDestroy endp

connErrorScreen_onDraw proc

	ret
connErrorScreen_onDraw endp

connErrorScreen_onUpdate proc t:uint32

	ret
connErrorScreen_onUpdate endp

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							Exit Screen     						   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
.data
.data?
.code
exitScreen_onCreate proc
	
	ret
exitScreen_onCreate endp

exitScreen_onDestroy proc
	
	ret
exitScreen_onDestroy endp

exitScreen_onDraw proc

	ret
exitScreen_onDraw endp

exitScreen_onUpdate proc t:uint32

	ret
exitScreen_onUpdate endp

end game_asm