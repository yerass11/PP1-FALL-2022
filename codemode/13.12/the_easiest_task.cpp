#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    if (s.size() % 2 != 0) {
        cout << "-1\n";
        return 0;
    } else {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cnt++;
            }
        }
    }
    
    if (cnt == s.size() / 2) cout << 0;
    else if (cnt < s.size() / 2) cout << s.size() / 2 - cnt;
    else if (cnt > s.size() / 2) cout << 2 * (cnt - s.size() / 2);
    
    return 0;
}