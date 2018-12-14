include Vec.inc

.code
vec_asm:

vec_smul proc s:uint32, v:ptr Vec
	mov ebx, v
	assume ebx:ptr Vec
	
	mov ecx, s

	mov eax, [ebx].x
	imul ecx
	mov [ebx].x, eax

	mov eax, [ebx].y
	imul ecx
	mov [ebx].y, eax

	ret
vec_smul endp

vec_cpy proc dest:ptr Vec, src:ptr Vec
	mov eax, src
	mov ebx, dest
	assume eax:ptr Vec
	assume ebx:ptr Vec

	push [eax].x
	pop [ebx].x
	push [eax].y
	pop [ebx].y

	ret
vec_cpy endp

vec_set proc v:ptr Vec, x:int32, y:int32
	mov eax, v
	assume eax:ptr Vec
	
	push x
	pop [eax].x
	push y
	pop [eax].y

	ret
vec_set endp

vec_add proc dest:ptr Vec, b:ptr Vec
	mov eax, b
	assume eax:ptr Vec
	mov ebx, [eax].x
	mov ecx, [eax].y
	
	mov eax, dest
	assume eax:ptr Vec
	add [eax].x, ebx
	add [eax].y, ecx
	ret
vec_add endp

vec_negX proc v:ptr Vec
	mov eax, v
	assume eax:ptr Vec
	neg [eax].x
	ret
vec_negX endp

vec_negY proc v:ptr Vec
	mov eax, v
	assume eax:ptr Vec
	neg [eax].y
	ret
vec_negY endp

vec_neg proc v:ptr Vec
	mov eax, v
	assume eax:ptr Vec
	neg [eax].x
	neg [eax].y
	ret
vec_neg endp

end vec_asm