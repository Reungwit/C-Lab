#include <iostream>
using namespace std;
int main(){
    int vat;
    float price,sumvat,sumnet; 
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter vat (%) : ";
    cin >> vat;
    sumvat = price*vat/100;
    sumnet = price+sumvat;
    cout << "Net Price of product = "<< sumnet;
    
}