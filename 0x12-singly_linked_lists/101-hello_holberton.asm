section .data
    greeting db "Hello, Holberton", 10  ; "Hello, Holberton" string with a newline character

section .text
    global main  ; Define main as a global symbol

main:
    ; Prepare arguments for the custom printf
    mov rdi, format  ; Set format string address in rdi
    mov rsi, greeting  ; Set greeting string address in rsi

    ; Invoke the custom printf function
    mov rax, 0  ; Prepare rax with syscall number for sys_write
    call printf  ; Call the custom printf function

    ; Terminate the program
    mov rax, 60  ; Prepare rax with syscall number for sys_exit
    xor rdi, rdi  ; Set exit status to 0
    syscall  ; Perform exit syscall

section .text
    ; Define a custom printf function
    global printf  ; Declare printf as a global symbol
    printf:
        ; Setup for syscall to write to stdout
        mov rax, 1       ; Syscall number for sys_write
        mov rdi, 1       ; File descriptor for stdout
        mov rdx, 17      ; Length of the greeting message
        syscall          ; Perform the write syscall
        ret              ; Return from the printf function
