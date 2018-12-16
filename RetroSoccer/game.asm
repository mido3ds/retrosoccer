include common.inc
include Player.inc
include Ball.inc

public bluePen, redPen, sprites

.const
.data
elapsedTime uint32 0
screen uint32 0
level uint32 ?
userName db MAX_NAME_CHARS+1 dup(0)
opponentName db "Player2",0 ;TODO

.code
game_asm:

; - called before window is shown
onCreate proc
	call typenameScreen_onCreate
	call mainScreen_onCreate
	call chatScreen_onCreate
	call levelSelectScreen_onCreate
	call gameScreen_onCreate
	call gameoverScreen_onCreate

	ret
onCreate endp

; - called after window is closed
onDestroy proc
	call typenameScreen_onDestroy
	call mainScreen_onDestroy
	call chatScreen_onDestroy
	call levelSelectScreen_onDestroy
	call gameScreen_onDestroy
	call gameoverScreen_onDestroy

	ret
onDestroy endp

; - game logic
onUpdate proc t:uint32
	push t
	.if (screen == TYPENAME_SCREEN)
		call typenameScreen_onUpdate
	.elseif (screen == MAIN_SCREEN)
		call mainScreen_onUpdate
	.elseif (screen == CHAT_SCREEN)
		call chatScreen_onUpdate
	.elseif (screen == LEVEL_SELECT_SCREEN)	
		call levelSelectScreen_onUpdate
	.elseif (screen == GAME_SCREEN)
		call gameScreen_onUpdate
	.elseif (screen == GAME_OVER_SCREEN)
		call gameoverScreen_onUpdate
	.else
		pop eax
		call exit
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
	.if (screen == TYPENAME_SCREEN)
		call typenameScreen_onDraw
	.elseif (screen == MAIN_SCREEN)
		call mainScreen_onDraw
	.elseif (screen == CHAT_SCREEN)
		call chatScreen_onDraw
	.elseif (screen == LEVEL_SELECT_SCREEN)
		call levelSelectScreen_onDraw
	.elseif (screen == GAME_SCREEN)
		call gameScreen_onDraw
	.elseif (screen == GAME_OVER_SCREEN)
		call gameoverScreen_onDraw
	.endif

	ret
onDraw endp

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
			inc screen
			ret
		.endif
	.elseif (eax == VK_BACK)
		.if (charIndex != 0)
			dec charIndex
			mov ebx, charIndex
			mov userName[ebx], 0
			ret
		.endif
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
;;							Level Select Screen    					   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.const
lvlselectScreenFileName db "assets/mainScreen.bmp",0

.data
.data?
lvlselectScreenBmp Bitmap ?

; level buttons
lvl1BtnBB AABB <>
lvl2BtnBB AABB <>

.code
levelSelectScreen_onCreate proc
	invoke loadBitmap, offset lvlselectScreenFileName
	mov lvlselectScreenBmp, eax

	; buttons
	invoke aabb_calc, 313, 237, 171, 63, addr lvl1BtnBB
	invoke aabb_calc, 313, 313, 171, 63, addr lvl2BtnBB

	ret
levelSelectScreen_onCreate endp

levelSelectScreen_onDestroy proc
	invoke deleteBitmap, lvlselectScreenBmp
	ret
levelSelectScreen_onDestroy endp

levelSelectScreen_onDraw proc
	invoke renderBitmap, lvlselectScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
levelSelectScreen_onDraw endp

levelSelectScreen_onUpdate proc t:uint32
	invoke aabb_pointInBB, lvl1BtnBB, mousePos
	.if (eax == TRUE)
		invoke isLeftMouseClicked
		.if (eax == TRUE)
			invoke ball_init, LV1_BALL_SPD
			mov matchTotalTime, LV1_MATCH_TIME
			mov level, 1
			mov screen, GAME_SCREEN
		.endif
	.endif

	invoke aabb_pointInBB, lvl2BtnBB, mousePos
	.if (eax == TRUE)
		invoke isLeftMouseClicked
		.if (eax == TRUE)
			invoke ball_init, LV2_BALL_SPD
			mov matchTotalTime, LV2_MATCH_TIME
			mov level, 2
			mov screen, GAME_SCREEN
		.endif
	.endif

	ret
levelSelectScreen_onUpdate endp

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
		mov screen, GAME_OVER_SCREEN
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
		mov screen, LEVEL_SELECT_SCREEN
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

end game_asm