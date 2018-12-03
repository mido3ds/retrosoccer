include common.inc

AABB STRUCT
	x0 uint32 ?
	y0 uint32 ?
	x1 uint32 ?
	y1 uint32 ?
AABB ENDS

.DATA
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/spritesheet.bmp",0
field Bitmap ?
sprites Bitmap ?
bluePen Pen ?
redPen Pen ?

; ball
ballPos IVec2 <>
ballVel IVec2 <>

; blue player
blueStickSelected bool FALSE, FALSE, FALSE, FALSE
blueStickY uint32 250, 250, 250, 250
bluleStickX uint32 39, 168, 336, 534
bluePlayerX uint32 11 dup(0)
bluePlayerY uint32 11 dup(0)
blueLeftLegX uint32 11 dup(0)
blueLeftLegY uint32 11 dup(0)
blueRightLegX uint32 11 dup(0)
blueRightLegY uint32 11 dup(0)
blueKick int32 0

; red player
redStickSelected bool FALSE, FALSE, FALSE, FALSE
redStickY uint32 250, 250, 250, 250
redStickX uint32 761, 632, 464, 266
redPlayerX uint32 11 dup(0)
redPlayerY uint32 11 dup(0)
redLeftLegX uint32 11 dup(0)
redLeftLegY uint32 11 dup(0)
redRightLegX uint32 11 dup(0)
redRightLegY uint32 11 dup(0)
redKick int32 0
redMovingUpDist int32 0

.CONST
playerOffsetY int32 0-SPR_PLAYER_HEIGHT/2, ;s0
		-74-SPR_PLAYER_HEIGHT/2, ;s1
		+74-SPR_PLAYER_HEIGHT/2, 
		-2*84-SPR_PLAYER_HEIGHT/2, ;s2
		-84-SPR_PLAYER_HEIGHT/2, 
		-SPR_PLAYER_HEIGHT/2, 
		+84-SPR_PLAYER_HEIGHT/2, 
		+2*84-SPR_PLAYER_HEIGHT/2,
		-125-SPR_PLAYER_HEIGHT/2, ;s3
		-SPR_PLAYER_HEIGHT/2, 
		+125-SPR_PLAYER_HEIGHT/2
playerStick uint32 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3
stickUpperLimit uint32 472, 400, 306, 348
stickLowerLimit uint32 25, 98, 194, 150

RED_PLAYER_MOVING_DISTANCE equ 7
KICK_DEFAULT_DIST equ 8

; sprite sheet info
BKG_CLR equ 5a5754h
SPR_PLAYER_HEIGHT equ 31
SPR_PLAYER_WIDTH equ 21
SPR_BALL_LEN equ 18
SPR_LEG_WIDTH equ 19
SPR_LEG_HEIGHT equ 13
SPR_BLUE_PLAYER0 equ <59,0,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_BLUE_PLAYER1 equ <38,0,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_RED_PLAYER0 equ <59,31,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_RED_PLAYER1 equ <38,31,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_BLUE_LEG0 equ <19,0,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_BLUE_LEG1 equ <0,0,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_RED_LEG0 equ <19,31,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_RED_LEG1 equ <0,31,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_BALL equ <80,0,SPR_BALL_LEN,SPR_BALL_LEN,BKG_CLR>

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
	call updateInput
	call updateSticks
	call updatePlayers
	call updateBall

	;debugging
	printf 13, 0 ;remove last line
	printf "mousePos {x=%03i, y=%03i}\\", mousePos.x, mousePos.y
	printf "bs{%i,%i,%i,%i}\\", blueStickSelected[0], blueStickSelected[1], blueStickSelected[2], blueStickSelected[3]
	printf "rs{%i,%i,%i,%i}\\", redStickSelected[0], redStickSelected[1], redStickSelected[2], redStickSelected[3]

	ret
onUpdate endp

; - game rendering
onDraw proc
	call drawField
	call drawBall
	call drawSticks
	call drawPlayers

	ret
onDraw endp

drawBluePlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, blueLeftLegX[ebx *4], blueLeftLegY[ebx *4], SPR_BLUE_LEG0;left leg
	invoke renderTBitmap, sprites, blueRightLegX[ebx *4], blueRightLegY[ebx *4], SPR_BLUE_LEG0;right leg
	invoke renderTBitmap, sprites, bluePlayerX[ebx *4], bluePlayerY[ebx *4], SPR_BLUE_PLAYER0 ;player
	ret
drawBluePlayer endp

drawRedPlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, redLeftLegX[ebx *4], redLeftLegY[ebx *4], SPR_RED_LEG1;left leg
	invoke renderTBitmap, sprites, redRightLegX[ebx *4], redRightLegY[ebx *4], SPR_RED_LEG1;right leg
	invoke renderTBitmap, sprites, redPlayerX[ebx *4], redPlayerY[ebx *4], SPR_RED_PLAYER1;player
	ret
drawRedPlayer endp

drawBall proc
	invoke renderTBitmap, sprites, ballPos.x, ballPos.y, SPR_BALL
	ret
drawBall endp

drawField proc
	invoke renderBitmap, field, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

getBoundingBox proc x:uint32, y:uint32, w:uint32, h:uint32, aabb:ptr AABB
	mov eax, aabb
	assume eax:ptr AABB

	push x
	pop [eax].x0

	push y
	pop [eax].y0

	mov ebx, x
	add ebx, w
	mov [eax].x1, ebx

	mov ebx, y
	add ebx, h
	mov [eax].y1, ebx

	ret
getBoundingBox endp

hasCollided proc a:AABB, b:AABB
	mov eax, a.x0
	mov ebx, a.y0
	mov ecx, a.x1
	mov edx, a.y1

	.IF ((eax >= b.x0 && eax <= b.x1) && (ebx >= b.y0 && ebx <= b.y1))
		mov eax, TRUE
		ret
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (edx >= b.y0 && edx <= b.y1))
		mov eax, TRUE
		ret
	.ELSEIF ((eax >= b.x0 && eax <= b.x1) && (edx >= b.y0 && edx <= b.y1))
		mov eax, TRUE
		ret
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (ebx >= b.y0 && ebx <= b.y1))
		mov eax, TRUE
		ret
	.ENDIF

	mov eax, FALSE
	ret
hasCollided endp

updateBlueLegsPositions proc playerNumber:uint32
	; get kick
	local kick:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	mov kick, 0
	.IF (blueStickSelected[ebx] == TRUE)
		push blueKick
		pop kick
	.ENDIF

	mov ecx, bluePlayerX[eax *4]
	mov edx, bluePlayerY[eax *4]

	; left leg
	add ecx, kick
	add ecx, 2
	add edx, 4
	mov blueLeftLegX[eax *4], ecx
	mov blueLeftLegY[eax *4], edx

	; right leg
	add edx, SPR_PLAYER_HEIGHT/2+SPR_LEG_HEIGHT/2-9
	mov blueRightLegX[eax *4], ecx
	mov blueRightLegY[eax *4], edx

	ret
updateBlueLegsPositions endp


updateRedLegsPositions proc playerNumber:uint32
	; get kick
	local kick:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	mov kick, 0
	.IF (redStickSelected[ebx] == TRUE)
		push redKick
		pop kick
	.ENDIF

	mov ecx, redPlayerX[eax *4]
	mov edx, redPlayerY[eax *4]

	; right leg
	add ecx, kick
	sub ecx, 1
	add edx, 4
	mov redRightLegX[eax *4], ecx
	mov redRightLegY[eax *4], edx

	; left leg
	add edx, SPR_PLAYER_HEIGHT/2+SPR_LEG_HEIGHT/2-9
	mov redLeftLegX[eax *4], ecx
	mov redLeftLegY[eax *4], edx

	ret
updateRedLegsPositions endp

updateBluePlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, bluleStickX[ebx *4]
	mov edx, blueStickY[ebx *4]
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
	mov edx, redStickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov redPlayerX[eax *4], ecx
	mov redPlayerY[eax *4], edx
	ret
updateRedPlayersPositions endp

