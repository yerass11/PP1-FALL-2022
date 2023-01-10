#include <iostream>
using namespace std;

int main()
{
    int n, m, x; cin >> n >> m >> x;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (x == a[i][j]){
                cnt++;
                break;
            }
        }
    }
    
    cout << cnt << endl;
    
    
    return 0;
}