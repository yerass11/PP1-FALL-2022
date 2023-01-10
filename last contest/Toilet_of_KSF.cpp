#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int time = 0;
    vector <string> name;
    
    while (n--) {
        string s; cin >> s;
        int x; cin >> x;
        if (time + 1 > x) {
            name.push_back(s);
        } else ++time;
    }

    if (name.size() == 0) cout << 0;
    else {
        cout << name.size() << endl;
        for (int i = 0; i < name.size(); ++i) {
            cout << name[i] << endl;
        }
    }
    return 0;
}