#include <iostream>

int main(){
    int n, m, cnt = 0;
    std::cin >> n >> m;
    int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                std::cin >> a[i][j];
                if (a[i][j] < 0) cnt++;
            }
        }
    std::cout << cnt << std::endl;
    return 0;
}