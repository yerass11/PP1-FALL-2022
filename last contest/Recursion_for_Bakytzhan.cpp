#include <iostream>

using namespace std;

string isRec(string s, int a, char c) {
    if (a < 0) return s;
    c = s[a];
    if (c >= 'a' && c <= 'z') s += s[a];
    else if (c == '(') s += ")";
    else if (c == ')') s += "(";
    return isRec(s, --a, c);
}

int main(){
    string s; cin >> s;
    char c;
    int a = s.size();
    
    isRec(s, a, c);
    
    cout << isRec(s, a, c);

    return 0;
}