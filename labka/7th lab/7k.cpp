#include <iostream>

using namespace std;

int rec(string s, int i, int max) {
    if(i == s.size()) return max;
    if ((s[i] - '0') > max) max = (s[i] - '0');
    return rec(s, i+1, max);
}

int main() {
    string s; cin >> s;
    
    cout << rec(s, 0, 0);

    return 0;
}
