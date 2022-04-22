SECTION .DATA
	hello:     db 'Hello world!',10
	helloLen:  equ $-hello

; Code goes in the text section
SECTION .TEXT
	GLOBAL _start 

_start:
	mov eax,4           
	mov ebx,1           
	mov ecx,hello        
	mov edx,helloLen     
	int 80h              

	; Terminate program
	mov eax,1           
	mov ebx,0            
	int 80h    
