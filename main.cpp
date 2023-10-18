#include <iostream>

using namespace std;

extern FPU();
extern AVERAGE();
int main() {
    int func;
    clrscr();
    cout << "\n Truong Dai hoc Mo Ha Noi";
    cout << "\n KHOA CONG NGHE THONG TIN";
    cout << "\n -----------o0o----------";
    cout << "\n BAI TAP LON MON LTHT";
    cout << "\n 1. Dat thuoc tinh tep";
    cout << "\n 2. Chung binh cong 2 so nguyen";
    cout << "\n 3. Kiem tra may tinh co FPU";
    cout << "\n Nhap phim bat ky de thoat";
    cout << "\n Hay chon: ";
    cin << func;
    switch(func) {
        case 1: break; 
        case 2: AVERAGE(); break;
        case 3: FPU(); break;
        default:
            return 0; 
    }
}