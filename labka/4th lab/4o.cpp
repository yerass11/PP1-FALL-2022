#include <iostream>

int main(){
    int n, max = -1e9;
    std::cin >> n;
    int a[n][n];
    int cor;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                std::cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j && a[i][j] > max){
                    max = a[i][j];
                    cor = i + 1;
                }
            }
        }
    std::cout << "Maximum element is: " << max << ' ' << "with coordinates: " << cor << ';' << cor;

    return 0;
}