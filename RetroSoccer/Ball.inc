ifndef BALL_INC
BALL_INC=1

include common.inc
include AABB.inc
include Vec.inc

Ball struct
	bb AABB <>
	spd Vec <>
	speedScalar int32 ?
Ball ends

ball_init proto b:ptr Ball, speedScalar:int32
ball_draw proto b:ptr Ball, sprites:Bitmap
ball_update proto b:ptr Ball, p1:ptr Player, p2:ptr Player
ball_send proto b:ptr Ball
ball_recv proto b:ptr Ball

endif 