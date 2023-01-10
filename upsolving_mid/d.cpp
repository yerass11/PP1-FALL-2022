#include <iostream>
using namespace std;
int b[1000];

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        b[a[i]]++;
    }
    sort (b, b + 1000);
    cout << b[999];
    return 0;
}
