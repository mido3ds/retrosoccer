ifndef COMMON_INC
COMMON_INC=1

.xmm
ifndef MODEL_TAG
MODEL_TAG=1
.model flat, stdcall
endif ;MODEL_TAG
option casemap:none

include Vec.inc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							constants								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
TRUE	equ		1
FALSE	equ		0
FAIL    equ	    -1
NULL	equ		0
ifndef SUCCESS
SUCCESS equ		0
endif

WND_WIDTH    equ	800
WND_HEIGHT   equ	500 

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							types   								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
pntr typedef dword

bool typedef byte ; TRUE=1 | FALSE=0
char typedef byte ; ASCII
ubyte typedef byte ; 0 : 255

int16 typedef word ; -32,768 : 32,767
int32 typedef dword ; -2,147,483,648 : 2,147,483,647
int64 typedef qword ; -9,223,372,036,854,775,808 : 9,223,372,036,854,775,807

uint16 typedef word ; 0 : 65,535
uint32 typedef dword ; 0 : 4,294,967,295
uint64 typedef qword ; 0 : 18,446,744,073,709,551,615

float typedef real4 ; 1.18*e–38 : 3.40*e38
double typedef real8 ; 2.23*e–308 : 1.79*e308

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							random  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; simple pseudo-random number generator (32 bit)
; implements "linear congruential generator" algorithm
rand proto
randInRange proto a:uint32, b:uint32 ; in [a,b)
randBool proto
seedRand proto s:uint32

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							general  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
EXIT_SUCCESS=0
EXIT_FAILURE=1

; - calls onDestroy and exit game
exit proto 

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							graphics  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
Bitmap typedef uint32
Font typedef uint32
Pen typedef uint32
Brush typedef uint32
Color typedef uint32

; color is in format 00bbggrrH
; ex: 000000ffH -> red
;	  0000ff00H -> blue
;     00ff0000H -> green
;     00000000H -> black
;     00ffffffH -> white
clearScreen proto color:Color

; eax = handle to bitmap|NULL
loadBitmap proto fileName:ptr char

; eax=non zero on success | NULL
deleteBitmap proto bitmap:Bitmap

; - render bitmap on point (xs, ys) of screen, (xb, yb) is starting point of bitmap, 
; - (w, h) is how many pixels it would take from the bitmap
renderBitmap proto bitmap:Bitmap, xs:uint32, ys:uint32, xb:uint32, yb:uint32, w:uint32, h:uint32

; - render transparent bitmap, takes background color to remove
renderTBitmap proto bitmap:Bitmap, xs:uint32, ys:uint32, xb:uint32, yb:uint32, w:uint32, h:uint32, bkgColor:Color

; - draw text in buffer in rectangle defined by (x1, x2, y1, y2), according to given format
; format values:
;
; DT_TOP: Justifies the text to the top of the rectangle.
; DT_BOTTOM: Justifies the text to the bottom of the rectangle. 
;         This value is used only with the DT_SINGLELINE value.
; DT_CENTER: Centers text horizontally in the rectangle.
; DT_VCENTER: Centers text vertically. This value is used only with the DT_SINGLELINE value.
; DT_LEFT: Aligns text to the left.
; DT_RIGHT: Aligns text to the right.
; DT_SINGLELINE: Displays text on a single line only. 
;         Carriage returns and line feeds do not break the line.
; DT_WORDBREAK: Breaks words. Lines are automatically broken between words if a word 
;         would extend past the edge of the rectangle specified by the lpRect parameter. 
;         A carriage return-line feed sequence also breaks the line.
;         If this is not specified, output is on one line.
;
; If the function succeeds, the return value is the height of the text in logical units. 
; If DT_VCENTER or DT_BOTTOM is specified, the return value is the offset from lpRect->top to the bottom of the drawn text
; If the function fails, the return value is zero.
drawText proto buf:ptr char, x1:uint32, y1:uint32, x2:uint32, y2:uint32, format:uint32

; eax=previous color|CLR_INVALID
setTextColor proto color:Color

