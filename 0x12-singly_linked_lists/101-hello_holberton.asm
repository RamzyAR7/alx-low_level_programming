section .data
    hello db "Hello, Holberton", 10  ; 10 is the ASCII code for newline
    format db "%s", 0

section .text
    global main
    extern printf  ; You don't need this if you're defining printf below

main:
    ; Set up arguments for printf
    mov rdi, hello

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60  ; syscall number for sys_exit
    xor rdi, rdi ; status 0
    syscall

section .text
    ; Dummy printf function for assembly
    global printf
    printf:
        ; Set up syscall parameters
        mov rax, 1          ; syscall number for sys_write
        mov rdi, 1          ; file descriptor 1 (stdout)
        mov rsi, [rsp + 8]  ; message pointer from stack
        mov rdx, 17         ; message length
        syscall
        ret
