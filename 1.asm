INCLUDE Irvine32.inc
.data
Rval DWORD ?
Xval DWORD 20
Yval DWORD 30
Zval DWORD 10

msgXval BYTE "Xval = ", 0
msgYval BYTE "Yval = ", 0
msgZval BYTE "Zval = ", 0
msgRval BYTE "Rval = ", 0

.code
main PROC
    mov eax, Xval
    neg eax

    mov ebx, Yval
    neg ebx
    add eax, ebx

    sub eax, Zval
    mov Rval, eax

    mov edx, OFFSET msgXval
    call WriteString
    mov eax, Xval
    call WriteInt
    call Crlf

    mov edx, OFFSET msgYval
    call WriteString
    mov eax, Yval
    call WriteInt
    call Crlf

    mov edx, OFFSET msgZval
    call WriteString
    mov eax, Zval
    call WriteInt
    call Crlf

    mov edx, OFFSET msgRval
    call WriteString
    mov eax, Rval
    call WriteInt
    call Crlf

    exit
main ENDP
END main
