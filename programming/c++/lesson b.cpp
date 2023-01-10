#include <iostream>
using namespace std;
int main() {
    // put your code here
    int n;
    cin >> n;
    cout << n / 3600 % 24 << ":" << (n % 3600) / 60 / 10 << (n % 3600) / 60 % 10;
    cout << ":" << (n % 3600) % 60 / 10 << (n % 3600) % 60 % 10;
    return 0;
}