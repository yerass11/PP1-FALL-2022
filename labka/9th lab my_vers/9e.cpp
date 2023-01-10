#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map <string, int> m;

    while (n--) {
        string s; cin >> s;
        m[s]++;
    }

    map <string, int>::iterator it;
    int cnt = 0;

    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second == 3) cnt++;
    }

    cout << cnt << endl;
    return 0;
}