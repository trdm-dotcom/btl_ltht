#include <iostream.h>
#include <conio.h>
// extern HIEN_BINARY_16_BIT();
extern DAT_THUOC_TINH();
extern int AVERAGE();
// extern kRAM_MAINBOARD();
void main()
{
  char tl;
  int cn; /*chuc nang*/
  clrscr();
  cout << ("\n          Truong Dai hoc Mo Ha Noi");
  cout << ("\n          KHOA CONG NGHE THONG TIN");
  cout << ("\n          -----------o0o----------");
  cout << ("\n\n\n           BAI TAP LON MON LTHT");
  cout << ("\n\n\n     Cac SV thuc hien:");
  cout << ("\n      1. Tran Tien Dat      Lop: 19A4");
  cout << ("\n      2. Hoang Duy          Lop: 19A4");
  cout << ("\n      3. Nguyen Hong Phong  Lop: 19A5");
  cout << ("\n      4. Tran Duc Minh      Lop: 19A4");
  cout << ("\n\n\n     Co tiep tuc CT (c/k)?\n");
  tl = getch();
  if (tl == 'C' || 'c')
  {
  L1:
    clrscr();
    cout << ("\n            CAC CHUC NANG CUA BTL");
    cout << ("\n            ---------***----------");
    cout << ("\n     1. Dat thuoc tinh cho tep (ten tep vao tu ban phim)");
    cout << ("\n     2. Tinh trung binh cong hai so nguyen");
    cout << ("\n     3. Lieu may tinh co FPU ?");
    cout << ("\n\n     Hay chon: ");
    cin >> cn;
    switch (cn)
    {
      case 1: DAT_THUOC_TINH(); break;
      case 2: AVERAGE(); break;
      // case 3: kRAM_MAINBOARD(); break;
    default:
      cout << ("\n     Vao sai roi, vui long nhap lai!");
    }
    cout << ("\n\n     Co thuc hien CN khac(c/k):");
    tl = getch();
    if (tl == 'c')
    {
      goto L1;
    }
  }
}