; eax=handle to font|NULL
; available weights: FW_DONTCARE, FW_THIN, FW_EXTRALIGHT, FW_LIGHT, 
;                   FW_NORMAL, FW_MEDIUM, FW_SEMIBOLD, FW_BOLD, 
;                   FW_EXTRABOLD, FW_HEAVY
createFont proto fontName:ptr char, height:uint32, weight:uint32, italic:dword, underlined:dword, strikeout:dword	

; eax=old font|NULL
setFont proto font:Font

; eax=old font
resetFont proto

deleteFont proto font:Font

; eax=pen handle
createPen proto penWidth:uint32, color:Color

; eax=old pen
setPen proto pen:Pen
setPenColor proto color:Color

; eax=non zero on success|NULL
deletePen proto pen:Pen

; eax=handle to brush
createBrush proto color:Color

; eax=old brush
setBrush proto brush:Brush

; eax = non zero on success|NULL
deleteBrush proto brush:Brush
setBrushColor proto color:Color

drawLine proto x1:uint32, y1:uint32, x2:uint32, y2:uint32
drawRect proto x1:uint32, y1:uint32, x2:uint32, y2:uint32
drawRoundRect proto x1:uint32, y1:uint32, x2:uint32, y2:uint32, w:uint32, h:uint32
drawEllipse proto x1:uint32, y1:uint32, x2:uint32, y2:uint32

; list of format enums
DT_TOP                               equ 0h
DT_LEFT                              equ 0h
DT_CENTER                            equ 1h
DT_RIGHT                             equ 2h
DT_VCENTER                           equ 4h
DT_BOTTOM                            equ 8h
DT_WORDBREAK                         equ 10h
DT_SINGLELINE                        equ 20h
DT_EXPANDTABS                        equ 40h
DT_TABSTOP                           equ 80h
DT_NOCLIP                            equ 100h
DT_EXTERNALLEADING                   equ 200h
DT_CALCRECT                          equ 400h
DT_NOPREFIX                          equ 800h
DT_INTERNAL                          equ 1000h
DT_EDITCONTROL      			  equ 2000h
DT_PATH_ELLIPSIS    			  equ 4000h
DT_END_ELLIPSIS     			  equ 8000h
DT_MODIFYSTRING     			  equ 10000h
DT_RTLREADING       			  equ 20000h
DT_WORD_ELLIPSIS    			  equ 40000h
CLR_INVALID                          equ 0FFFFh

; available waits for createFont
FW_DONTCARE                          equ 0
FW_THIN                              equ 100
FW_EXTRALIGHT                        equ 200
FW_LIGHT                             equ 300
FW_NORMAL                            equ 400
FW_MEDIUM                            equ 500
FW_SEMIBOLD                          equ 600
FW_BOLD                              equ 700
FW_EXTRABOLD                         equ 800
FW_HEAVY                             equ 900
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							memory  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; - allocate `memSize` bytes on heap 
; - new memory content initialized to zero
; eax = pointer to new memory
;
; linux malloc: https://linux.die.net/man/3/malloc
malloc proto memSize:uint32

; - allocate `newSize` bytes on heap, copy `mem` content to it, free `mem`
; eax = pointer to new memory
; 
; linux realloc: https://linux.die.net/man/3/realloc
realloc proto mem:pntr, newSize:uint32

; - free heap memory at address `mem`
;
; linux free: https://linux.die.net/man/3/free
free proto mem:pntr

; - repeat `data` `len` times at address `dest`
;
; linux memset: https://linux.die.net/man/3/memset
memset proto dest:pntr, data:byte, len:uint32

; - equivalent to `memset(dest, 0, len)`
memzero proto dest:pntr, len:uint32

; - copy `len` bytes from `src` to `dest`
;
; linux memcpy: https://linux.die.net/man/3/memcpy
memcpy equ <CopyMemory>
CopyMemory proto dest:pntr, src:pntr, len:uint32

; - size of HEAP memory at address `mem`
; eax = mem.size
memsize proto mem:pntr

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							string  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; - convert args into a string in `dest` according to format
; - doesnt work with floats 
; eax = bytes written in dest(except null termination)|FAIL
;
; more info https://docs.microsoft.com/en-us/windows/desktop/api/winuser/nf-winuser-wsprintfa
; linux sprintf: https://linux.die.net/man/3/sprintf
; format specification: https://docs.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=vs-2017
sprintf equ <wsprintfA>
wsprintfA proto c des:ptr char, format:ptr char, args:VARARG

