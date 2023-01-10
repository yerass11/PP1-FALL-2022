#include <bits/stdc++.h>

using namespace std;

void ADS(int n, vector <int> v, int m) {
    
    cout << "initial ";
    for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
    }
    cout << endl;

    int cur = 1;

    while (m--) {
        string s; cin >> s;
        cout << cur << ") ";
        
        if (s == "sort") {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "reverse") {
            reverse(v.begin(), v.end());
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "find_max") {
            int maax = -1e9;
            for (int i = 0; i < v.size(); ++i) {
                if (v[i] > maax) maax = v[i];
            }
            cout << "max - " << maax << endl;
        }
        
        if (s == "find_min") {
            int min = 1e9;
            for (int i = 0; i < v.size(); ++i) {
                if (v[i] < min) min = v[i];
            }
            cout << "min - " << min << endl;
        }
        
        if (s == "sum") {
            int sum = 0;
            for (int i = 0; i < v.size(); ++i) {
                sum += v[i];
            }
            cout << "sum - " << sum << endl;
        }
        
        if (s == "kick_one") {
            int index; cin >> index;
            int er = v[index] - 1;
            v.erase(v.begin() + er);
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "kick_part") {
            int l, r; cin >> l >> r;
            v.erase(v.begin() + l, v.begin() + r);
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "how_many") {
            int hm; cin >> hm;
            int count = 0;
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
                if (v[i] == hm) count++;
            }
            cout << endl;
            cout << count << endl;
        }
        
        if (s == "make_bigger") {
            for (int i = 0; i < v.size(); ++i) {
                v[i] *= 2;
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "invite_one") {
            int inv, ind; cin >> inv >> ind;
            v.insert(v.begin() + ind, inv);
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        
        if (s == "kick_all") {
            cout << "ok";
            v.clear();
            cout << endl;
        }
        cur++;
    
    }
}

int main(){
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int m; 
    cin >> m;
    
    ADS(n, v,  m);
    
    return 0;
}