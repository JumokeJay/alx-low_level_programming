section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8                ; Align the stack (64-bit calling convention)
    push rdi                  ; Save registers that are used

    lea rdi, [format]         ; Load the address of the format string
    lea rsi, [hello]          ; Load the address of the hello string
    call printf              ; Call printf with the strings

    pop rdi                   ; Restore saved registers
    add rsp, 8                ; Restore the stack alignment

	ret                       ; Return from the main function
