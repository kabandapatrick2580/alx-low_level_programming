section .data
mesage db "Hello,Holberton", 0Ah, 0

section .text
global _start

_start:
; Set up the stack pointer
mov rsp, rbp
subrsp, 16

; Prepare teh arguments for printf
lea rdi,[message]
xor eax, eax

; Call printf
call printf

; exit the prigram with status code 0
xor edi, edi
mov eax, 60
syscall
