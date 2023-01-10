#include <bits/stdc++.h>

using namespace std;

int main() {
    int maax, time, n;
    cin >> maax >> time >> n;
    int a[n];
    int total = 0;
    
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] / time > 10) total += 10;
        else total += a[i] / time;
    }
    
    if (total >= maax) cout << "Stipuha est' - mozhno poest'\n" << total;
    else cout << "Voronkov chert!\n" << total;
    
    return 0;
}