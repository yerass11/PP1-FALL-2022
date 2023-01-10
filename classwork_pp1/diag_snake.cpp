/*
1   2   4   
3   5   8   
6   9   12
*/
#include <iostream>

using namespace std;

int main(){
    int n, m; cin >> n >> m; 
    int a[n][m];
    int cur = 0;
    int res = 1;
    
    for (int k = 0; k < n + m - 1; ++k) {
        
    }
    
    for (int i = 0; i < n; ++i) {
        
        for (int j = 0; j < m; ++j) {
            if (i + j == cur) {
                a[j][i] = res;
            }
        }
    }

    return 0;
}