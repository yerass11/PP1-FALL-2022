#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    } 
    
    rotate(v.begin(), v.begin() + n - m, v.end());
    
    for (int i = 0; i < n; ++i) {
        cout << v[i] << ' ';
    }
    return 0;
}





// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string s, t;
//     cin >> s >> t;

//     int i = min(s.size(), t.size());
//     int cnt = i;

//     while(s.substr(s.size() - i, i) != t.substr(0, i)) {
//         i--;
//         cnt = i;
//     }

//     t.erase(0, cnt);
//     s.erase(s.size() - cnt, s.size());

//     cout << s + t << endl;

//     return 0;
// }