strupper equ <CharUpperA>
CharUpperA PROTO s:ptr char

strlower equ <CharLowerA>
CharLowerA PROTO s:ptr char

isLower equ <IsCharLowerA>
IsCharLowerA PROTO s:ptr char

isUpper equ <IsCharUpperA>
IsCharUpperA PROTO s:ptr char

isAlpha equ <IsCharAlphaA>
IsCharAlphaA proto s:char

isAlphaNum equ <IsCharAlphaNumericA>
IsCharAlphaNumericA proto s:char

; - concatenate two strings
; - s1 must contain enough space after its null terminator for s2
; s1 += s2
; eax = &s1|FAIL
;
; linux strcat: https://linux.die.net/man/3/strcat
strcat equ <lstrcatA> 
lstrcatA PROTO s1:ptr char, s2:ptr char

; - concatenate one string with part of another
; - s1 must contain at most n bytes after its null terminator
; s1 += s2[0:n]
; eax = &s1|FAIL
;
; linux strncat: https://linux.die.net/man/3/strncpy
strncat equ <StrNCatA>
StrNCatA proto s1:ptr char, s2:ptr char, n:uint32

; - get address of first cr in s
; eax = &s[s.first(cr)]|FAIL
;
; linux strchr: https://linux.die.net/man/3/strchr
strfirst equ <StrChrA>
StrChrA proto s:ptr char, cr:char

; - reversed strfirst
; eax = &s[s.last(cr)]|FAIL
;
; linux strrchr: https://linux.die.net/man/3/strrchr
strlast equ <StrRChrA>
StrRChrA proto s:ptr char, cr:char

; - compare two strings
; s1=s2 -> eax = 0
; s1>s2 -> eax = 1
; s1<s2 -> eax = -1
;
; linux strcmp: https://linux.die.net/man/3/strcmp
strcmp equ <lstrcmpA> 
lstrcmpA PROTO s1:ptr char, s2:ptr char

; - compare parts of two strings
; n=0			-> eax = 0
; s1[:n]=s2[:n] -> eax = 0
; s1[:n]>s2[:n] -> eax = 1
; s1[:n]<s2[:n] -> eax = -1
;
; linux strncmp: https://linux.die.net/man/3/strncmp
strncmp equ <StrCmpNA>
StrCmpNA proto s1:ptr char, s2:ptr char, n:uint32

; - copy a string
; s2 = s1.copy()
; eax = &s1
;
; linux strcpy: https://linux.die.net/man/3/strcpy
strcpy equ <lstrcpyA> 
lstrcpyA PROTO s1:ptr char, s2:ptr char

; - copy part of a string
; s2 = s1[:n].copy()
; eax = &s1
;
; linux strncpy: https://linux.die.net/man/3/strncpy
strncpy equ <lstrcpynA>
lstrcpynA proto s1:ptr char, s2:ptr char, n:uint32

; - get string length (withoud null terminator)
; eax = s.size
;
; \example\
; > .DATA
; > s db "IN",0
; > .CODE
; > invoke strlen, offset s 
; eax = 2
;
; linux strlen: https://linux.die.net/man/3/strlen
strlen equ <lstrlenA> 
lstrlenA PROTO s:ptr char

; - find substring s2 in s1
; eax = address of first occurrence of s2 in s1|NULL
; manual: https://docs.microsoft.com/en-us/windows/desktop/api/shlwapi/nf-shlwapi-strstra
strfindstr equ <StrStrA>
StrStrA PROTO s1:ptr char, s2:ptr char

; - allocate string on heap, use only in CODE segment
; eax = &string
DString MACRO strOffset, strSize
	invoke malloc, strSize
	invoke strcpy, eax, strOffset
endm

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							disk    								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
File typedef uint32

; - open file
; eax = file handle|FAIL
;
; linux open: https://linux.die.net/man/3/open
open proto fileName:ptr char

; - close file
; eax=SUCCESS|FAIL
;
; linux close: https://linux.die.net/man/3/close
close equ <_lclose>
_lclose proto file:File

