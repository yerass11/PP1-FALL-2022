#include <iostream>
using namespace std;

int main() {
    int l, r, k; cin >> l >> r >> k;
    if (k == 1) {
        for (int i = l; i <= r; ++i) {
            for (int j = 0; j < l / 2 + 1; ++j) {
                if (j * j == i) cout << i << " ";
            }
        }
    } else if (k == -1){
        for (int i = r; i * i >= l; --i) {
            for (int j = 0; j < l / 2 + 1; ++j) {
                if (j * j == i) cout << i << " ";
            }
        }
    }
    
    cout << endl;
    return 0;
}
