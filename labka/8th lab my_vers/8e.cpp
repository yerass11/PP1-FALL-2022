#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int l, r; cin >> l >> r;
    v.erase(v.begin() + l, v.begin() + r + 1);
    for (int i = 0; i < n - (r - l) - 1; ++i) {
        cout << v[i] << " ";
    }
    
    return 0;
}