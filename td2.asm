;--------------------------------
; Tong day so - Ham ASM khong doi 
;--------------------------------

.model small
.data
    extrn _n:word, _a:dword
.code
    public @SUM$qv      ; v = khong doi
    @SUM$qv proc
        mov cx, _n      ; so vong chay for nam trong cx
        mov ax, seg _a
        mov es, ax
        mov bx, offset _a
        xor ax, ax
        
        L1:
            add ax, es:[bx]
            add bx, 2
            loop L1
            ret   
    @SUM$qv endp
end    