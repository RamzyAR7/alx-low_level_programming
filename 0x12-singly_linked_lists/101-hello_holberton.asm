section .data
    message db 'Hello, Holberton', 0Ah, 0  ; The message to print followed by newline and null terminator

section .text
    global main
    extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Call printf
    mov rdi, message  ; The first argument (format string) for printf
    call printf

    ; Clean up the stack frame and return
    mov rsp, rbp
    pop rbp
    ret
```