updateInput proc
	local numOfSelected:uint32
	mov numOfSelected, 0

	; move sticks (blue)
	invoke isKeyPressed, VK_Q
	mov blueStickSelected[0], al
	.IF (blueStickSelected[0] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_W
	mov blueStickSelected[1], al
	.IF (blueStickSelected[1] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_E
	mov blueStickSelected[2], al
	.IF (blueStickSelected[2] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov blueStickSelected[2], FALSE
		.ENDIF
	.ENDIF

	invoke isKeyPressed, VK_R
	mov blueStickSelected[3], al
	.IF (blueStickSelected[3] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov blueStickSelected[3], FALSE
		.ENDIF
	.ENDIF

	; kick (blue)
	mov blueKick, 0
	invoke isLeftMouseClicked
	.IF (eax == TRUE)
		mov blueKick, KICK_DEFAULT_DIST
	.ENDIF
	invoke isRightMouseClicked
	.IF (eax == TRUE)
		mov blueKick, -KICK_DEFAULT_DIST
	.ENDIF

	; move sticks (red)
	mov numOfSelected, 0
	invoke isKeyPressed, VK_P
	mov redStickSelected[0], al
	.IF (redStickSelected[0] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_O
	mov redStickSelected[1], al
	.IF (redStickSelected[1] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_I
	mov redStickSelected[2], al
	.IF (redStickSelected[2] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov redStickSelected[2], FALSE
		.ENDIF
	.ENDIF

	invoke isKeyPressed, VK_U
	mov redStickSelected[3], al
	.IF (redStickSelected[3] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov redStickSelected[3], FALSE
		.ENDIF
	.ENDIF

	mov redMovingUpDist, 0
	invoke isKeyPressed, VK_UP
	.IF (eax == TRUE)
		mov redMovingUpDist, -RED_PLAYER_MOVING_DISTANCE
	.ENDIF
	invoke isKeyPressed, VK_DOWN
	.IF (eax == TRUE)
		mov redMovingUpDist, RED_PLAYER_MOVING_DISTANCE
	.ENDIF

	; kick (red)
	mov redKick, 0
	invoke isKeyPressed, VK_RIGHT
	.IF (eax == TRUE)
		mov redKick, KICK_DEFAULT_DIST
	.ENDIF
	invoke isKeyPressed, VK_LEFT
	.IF (eax == TRUE)
	   mov redKick, -KICK_DEFAULT_DIST
	.ENDIF

	ret
updateInput endp

updateSticks proc
	local i:uint32

	mov i, 0
	.WHILE (i < 4)
		; blue stick
		mov eax, i
		.IF (blueStickSelected[eax] == TRUE)
			mov ebx, mousePos.y
			mov blueStickY[eax *4], ebx

			; upper
			.IF (ebx > stickUpperLimit[eax *4])
				; blueStickY[i] = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop blueStickY[eax *4]
			.ENDIF

			; lower 
			.IF (ebx < stickLowerLimit[eax *4])
				; blueStickY[i] = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop blueStickY[eax *4]
			.ENDIF
		.ENDIF

		; red stick
		mov eax, i
		.IF (redStickSelected[eax] == TRUE)
			mov ebx, redMovingUpDist
			add redStickY[eax *4], ebx
			mov ebx, redStickY[eax *4]

			; upper
			.IF (ebx > stickUpperLimit[eax *4])
				; redStickY[i] = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop redStickY[eax *4]
			.ENDIF

			; lower 
			.IF (ebx < stickLowerLimit[eax *4])
				; redStickY[i] = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop redStickY[eax *4]
			.ENDIF
		.ENDIF

		inc i
	.ENDW

	ret
updateSticks endp

updatePlayers proc
	local i:uint32

	mov i, 0
	.WHILE (i < 11)
		invoke updateBluePlayersPositions, i
		invoke updateBlueLegsPositions, i

		invoke updateRedPlayersPositions, i
		invoke updateRedLegsPositions, i

		inc i
	.ENDW

	ret
updatePlayers endp

updateBall proc
	local ballBB:AABB, legBB:AABB, collided:bool, i:uint32
	mov collided, FALSE

	push mousePos.x
	pop ballPos.x
	push mousePos.y
	pop ballPos.y

	invoke getBoundingBox, ballPos.x, ballPos.y, SPR_BALL_LEN, SPR_BALL_LEN, addr ballBB
	
	; detect collision
	mov i, 0
	.WHILE (i < 11) 
		; blue legs
		mov edx, i
		invoke getBoundingBox, blueLeftLegX[edx *4], blueLeftLegY[edx *4], SPR_LEG_WIDTH, SPR_LEG_HEIGHT*2, addr legBB
		
		mov edx, i
		invoke hasCollided, ballBB, legBB
		mov collided, al
		.BREAK .IF (eax == TRUE)

		; red legs
		mov edx, i
		invoke getBoundingBox, redRightLegX[edx *4], redRightLegY[edx *4], SPR_LEG_WIDTH, SPR_LEG_HEIGHT*2, addr legBB

		mov edx, i
		invoke hasCollided, ballBB, legBB
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
		mov eax, SPR_PLAYER_WIDTH/2
		add eax, bluleStickX[edx *4]
		invoke drawLine, eax, 0, eax, WND_HEIGHT

		invoke setPen, redPen
		mov edx, i
		mov eax, SPR_PLAYER_WIDTH/2
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