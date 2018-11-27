include common.inc

drawPlayer proto
drawBall proto
drawField proto
drawGoalKeeper proto

S0X equ 44
S1X equ 144
S2X equ 344
S3X equ 522

R1 equ -74
R2 equ 74
R3 equ -167
R4 equ -84
R5 equ 

.CODE
fieldFileName db "assets/field.bmp",0
playersFileName db "assets/players.bmp",0

.DATA
fieldBmp Bitmap ?
spritesheetBmp Bitmap ?

s0 uint32 250
s1 uint32 250
s2 uint32 250
s3 uint32 250

.CODE
game_asm:

; - called before window is shown
onCreate proc
	invoke loadBitmap, offset fieldFileName
	mov fieldBmp, eax
	invoke loadBitmap, offset playersFileName
	mov spritesheetBmp, eax

	invoke hideMouse
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
	invoke drawPlayer
	invoke drawBall
	invoke drawGoalKeeper
	ret
onDraw endp


BKG_CLR equ 5a5754h

drawPlayer proc
	invoke renderTBitmap, mousePos.x, mousePos.y, spritesheetBmp, 137, 31, 21, 31, BKG_CLR
	ret
drawPlayer endp

drawGoalKeeper proc
	invoke renderTBitmap, 15, 231, spritesheetBmp, 105, 186, 21, 31, BKG_CLR
drawGoalKeeper endp

drawBall proc
	invoke renderTBitmap, 200, 200, spritesheetBmp, 198, 18, 18, 18, BKG_CLR
	ret
drawBall endp

drawField proc
	invoke renderBitmap, 0, 0, fieldBmp, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

end game_asm