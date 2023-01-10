#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v;
    vector<int> t;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        v.push_back(s);
        int x; cin >> x;
        t.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    for(int i = 0; i < n; i++) cout << v[i] << " " << t[i] << endl;
}