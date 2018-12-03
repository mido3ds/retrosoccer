include common.inc

.DATA
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/sprites2.bmp",0
field Bitmap ?
sprites Bitmap ?
bluePen Pen ?
redPen Pen ?

ballPos IVec2 <>

blueKick int32 0
redKick int32 0

stickY uint32 250, 250, 250, 250
stickSelected bool FALSE, FALSE, FALSE, FALSE

bluePlayerX uint32 11 dup(0)
bluePlayerY uint32 11 dup(0)
blueLeftLegX uint32 11 dup(0)
blueLeftLegY uint32 11 dup(0)
blueRightLegX uint32 11 dup(0)
blueRightLegY uint32 11 dup(0)

redPlayerX uint32 11 dup(0)
redPlayerY uint32 11 dup(0)
redLeftLegX uint32 11 dup(0)
redLeftLegY uint32 11 dup(0)
redRightLegX uint32 11 dup(0)
redRightLegY uint32 11 dup(0)

.CONST
playerOffsetY int32 0-PLAYER_HEIGHT/2, ;s0
		-74-PLAYER_HEIGHT/2, ;s1
		+74-PLAYER_HEIGHT/2, 
		-2*84-PLAYER_HEIGHT/2, ;s2
		-84-PLAYER_HEIGHT/2, 
		-PLAYER_HEIGHT/2, 
		+84-PLAYER_HEIGHT/2, 
		+2*84-PLAYER_HEIGHT/2,
		-125-PLAYER_HEIGHT/2, ;s3
		-PLAYER_HEIGHT/2, 
		+125-PLAYER_HEIGHT/2

playerStick uint32 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3
stickUpperLimit uint32 472, 400, 306, 348
stickLowerLimit uint32 25, 98, 194, 150
; blue
bluleStickX uint32 39, 168, 336, 534
; red
redStickX uint32 761, 632, 464, 266

PLAYER_HEIGHT equ 31
PLAYER_WIDTH equ 21
BALL_LENGTH equ 18
LEG_WIDTH equ 19
LEG_HEIGHT equ 13

.CODE
game_asm:

; - called before window is shown
onCreate proc
	mov ballPos.x, 356
	mov ballPos.y, 245

	invoke loadBitmap, offset fieldFileName
	mov field, eax
	invoke loadBitmap, offset spritesFileName
	mov sprites, eax

	invoke createPen, 3, 0ff0000h ;blue
	mov bluePen, eax
	invoke createPen, 3, 0000ffh ;red
	mov redPen, eax

	;invoke hideMouse
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
onUpdate proc t:double
	call updateInput
	call updateSticks
	call updatePlayers
	call updateBall

	;debugging
	printf 13, 0 ;remove last line
	printf "mousePos {x=%i, y=%i}\\", mousePos.x, mousePos.y
	printf "blueKick=%i\\", blueKick
	printf "s0=%i, s1=%i, s2=%i, s3=%i\\", stickSelected[0], stickSelected[1], stickSelected[2], stickSelected[3]

	ret
onUpdate endp

; - game rendering
onDraw proc t:double
	call drawField
	call drawBall
	call drawSticks
	call drawPlayers

	ret
onDraw endp


BKG_CLR equ 5a5754h

drawBluePlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, blueLeftLegX[ebx *4], blueLeftLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;left leg
	invoke renderTBitmap, sprites, blueRightLegX[ebx *4], blueRightLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;right leg
	invoke renderTBitmap, sprites, bluePlayerX[ebx *4], bluePlayerY[ebx *4], 137, 31, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR ;player
	ret
drawBluePlayer endp

drawRedPlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, redLeftLegX[ebx *4], redLeftLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;left leg
	invoke renderTBitmap, sprites, redRightLegX[ebx *4], redRightLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;right leg
	invoke renderTBitmap, sprites, redPlayerX[ebx *4], redPlayerY[ebx *4], 63, 155, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR ;player
	ret
drawRedPlayer endp

