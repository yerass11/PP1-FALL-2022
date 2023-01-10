#include <iostream>
#include <cmath>
using namespace std;
int main() {
//Дано два числа a и b.
    int a, b;
    cin >> a >> b;
//Найдите гипотенузу треугольника с заданными катетами. 
    cout << sqrt((a * a) + (b * b));
    return 0;
}