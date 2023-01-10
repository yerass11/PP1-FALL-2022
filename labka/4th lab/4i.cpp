#include <iostream>
#include <cmath>

int main(){
    int n,  m; std::cin >> n >> m;
    int a[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                std::cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (int(sqrt(a[i][j])) * int(sqrt(a[i][j])) == a[i][j]){
                    a[i][j] = sqrt(a[i][j]);
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                std::cout << a[i][j] << ' ';
            }
            std::cout << std::endl;
        }

    return 0;
}