global supersuma

section .text
supersuma:
	sub rdi, rsi
	add rdi, rdx
	sub rdi, rcx
	add rdi, r8
	sub rdi, r9
	add rdi, [rsp+8]
	sub rdi, [rsp+16]
	mov rax, rdi
	ret
