.model flat, stdcall
include AABB.inc

.code
aabb_asm:

aabb_pointInBB proc a:AABB, p:vec
	mov eax, p.x
	mov ebx, p.y

	.if (eax >= a.x0 && eax <= a.x1 && ebx >= a.y0 && ebx <= a.y1)
		mov eax, TRUE
		ret
	.ENDIF

	mov eax, FALSE
	ret
aabb_pointInBB endp

aabb_collided proc a:AABB, b:AABB, collisionDir:ptr vec
	local randomY:int32
	invoke randInRange, -1, 2
	mov randomY, eax

	mov eax, a.x0
	mov ebx, a.y0
	mov ecx, a.x1
	mov edx, a.y1

	.IF     ((eax >= b.x0 && eax <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; right bottom
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; left top
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.ELSEIF ((eax >= b.x0 && eax <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; right top
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; left bottom
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.ELSE
		invoke vec_set, collisionDir, 0, 0
		mov eax, FALSE
	.ENDIF

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