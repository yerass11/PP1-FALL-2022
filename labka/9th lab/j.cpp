#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, int> m;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int k; cin >> k;
        m[s] += k;
    }
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
