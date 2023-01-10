#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n / i; ++i) {
        cout << i * i << endl;
    }
    
    return 0;
}