; - read `len` bytes from `file` into `buffer`
; eax = bytes read|FAIL
;
; linux read: https://linux.die.net/man/3/read
read equ <_lread>
_lread proto file:File, buffer:ptr byte, len:uint32

; - write `len` bytes from `buffer` into `file`
; eax = bytes written|FAIL
;
; linux write: https://linux.die.net/man/3/write
write equ <_lwrite>
_lwrite proto file:File, buffer:ptr byte, len:uint32 

; - move `file` offset `distance` bytes defined by `moveMethod`
; moveMethod valid values:
	FILE_BEGIN=0
	FILE_CURRENT=1
	FILE_END=2
; 
; eax = offset location|FAIL
;
; linux seek: https://linux.die.net/man/3/seek
seek equ <_llseek>
_llseek proto file:File, distance:uint32, moveMethod:uint32 


; - convenience function to read all file
; eax = pointer to buffer|FAIL
readAll proto fileName:ptr char

; - convenience function to write bytes to file
; eax = SUCCESS|FAIL
writeAll proto fileName:ptr char, buffer:ptr byte, len:uint32

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							console  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; - print len bytes of buffer to console
; eax = bytes printed|FAIL
printConsole proto buffer:ptr char, len:uint32

; - print formated string to console
; eax=bytes printed|FAIL
;
; \example\
; printf "hello world i=%d", i
; format specification: https://docs.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=vs-2017
printf MACRO format, arglist:VARARG
	LOCAL @@format
	.CONST
	@@format db format, 0
	.DATA
	ifndef __printf_buf
	__printf_buf db 1024 dup(0)
	endif
	.CODE
	invoke sprintf, offset __printf_buf, offset @@format, arglist
	invoke printConsole, offset __printf_buf, eax
ENDM 

; - same as printf, but adds \n
printfln MACRO format, arglist:VARARG
	LOCAL @@format
	.CONST
	@@format db format, 10, 0
	.DATA
	ifndef __printf_buf
	__printf_buf db 1024 dup(0)
	endif
	.CODE
	invoke sprintf, offset __printf_buf, offset @@format, arglist
	invoke printConsole, offset __printf_buf, eax
ENDM 

; - read at most `len` bytes from console into buffer
; eax = bytes read|FAIL
readConsole proto buffer:ptr char, len:uint32

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							keyboard								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
VKey typedef byte

