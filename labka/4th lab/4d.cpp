#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                a[0][j] = j;
                a[i][0] = i;
            }
        }
        for (int i = 1; i < n; i++){
            for (int j = 1; j < n; j++){
                a[i][j] = i * j;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                std::cout << a[i][j] << ' ';
            }
            std::cout << std::endl;
        }
    return 0;
}