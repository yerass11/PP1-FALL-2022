/*
Which one

Input format

Two integers are given.

Output format

The program should output the number 
1 if the first number is greater than the second, 
the number 2 if the second is greater than the first, 
or the number is 0 if they are equal
*/
#include <iostream>
using namespace std;
int main(){
    int a1, a2;
    cin >> a1 >> a2;
    if (a1 > a2)
    cout << 1;
    else if (a1 < a2)
    cout << 2;
    else 
    cout << 0;
    return 0;
}