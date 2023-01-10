#include <iostream>
using namespace std;

int rec(string s, int i, int ans) {
    if (i >= s.size()) return ans;
    if ((s[i] - '0') % 2 == 0) {
        ++ans;
    }
    
    return rec(s, i+1, ans);
}

int main() {
    string s; cin >> s;

    cout << rec(s, 0, 0);

    return 0;
}
