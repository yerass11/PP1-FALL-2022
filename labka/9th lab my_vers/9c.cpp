#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map <int, int> m;
    
    while(n--) {
        int x; cin >> x;
        m[x]++;
    }

    map <int, int>::iterator it;
    int cnt = 0;

    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second >= 2) cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}