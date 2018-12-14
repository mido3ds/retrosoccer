include Player.inc
include SpriteConstants.inc

figure_init proto f:ptr Figure, stick:ptr Stick, figNum:uint32
figure_draw proto f:ptr Figure, sprites:Bitmap, color:uint32, onLeft:bool
figure_update proto f:ptr Figure, kick:int32
figure_send proto f:ptr Figure
figure_recv proto f:ptr Figure

stick_init proto s:ptr Stick, onLeft:bool, stickNum:uint32
stick_draw proto s:ptr Stick
stick_update proto s:ptr Stick
stick_send proto s:ptr Stick
stick_recv proto s:ptr Stick
stick_isSelected proto s:ptr Stick

.const
figOffsetY int32 0-SPR_PLAYER_HEIGHT/2, ;s0
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
figStickNum uint32 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3
stickUpperLimit uint32 472, 400, 306, 348
stickLowerLimit uint32 25, 98, 194, 150
stickX uint32 39, 168, 336, 534

KICK_DEFAULT_DIST equ 8

.data
extern bluePen:Pen
extern redPen:Pen

.data?
.code
player_asm:

player_getFigStick proc p:ptr Player, figNum:uint32
	; eax = figStickNum[figNum * sizeof uint32] * sizeof Stick
	mov eax, figNum
	mov eax, figStickNum[eax * sizeof uint32]
	mov ecx, sizeof Stick
	mul ecx

	; eax += &p.sticks[0]
	mov ebx, p
	assume ebx:ptr Player
	lea ebx, [ebx].sticks
	add eax, ebx
	ret 
player_getFigStick endp

player_getFig proc p:ptr Player, i:uint32
	; eax = i * sizeof Figure
	mov eax, i
	mov ebx, sizeof Figure
	mul ebx

	; eax += &p.figs[0]
	mov ebx, p
	assume ebx:ptr Player
	lea ebx, [ebx].figs[0]
	add eax, ebx
	ret
player_getFig endp

player_getStick proc p:ptr Player, i:uint32
	; eax = i * sizeof Stick
	mov eax, i
	mov ebx, sizeof Stick
	mul ebx

	; eax += &p.sticks[0]
	mov ebx, p
	assume ebx:ptr Player
	lea ebx, [ebx].sticks[0]
	add eax, ebx
	ret
player_getStick endp

player_init proc b:ptr Player, color:uint32, onLeft:bool
	local i:uint32

	mov eax, b
	assume eax:ptr Player
	
	mov [eax].score, 0
	push color
	pop [eax].color

	; sticks
	mov i, 0
	lea ebx, [eax].sticks[0]
	.while (i < 4)
		push ebx
		invoke stick_init, ebx, onLeft, i

		pop ebx
		add ebx, sizeof Stick
		inc i
	.endw

	; figs
	mov i, 0
	mov eax, b
	assume eax:ptr Player
	lea ebx, [eax].figs[0]
	.while (i < 11)
		push ebx
		invoke player_getFigStick, b, i
		pop ebx

		push ebx
		invoke figure_init, ebx, eax, i
		pop ebx

		add ebx, sizeof Figure
		inc i
	.endw

	mov eax, b
	assume eax:ptr Player
	mov [eax].kick, 0
	mov bl, onLeft
	mov [eax].onLeft, bl

	ret
player_init endp

player_draw proc b:ptr Player, sprites:Bitmap
	local i:uint32, color:uint32, onLeft:bool

	mov eax, b
	assume eax:ptr Player
	push [eax].color
	pop color
	mov bl, [eax].onLeft
	mov onLeft, bl

	; set pen color
	.if (color == PLAYER_COLOR_RED)
		invoke setPen, redPen
	.else
		invoke setPen, bluePen
	.endif

	; sticks
	mov i, 0
	lea eax, [eax].sticks[0]
	.while (i < 4)
		push eax
		invoke stick_draw, eax
		pop eax

		add eax, sizeof Stick
		inc i
	.endw

	; figures
	mov i, 0
	mov ebx, b
	assume ebx:ptr Player
	lea ebx, [ebx].figs[0]
	.while (i < 11)
		push ebx
		invoke figure_draw, ebx, sprites, color, onLeft
		pop ebx

		add ebx, sizeof Figure
		inc i
	.endw

    ret
player_draw endp

updateInput proc p:ptr Player
	local numOfSelected:uint32, stickSelected[4]:bool
	mov numOfSelected, 0

	; get selected sticks
	invoke isKeyPressed, VK_Q
	mov stickSelected[0], al
	.if (stickSelected[0] == TRUE)
		inc numOfSelected
	.endif

	invoke isKeyPressed, VK_W
	mov stickSelected[1], al
	.if (stickSelected[1] == TRUE)
		inc numOfSelected
	.endif

	invoke isKeyPressed, VK_E
	mov stickSelected[2], al
	.if (stickSelected[2] == TRUE)
		inc numOfSelected
		.if (numOfSelected > 2)
			dec numOfSelected
			mov stickSelected[2], FALSE
		.endif
	.endif

	invoke isKeyPressed, VK_R
	mov stickSelected[3], al
	.if (stickSelected[3] == TRUE)
		inc numOfSelected
		.if (numOfSelected > 2)
			dec numOfSelected
			mov stickSelected[3], FALSE
		.endif
	.endif

	; get kick
	mov ebx, p
	assume ebx:ptr Player
	mov [ebx].kick, 0
	invoke isLeftMouseClicked
	.if (eax == TRUE)
		mov [ebx].kick, KICK_DEFAULT_DIST
	.endif
	invoke isRightMouseClicked
	.if (eax == TRUE)
		mov [ebx].kick, -KICK_DEFAULT_DIST
	.endif

	ret
updateInput endp

