#include <bits/stdc++.h>

using namespace std;

void print(int n, vector <int> v){
    cout << "initial ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void sort(int n, vector <int> v) {
    
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void reverse(int n, vector <int> v) {
    
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void find_max(int n, vector <int> v) {
    int maax = -1e9;
            for (int i = 0; i < v.size(); ++i) {
                if (v[i] > maax) maax = v[i];
            }
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl << "max - " << maax << endl;
}

void find_min(int n, vector <int> v) {
    int min = 1e9;
            for (int i = 0; i < v.size(); ++i) {
                if (v[i] < min) min = v[i];
            }
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl << "min - " << min << endl;
}

void sum(int n, vector <int> v) {
    int sum = 0;
            for (int i = 0; i < v.size(); ++i) {
                sum += v[i];
            }
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl << "sum - " << sum << endl;
}

void kick_one(int n, vector <int> v) {
    
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void kick_part(int n, vector <int> v) {
    
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void how_many(int n, vector <int> v) {
    int hm; cin >> hm;
            int count = 0;
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
                if (v[i] == hm) count++;
            }
            cout << endl;
            cout << count << " times" << endl;
}

void make_bigger(int n, vector <int> v) {
    for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void invite_one(int n, vector <int> v) {
    
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i] << " ";
            }
            cout << endl;
}

void kick_all(int n, vector <int> v) {
    cout << "ok";
            
            cout << endl;
}

int main(){
    int n; cin >> n;
    
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    
    int m; 
    cin >> m;
    
    int cur = 1;
    
    print(n, v);
    while (m--) {
        string s; cin >> s;
        cout << cur << ") ";
        
        
        if (s == "sort") {
            sort(v.begin(), v.end());
            sort(n, v);
        }
        
        if (s == "reverse") {
            reverse(v.begin(), v.end());
            reverse(n, v);
        }
        
        if (s == "find_max") {
            find_max(n, v);
        }
        
        if (s == "find_min") {
            find_min(n, v);
        }
        
        if (s == "sum") {
            sum(n, v);
        }
        
        if (s == "kick_one") {
            int index; cin >> index;
            
            v.erase(v.begin() + index);
            kick_one(n, v);
        }
        
        if (s == "kick_part") {
            int l, r; cin >> l >> r;
            v.erase(v.begin() + l, v.begin() + r);
            kick_part(n, v);
        }
        
        if (s == "how_many") {
            how_many(n, v);
        }
        
        if (s == "make_bigger") {
            for (int i = 0; i < v.size(); ++i) {
                v[i] *= 2;
            }
            make_bigger(n, v);
        }
        
        if (s == "invite_one") {
            int inv, ind; cin >> inv >> ind;
            v.insert(v.begin() + ind, inv);
            invite_one(n, v);
        }
        
        if (s == "kick_all") {
            v.clear();
            kick_all(n, v);
        }
        
        cur++;
    }
    
    return 0;
}