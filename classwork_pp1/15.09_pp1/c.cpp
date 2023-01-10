//The value of the angle α is given in degrees 
//(0 < α < 360). 
//Determine the value of the same angle in radians,
//given that 180◦ = π radians.
//As values of π use 3.14
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    double pi = 3.14;
    cin >> a;
    double k = (a * pi) / 180;
    cout << k;
    return 0;
}