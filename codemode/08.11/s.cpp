#include <iostream>
#include <set>

using namespace std;

int main() {
    int n; cin >> n;
    set <int> s;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }

    set <int>::iterator it;

    for (it = s.begin(); it != s.end(); ++it) {
        if (*it % 2 == 1) cout << *it << " ";
    }
    
    return 0;
}
