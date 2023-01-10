#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    bool isPower;
    for (int i = 1; i <= n; i *= 2) {
        if (i == n){
            isPower = true;
            break;
            //cout << "YES\n";
            //return 0;
        }
    }
    cout << (isPower ? "YES\n" : "NO\n");
    
    return 0;
}
