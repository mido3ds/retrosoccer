include common.inc

drawRedPlayer proto x:uint32,y:uint32
drawBluePlayer proto x:uint32,y:uint32
drawBall proto x:uint32,y:uint32
drawField proto 

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

stickY uint32 250, 250, 250, 250
stickX uint32 39, 168, 336, 534

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

.CODE
game_asm:

; - called before window is shown
onCreate proc
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
	;debugging
	printf 13, 0 ;remove last line
	printf "mousePos {x=%i, y=%i}", mousePos.x, mousePos.y
	
	ret
onUpdate endp

; - game rendering
onDraw proc t:double
	invoke drawField
	invoke drawBall, WND_WIDTH/2-BALL_LENGTH/2, WND_HEIGHT/2-BALL_LENGTH/2

	; draw sticks
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
	invoke setPen, redPen
	mov edx, 0
	.WHILE (edx < 4)
		mov eax, WND_WIDTH-PLAYER_WIDTH/2
		sub eax, stickX[edx *4]

		push edx
		invoke drawLine, eax, 0, eax, WND_HEIGHT
		pop edx

		inc edx
	.ENDW

	mov eax, 0
	.WHILE (eax < 11)
		mov ebx, playerStick[eax *4]

		mov ecx, stickX[ebx *4]
		mov edx, stickY[ebx *4]
		add edx, playerOffsetY[eax *4]

		push eax
		invoke drawBluePlayer, ecx, edx 
		pop eax

		inc eax
	.ENDW

	mov eax, 0
	.WHILE (eax < 11)
		mov ebx, playerStick[eax *4]

		mov ecx, WND_WIDTH-PLAYER_WIDTH
		sub ecx, stickX[ebx *4]

		mov edx, stickY[ebx *4]
		add edx, playerOffsetY[eax *4]

		push eax
		invoke drawRedPlayer, ecx, edx 
		pop eax

		inc eax
	.ENDW

	ret
onDraw endp


BKG_CLR equ 5a5754h

drawBluePlayer proc x:uint32,y:uint32
	local legX:uint32, legY:uint32

	push x
	pop legX
	add legX, 8

	push y
	pop legY
	add legY, 4
	invoke renderTBitmap, legX, legY, sprites, 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;upper leg

	add legY, PLAYER_HEIGHT/2+LEG_HEIGHT/2-9
	invoke renderTBitmap, legX, legY, sprites, 135, 217, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;lower leg

	invoke renderTBitmap, x, y, sprites, 137, 31, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR ;player
	ret
drawBluePlayer endp

drawRedPlayer proc x:uint32,y:uint32	
	local legX:uint32, legY:uint32

	push x
	pop legX
	sub legX, 5

	push y
	pop legY
	add legY, 4
	invoke renderTBitmap, legX, legY, sprites, 179, 52, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;upper leg

	add legY, PLAYER_HEIGHT/2+LEG_HEIGHT/2-11
	invoke renderTBitmap, legX, legY, sprites, 179, 52, LEG_WIDTH, LEG_HEIGHT, BKG_CLR ;lower leg

	invoke renderTBitmap, x, y, sprites, 63, 155, PLAYER_WIDTH, PLAYER_HEIGHT, BKG_CLR
	ret
drawRedPlayer endp

drawBall proc x:uint32,y:uint32
	invoke renderTBitmap, x, y, sprites, 198, 18, BALL_LENGTH, BALL_LENGTH, BKG_CLR
	ret
drawBall endp

drawField proc
	invoke renderBitmap, 0, 0, field, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

end game_asm