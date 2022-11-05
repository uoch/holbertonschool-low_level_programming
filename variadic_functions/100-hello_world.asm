section .text
	global main
main:
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	mov eax, 4	;system call (sys_write)
	int 0x80	;to call kernel
	mov eax, 1	;
	int 0x80
section .data
	msg db 'Hello, Holberton',0xa
