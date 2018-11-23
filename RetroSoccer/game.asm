include common.inc

.CODE
game_asm:

; - called before window is shown
onCreate proc
	ret
onCreate endp

; - called after window is closed
onDestroy proc
	ret
onDestroy endp

; - game logic
onUpdate proc t:double
	ret
onUpdate endp

; - game rendering
onDraw proc t:double
	invoke clearScreen, 0000ffffh

	invoke drawLine, 0, 0, 500, 500
	invoke drawRect, 50, 60, 200, 100
	invoke drawEllipse, 0, 0, 30, 30

	ret
onDraw endp

end game_asm