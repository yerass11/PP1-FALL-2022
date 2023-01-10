#include <bits/stdc++.h>

using namespace std;

void Fib(int n, int i, int a, int b) {
    if (n == i) {
        cout << (a + b) % 10;
        return;
    }
    else {
    int x;
    x = (a + b) % 10;
    a = b;
    b = x;

    cout << x << ' ';
    
    i++;
    Fib(n, i, a, b);
    }
}

int main(){
    int n; cin >> n;
    int a = 0;
    int b = 1;
    vector <int> v;
    if (n > 3) {
        cout << 0 << " " << 1 << " ";
        Fib(n, 3, a, b);
    }
    if (n == 1) cout << 0;
    if (n == 2) cout << 0 << " " << 1;
    if (n == 3) cout << 0 << " " << 1 << " " << 1;
    
    return 0;
}












// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//     int n; cin >> n;
//     int maax = 0;
//     int a[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n - 1; ++i) {
//         if (i % 2 == 1 && abs(a[i] - a[i+1]) > maax) maax = abs(a[i] - a[i+1]);
//     }
    
//     for (int i = 0; i < n - 1; ++i) {
//         if (i % 2 == 1 && abs(a[i] - a[i+1]) == maax) {
//             cout << a[i] << " " << abs(a[i] - a[i+1]) << endl;
//         }
//     }
//     return 0;
// }