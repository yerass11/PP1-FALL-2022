#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string t;
    vector <string> v;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ',') {
            v.push_back(t);
            t = "";
            continue;
        } else if (i == s.size() - 1) {
            t += s[i];
            v.push_back(t);
            t = "";
        }
        t += s[i];
    }
    vector <char, int> c;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            c[j]++;
        }
    }
    for (int i = 0; i < c.size(); ++i) {
        cout << c[i] << endl;
    }

    return 0;
}