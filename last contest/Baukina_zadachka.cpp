#include <bits/stdc++.h>

using namespace std;
int a[26];
int main(){
    int n; cin >> n;
    int a = n;

    map <char, int> m;
    while (n--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            char c; c = s[i];
            m[c]++;
        }
    }

    map <char, int>::iterator it;
    vector <char> v;
    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second >= a) {
            char c = it->first;
            v.push_back(c);
        }
    }

    if (v.size() == 0) cout << "No common characters\n";
    else {
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
    }
    return 0;
}