#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int maax = 0;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if (i % 2 == 1 && abs(a[i] - a[i+1]) > maax) maax = abs(a[i] - a[i+1]);
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (i % 2 == 1 && abs(a[i] - a[i+1]) == maax) {
            cout << a[i] << " " << abs(a[i] - a[i+1]) << endl;
        }
    }
    return 0;
}