drawBall proc
	invoke renderTBitmap, sprites, ballPos.x, ballPos.y, 198, 18, BALL_LENGTH, BALL_LENGTH, BKG_CLR
	ret
drawBall endp

drawField proc
	invoke renderBitmap, field, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

getBoundingBox proc x:uint32, y:uint32, w:uint32, h:uint32, x1Ptr:ptr uint32, y1Ptr:ptr uint32
	mov eax, x
	add eax, w
	mov ebx, x1Ptr
	mov [ebx], eax

	mov eax, y
	add eax, h
	mov ebx, y1Ptr
	mov [ebx], eax
	ret
getBoundingBox endp

hasCollided proc x0:uint32, y0:uint32, x1:uint32, y1:uint32,\ 
				x01:uint32, y01:uint32, x11:uint32, y11:uint32

	mov eax, x01
	mov ebx, y01
	mov ecx, x11
	mov edx, y11

	.IF (((eax >= x0 && eax <=x1) && (ebx >= y0 && ebx <= y1))\
	 || ((ecx >= x0 && ecx <= x1) && (edx >= y0 && edx <= y1)))
		mov eax, TRUE
	.ELSE
		mov eax, FALSE
	.ENDIF

	ret
hasCollided endp

updateBlueLegsPositions proc playerNumber:uint32
	; get lvl
	local lvl:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	mov lvl, 0
	.IF (stickSelected[ebx] == TRUE)
		push blueKick
		pop lvl
	.ENDIF

	mov ecx, bluePlayerX[eax *4]
	mov edx, bluePlayerY[eax *4]

	; left leg
	add ecx, lvl
	add ecx, 2
	add edx, 4
	mov blueLeftLegX[eax *4], ecx
	mov blueLeftLegY[eax *4], edx

	; right leg
	add edx, PLAYER_HEIGHT/2+LEG_HEIGHT/2-9
	mov blueRightLegX[eax *4], ecx
	mov blueRightLegY[eax *4], edx

	ret
updateBlueLegsPositions endp


updateRedLegsPositions proc playerNumber:uint32
	; get lvl
	local lvl:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	
	mov lvl, 0
	.IF (stickSelected[ebx] == TRUE)
		push redKick
		pop lvl
	.ENDIF

	mov ecx, redPlayerX[eax *4]
	mov edx, redPlayerY[eax *4]

	; left leg
	add ecx, lvl
	add ecx, 2
	add edx, 4
	mov redLeftLegX[eax *4], ecx
	mov redLeftLegY[eax *4], edx

	; right leg
	add edx, PLAYER_HEIGHT/2+LEG_HEIGHT/2-9
	mov redRightLegX[eax *4], ecx
	mov redRightLegY[eax *4], edx

	ret
updateRedLegsPositions endp

updateBluePlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, bluleStickX[ebx *4]
	mov edx, stickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov bluePlayerX[eax *4], ecx
	mov bluePlayerY[eax *4], edx
	ret
updateBluePlayersPositions endp

updateRedPlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, redStickX[ebx *4]
	mov edx, stickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov redPlayerX[eax *4], ecx
	mov redPlayerY[eax *4], edx
	ret
updateRedPlayersPositions endp

