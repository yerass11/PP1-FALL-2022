#include <bits/stdc++.h>
//#include <iostream>
//#include <set>

using namespace std;

int main(){
    string s; cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' and s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    
    set <char> c;

    for (int i = 0; i < s.size(); ++i) {
        c.insert(s[i]);
    }

    cout << c.size() << endl;

    set <char>::iterator it;
    for (it = c.begin(); it != c.end(); ++it) {
        cout << *it << ' ';
    }
    return 0;
}