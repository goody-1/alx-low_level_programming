section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
	; Align the stack to 16 bytes (required by printf)
    sub     rsp, 8
    and     rsp, -16

	; Call printf
    mov     rdi, format
    call    printf

	; Restore the stack
    add     rsp, 8

    ; Exit program
    mov     eax, 0
    ret