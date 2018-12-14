.model flat, stdcall
include AABB.inc

.code
aabb_asm:

aabb_zero proc a:ptr AABB
	mov eax, a
	assume eax:ptr AABB
	mov [eax].x0, 0
	mov [eax].x1, 0
	mov [eax].y0, 0
	mov [eax].y1, 0
	ret
aabb_zero endp

aabb_pointInBB proc a:AABB, p:Vec
	mov eax, p.x
	mov ebx, p.y

	.if (eax >= a.x0 && eax <= a.x1 && ebx >= a.y0 && ebx <= a.y1)
		mov eax, TRUE
		ret
	.endif

	mov eax, FALSE
	ret
aabb_pointInBB endp

aabb_collided proc a:AABB, b:AABB, collisionDir:ptr Vec
	local randomY:int32
	invoke randInRange, -1, 2
	mov randomY, eax

	mov eax, a.x0
	mov ebx, a.y0
	mov ecx, a.x1
	mov edx, a.y1

	.if     ((eax >= b.x0 && eax <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; right bottom
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.elseif ((ecx >= b.x0 && ecx <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; left top
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.elseif ((eax >= b.x0 && eax <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; right top
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.elseif ((ecx >= b.x0 && ecx <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; left bottom
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.else
		invoke vec_set, collisionDir, 0, 0
		mov eax, FALSE
	.endif

	ret
aabb_collided endp

aabb_calc proc x:uint32, y:uint32, w:uint32, h:uint32, aabb:ptr AABB
	mov eax, aabb
	assume eax:ptr AABB

	push x
	pop [eax].x0

	push y
	pop [eax].y0

	mov ebx, x
	add ebx, w
	mov [eax].x1, ebx

	mov ebx, y
	add ebx, h
	mov [eax].y1, ebx

	ret
aabb_calc endp

end aabb_asm