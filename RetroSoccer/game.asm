include common.inc

drawBluePlayer proto playerNumber:uint32

drawRedPlayer proto playerNumber:uint32
;;;;;;;;;
updateredPlayersPositions proto playerNumber:uint32
;;;;;;;;;
updateredLegsPositions proto  playerNumber:uint32



drawBall proto x:uint32,y:uint32
drawField proto 
getBoundingBox proto x:uint32, y:uint32, w:uint32, h:uint32, x1:ptr uint32, y1:ptr uint32
hasCollided proto x0:uint32, y0:uint32, x1:uint32, y1:uint32, x01:uint32, y01:uint32, x11:uint32, y11:uint32
updateLegsPositions proto playerNumber:uint32
updatePlayersPositions proto playerNumber:uint32


PLAYER_HEIGHT equ 31
PLAYER_WIDTH equ 21
BALL_LENGTH equ 18
LEG_WIDTH equ 19
LEG_HEIGHT equ 13

.DATA
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/sprites2.bmp",0
field Bitmap ?
sprites Bitmap ?
bluePen Pen ?
redPen Pen ?

ballPos IVec2 <>
lastMousePos IVec2 <>
mouseLvl int32 0
mouselvlred int32 0


stickXred uint32 761 , 632, 464, 266






stickY uint32 250, 250, 250, 250
stickX uint32 39, 168, 336, 534
stickSelected bool FALSE, FALSE, FALSE, FALSE
stickUpperLimit uint32 472, 400, 306, 348
stickLowerLimit uint32 25, 98, 194, 150

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
;;;;;;;;;;;;;
playerStickred uint32 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3
;;;;;;;;;;;
playerredOffsetY int32 0-PLAYER_HEIGHT/2, ;s0
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


leftLegX uint32 11 dup(0)
leftLegY uint32 11 dup(0)

rightLegX uint32 11 dup(0)
rightLegY uint32 11 dup(0)

leftLegXred uint32 11 dup(0)
leftLegYred uint32 11 dup(0)

rightLegXred uint32 11 dup(0)
rightLegYred uint32 11 dup(0)
playerX uint32 11 dup(0)
playerY uint32 11 dup(0)
playerXred uint32 11 dup(0)
playerYred uint32 11 dup(0)

.CODE
game_asm:

; - called before window is shown
onCreate proc
	mov lastMousePos.x, 0
	mov lastMousePos.y, 0
	mov mouseLvl, 0
	mov mouselvlred,0
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
	ret
onDestroy endp

