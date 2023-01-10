#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    
    string t = "acefiinpwy";

    if (t.size() > s.size()) {
        cout << "Wine by\n";
        return 0;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }

    int cnt = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'i') cnt++;
    }
    if (cnt < 2) {
        cout << "Wine by\n";
        return 0;
    }

    bool isT;

    for (int i = 0; i < t.size(); ++i) {
        for (int j = 0; j < s.size(); ++j) {
            if (t[i] == s[j]) {
                isT = true;
                break;
            } else isT = false;
        }
        if (isT == false) {
            cout << "Wine by\n";
            return 0;
        }
    }
    cout << "Bubu\n";

    return 0;
}