EXCLUDE_EXTERNS=1
include Player.inc

public p1, p2
extern bluePen:Pen, redPen:Pen, sprites:Bitmap, mousePos:Vec

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

.data
.data?
p1 Player <>
p2 Player <>

.code
player_asm:

player1_reset proc
	mov p1.score, 0
	mov p1.kickDir, 0
	call player1_resetSticks
	call player1_updateFigs

	ret
player1_reset endp

player1_resetSticks proc
	invoke vec_set, offset p1.stickPos[0 * sizeof Vec], STICK_0_X, 250
	invoke vec_set, offset p1.stickPos[1 * sizeof Vec], STICK_1_X, 250
	invoke vec_set, offset p1.stickPos[2 * sizeof Vec], STICK_2_X, 250
	invoke vec_set, offset p1.stickPos[3 * sizeof Vec], STICK_3_X, 250
	mov p1.stickIsSelected[0], FALSE
	mov p1.stickIsSelected[1], FALSE
	mov p1.stickIsSelected[2], FALSE
	mov p1.stickIsSelected[3], FALSE

	ret
player1_resetSticks endp

player1_draw proc
	; sticks
	.if (p1.color == PLAYER_COLOR_BLUE)
		invoke setPen, bluePen
	.else
		invoke setPen, redPen
	.endif
	invoke drawLine, p1.stickPos[0 * sizeof Vec].x, 0, p1.stickPos[0 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p1.stickPos[1 * sizeof Vec].x, 0, p1.stickPos[1 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p1.stickPos[2 * sizeof Vec].x, 0, p1.stickPos[2 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p1.stickPos[3 * sizeof Vec].x, 0, p1.stickPos[3 * sizeof Vec].x, WND_HEIGHT

	; figures
	mov ebx, 0
	.while (ebx < 11)
		.if (p1.color == PLAYER_COLOR_BLUE)
			invoke renderTBitmap, sprites, p1.legPos[ebx * sizeof Vec].x, p1.legPos[ebx * sizeof Vec].y, SPR_BLUE_LEG1;leg
			invoke renderTBitmap, sprites, p1.figPos[ebx * sizeof Vec].x, p1.figPos[ebx * sizeof Vec].y, SPR_BLUE_PLAYER1 ;figure
		.else
			invoke renderTBitmap, sprites, p1.legPos[ebx * sizeof Vec].x, p1.legPos[ebx * sizeof Vec].y, SPR_RED_LEG1;leg
			invoke renderTBitmap, sprites, p1.figPos[ebx * sizeof Vec].x, p1.figPos[ebx * sizeof Vec].y, SPR_RED_PLAYER1 ;figure
		.endif

		inc ebx
	.endw

	ret
player1_draw endp

player1_update proc
	call player1_getInput
	call player1_updateSticks
	call player1_updateFigs

	ret
player1_update endp

player1_getInput proc
	local numOfSelected:uint32
	mov numOfSelected, 0

	; move sticks
	invoke isKeyPressed, VK_Q
	mov p1.stickIsSelected[0], al
	.if (p1.stickIsSelected[0] == TRUE)
		inc numOfSelected
	.endif

	invoke isKeyPressed, VK_W
	mov p1.stickIsSelected[1], al
	.if (p1.stickIsSelected[1] == TRUE)
		inc numOfSelected
	.endif

	invoke isKeyPressed, VK_E
	mov p1.stickIsSelected[2], al
	.if (p1.stickIsSelected[2] == TRUE)
		inc numOfSelected
		.if (numOfSelected > 2)
			dec numOfSelected
			mov p1.stickIsSelected[2], FALSE
		.endif
	.endif

	invoke isKeyPressed, VK_R
	mov p1.stickIsSelected[3], al
	.if (p1.stickIsSelected[3] == TRUE)
		inc numOfSelected
		.if (numOfSelected > 2)
			dec numOfSelected
			mov p1.stickIsSelected[3], FALSE
		.endif
	.endif

	; kick
	mov p1.kickDir, 0
	invoke isLeftMouseClicked
	.if (eax)
		mov p1.kickDir, KICK_DEFAULT_DIST
	.endif
	invoke isRightMouseClicked
	.if (eax)
		mov p1.kickDir, -KICK_DEFAULT_DIST
	.endif

	ret
player1_getInput endp

player1_updateSticks proc
	local i:uint32

	mov i, 0
	.while (i < 4)
		mov eax, i
		.if (p1.stickIsSelected[eax])
			mov ebx, mousePos.y
			mov p1.stickPos[eax * sizeof Vec].y, ebx

			; upper
			.if (ebx > stickUpperLimit[eax *4])
				; p1.stickPos[i].y = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop p1.stickPos[eax * sizeof Vec].y
			.endif

			; lower 
			.if (ebx < stickLowerLimit[eax *4])
				; p1.stickPos[i].y = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop p1.stickPos[eax * sizeof Vec].y
			.endif
		.endif

		inc i
	.endw

	ret
player1_updateSticks endp

player1_updateFigs proc
	local i:uint32
	mov i, 0
	.while (i < 11)
		; figPos[i].x = stickPos[figStickNum[i]].x - SPR_PLAYER_WIDTH/2
		mov eax, i
		mov eax, figStickNum[eax * sizeof uint32]
		mov eax, p1.stickPos[eax * sizeof Vec].x
		sub eax, SPR_PLAYER_WIDTH/2
		mov ebx, i
		mov p1.figPos[ebx * sizeof Vec].x, eax
		
		; figPos[i].y = stickPos[figStickNum[i]].y + figOffsetY[i]
		mov eax, i
		mov eax, figStickNum[eax * sizeof uint32]
		mov eax, p1.stickPos[eax * sizeof Vec].y
		add eax, figOffsetY[ebx * sizeof uint32] 
		mov p1.figPos[ebx * sizeof Vec].y, eax

		; legPos[i] = figPos[i] + (LEG1_OFFSET_X, LEG1_OFFSET_Y)
		invoke vec_cpy, addr p1.legPos[ebx * sizeof Vec], addr p1.figPos[ebx * sizeof Vec]
		mov ebx, i
		add p1.legPos[ebx * sizeof Vec].x, LEG1_OFFSET_X
		add p1.legPos[ebx * sizeof Vec].y, LEG1_OFFSET_Y

		; legPos[i].x += kickDir
		mov eax, figStickNum[ebx * sizeof uint32]
		.if (p1.stickIsSelected[eax])
			mov eax, p1.kickDir
			add p1.legPos[ebx * sizeof Vec].x, eax
		.endif

		inc i
	.endw

	ret
player1_updateFigs endp

player1_send proc
	local i:uint32
	invoke send, offset p1.kickDir, sizeof int32
	.if (eax != sizeof uint32)
		mov eax, FALSE
		ret
	.endif

	mov i, 0
	.while (i < 4)
		mov eax, i
		lea eax, p1.stickPos[eax * sizeof Vec]
		add eax, sizeof uint32
		invoke send, eax, sizeof uint32 ; send p1.stickPos[i].y
		.if (eax != sizeof uint32)
			mov eax, FALSE
			ret
		.endif

		inc i
	.endw

	invoke send, offset p1.stickIsSelected, 4
	.if (eax != 4)
		mov eax, FALSE
		ret
	.endif

	mov eax, TRUE
	ret
player1_send endp


player2_reset proc
	mov p2.score, 0
	mov p2.kickDir, 0
	call player2_resetSticks
	call player2_resetFigs

	ret
player2_reset endp

player2_resetSticks proc 
	invoke vec_set, offset p2.stickPos[0 * sizeof Vec], WND_WIDTH-STICK_0_X, 250
	invoke vec_set, offset p2.stickPos[1 * sizeof Vec], WND_WIDTH-STICK_1_X, 250
	invoke vec_set, offset p2.stickPos[2 * sizeof Vec], WND_WIDTH-STICK_2_X, 250
	invoke vec_set, offset p2.stickPos[3 * sizeof Vec], WND_WIDTH-STICK_3_X, 250
	mov p2.stickIsSelected[0], FALSE
	mov p2.stickIsSelected[1], FALSE
	mov p2.stickIsSelected[2], FALSE
	mov p2.stickIsSelected[3], FALSE

	ret
player2_resetSticks endp

player2_resetFigs proc
	local i:uint32
	mov i, 0
	.while (i<11)
		; figPos[i].x = stickPos[figStickNum[i]].x - SPR_PLAYER_WIDTH/2
		mov eax, i
		mov eax, figStickNum[eax * sizeof uint32]
		mov eax, p2.stickPos[eax * sizeof Vec].x
		sub eax, SPR_PLAYER_WIDTH/2
		mov ebx, i
		mov p2.figPos[ebx * sizeof Vec].x, eax
		
		; figPos[i].y = figOffsetY[i] + WND_HEIGHT/2
		mov eax, figOffsetY[ebx * sizeof uint32] 
		add eax, WND_HEIGHT/2
		mov p2.figPos[ebx * sizeof Vec].y, eax

		; legPos[i] = figPos[i] + (LEG2_OFFSET_X, LEG2_OFFSET_Y)
		invoke vec_cpy, addr p2.legPos[ebx * sizeof Vec], addr p2.figPos[ebx * sizeof Vec]
		mov ebx, i
		add p2.legPos[ebx * sizeof Vec].x, LEG2_OFFSET_X
		add p2.legPos[ebx * sizeof Vec].y, LEG2_OFFSET_Y

		inc i
	.endw

	ret
player2_resetFigs endp

player2_draw proc
	; sticks
	.if (p2.color == PLAYER_COLOR_BLUE)
		invoke setPen, bluePen
	.else
		invoke setPen, redPen
	.endif
	invoke drawLine, p2.stickPos[0 * sizeof Vec].x, 0, p2.stickPos[0 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p2.stickPos[1 * sizeof Vec].x, 0, p2.stickPos[1 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p2.stickPos[2 * sizeof Vec].x, 0, p2.stickPos[2 * sizeof Vec].x, WND_HEIGHT
	invoke drawLine, p2.stickPos[3 * sizeof Vec].x, 0, p2.stickPos[3 * sizeof Vec].x, WND_HEIGHT

	; figures
	mov ebx, 0
	.while (ebx<11)
		.if (p2.color == PLAYER_COLOR_BLUE)
			invoke renderTBitmap, sprites, p2.legPos[ebx * sizeof Vec].x, p2.legPos[ebx * sizeof Vec].y, SPR_BLUE_LEG2;leg
			invoke renderTBitmap, sprites, p2.figPos[ebx * sizeof Vec].x, p2.figPos[ebx * sizeof Vec].y, SPR_BLUE_PLAYER2 ;figure
		.else
			invoke renderTBitmap, sprites, p2.legPos[ebx * sizeof Vec].x, p2.legPos[ebx * sizeof Vec].y, SPR_RED_LEG2;leg
			invoke renderTBitmap, sprites, p2.figPos[ebx * sizeof Vec].x, p2.figPos[ebx * sizeof Vec].y, SPR_RED_PLAYER2 ;figure
		.endif

		inc ebx
	.endw

	ret
player2_draw endp

player2_recv proc
	local i:uint32

	invoke recv, offset p2.kickDir, sizeof int32
	.if (eax != sizeof int32)
		mov eax, FALSE
		ret
	.endif

	mov i, 0
	.while (i<4)
		mov eax, i
		lea eax, p2.stickPos[eax * sizeof Vec]
		add eax, sizeof uint32
		invoke recv, eax, sizeof uint32
		.if (eax != sizeof uint32)
			mov eax, FALSE
			ret
		.endif

		inc i
	.endw
	printfln "s{%i,%i,%i,%i}",p2.stickPos[0].y, p2.stickPos[1*sizeof Vec].y, p2.stickPos[2*sizeof Vec].y, p2.stickPos[3*sizeof Vec].y

	invoke recv, offset p2.stickIsSelected, 4
	.if (eax != 4)
		mov eax, FALSE
		ret
	.endif

	; reflect received values
	neg p2.kickDir

	mov i, 0
	.while (i<4)
		mov eax, i
		lea eax, p2.stickPos[eax * sizeof Vec]
		assume eax:ptr Vec

		sub [eax].y, WND_HEIGHT
		neg [eax].y

		inc i
	.endw

	; calc figs and legs
	mov i, 0
	.while (i < 11)
		; figPos[i].y = stickPos[figStickNum[i]].y + figOffsetY[i]
		mov ebx, i
		mov eax, figStickNum[ebx * sizeof uint32]
		mov eax, p2.stickPos[eax * sizeof Vec].y
		add eax, figOffsetY[ebx * sizeof uint32] 
		mov p2.figPos[ebx * sizeof Vec].y, eax

		; legPos[i] = figPos[i] + (LEG2_OFFSET_X, LEG2_OFFSET_Y)
		invoke vec_cpy, addr p2.legPos[ebx * sizeof Vec], addr p2.figPos[ebx * sizeof Vec]
		mov ebx, i
		add p2.legPos[ebx * sizeof Vec].x, LEG2_OFFSET_X
		add p2.legPos[ebx * sizeof Vec].y, LEG2_OFFSET_Y

		; legPos[i].x += kickDir
		mov eax, figStickNum[ebx * sizeof uint32]
		.if (p2.stickIsSelected[eax])
			mov eax, p2.kickDir
			add p2.legPos[ebx * sizeof Vec].x, eax
		.endif

		inc i
	.endw

	mov eax, TRUE
	ret
player2_recv endp


end player_asm