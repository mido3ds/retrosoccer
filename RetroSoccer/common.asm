.model flat, stdcall

include include\windows.inc
include include\user32.inc
include include\gdi32.inc
include include\shell32.inc
include include\kernel32.inc

EXCLUDE_EXTERNS=1
MODEL_TAG=1
include common.inc

getTitleHeight proto
prepareBuffers proto
swapBuffers proto

onCreate proto
onDestroy proto
onUpdate proto t:double
onDraw proto t:double

; public
.DATA?
mousePos IVec2 <>
public mousePos

; private
.CONST
UPDATE_TIMER_ID equ 1
UPDATE_TIME_MILIS equ 10
DRAW_TIME_MILIS equ 10
UPDATE_TIME_SEC double 0.01
CONIN char "CONIN$",0
CONOUT char "CONOUT$",0
MAIN_CLASS_NAME char "MainWindowClass",0
APP_NAME db "RetroSoccer",0  

.DATA?           
__programInst HINSTANCE ?        
__processHeap uint32 ?
__stdout uint32 ?
__stdin uint32 ?
__mainWnd HWND ?
__totalHeight uint32 ?
__hdcTemp HDC ?

.CODE
start proc
	local wc:WNDCLASSEX, msg:MSG

	invoke GetModuleHandle, NULL            
	mov __programInst, eax 
	invoke GetProcessHeap
	mov __processHeap, eax
	invoke CreateFile, offset CONIN, GENERIC_READ or GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, NULL, NULL
	mov __stdin, eax
	invoke CreateFile, offset CONOUT, GENERIC_READ or GENERIC_WRITE, FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL
	mov __stdout, eax
	mov mousePos.x, 0
	mov mousePos.y, 0

	mov   wc.cbSize, SIZEOF WNDCLASSEX                   
    mov   wc.style, CS_HREDRAW or CS_VREDRAW 
    mov   wc.lpfnWndProc, offset WndProc 
    mov   wc.cbClsExtra, NULL 
    mov   wc.cbWndExtra, NULL 
    push  __programInst 
    pop   wc.hInstance  
    mov   wc.hbrBackground, COLOR_WINDOW+1 
    mov   wc.lpszMenuName, NULL 
	mov wc.lpszClassName, offset MAIN_CLASS_NAME
    invoke LoadIcon, NULL, IDI_APPLICATION 
    mov   wc.hIcon, eax 
    mov   wc.hIconSm, eax 
    invoke LoadCursor, NULL, IDC_ARROW 
    mov   wc.hCursor, eax 
    invoke RegisterClassEx, addr wc

	invoke getTitleHeight
	add eax, WND_HEIGHT
	mov __totalHeight, eax

    invoke CreateWindowEx,NULL,\ 
                addr MAIN_CLASS_NAME,\ 
                addr APP_NAME,\ 
                WS_OVERLAPPEDWINDOW and not WS_THICKFRAME and not WS_MAXIMIZEBOX,\ 
                CW_USEDEFAULT,\ 
                CW_USEDEFAULT,\ 
                WND_WIDTH,\ 
                __totalHeight,\ 
                NULL,\ 
                NULL,\ 
                __programInst,\ 
                NULL 
    mov  __mainWnd, eax 

    invoke ShowWindow, __mainWnd, SW_SHOWDEFAULT           
    invoke UpdateWindow, __mainWnd 
	invoke GetFocus

	invoke SetTimer, __mainWnd, UPDATE_TIMER_ID, UPDATE_TIME_MILIS, NULL

	.WHILE TRUE      
		invoke GetMessage, addr msg, NULL, 0, 0 
		.BREAK .IF (!eax) 
		invoke TranslateMessage, addr msg 
		invoke DispatchMessage, addr msg

		invoke prepareBuffers
		invoke onDraw, UPDATE_TIME_SEC;TODO
		invoke swapBuffers
	.ENDW	   

	invoke ExitProcess, msg.wParam                      
start endp
;}

WndProc proc hWnd:HWND, uMsg:UINT, wParam:WPARAM, lParam:LPARAM 
	.IF uMsg==WM_CREATE
		invoke onCreate
    .ELSEIF uMsg==WM_DESTROY   
		invoke KillTimer, __mainWnd, UPDATE_TIMER_ID
		invoke onDestroy                        
        invoke PostQuitMessage, NULL  
	.ELSEIF uMsg==WM_TIMER
		invoke onUpdate, UPDATE_TIME_SEC
	.ELSEIF uMsg==WM_ERASEBKGND 
		mov eax, 1
		ret
	.ELSEIF uMsg==WM_MOUSEMOVE
		invoke GetCursorPos, addr mousePos
		invoke ScreenToClient, __mainWnd, addr mousePos
    .ELSE 
        invoke DefWindowProc, hWnd, uMsg, wParam, lParam
        ret 
    .ENDIF 

    xor eax, eax 
    ret 
WndProc endp

timerCallback proc	hwnd:HWND, msg:UINT, idTimer:UINT, dwTime:DWORD	

	ret
