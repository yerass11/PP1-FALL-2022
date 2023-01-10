//You are given integer number N
//guaranteed that the number has exactly 4 bits in binary representation. 
//reverse the number in binary representation and print out it.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n % 2;  //least
    int b = n / 2 % 2;
    int c = n / 2 / 2 % 2;
    int d = n / 2 / 2 / 2 % 2;  //most
    int e = 8 * a + 4 * b + 2 * c + 1 * d;
    cout << e;
    return 0;
}
   
