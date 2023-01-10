#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int cnt = 0;
    int size = s.size();

    while (s != t) {
        if (cnt == t.size()) {
            cout << "Impossible\n";
            return 0;
        }
        cnt++;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    
    cout << min(cnt, size - cnt) << endl;
    //cout << cnt;
    return 0;
}
//aosdfljajsdflajslkdf 
//flajslkdfaosdfljajsd
//alabadibadub 
//dubalabadiba