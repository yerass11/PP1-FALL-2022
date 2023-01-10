/*
2Power

For a given number N, print out all integer powers of two that do not exceed N, in increasing order.


*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2){    
        cout << i << ' ';
    }
    return 0;
}