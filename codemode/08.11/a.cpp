#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    
    return 0;
}
