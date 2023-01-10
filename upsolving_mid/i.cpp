#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];        
        }
    }
    for (int i = 0; i < n; ++i) {
        int max = -100100;
        for (int j = 0; j < n; ++j) {
            if (a[i][j] > max) max = a[i][j];
        }
        for (int k = 0; k < n; ++k) {
            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}
