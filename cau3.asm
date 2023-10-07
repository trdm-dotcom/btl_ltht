include LIB1.ASM
.model small
.data
    m1 db 13,10,'MT co FPU Khong:$'
    ko db 'Khong $'
    co db 'Co $'
.code
public @FPU$dv
@FPU$dv proc
    mov AX,@DATA
    mov DS,AX
    clrscr
    HienString m1
    int 11h
    shr AL,1
    jc L1 
    HienString ko
    int 21h
    ret
L1: 
    HienString co
@FPT$dv endp
end
    