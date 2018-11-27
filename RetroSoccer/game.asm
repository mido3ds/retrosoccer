include common.inc

drawGoalKeeper proto x:uint32,y:uint32
drawPlayer proto x:uint32,y:uint32
drawBall proto x:uint32,y:uint32
drawField proto 

.CODE
fieldFileName db "assets/field.bmp",0
playersFileName db "assets/players.bmp",0

.DATA
fieldBmp Bitmap ?
spritesheetBmp Bitmap ?

stickPos uint32 250, 250, 250, 250

.CONST
PLAYER_Y dword -15, -74-15, 74-15, -167-15, -84-15, -15, 83-15, 2*83-15, 125-250-15, -15, 125-15
STICK_X  uint32 44, 144, 344, 522

.CODE
game_asm:

; - called before window is shown
onCreate proc
	invoke loadBitmap, offset fieldFileName
	mov fieldBmp, eax
	invoke loadBitmap, offset playersFileName
	mov spritesheetBmp, eax

	;invoke hideMouse
	ret
onCreate endp

; - called after window is closed
onDestroy proc
	invoke deleteBitmap, fieldBmp
	invoke deleteBitmap, spritesheetBmp
	ret
onDestroy endp

; - game logic
onUpdate proc t:double
	printfln "mousePos {x=%i, y=%i}", mousePos.x, mousePos.y
	ret
onUpdate endp

; - game rendering
onDraw proc t:double
	invoke drawField

	mov eax, [stickPos+0*4]
	add eax, [PLAYER_Y+0*4]
	invoke drawGoalKeeper, STICK_X,  eax

	mov ebx, 1
	.WHILE (ebx < 3)
		mov eax, [stickPos+1*4]
		add eax, [PLAYER_Y+ebx*4];y
		invoke drawPlayer, [STICK_X+1*4], eax

		inc ebx
	.ENDW
	.WHILE (ebx < 8)
		mov eax, [stickPos+2*4]
		add eax, [PLAYER_Y+ebx*4];y
		invoke drawPlayer, [STICK_X+2*4], eax

		inc ebx
	.ENDW
	.WHILE (ebx < 11)
		mov eax, [stickPos+3*4]
		add eax, [PLAYER_Y+ebx*4];y
		invoke drawPlayer, [STICK_X+3*4], eax

		inc ebx
	.ENDW
	ret
onDraw endp


BKG_CLR equ 5a5754h

drawPlayer proc x:uint32,y:uint32
	invoke renderTBitmap, x, y, spritesheetBmp, 137, 31, 21, 31, BKG_CLR
	ret
drawPlayer endp

drawGoalKeeper proc x:uint32,y:uint32
	invoke renderTBitmap, x, y, spritesheetBmp, 105, 186, 21, 31, BKG_CLR
	ret
drawGoalKeeper endp

drawBall proc x:uint32,y:uint32
	invoke renderTBitmap, x, y, spritesheetBmp, 198, 18, 18, 18, BKG_CLR
	ret
drawBall endp

drawField proc
	invoke renderBitmap, 0, 0, fieldBmp, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

end game_asm