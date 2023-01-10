#include <iostream>
#include <cmath>
using namespace std;

int d[100100];

void difference(int a[], int b[], int n) {
    for (int i = 0; i < n; ++i){
        d[i] = abs(a[i] - b[i]);
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }

    difference(a, b, n);
    for (int i = 0; i < n; ++i){
        cout << d[i] << " ";
    }

    return 0;
}
