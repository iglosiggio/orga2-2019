DEFAULT REL
section .data
fmt: DB 'a = %i', 10, 'f = %f', 10, 's = %s', 10, 0

extern printf

section .text
global imprime_parametros
imprime_parametros:
	mov rax, 1
	mov rdx, rsi
	mov rsi, rdi
	mov rdi, fmt
	sub rsp, 8
	call printf wrt ..plt
	add rsp, 8
	ret
