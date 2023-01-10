#include <iostream>

using namespace std;

int main() {
    bool isPossible;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i <= n; ++i) {
        i += a[i];
        if (i == n){
            isPossible = true;
            break;
        }
        if (i > n || a[i] == 0) {
            isPossible = false;
        }
    }
    
    cout << (isPossible == true ? "True" : "False");
    
    return 0;
}
