.model small
.stack 400h
.data
message1 db 0AH,0DH,'Enter the first number: $'
message2 db 0AH,0DH,'Enter the second number: $'
message3 db 0AH,0DH,'After Addition Result: $'
message4 db 0AH,0DH,'After Subtraction Result: $'
spaceBarBar db ' $'
endl db 0AH,0DH,'$'

val1 dw ?
val2 dw ?

.code
print macro message
	push ax
	push dx
	mov ah, 09h
	lea dx, message
	int 21h
	pop dx
	pop ax
endm

main proc
	mov ax,@data
	mov ds,ax
	
	start:
	
	print message1
	
	call readnum
	mov val1, ax

	print message2

	call readnum
	mov val2, ax

	print message3
        mov ax, val1
        mov bx, val2
        add ax,bx
	call writenum

        print message4
        mov ax, val1
        mov bx, val2
        sub ax,bx
        call writenum
	
	exit:
    mov ah, 4ch
    int 21h

main endp

readnum proc near
	; this procedure will take a number as input from user and store in AX
	; input : none
	
	; output : AX

	
	push bx
	push cx
	mov cx,0ah
	mov bx,00h
	loopnum: 
		mov ah,01h
		int 21h
		cmp al,'0'
		jb skip
		cmp al,'9'
		ja skip
		sub al,'0'
		push ax
		mov ax,bx
		mul cx
		mov bx,ax
		pop ax
		mov ah,00h
		add bx,ax
	jmp loopnum
	
	skip:
	mov ax,bx
	pop cx
	pop bx
	ret
readnum endp

writenum proc near
	; this procedure will display a decimal number
	; input : AX
	; output : none

	push ax
	push bx                        
	push cx                        
	push dx                        

	xor cx, cx
	mov bx, 0ah                     

	@output:                       
		xor dx, dx                   
		div bx                       ; divide AX by BX
		push dx                      ; push remainder onto the STACK
		inc cx                       
		or ax, ax                    
	jne @output                    

	mov ah, 02h                      ; set output function

	@display:                      
		pop dx                       ; pop a value(remainder) from STACK to DX
		or dl, 30h                   ; convert decimal to ascii code
		int 21h                      
	loop @display                  

	pop dx                         
	pop cx                         
	pop bx 
	pop ax

	ret                            
writenum endp

end main
