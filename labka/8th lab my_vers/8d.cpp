#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int a; cin >> a;
    v.erase(v.begin() + a);

    for (int i = 0; i < n - 1; ++i) {
        cout << v[i] << " "; 
    }
    return 0;
}