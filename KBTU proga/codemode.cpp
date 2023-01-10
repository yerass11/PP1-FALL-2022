#include <iostream>
using namespace std;
int main() {
    int n, k, a, b;
    
    cin >> n >> k;
a = k / 100;
b = k % 10;
    cout << n + a + b;
    return 0;
}