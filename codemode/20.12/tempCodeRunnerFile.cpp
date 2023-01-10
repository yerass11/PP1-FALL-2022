#include <bits/stdc++.h>

using namespace std;

string isRec(string s, int a) {
    if (a < 0) return s;
    if (s[a] == '(') s += ")";
    else if (s[a] == ')') s += "(";
    else s += s[a];
    return isRec(s, --a);
}

int main(){
    string s; cin >> s;
    int a = s.size();
    isRec(s, a);
    cout << isRec(s, a);
    return 0;
}