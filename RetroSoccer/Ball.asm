include Ball.inc

.const
.data
.data?
.code
ball_asm:

ball_init proc b:ptr Ball, speedScalar:int32

    ret
ball_init endp

ball_draw proc b:ptr Ball, sprites:Bitmap

    ret
ball_draw endp

ball_update proc b:ptr Ball, p1:ptr Player, p2:ptr Player

    ret
ball_update endp

ball_send proc b:ptr Ball

    ret
ball_send endp

ball_recv proc b:ptr Ball

    ret
ball_recv endp


end ball_asm