#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map <string, string> m;
    
    while (n--) {
        string s, t; cin >> s >> t;
        m[s] = t;
    }

    map <string, string>::iterator it;
    map <string, string>::iterator itr;
    
    //map <string, string> mp;

    for (it = m.begin(); it != m.end(); ++it) {        
        for (itr = m.begin(); itr != m.end(); ++itr) {
                if (it->second == itr->first) {
                    it->second = itr->second;
                }
        }
        //mp[it->first] = mp[it->second];
    }

    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}