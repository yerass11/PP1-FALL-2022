#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector <pair <int, int> > v;
    while (n--) {
        int f, s; cin >> f >> s;
        v.push_back(make_pair(f, s));
    }

    sort(v.begin(), v.end());
    vector <pair<int, int> >::iterator it;

    for (it = v.begin(); it != v.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0; 
}
