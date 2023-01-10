#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a = n;
    while (a--) {
        if (n == 2 || n == 3 || n == 1) {
            cout << "YES\n";
            return 0;
        }
        if (n % 2 != 0 && n % 3 != 0) {
            cout << "NO\n";
            return 0;
        }
        if (n % 6 == 0) n /= 6;
        if (n % 2 == 0) n /= 2;
        if (n % 3 == 0) n /= 3;
    }

    return 0;
}