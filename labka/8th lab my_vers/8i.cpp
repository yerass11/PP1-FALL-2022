#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int k; cin >> k;
    for (int i = 0; i < n; ++i) {
        if (v[i] == k) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}