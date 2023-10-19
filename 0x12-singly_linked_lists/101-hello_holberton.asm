section .data
    message db 'Hello, Holberton!', 0x0A, 0

section .text
    global main

extern printf

main:
    sub rsp, 8

    lea rdi, [rel message]
    xor eax, eax
    call printf

    add rsp, 8
    xor eax, eax

    ret
