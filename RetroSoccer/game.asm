include common.inc
include Player.inc
include Ball.inc

public bluePen, redPen, sprites

.const
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/spritesheet.bmp",0
mainScreenFileName db "assets/mainScreen.bmp",0
gameOverScreenFileName db "assets/gameOverScreen.bmp",0

.data
field Bitmap ?
sprites Bitmap ?
mainScreenBmp Bitmap ?
gameOverScreenBmp Bitmap ?
bluePen Pen ?
redPen Pen ?

elapsedTime uint32 0
screen uint32 MAIN_SCREEN

level uint32 1
matchTotalTime uint32 ?

; level buttons
lvl1BoxBB AABB <>
lvl2BoxBB AABB <>

.code
game_asm:

; - called before window is shown
onCreate proc
	; resources
	invoke loadBitmap, offset fieldFileName
	mov field, eax
	invoke loadBitmap, offset spritesFileName
	mov sprites, eax
	invoke loadBitmap, offset mainScreenFileName
	mov mainScreenBmp, eax
	invoke loadBitmap, offset gameOverScreenFileName
	mov gameOverScreenBmp, eax
	invoke createPen, 3, 0ff0000h ;blue
	mov bluePen, eax
	invoke createPen, 3, 0000ffh ;red
	mov redPen, eax

	; buttons
	mov lvl1BoxBB.x0, 313
	mov lvl1BoxBB.y0, 237
	mov lvl1BoxBB.x1, 484
	mov lvl1BoxBB.y1, 300

	mov lvl2BoxBB.x0, 313
	mov lvl2BoxBB.y0, 313
	mov lvl2BoxBB.x1, 484
	mov lvl2BoxBB.y1, 379

	; players
	invoke player1_reset
	mov p1.color, PLAYER_COLOR_BLUE
	invoke player2_reset
	mov p2.color, PLAYER_COLOR_RED

	ret
onCreate endp

; - called after window is closed
onDestroy proc
	invoke deleteBitmap, field
	invoke deleteBitmap, sprites
	invoke deletePen, bluePen
	invoke deletePen, redPen
	ret
onDestroy endp

; - game logic
onUpdate proc t:uint32
	.if (screen == MAIN_SCREEN)
		invoke aabb_pointInBB, lvl1BoxBB, mousePos
		.if (eax == TRUE)
			invoke isLeftMouseClicked
			.if (eax == TRUE)
				invoke ball_init, LV1_BALL_SPD
				mov matchTotalTime, LV1_MATCH_TIME
				mov level, 1
				mov screen, GAME_SCREEN
			.endif
		.endif
		invoke aabb_pointInBB, lvl2BoxBB, mousePos
		.if (eax == TRUE)
			invoke isLeftMouseClicked
			.if (eax == TRUE)
				invoke ball_init, LV2_BALL_SPD
				mov matchTotalTime, LV2_MATCH_TIME
				mov level, 2
				mov screen, GAME_SCREEN
			.endif
		.endif
	.elseif (screen == GAME_SCREEN)
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
	.elseif (screen == GAME_OVER_SCREEN)
		mov eax, t
		add elapsedTime, eax
		mov eax, elapsedTime
		.if (eax >= GAME_OVER_SCREEN_TOTAL_TIME)
			mov screen, MAIN_SCREEN
			mov elapsedTime, 0
		.endif
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
	.if (screen == MAIN_SCREEN)
		invoke renderBitmap, mainScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	.elseif (screen == GAME_SCREEN)
		call field_draw
		call ball_draw
		call player1_draw
		call player2_draw
		call writeScore
	.elseif (screen == GAME_OVER_SCREEN)
		invoke renderBitmap, gameOverScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
		call writeFinalResult
	.endif

	ret
onDraw endp

field_draw proc
	invoke renderBitmap, field, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
field_draw endp

writeScore proc
	.CONST
	playersNames db "Player1 - Player2",0
	scoreFormat db "%02i - %02i",0 
	timeFormat db "Time: %03i",0
	.DATA
	buf db 8 dup(0)
	.CODE
	invoke drawText, offset playersNames, 615, 17, 777, 63, DT_LEFT or DT_CENTER

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

writeFinalResult proc
	local playerWon:uint32

	.CONST
	finalResultFormat db "Player %i",0
	finalScoreFormat db "Score: %i - %i",0
	drawResultStr db "Draw",0
	.DATA
	finalResultBuf db 50 dup(0)
	.CODE

	mov eax, p2.score
	mov playerWon, 2
	.if (p1.score > eax)
		mov playerWon, 1
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