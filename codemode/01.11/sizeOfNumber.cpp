#include <iostream>
using namespace std;

int sizeOfNumber(int n) {
    if (n == 0)
        return 0;
    else {
        return 1 + sizeOfNumber(n / 10);
    } 

}

int main() {
    int n; cin >> n;
    cout << sizeOfNumber(n);
    return 0;
}
