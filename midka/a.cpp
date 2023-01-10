#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a+n);
    cout << a[m] << endl;
    return 0;
}