#include <iostream>

using namespace std;

int rec(int n, int sum) {
    if (n == 0) return sum;
    sum += n % 10 / 2;
    return rec(n / 10, sum);
}

int main() {
    int n; cin >> n;
    
    cout << rec(n, 0);

    return 0;
}
