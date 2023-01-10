#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    int n, k; cin >> n >> k;
    while (n--) {
        int x; cin >> x;
        m[x]++;
    }
    cout << m[k] << endl;
    // int cnt = 0;
    // map<int, int>::iterator it;
    // for (it = m.begin(); it != m.end(); ++it) {
    //     if (it->second = k) {
    //         cnt++;
    //     }
    // }
    //     cout << cnt << endl;
    return 0;
}