timerCallback endp

getTitleHeight proc
	invoke GetSystemMetrics, SM_CYFRAME
	mov ebx, eax
	invoke GetSystemMetrics, SM_CYCAPTION
	add ebx, eax
	SM_CXPADDEDBORDER equ 92
	invoke GetSystemMetrics, SM_CXPADDEDBORDER
	add eax, ebx
	ret
getTitleHeight endp

.DATA?
hdc HDC ?
hdcMemBitmap HBITMAP ?
.CODE

prepareBuffers proc
	invoke GetDC, __mainWnd
	mov hdc, eax
	invoke CreateCompatibleDC, hdc
	mov __hdcTemp, eax
	invoke CreateCompatibleBitmap, hdc, WND_WIDTH, WND_HEIGHT
	mov hdcMemBitmap, eax
	invoke SelectObject, __hdcTemp, hdcMemBitmap
	ret
prepareBuffers endp

swapBuffers proc
	invoke BitBlt, hdc, 0, 0, WND_WIDTH, WND_HEIGHT, __hdcTemp, 0, 0, SRCCOPY
	invoke DeleteDC, __hdcTemp
	invoke DeleteObject, hdcMemBitmap
	invoke ReleaseDC, __mainWnd, hdc 
	ret
swapBuffers endp

exit proc
	invoke PostMessage, __mainWnd, WM_DESTROY, NULL, NULL
	ret
exit endp

malloc proc memSize:uint32
	invoke HeapAlloc, __processHeap, HEAP_ZERO_MEMORY or HEAP_GENERATE_EXCEPTIONS, memSize
	ret
malloc endp

realloc proc mem:pntr, newSize:uint32
	invoke HeapReAlloc, __processHeap, HEAP_ZERO_MEMORY or HEAP_GENERATE_EXCEPTIONS, mem, newSize
	ret
realloc endp

free proc mem:pntr
	invoke HeapFree, __processHeap, 0, mem
	ret
free endp

memset proc dest:pntr, data:byte, len:uint32
	mov al, data

	.WHILE TRUE
		.BREAK .IF (len==0)
		mov byte ptr [dest], al	
		inc dest
		dec len
	.ENDW

	ret
memset endp

memzero proc dest:pntr, len:uint32
	.WHILE TRUE
		.BREAK .IF (len==0)
		mov byte ptr [dest], 0
		inc dest
		dec len
	.ENDW
	ret
memzero endp

memsize proc mem:pntr
	invoke HeapSize, __processHeap, 0, mem
	ret
memsize endp

open proc fileName:ptr char
    invoke _lopen, fileName, OF_READWRITE
    ret
open endp

readAll proc fileName:ptr char
    invoke open, fileName
	.IF (!eax) 
		mov eax, FAIL
		ret
	.ENDIF

	;invoke ;TODO
    ret
readAll endp

writeAll proc fileName:ptr char, buffer:ptr byte, len:uint32
	invoke open, fileName
	.IF (!eax) 
		mov eax, FAIL
		ret
	.ENDIF

    ;TODO
    ret
writeAll endp

printConsole proc buffer:ptr char, len:uint32
    invoke write, __stdout, buffer, len
    ret
printConsole endp

readConsole proc buffer:ptr char, len:uint32
	invoke read, __stdin, buffer, len
    ret
readConsole endp

isKeyPressed proc key:VKey
	xor eax, eax
    invoke GetAsyncKeyState, key
	and eax, 8000h
	shr eax, 15
    ret
isKeyPressed endp

isLeftMouseClicked proc
	invoke isKeyPressed, VK_LBUTTON
    ret
isLeftMouseClicked endp

isRightMouseClicked proc
	invoke isKeyPressed, VK_RBUTTON
    ret
isRightMouseClicked endp

moveMouseToX proc x:uint32
    ;TODO
    ret
moveMouseToX endp

moveMouseToY proc y:uint32
    ;TODO
    ret
moveMouseToY endp

showMouse proc
    invoke ShowCursor, TRUE
    ret
showMouse endp

hideMouse proc
	invoke ShowCursor, FALSE
    ret
hideMouse endp

loadAudio proc
    ;TODO
    ret
loadAudio endp

runAudio proc
    ;TODO
    ret
runAudio endp

pauseAudio proc
    ;TODO
    ret
pauseAudio endp

stopAudio proc
    ;TODO
    ret
stopAudio endp

isConnected proc
    ;TODO
    ret
isConnected endp

disconnect proc
    ;TODO
    ret
disconnect endp

send proc buffer:ptr byte, len:uint32
    ;TODO
    ret
send endp

recv proc buffer:ptr byte, len:uint32
    ;TODO
    ret
recv endp

; eax = handle to bitmap|NULL
loadBitmap proc fileName:ptr char
	invoke LoadImage, NULL, fileName, IMAGE_BITMAP, 0, 0, LR_DEFAULTSIZE or LR_LOADFROMFILE or LR_CREATEDIBSECTION
    ret
