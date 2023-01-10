//A two-digit number is given. 
//Find the sum and product of its digits.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int a1 = a / 10;
    int a2 = a % 10;
    cout << a1 + a2 << endl << a1 * a2;
    return 0;
}