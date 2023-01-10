#include <iostream>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    int maw;
    int index1;
    int index2;
        for(int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
              maw = a[1][1];  
            }
        }
        for(int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if(a[i][j]>maw){ maw = a[i][j]; 
                index1 = i;
                index2 = j;
                }
            }
        }
    cout << index1 << ' ' << index2;

    return 0;
}