updateInput proc
	local numOfSelected:uint32
	mov numOfSelected, 0

	; get input
	invoke isKeyPressed, VK_Q
	mov stickSelected[0], al
	.IF (stickSelected[0] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_W
	mov stickSelected[1], al
	.IF (stickSelected[1] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_E
	mov stickSelected[2], al
	.IF (stickSelected[2] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov stickSelected[2], FALSE
		.ENDIF
	.ENDIF

	invoke isKeyPressed, VK_R
	mov stickSelected[3], al
	.IF (stickSelected[3] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov stickSelected[3], FALSE
		.ENDIF
	.ENDIF

	mov blueKick, 0
	invoke isLeftMouseClicked
	.IF (eax == TRUE)
		mov blueKick, 10
	.ENDIF
	invoke isRightMouseClicked
	.IF (eax == TRUE)
		mov blueKick, -10
	.ENDIF

	mov redKick, 0
	invoke isKeyPressed, VK_RIGHT
	.IF (eax == TRUE)
		mov redKick, 10
	.ENDIF
	invoke isKeyPressed, VK_LEFT
	.IF (eax == TRUE)
	   mov redKick, -10
	.ENDIF

	ret
updateInput endp

updateSticks proc
	mov eax, 0
	.WHILE (eax < 4)
		.IF (stickSelected[eax] == TRUE)
			mov ebx, mousePos.y
			mov stickY[eax *4], ebx

			; upper
			.IF (ebx > stickUpperLimit[eax *4])
				; stickY[i] = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop stickY[eax *4]
			.ENDIF

			; lower 
			.IF (ebx < stickLowerLimit[eax *4])
				; stickY[i] = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop stickY[eax *4]
			.ENDIF
		.ENDIF
		inc eax
	.ENDW

	ret
updateSticks endp

updatePlayers proc
	local playerNumber:uint32

	; update blue players
	mov eax, 0
	.WHILE (eax < 11)
		mov playerNumber, eax

		invoke updateBluePlayersPositions, playerNumber
		invoke updateBlueLegsPositions, playerNumber

		mov eax, playerNumber
		inc eax
	.ENDW

	; update red players
	mov eax, 0
	.WHILE (eax < 11)
		mov playerNumber, eax

		invoke updateRedPlayersPositions, playerNumber
		invoke updateRedLegsPositions, playerNumber

		mov eax, playerNumber
		inc eax
	.ENDW

	ret
updatePlayers endp

updateBall proc
	local ballPos2:IVec2, x2:uint32, y2:uint32, collided:bool, i:uint32
	mov collided, FALSE

	push mousePos.x
	pop ballPos.x
	push mousePos.y
	pop ballPos.y

	invoke getBoundingBox, ballPos.x, ballPos.y, BALL_LENGTH, BALL_LENGTH, addr ballPos2.x, addr ballPos2.y

	; collision with blue
	; left legs
	mov i, 0
	.WHILE (i < 11) 
		; blue legs
		mov edx, i
		invoke getBoundingBox, blueLeftLegX[edx *4], blueLeftLegY[edx *4], LEG_WIDTH, LEG_HEIGHT*2, addr x2, addr y2
		
		mov edx, i
		invoke hasCollided, ballPos.x, ballPos.y, ballPos2.x, ballPos2.y,\	
							blueLeftLegX[edx *4], blueLeftLegY[edx *4], x2, y2
		mov collided, al
		.BREAK .IF (eax == TRUE)

		; left red legs
		mov edx, i
		invoke getBoundingBox, redLeftLegX[edx *4], redLeftLegY[edx *4], LEG_WIDTH, LEG_HEIGHT*2, addr x2, addr y2

		mov edx, i
		invoke hasCollided, ballPos.x, ballPos.y, ballPos2.x, ballPos2.y,\	
							redLeftLegX[edx *4], redLeftLegY[edx *4], x2, y2
		mov collided, al
		.BREAK .IF (eax == TRUE)
		
		inc i	
	.ENDW

	printf "collided=%i", collided

	ret
updateBall endp

drawSticks proc
	local i:uint32

	mov i, 0
	.WHILE (i < 4)
		invoke setPen, bluePen
		mov edx, i
		mov eax, PLAYER_WIDTH/2
		add eax, bluleStickX[edx *4]
		invoke drawLine, eax, 0, eax, WND_HEIGHT

		invoke setPen, redPen
		mov edx, i
		mov eax, PLAYER_WIDTH/2
		add eax, redStickX[edx *4]
		invoke drawLine, eax, 0, eax, WND_HEIGHT

		inc i
	.ENDW

	ret
drawSticks endp

drawPlayers proc
	local i:uint32

	mov i, 0
	.WHILE (i < 11)
		invoke drawBluePlayer, i
		invoke drawRedPlayer, i
		inc i
	.ENDW

	ret
drawPlayers endp

end game_asm