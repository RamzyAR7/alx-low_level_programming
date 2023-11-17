julien@ubuntu:~/0x00$ nasm -f elf64 1-hello_holberton.asm && gcc -no-pie -std=gnu89 1-hello_holberton.o -o hello
julien@ubuntu:~/0x00$ ./hello
Hello, Holberton
julien@ubuntu:~/0x00$
```
```
julien@ubuntu:~/0x00$ cat 1-hello_holberton.asm
section .data
		msg:    db      "Hello, Holberton", 10
		len:    equ     $ - msg
section .text
		global _start

_start:
		mov     rax, 1
		mov     rdi, 1
		mov     rsi, msg
		mov     rdx, len
		syscall
		mov     rax, 60
		mov     rdi, 0
		syscall
