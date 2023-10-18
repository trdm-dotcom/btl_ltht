INCLUDE lib1.asm
.MODEL small
.STACK 100h
.DATA
    m1 db 13,10, 'Vao ten thu muc can doi ten: $'
    m2 db 13,10, 'Thu muc co ton tai ! $'
    m3 db 13,10, 'Thu muc khong ton tai ! $'
    m4 db 13,10, 'Nhap ten moi: $'
    m5 db 13,10, 'Doi ten thanh cong !!! $'
    m6 db 13,10, 'Doi ten that bai !!! $'
	parent_part db 'T:\BTASM',0
    buff db 40 
    db ?
	file_name db 40 dup(?)
    buff2 db 40 
    db ?
    new_name db 40 dup(?)
    newline db 0Dh, 0Ah, '$'    ; Xuong dong
.CODE
PS:
    mov AX, @DATA
    mov DS, AX        
    clrscr
    
    L1:
        HienString m1
        lea DX, buff        ; DS:DX tro den dau vùng nho buff
        call GET_FILE_NAME   ; Vao ten thu muc can doi ten
        lea	DX, file_name	; DS:DX tro den dau xau chua ten tep
    
        mov AH, 3BH         ; Chuyen den thu muc
        int 21h    
    
        jnc L2              ; Thu muc ton tai thi nhay
      
        HienString m3       ; Thu muc khong ton tai thi bao loi va nhap lai
		jmp L1
    L2: 
		lea DX, parent_part
		mov AH, 3BH
		int 21h
        HienString m4
        
        lea DX, buff2       ; DS:DX tro den dau vùng nho buff
        call GET_FILE_NAME   ; Vao ten thu muc can doi ten
        lea	DI, new_name	; DS:DX tro den dau xau chua ten tep
        lea DX, file_name 	; Tên thu m?c cu
		push DS
		pop ES
        mov AH, 56h
        int 21h
        
        jnc L3
        
        HienString m6       
        jmp EXIT
    L3:
        HienString m5
        jmp EXIT
  
    EXIT:    
        mov AH, 4Ch
        int 21h
INCLUDE lib3.asm
END PS
