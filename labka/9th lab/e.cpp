#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        m[s]++;
    }
    int cnt = 0;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second == 3) {
            ++cnt;
        }
    }
    cout << cnt << endl ;
    return 0;
}