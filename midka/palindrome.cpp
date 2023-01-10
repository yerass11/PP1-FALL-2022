#include <iostream>
using namespace std;

int main() {
    string s, t; cin >> s;
    s = t;
    reverse(s.begin(), s.end());
    cout << (s == t ? "YES\n" : "NO\n");
    return 0;
}
