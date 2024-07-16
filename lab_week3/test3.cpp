#include<iostream>
using namespace std;
int main (){
    float c,f,cal;
    cout << "Calculater C to F "<<endl;
    cout << "Enter F : ";
    cin >> f;
    c = (f-32)*(5/9);
    cout << "Temp F to C = : "<<c;
}