; - game logic
onUpdate proc t:double
	local numOfSelected:uint32, ballPos2:IVec2, x2:uint32, y2:uint32, col:bool
	mov numOfSelected, 0
	mov col, FALSE

	push mousePos.x
	pop ballPos.x
	push mousePos.y
	pop ballPos.y

	; compute mouseLvl
	; mouseLvl = mousePos.x - lastMousePos.x
	mov eax, mousePos.x
	sub eax, lastMousePos.x
	mov mouseLvl, eax

	cmp mouseLvl, 0
	jl l0
		.IF (mouseLvl < 2)
			mov mouseLvl, 0
		.ELSEIF (mouseLvl < 10)
			mov mouseLvl, 10
		.ELSE
			mov mouseLvl, 15
		.ENDIF
	jmp l3
	l0:

	cmp mouseLvl, -2
	jl l1
		mov mouseLvl, 0
	jmp l3
	l1:

	cmp mouseLvl, -10
	jl l2
		mov mouseLvl, -10
	l2:
		mov mouseLvl, -15
	l3:

	push mousePos.x
	push mousePos.y
	pop lastMousePos.y
	pop lastMousePos.x
	;;;;;;;;;;;;;;;

	mov mouselvlred, 0
	invoke isKeyPressed, VK_RIGHT
	.IF (eax == TRUE)
		mov mouselvlred, 10
	.ENDIF
	invoke isKeyPressed, VK_LEFT
	.IF (eax == TRUE)
	   mov mouselvlred, -10
	.ENDIF

	;;;;;;;;;;;;;;;


	; get selected keys
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

	; mov sticks on y
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

	; collision;;;;;;;;;
	invoke getBoundingBox, ballPos.x, ballPos.y, BALL_LENGTH, BALL_LENGTH, addr ballPos2.x, addr ballPos2.y
	; left legs
	mov edx, 0
	.WHILE (edx < 11) 
		push edx
		invoke getBoundingBox, leftLegX[edx *4], leftLegY[edx *4], LEG_WIDTH, LEG_HEIGHT, addr x2, addr y2
		pop edx

		push edx
		invoke hasCollided, ballPos.x, ballPos.y, ballPos2.x, ballPos2.y,\	
							leftLegX[edx *4], leftLegY[edx *4], x2, y2
		.IF (eax == TRUE)
			mov col, TRUE
			.BREAK
		.ENDIF
		pop edx
		 
		inc edx		
	.ENDW

	;;;;;;;;;;;;;;;
	; collision;;;;;;;;;RED
	
	; left legs
	mov edx, 0
	.WHILE (edx < 11) 
		push edx
		invoke getBoundingBox, leftLegXred[edx *4], leftLegYred[edx *4], LEG_WIDTH, LEG_HEIGHT, addr x2, addr y2
		pop edx

		push edx
		invoke hasCollided, ballPos.x, ballPos.y, ballPos2.x, ballPos2.y,\	
							leftLegXred[edx *4], leftLegYred[edx *4], x2, y2
		.IF (eax == TRUE)
			mov col, TRUE
			.BREAK
		.ENDIF
		pop edx
		 
		inc edx		
	.ENDW
	;;;;;;;;;;;;;;;;;;
	; right legs
	mov edx, 0
	.WHILE (edx < 11) 
		push edx
		invoke getBoundingBox, rightLegXred[edx *4], rightLegYred[edx *4], LEG_WIDTH, LEG_HEIGHT, addr x2, addr y2
		pop edx

		push edx
		invoke hasCollided, ballPos.x, ballPos.y, ballPos2.x, ballPos2.y,\	
							rightLegXred[edx *4], rightLegYred[edx *4], x2, y2
		.IF (eax == TRUE)
			mov col, TRUE
			.BREAK
		.ENDIF
		pop edx
		 
		inc edx		
	.ENDW


	;debugging
	printf 13, 0 ;remove last line
	printf "mousePos {x=%i, y=%i}\\", mousePos.x, mousePos.y
	printf "mouseLvl=%i\\", mouseLvl
	printf "s0=%i, s1=%i, s2=%i, s3=%i\\", stickSelected[0], stickSelected[1], stickSelected[2], stickSelected[3]
	printf "collided=%i", col

	ret
onUpdate endp

; - game rendering
onDraw proc t:double
	local playerNumber:uint32

	invoke drawField
	invoke drawBall, ballPos.x, ballPos.y

	; draw blue sticks
	invoke setPen, bluePen
	mov edx, 0
	.WHILE (edx < 4)
		mov eax, PLAYER_WIDTH/2
		add eax, stickX[edx *4]

		push edx
		invoke drawLine, eax, 0, eax, WND_HEIGHT
		pop edx
		inc edx
	.ENDW
















;;;;;;;;;;;;;;;;;;;;;;;;
	; draw red sticks
	invoke setPen, redPen
	mov edx, 0
	.WHILE (edx < 4)
		mov eax, PLAYER_WIDTH/2
		
		add eax, stickXred[edx *4]

		push edx
		invoke drawLine, eax, 0, eax, WND_HEIGHT
		pop edx
		inc edx
	.ENDW
	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	; draw blue players
	mov eax, 0
	.WHILE (eax < 11)
		mov playerNumber, eax

		invoke updatePlayersPositions, playerNumber
		invoke updateLegsPositions, playerNumber
		invoke drawBluePlayer, playerNumber

		mov eax, playerNumber
		inc eax
	.ENDW



	;;;;;;;;;;;;;;;;;;;

	; draw red players
	mov eax, 0
	.WHILE (eax < 11)
		mov playerNumber, eax

		invoke updateredPlayersPositions, playerNumber
		invoke updateredLegsPositions, playerNumber
		invoke drawRedPlayer, playerNumber

		mov eax, playerNumber
		inc eax
	.ENDW

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;












	ret
