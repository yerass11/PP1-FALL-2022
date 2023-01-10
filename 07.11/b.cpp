#include <iostream>

using namespace std;

int isDivide(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) cnt++;
    }

    return cnt;
}


int main() {
    int n; cin >> n;
    isDivide(n);
    cout << isDivide(n);

    return 0;
}