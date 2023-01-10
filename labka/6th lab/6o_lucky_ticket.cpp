#include <iostream>

using namespace std;

string lucky(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        cnt += int(s[i]);
    }
    if (cnt % int(s[s.size() - 1]) == 0)
        return "Yes";
    else
        return "No";
}

int main() {
    string s; cin >> s;й
    
    lucky(s);
    cout << lucky(s);
    
    return 0;
}