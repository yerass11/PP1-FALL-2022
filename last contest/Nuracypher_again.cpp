#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string t;
    
    vector <char> v;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            t += s[i];
            char c = 'a';
            int siz = t.size();
            c = 'a' + siz - 1; 
            v.push_back(c);
            t = "";
        } else {
            t += s[i];
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
    }
    
    return 0;
}