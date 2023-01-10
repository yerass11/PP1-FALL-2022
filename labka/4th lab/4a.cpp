#include <iostream>

int main(){
    int n, max = 0;
    std::cin >> n;
    int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                std::cin >> a[i][j];
                max = a[0][0];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (a[i][j] > max){
                    max = a[i][j];
                }
            }
        }
    std::cout << max << std::endl;

    return 0;
}