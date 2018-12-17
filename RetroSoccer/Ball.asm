include Player.inc
EXCLUDE_EXTERNS=1
include Ball.inc

public ball
extern sprites:Bitmap

.const
.data
.data?
ball Ball <>

.code
ball_asm:

ball_init proc speedScalar:int32
	invoke vec_set, addr ball.pos, BALL_START_FIRST ; TODO detect who is first
	invoke vec_set,  addr ball.spd, 0, 0
	push speedScalar
	pop ball.speedScalar

    ret
ball_init endp

ball_draw proc 
	invoke renderTBitmap, sprites, ball.pos.x, ball.pos.y, SPR_BALL
    ret
ball_draw endp

ball_update proc 
	local ballBB:AABB, legBB:AABB, collided:bool, i:uint32, colDir:Vec
	mov collided, FALSE
	invoke aabb_calc, ball.pos.x, ball.pos.y, SPR_BALL_LEN, SPR_BALL_LEN, addr ballBB

	; detect collision with goals
	.if (ballBB.y0 >= 175 && ballBB.y1 <= 325)
		.if (ballBB.x0 <= 11) ; left
			call player1_resetSticks
			call player2_resetSticks
			call player2_resetFigs

			inc p2.score
			invoke vec_set, addr ball.pos, BALL_START_SEC
			invoke vec_set, addr ball.spd, 0, 0
			ret
		.elseif (ballBB.x1 >= 788) ; right
			call player1_resetSticks
			call player2_resetSticks
			call player2_resetFigs

			inc p1.score
			invoke vec_set, addr ball.pos, BALL_START_FIRST
			invoke vec_set, addr ball.spd, 0, 0
			ret
		.endif
	.endif

	; detect collision with walls
	.if (ballBB.y0 <= 9 || ballBB.y1 >= 490) ; up or down
		invoke vec_negY, addr ball.spd
	.elseif (ballBB.x0 <= 9 || ballBB.x1 >= 790) ; left or right
		invoke vec_negX, addr ball.spd
	.endif
	
	; detect collision with legs
	mov i, 0
	.while (i < 11) 
		; first player legs
		mov edx, i
		invoke aabb_calc, p1.legPos[edx * sizeof Vec].x, p1.legPos[edx * sizeof Vec].y, SPR_LEG_WIDTH, SPR_LEG_HEIGHT, addr legBB
		invoke aabb_collided, ballBB, legBB, addr colDir
		.if (eax)
			mov collided, TRUE
			.break
		.endif

		; sec player legs
		mov edx, i
		invoke aabb_calc, p2.legPos[edx * sizeof Vec].x, p2.legPos[edx * sizeof Vec].y, SPR_LEG_WIDTH, SPR_LEG_HEIGHT, addr legBB
		invoke aabb_collided, ballBB, legBB, addr colDir
		.if (eax)
			mov collided, TRUE
			.break
		.endif
		
		inc i	
	.endw

	.if (collided == TRUE)
		invoke vec_smul, ball.speedScalar, addr colDir
		invoke vec_cpy, addr ball.spd, addr colDir
	.endif

	invoke vec_add, addr ball.pos, addr ball.spd
	
	printf "colDir(%02i,%02i),ball.spd(%02i,%02i),", colDir.x, colDir.y, ball.spd.x, ball.spd.y

	ret
ball_update endp

ball_send proc 

    ret
ball_send endp

ball_recv proc 

    ret
ball_recv endp


end ball_asm