loadBitmap endp

; eax=non zero on success | NULL
deleteBitmap proc bitmap:Bitmap
	invoke DeleteObject, bitmap
    ret
deleteBitmap endp

; - render bitmap on point (xs, ys) of screen, (xb, yb) is starting point of bitmap, 
; - (w, h) is how many pixels it would take from the bitmap
renderBitmap proc bitmap:Bitmap, xs:uint32, ys:uint32, xb:uint32, yb:uint32, w:uint32, h:uint32
	local bitmapDC:HDC, oldBitmap:HBITMAP

	invoke CreateCompatibleDC, __hdcTemp
	mov bitmapDC, eax
	invoke SelectObject, bitmapDC, bitmap
	mov oldBitmap, eax
	invoke BitBlt, __hdcTemp, xs, ys, w, h, bitmapDC, xb, yb, SRCCOPY
	invoke SelectObject, bitmapDC, oldBitmap
	invoke DeleteDC, bitmapDC
    ret
renderBitmap endp

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
drawText proc buf:ptr char, x1:uint32, y1:uint32, x2:uint32, y2:uint32, format:uint32
	local rect:RECT
	push x1
	pop rect.left
	push x2
	pop rect.right
	push y1
	pop rect.top
	push y2
	pop rect.bottom

	invoke DrawText, __hdcTemp, buf, -1, addr rect, format
    ret
drawText endp

; eax=previous color|CLR_INVALID
setTextColor proc color:Color
	invoke SetTextColor, __hdcTemp, color
    ret
setTextColor endp

; eax=handle to font|NULL
; available weights: FW_DONTCARE, FW_THIN, FW_EXTRALIGHT, FW_LIGHT, 
;                   FW_NORMAL, FW_MEDIUM, FW_SEMIBOLD, FW_BOLD, 
;                   FW_EXTRABOLD, FW_HEAVY
createFont proc fontName:ptr char, height:uint32, weight:uint32, italic:dword, underlined:dword, strikeout:dword	
	ANTIALIASED_QUALITY=8

	invoke CreateFontA, height, -1, 0, 0, weight, italic, underlined, strikeout,\
			 ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,\
			 ANTIALIASED_QUALITY, FF_DONTCARE or DEFAULT_PITCH, fontName 
    ret
createFont endp

; eax=old font|NULL
setFont proc font:Font
	invoke SelectObject, __hdcTemp, font
    ret
setFont endp

; eax=old font
resetFont proc
	invoke GetStockObject, DEVICE_DEFAULT_FONT
	invoke SelectObject, __hdcTemp, eax
    ret
resetFont endp

deleteFont proc font:Font
	invoke DeleteObject, font
	ret
deleteFont endp

; eax=pen handle
createPen proc penWidth:uint32, color:Color
	invoke CreatePen, PS_SOLID, penWidth, color
	ret
createPen endp

; eax=old pen
setPen proc pen:Pen
	invoke SelectObject, __hdcTemp, pen
    ret
setPen endp

setPenColor proc color:Color
	invoke SetDCPenColor, __hdcTemp, color
	ret
setPenColor endp

; eax=non zero on success|NULL
deletePen proc pen:Pen
	invoke DeleteObject, pen
	ret
deletePen endp

; eax=handle to brush
createBrush proc color:Color
	invoke CreateSolidBrush, color
	ret
createBrush endp

; eax=old brush
setBrush proc brush:Brush
	invoke SelectObject, __hdcTemp, brush
    ret
setBrush endp

; eax = non zero on success|NULL
deleteBrush proc brush:Brush
	invoke DeleteObject, brush
	ret
deleteBrush endp

setBrushColor proc color:Color
	invoke SetDCBrushColor, __hdcTemp, color
	ret
setBrushColor endp

drawLine proc x1:uint32, y1:uint32, x2:uint32, y2:uint32
	invoke MoveToEx, __hdcTemp, x1, y1, NULL
	invoke LineTo, __hdcTemp, x2, y2
    ret
drawLine endp

drawRect proc x1:uint32, y1:uint32, x2:uint32, y2:uint32
	invoke Rectangle, __hdcTemp, x1, y1, x2, y2
    ret
drawRect endp

drawRoundRect proc x1:uint32, y1:uint32, x2:uint32, y2:uint32, w:uint32, h:uint32
	invoke RoundRect, __hdcTemp, x1, y1, x2, y2, w, h
    ret
drawRoundRect endp

drawEllipse proc x1:uint32, y1:uint32, x2:uint32, y2:uint32
	invoke Ellipse, __hdcTemp, x1, y1, x2, y2
    ret
drawEllipse endp

clearScreen proc color:Color
	local br:Brush
	.CONST
	_clearScreen_rect dword 0,0,WND_WIDTH,WND_HEIGHT
	.CODE
	invoke CreateSolidBrush, color
	mov br, eax
	invoke FillRect, __hdcTemp, offset _clearScreen_rect, br
	invoke DeleteObject, br
	ret
clearScreen endp

end start