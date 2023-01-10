#include <iostream>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    bool Pal = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == 0 && a[j] == a[n - 1 - j]){
                Pal = true;
            } else {
                cout << "no";
                return 0;
            }
            
            if (i == n - 1 && a[j] == a[n - 1 - j]){
                Pal = true;
            }
            else {
                cout << "no";
                return 0;
            }
        }
    }
    cout << (Pal == true ? "Yes" : "No");
    return 0;
}