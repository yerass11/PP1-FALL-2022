#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int power = 1;
    int cnt = 0;
    while (power < n) {
        power *= 2;
        ++cnt;
    }
    cout << cnt;
    return 0;
}
