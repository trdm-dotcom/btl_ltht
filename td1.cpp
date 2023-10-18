/*---------------------------------*/
/* Tong day so - Ham ASM khong doi */
/*---------------------------------*/
#include <iostream.h>
#include <conio.h>
int n;
int a[100];
extern int SUM();       /* Xin phep su dung ham ben asm */
void main()
{
    char tl;
    
    L0:
        clrscr();
        cout<<"\n     Hay vao so luong thanh phan: ";
        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
            cout<<"\n     a["<<i<<"] = ";
            cin>>a[i];    
        }
        
        cout<<"\n     Tong day so la: "<<SUM();
        
        cout<<"\n     Co tiep tuc CT (c/k)?";
        
        tl = getch();
        if (tl == 'c') 
        {
            goto L0;
        }
}