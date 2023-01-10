#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

    int l, r; cin >> l >> r;
    reverse(v.begin() + l, v.begin() + r + 1);
    
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}