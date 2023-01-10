#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + m - 1);
    sort(a + m, a + n);
    reverse(a + m, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}
