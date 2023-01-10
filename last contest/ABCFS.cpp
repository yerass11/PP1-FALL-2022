#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int b = n; 
    int l = n, r = n;
    int a = 2 * n - 1;
    while (a--) {
        for (int i = 1; i < 2 * n; ++i) {
            if (i >= l && i <= r) cout << b;
            else cout << '-';
        }
        
        cout << endl;
        l--;
        r++;
    }

    return 0;
}