onDraw endp


BKG_CLR equ 5a5754h

drawBluePlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, leftLegX[ebx *4], leftLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;left leg
	invoke renderTBitmap, sprites, rightLegX[ebx *4], rightLegY[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;right leg
	invoke renderTBitmap, sprites, playerX[ebx *4], playerY[ebx *4], 137, 31, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR ;player
	ret
drawBluePlayer endp




;;;;;;;;;;;;;;;;;

drawRedPlayer proc playerNumber:uint32
	mov ebx, playerNumber

	invoke renderTBitmap, sprites, leftLegXred[ebx *4], leftLegYred[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;left leg
	invoke renderTBitmap, sprites, rightLegXred[ebx *4], rightLegYred[ebx *4], 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;right leg
	invoke renderTBitmap, sprites, playerXred[ebx *4], playerYred[ebx *4], 63, 155, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR ;player
	ret
drawRedPlayer endp
;;;;;;;;;;;;;;;



drawBall proc x:uint32,y:uint32
	invoke renderTBitmap, sprites, x, y, 198, 18, BALL_LENGTH, BALL_LENGTH, BKG_CLR
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

hasCollided proc x0:uint32, y0:uint32, x1:uint32, y1:uint32, x01:uint32, y01:uint32, x11:uint32, y11:uint32
	mov eax, x01
	mov ebx, y01
	mov ecx, x11
	mov edx, y11

	.IF (((eax >= x0 && eax <=x1) && (ebx >= y0 && ebx <= y1)) || ((ecx >= x0 && ecx <= x1) && (edx >= y0 && edx <= y1)))
		mov eax, TRUE
	.ELSE
		mov eax, FALSE
	.ENDIF

	ret
hasCollided endp

updateLegsPositions proc playerNumber:uint32
	; get lvl
	local lvl:int32

	mov eax, playerNumber
	mov ebx, playerStickred[eax *4]

	mov lvl, 0
	.IF (stickSelected[ebx] == TRUE)
		push mouseLvl
		pop lvl
	.ENDIF

	mov ecx, playerX[eax *4]
	mov edx, playerY[eax *4]

	; left leg
	add ecx, lvl
	add ecx, 2
	add edx, 4
	mov leftLegX[eax *4], ecx
	mov leftLegY[eax *4], edx

	; right leg
	add edx, PLAYER_HEIGHT/2+LEG_HEIGHT/2-9
	mov rightLegX[eax *4], ecx
	mov rightLegY[eax *4], edx

	ret
updateLegsPositions endp


updateredLegsPositions proc playerNumber:uint32
	; get lvl
	local lvl:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	

	mov lvl, 0
	.IF (stickSelected[ebx] == TRUE)
		push mouselvlred
		pop lvl
	.ENDIF

	mov ecx, playerXred[eax *4]
	mov edx, playerYred[eax *4]

	; left leg
	add ecx, lvl
	add ecx, 2
	add edx, 4
	mov leftLegXred[eax *4], ecx
	mov leftLegYred[eax *4], edx

	; right leg
	add edx, PLAYER_HEIGHT/2+LEG_HEIGHT/2-9
	mov rightLegXred[eax *4], ecx
	mov rightLegYred[eax *4], edx

	ret
updateredLegsPositions endp

updatePlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, stickX[ebx *4]
	mov edx, stickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov playerX[eax *4], ecx
	mov playerY[eax *4], edx
	ret
updatePlayersPositions endp

;;;;;;;;;;;;;;;;;;;;;;;
updateredPlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, stickXred[ebx *4]
	mov edx, stickY[ebx *4]
	add edx, playerredOffsetY[eax *4]

	; store x,y
	mov playerXred[eax *4], ecx
	mov playerYred[eax *4], edx
	ret
updateredPlayersPositions endp
;;;;;;;;;;;;;;;;;
end game_asm