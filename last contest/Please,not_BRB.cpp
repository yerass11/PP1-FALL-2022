#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[101];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n + 1; ++i) {
        a[i] = a[i-1] + a[i-2];
    }

    int num = a[n] % 101;
    cout << "num: " << num << endl;
    int op = 0;
    
    for (int i = 0; i < n; ++i) {
        if (pow(2, i) > num) {
            op = i;
            break;
        }
    }
    
    cout << "op: " << op << endl;
    int cur = pow(2, op);
    cout << "cur: " << cur << endl;
    while(cur != num) {
        op++;
        cur--;
    }
    cout << op << endl;
    cout << (op <= 15 ? "Povezlo, povezlo" : "Gl hf");

    return 0;
}