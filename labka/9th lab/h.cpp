#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        if (m[s] == 0) {
            m[s] = i;
        }
    }
    map <string, int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        
    }


    return 0;
}
