#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        for (int j = 0; j < t.size(); j++) {
            if (s[i] == t[j]) {
                cnt++;
            } else if (s[i] != t[j]) {
                break;
            }
        }
    }
    
    s.erase(s.size() - cnt, s.size());
    t.erase(t.begin(), t.begin() + cnt);

    cout << s + t;


    return 0;
}