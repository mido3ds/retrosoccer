ifndef BALL_INC
BALL_INC=1
include common.inc

Ball struct
	pos Vec <>
	spd Vec <>
	speedScalar int32 ?
	ballType uint32 ?
Ball ends

ifndef EXCLUDE_EXTERNS
	extern ball:Ball
endif ;EXCLUDE_EXTERNS

ball_draw proto 
ball_update proto 
ball_send proto 
ball_recv proto 

endif 