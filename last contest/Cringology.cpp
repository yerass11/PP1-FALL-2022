#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int cnt = 0;
    bool isCringe;

    for (int i = 0; i < m; ++i) {
        string s; cin >> s;
        for (int j = 0; j < n; ++j) {
            string t = v[j];
            t.pop_back();

            string z = v[j];
            z.erase(0, 1);
            
            if (s == v[j] or s == t or s == z) {
                isCringe = true;
                cnt++;
                cout << s << endl;
            }
        }
    }
    cout << cnt << endl;
    cout << (isCringe ? "Emae, balin\n" : "Rakhmet, Yerla!Krasavchik!@erla1302\n"); 
    if (cnt > 0) cout << 1000 * cnt;

    return 0;
}