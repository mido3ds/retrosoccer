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
	invoke clearScreen, 00ffffffh	
	
	ret
onDraw endp

end game_asm