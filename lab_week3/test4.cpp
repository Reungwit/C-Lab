#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;
    cout << "Enter number : ";
    // แยกและแสดงผลตัวเลขแต่ละหลัก
    int digit1 = num1 / 1000;          // หลักพัน
    int digit2 = (num2 / 100) % 10;    // หลักร้อย
    int digit3 = (num3 / 10) % 10;     // หลักสิบ
    int digit4 = num4 % 10;            // หลักหน่วย

    // แสดงผลลัพธ์โดยใช้รูปแบบการแยกหลักด้วยช่องว่าง
    cout << digit1    << "   " << digit2   << "  " <<   digit3 << "  " <<   digit4 << endl;

    return 0;
}

