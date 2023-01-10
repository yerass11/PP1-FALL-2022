#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (v[i] == v[j]) cnt++;
            }
            if (cnt <= 1) cout << "new user added\n";
            else cout << "user already exists\n";
    }

    return 0;
}