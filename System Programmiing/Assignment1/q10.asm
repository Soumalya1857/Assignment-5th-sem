.model small
.stack 100h
.data
.code
main proc
mov cx,26
mov dl,'A'
looplabel:
mov ah,02h ; write a char to output
int 21h
inc dl
loop looplabel
mov ah,4ch ; terminates program
int 21h
main endp
end
