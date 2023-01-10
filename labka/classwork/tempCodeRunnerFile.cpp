#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if (i + j + 1 == m)
            sum += a[i][j];
        }
    }

   cout << sum;

return 0;
}