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

    reverse(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    } 

    return 0;
}