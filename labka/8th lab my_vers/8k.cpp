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
    reverse(v.begin(), v.end());

    int k; cin >> k;
    int sum = 0;
    
    for (int i = 0; i < k; ++i) {
        sum += v[i];
    }

    cout << sum << endl;
    return 0;
}