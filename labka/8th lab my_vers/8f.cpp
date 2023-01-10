#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int ind, num; cin >> ind >> num;
    v.insert(v.begin() + ind, num);

    for (int i = 0; i < n + 1; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}