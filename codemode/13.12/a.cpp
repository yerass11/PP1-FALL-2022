#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    map <int, bool> sum;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j){
            sum[a[i] + a[j]] = true;
        }
    }

    int m; cin >> m;
    vector <int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < m; ++i) {
        cout << (sum[b[i]] == true ? "YES\n" : "NO\n");
    }


    return 0;
}