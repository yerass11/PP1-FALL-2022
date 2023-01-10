#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int cnt = 0;

    while (s != t) {
        if (cnt == t.size()) cout << "nope\n";
        cnt++;
        rotate(s.begin(), s.begin() + cnt, s.end());
    }
    cout << cnt << endl;
    return 0;
}