#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int cur = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = cur;
        }
        cur += 2;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}