#include <iostream>

using namespace std;

void add(int a[], int n) {
    for (int i = 0; i < n; ++i)
    ++a[i];
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
        
    add(a, n);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

        cout << endl;  
    return 0;
}