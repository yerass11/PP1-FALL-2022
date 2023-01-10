#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int m = n;
    int l = 0, r = m - 1;
    int a[n][m];
    if (n == 1) cout << "[X]";
    else for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (l == r) cout << "[x]";
            if (j == l || j == r) cout << "[X]";
            else cout << "---";
            }  
            r -= 1;
            l += 1;
            cout << endl;
        }

    return 0;
}