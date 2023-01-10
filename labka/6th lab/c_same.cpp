#include <iostream>
using namespace std;

int cnt = 0;
void same(int n, int a[], int b[]) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j){
            if (a[i] == a[j]){
                continue;
            }
            else {
                for (int k = 0; k < n; ++k) {
                    for (int s = 0; s < n; ++s){
                        if (a[k] == b[s]) {
                            ++cnt;
                        }
                    }
                }
           }
        }
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }
    same(n, a, b);
    cout << cnt;
    return 0;
}