; list of keys
; VK = virtual key
; for more info: https://docs.microsoft.com/en-us/windows/desktop/inputdev/virtual-key-codes
VK_BACK                              equ 8h
VK_CANCEL                            equ 3h
VK_CAPITAL                           equ 14h
VK_CLEAR                             equ 0Ch
VK_CONTROL                           equ 11h
VK_DELETE                            equ 2Eh
VK_DOWN                              equ 28h
VK_END                               equ 23h
VK_ESCAPE                            equ 1Bh
VK_EXECUTE                           equ 2Bh
VK_HELP                              equ 2Fh
VK_HOME                              equ 24h
VK_INSERT                            equ 2Dh
VK_LBUTTON                           equ 1h
VK_LEFT                              equ 25h
VK_MBUTTON                           equ 4h
VK_MENU                              equ 12h
VK_NEXT                              equ 22h
VK_PAUSE                             equ 13h
VK_PGDN                              equ 22h
VK_PGUP                              equ 21h
VK_PRINT                             equ 2Ah
VK_PRIOR                             equ 21h
VK_RBUTTON                           equ 2h
VK_RETURN                            equ 0Dh
VK_RIGHT                             equ 27h
VK_SELECT                            equ 29h
VK_SHIFT                             equ 10h
VK_SNAPSHOT                          equ 2Ch
VK_SPACE                             equ 20h
VK_TAB                               equ 9h
VK_UP                                equ 26h
VK_NUMPAD0                           equ 60h
VK_NUMPAD1                           equ 61h
VK_NUMPAD2                           equ 62h
VK_NUMPAD3                           equ 63h
VK_NUMPAD4                           equ 64h
VK_NUMPAD5                           equ 65h
VK_NUMPAD6                           equ 66h
VK_NUMPAD7                           equ 67h
VK_NUMPAD8                           equ 68h
VK_NUMPAD9                           equ 69h
VK_MULTIPLY                          equ 6Ah
VK_ADD                               equ 6Bh
VK_SEPARATOR                         equ 6Ch
VK_SUBTRACT                          equ 6Dh
VK_DECIMAL                           equ 6Eh
VK_DIVIDE                            equ 6Fh
VK_F1                                equ 70h
VK_F2                                equ 71h
VK_F3                                equ 72h
VK_F4                                equ 73h
VK_F5                                equ 74h
VK_F6                                equ 75h
VK_F7                                equ 76h
VK_F8                                equ 77h
VK_F9                                equ 78h
VK_F10                               equ 79h
VK_F11                               equ 7Ah
VK_F12                               equ 7Bh
VK_F13                               equ 7Ch
VK_F14                               equ 7Dh
VK_F15                               equ 7Eh
VK_F16                               equ 7Fh
VK_F17                               equ 80h
VK_F18                               equ 81h
VK_F19                               equ 82h
VK_F20                               equ 83h
VK_F21                               equ 84h
VK_F22                               equ 85h
VK_F23                               equ 86h
VK_F24                               equ 87h
VK_NUMLOCK                           equ 90h
VK_SCROLL                            equ 91h
VK_LSHIFT                            equ 0A0h
VK_RSHIFT                            equ 0A1h
VK_LCONTROL                          equ 0A2h
VK_RCONTROL                          equ 0A3h
VK_LALT                              equ 0A4h
VK_RALT                              equ 0A5h
VK_ATTN                              equ 0F6h
VK_CRSEL                             equ 0F7h
VK_EXSEL                             equ 0F8h
VK_EREOF                             equ 0F9h
VK_PLAY                              equ 0FAh
VK_ZOOM                              equ 0FBh
VK_NONAME                            equ 0FCh
VK_PA1                               equ 0FDh
VK_OEM_CLEAR                         equ 0FEh
VK_0								 equ 30h
VK_1								 equ 31h
VK_2								 equ 32h
VK_3								 equ 33h
VK_4								 equ 34h
VK_5								 equ 35h
VK_6								 equ 36h
VK_7								 equ 37h
VK_8								 equ 38h
VK_9								 equ 39h
VK_A								 equ 41h
VK_B								 equ 42h
VK_C								 equ 43h
VK_D								 equ 44h
VK_E								 equ 45h
VK_F								 equ 46h
VK_G								 equ 47h
VK_H								 equ 48h
VK_I								 equ 49h
VK_J								 equ 4Ah
VK_K								 equ 4Bh
VK_L								 equ 4Ch
VK_M								 equ 4Dh
VK_N								 equ 4Eh
VK_O								 equ 4Fh
VK_P								 equ 50h
VK_Q								 equ 51h
VK_R								 equ 52h
VK_S								 equ 53h
VK_T								 equ 54h
VK_U								 equ 55h
VK_V								 equ 56h
VK_W								 equ 57h
VK_X								 equ 58h
VK_Y								 equ 59h
VK_Z								 equ 5Ah

; eax=TRUE|FALSE
isKeyPressed proto key:VKey

; eax=char|NULL
getCharInput proto

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							mouse   								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

ifndef EXCLUDE_EXTERNS
	; - mouse position variables updated every time mouse moves
	extern mousePos:Vec
endif

; eax=TRUE|FALSE
isLeftMouseClicked proto
isRightMouseClicked proto

; eax=SUCCESS|FAIL
moveMouseToX proto x:uint32

; eax=SUCCESS|FAIL
moveMouseToY proto y:uint32

showMouse proto
hideMouse proto

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							sound   								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
Audio typedef dword

; eax=Audio handle|FAIL
loadAudio proto

; eax=SUCCESS|FAIL
runAudio proto

; eax=SUCCESS|FAIL
pauseAudio proto

; eax=SUCCESS|FAIL
stopAudio proto

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;							network  								   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; eax=TRUE|FALSE
isConnected proto

; eax=was connected or not
disconnect proto

; - send `len` bytes in buffer to other end
; eax=SUCCESS|FAIL
send proto buffer:ptr byte, len:uint32

; - recv no more than `len` bytes in buffer from the other end
; eax=received bytes|FAIL
recv proto buffer:ptr byte, len:uint32

endif ;COMMON_INC