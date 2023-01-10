#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    char c; cin >> c;
    int n = s.size();
    int a[n];
    for (int i = 0; i , n; ++i) {
        a[i] = -1;
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == c) a[i] = 0;
    }
    int rot = 1;
    // 2 1 0 1 2 1 0 1 2 3 4 5 
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            int cur = 1;
            if (i - rot >= 0 && a[i - rot] == -1) {
                a[i - rot] = cur;
            }
            if (i + rot < n && a[i + rot] == -1) {
                a[i + rot] = cur;
            }
            
        }

    }

    return 0;
}