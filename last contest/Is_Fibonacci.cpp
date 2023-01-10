#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[1001];
    a[1] = 1;
    a[2] = 1;

    for (int i = 3; i < 1001; ++i) {
        a[i] = a[i-1] + a[i-2];
        if (a[i] == n) {
            cout << "Yes\n";
            return 0;
        }  
        if (a[i] > n) {
            cout << "No\n";
            return 0;
        }
    }

    return 0;
}