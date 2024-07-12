#include <iostream>
#include <string.h> 
using namespace std;
int main() {
    float radius,area;
    const float pi=3.1415;
    cout << "Program Calculate Area Circle.\n";
    cout << "Circle radius (real number) ? ";
    cin >> radius;
    area = pi*radius*radius;
    cout << "Area of circle with radius "<< radius << " is " << area;
    return(0);
}