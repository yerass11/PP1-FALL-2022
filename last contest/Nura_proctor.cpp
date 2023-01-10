#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map <int, int> m;
    while (n--) {
        int x; cin >> x;
        m[x]++;
    }
    
    map <int, int>::iterator it;
    vector <int> p;
    vector <int> h;
    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second > 1) {
            p.push_back(it->first);
        }
        if (it->second == 1) {
            h.push_back(it->first);
        }
    }
    if (p.size() == m.size()) {
        cout <<  "Zvonite mamam, u vas retake\n";
        cout << "Plo}{ie : ";
        for (int i = 0; i < p.size(); ++i) {
            cout << p[i] << ' ';
        }
    } else if (h.size() == m.size()) {
        cout << "Molodcy\n";
        cout << "}{oroshie : ";
        for (int i = 0; i < h.size(); ++i) {
            cout << h[i] << ' ';
        }
    } else {
        cout << "}{oroshie : ";
        for (int i = 0; i < h.size(); ++i) {
            cout << h[i] << ' ';
        }
        cout << endl;
        cout << "Plo}{ie : ";
        for (int i = 0; i < p.size(); ++i) {
            cout << p[i] << ' ';
        }
    }

    return 0;
}