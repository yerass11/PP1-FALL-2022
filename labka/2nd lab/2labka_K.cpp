/*
Super square

Find all exact squares of natural numbers that do not exceed a given number N.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int n;
    cin >> n;
    
    for (int i = 1; i * i <= n; i++){
        i = i * i;
        cout << i << endl;
        i = sqrt(i);

    }
    return 0;
}
