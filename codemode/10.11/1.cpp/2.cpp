#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j){
            if (a[i] == a[j]) {
                ++cnt;
            } 
            if (cnt > 1) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
