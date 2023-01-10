#include <iostream>

using namespace std;

void TTT(string s, int k) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] + k;
            cout << s[i];
        }
        else {
            s[i] = s[i] + k - 26;
            TTT(s, k);
        }
    }

}

int main() {
    string s; cin >> s;
    int k; cin >> k;
    
    TTT (s, k);
    return 0;
}
