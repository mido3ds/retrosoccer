include common.inc

AABB STRUCT
	x0 uint32 ?
	y0 uint32 ?
	x1 uint32 ?
	y1 uint32 ?
AABB ENDS

aabb_calc proto x:uint32, y:uint32, w:uint32, h:uint32, aabb:ptr AABB
aabb_pointInBB proto a:AABB, p:vec
aabb_collided proto a:AABB, b:AABB, collisionDir:ptr vec