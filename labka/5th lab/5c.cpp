#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    for(int i = 0; i <= s.size() - t.size(); ++i) {
        if(s.substr(i, t.size()) == t) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}