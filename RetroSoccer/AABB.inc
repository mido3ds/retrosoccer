ifndef AABB_INC
AABB_INC=1
include common.inc

AABB STRUCT
	x0 uint32 ?
	y0 uint32 ?
	x1 uint32 ?
	y1 uint32 ?
AABB ENDS

aabb_zero proto a:ptr AABB
aabb_calc proto x:uint32, y:uint32, w:uint32, h:uint32, aabb:ptr AABB
aabb_pointInBB proto a:AABB, p:Vec
aabb_collided proto a:AABB, b:AABB, collisionDir:ptr Vec

endif