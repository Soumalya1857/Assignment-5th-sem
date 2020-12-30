.model small
.stack 64 
.data 
	message1 db 0AH,0DH,'Enter the old filename: $'
	message2 db 0AH,0DH,'Enter the new filename: $'
	old db 80 dup('$')
	new db 80 dup('$')
	successmsg db 'has been renamed to $' 
    faliuremsg db 'not found. ERROR!!!$' 

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
        mov es,ax 

	print message1
	lea SI, old
	call readstring

	print message2
	lea SI, new
	call readstring

	mov ax,@data
	mov ds,ax
	mov es,ax
        lea dx,old  ;ds:dx points to the ASCIIZ string old,0 
        lea di,new  ;es:di points to the ASCIIZ string new,0 
        mov ah,56h  ;DOS function 56h is used for renaming 
        int 21h 
        jc error    ;if there is an error carry flag is set 
        print old
	print successmsg 
	print new
        jmp exit 
error: 
	print old
        print faliuremsg 

exit:         
        mov ah,4ch 
        int 21h 
main endp

readstring proc near
read:
	mov ah, 01h
	int 21h
	cmp al, 13
	je done
	mov [SI],al
	inc SI
	jmp read

done:
        mov al, 0
        mov [SI],al
	ret
readstring endp

end main