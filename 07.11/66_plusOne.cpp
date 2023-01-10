#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int k = n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] != 9) {
            a[i] += 1;
            break;
        } else if (a[i] == 9) {
            a[i] = 0;
            a[i - 1] += 1;
            break;
        }
    }

    if (a[n - 1] == 9) { 
        for (int i = 0; i < n + 1; ++i) {
            cout << a[i] << ' ';
        }
    } else {
        for (int i = 0; i < n; ++i) {
            cout << a[i] << ' ';
        }
    }
    
    return 0;
}
