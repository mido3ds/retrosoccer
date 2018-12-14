ifndef VEC_INC
VEC_INC=1

ifndef MODEL_TAG
MODEL_TAG=1
.model flat, stdcall
endif ;MODEL_TAG

int32 typedef dword
uint32 typedef dword

Vec STRUCT
	x int32 ?
	y int32 ?
Vec ENDS

vec_add proto dest:ptr Vec, b:ptr Vec
vec_negX proto v:ptr Vec
vec_negY proto v:ptr Vec
vec_neg proto v:ptr Vec
vec_smul proto s:uint32, v:ptr Vec
vec_cpy proto dest:ptr Vec, src:ptr Vec
vec_set proto v:ptr Vec, x:int32, y:int32

endif