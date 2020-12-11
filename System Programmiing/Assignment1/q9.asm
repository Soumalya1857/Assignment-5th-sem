.model small
.stack 100h
.data
mes1 db 0dh, 0ah, "Enter 1 to exit: ", "$"
mes2 db 0dh, 0ah, "Looping back", "$"
.code
main proc
mov ax,@data
mov ds,ax
loop1:
lea dx,mes2 ; print msg 1
mov ah,09h
int 21h
lea dx,mes1
mov ah,09h ; print msg2     write a string to output
int 21h
mov ah,01h ; take input
int 21h
cmp al,'1' ; compare to 1..if not loop back
jne loop1
mov ah,4ch
int 21h
main endp
end
