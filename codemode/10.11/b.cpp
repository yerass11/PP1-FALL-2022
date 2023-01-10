#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    int cnt = 0;
    for (int i = 1; i < s.size() - 1; ++i) {
        if (s[i] == s[i - 1]){
            continue;
        }else {
            for (int k = 0; k < s.size(); ++i) {
                if (s[i] == s[k])
                ++cnt;
            }
        cout << cnt << s[i];
        }
    }
    
    return 0;
}
