#include <iostream>

using namespace std;

bool rec(int n, int ans) {
    if (ans == n) return true;
    else if (ans > n) return false;
    ans *= 2;
    return rec(n, ans);
}

int main() {
    int n; cin >> n;
    
    cout << (rec(n, 1) ? "Yes" : "No");

    return 0;
}