player_update proc b:ptr Player
	local i:uint32, kick:int32

	; get kick
	mov eax, b
	assume eax:ptr Player
	push [eax].kick
	pop kick

	; sticks
	lea eax, [eax].sticks[0]
	mov i, 0
	.while (i < 4)
		push eax
		invoke stick_update, eax
		pop eax

		add eax, sizeof Stick
		inc i
	.endw

	; figures
	mov eax, b
	assume eax:ptr Player
	lea eax, [eax].figs[0]
	mov i, 0
	.while (i < 11)
		push eax
		invoke figure_update, eax, kick
		pop eax

		add eax, sizeof Figure
		inc i
	.endw

    ret
player_update endp

player_send proc p:ptr Player

    ret
player_send endp

player_recv proc p:ptr Player

    ret
player_recv endp

figure_init proc f:ptr Figure, stick:ptr Stick, figNum:uint32
	; f.stick = stick
	mov eax, f
	assume eax:ptr Figure
	push stick
	pop [eax].stick

	; f.offsetY = figOffsetY[figNum]
	mov ecx, figNum
	mov ecx, figOffsetY[ecx * sizeof int32]
	mov [eax].offsetY, ecx

    ret
figure_init endp

; TODO: optimize
figure_draw proc f:ptr Figure, sprites:Bitmap, color:uint32, onLeft:bool
	local pos:Vec, legPos:Vec, lowerLegY:uint32

	mov eax, f
	assume eax:ptr Figure

	; get positions
	push [eax].pos.x
	pop pos.x
	push [eax].pos.y
	pop pos.y
	push [eax].legBB.x0
	pop legPos.x
	push [eax].legBB.y0
	pop legPos.y

	; lower leg y
	push legPos.y
	pop lowerLegY
	add lowerLegY, SPR_PLAYER_HEIGHT/2+SPR_LEG_HEIGHT/2-9

	; draw
	.if (onLeft == TRUE)
		.if (color == PLAYER_COLOR_BLUE)
			invoke renderTBitmap, sprites, legPos.x, legPos.y, SPR_BLUE_LEG0;upper leg
			invoke renderTBitmap, sprites, legPos.x, lowerLegY, SPR_BLUE_LEG0;lower leg
			invoke renderTBitmap, sprites, pos.x, pos.y, SPR_BLUE_PLAYER0 ;player
		.else
			invoke renderTBitmap, sprites, legPos.x, legPos.y, SPR_RED_LEG0;upper leg
			invoke renderTBitmap, sprites, legPos.x, lowerLegY, SPR_RED_LEG0;lower leg
			invoke renderTBitmap, sprites, pos.x, pos.y, SPR_RED_PLAYER0 ;player
		.endif
	.else
        .if (color == PLAYER_COLOR_BLUE)
			invoke renderTBitmap, sprites, legPos.x, legPos.y, SPR_BLUE_LEG1;upper leg
			invoke renderTBitmap, sprites, legPos.x, lowerLegY, SPR_BLUE_LEG1;lower leg
			invoke renderTBitmap, sprites, pos.x, pos.y, SPR_BLUE_PLAYER1 ;player
		.else
			invoke renderTBitmap, sprites, legPos.x, legPos.y, SPR_RED_LEG1;upper leg
			invoke renderTBitmap, sprites, legPos.x, lowerLegY, SPR_RED_LEG1;lower leg
			invoke renderTBitmap, sprites, pos.x, pos.y, SPR_RED_PLAYER1 ;player
		.endif
	.endif

    ret
figure_draw endp

figure_update proc f:ptr Figure, kick:int32
	; prepare pointers
	mov eax, f
	assume eax:ptr Figure
	mov ebx, [eax].stick
	assume ebx:ptr Stick

	; get kick
	invoke stick_isSelected, ebx
	.if (eax == FALSE)
		mov kick, 0
	.endif

	; get stick pos
	mov ecx, [ebx].pos.x
	mov edx, [ebx].pos.y
	add edx, [eax].offsetY

	; f.pos
	mov [eax].pos.x, ecx
	mov [eax].pos.y, edx 

	; f.legBB
	add ecx, kick
	add ecx, 2
	add edx, 4
	mov [eax].legBB.x0, ecx
	mov [eax].legBB.y0, edx
	lea ebx, [eax].legBB
	invoke aabb_calc, ecx, edx, SPR_LEG_WIDTH, SPR_LEG_HEIGHT*2, ebx

    ret
figure_update endp

figure_send proc f:ptr Figure
    
    ret
figure_send endp

figure_recv proc f:ptr Figure
    
    ret
figure_recv endp


stick_init proc s:ptr Stick, onLeft:bool, stickNum:uint32
    mov eax, s
	assume eax:ptr Stick
	
	; s.y = 250
	mov [eax].pos.y, WND_HEIGHT/2

	; s.x = stickX[stickNum]
	mov ebx, stickNum
	mov ebx, stickX[ebx * sizeof uint32]
	.if (onLeft==FALSE)
		sub ebx, WND_WIDTH
		neg ebx
	.endif
	add ebx, SPR_PLAYER_WIDTH/2
	mov [eax].pos.x, ebx

	; s.selected = FALSE
	mov [eax].selected, FALSE

    ret
stick_init endp

stick_draw proc s:ptr Stick
	mov eax, s
	assume eax:ptr Stick
	mov eax, [eax].pos.x

    invoke drawLine, eax, 0, eax, WND_HEIGHT
    ret
stick_draw endp

stick_update proc s:ptr Stick
    
    ret
stick_update endp

stick_send proc s:ptr Stick
    
    ret
stick_send endp

stick_recv proc s:ptr Stick
    
    ret
stick_recv endp

stick_isSelected proc s:ptr Stick

	ret
stick_isSelected endp

end player_asm