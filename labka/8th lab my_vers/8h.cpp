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

    sort(v.begin(), v.end());

    int k; cin >> k;
    for (int i = 0; i < k; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}