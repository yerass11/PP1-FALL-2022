#include <iostream>

using namespace std;

int zero(int a[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] == 0) ++cnt;
    }
    
    return cnt;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    zero(a, n);
    cout << zero(a, n);

    return 0;
}