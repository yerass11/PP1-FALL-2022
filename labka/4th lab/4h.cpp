#include <iostream>

int main(){
    int n, m; std::cin >> n >> m;
    int a[n][m];
    int minSum = 1e9;
    int min = 0, minIndex;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            min += a[i][j];
        }
        if (minSum > min){
            minSum = min;
            minIndex = i;
            min = 0;
        }
    }
    std::cout << minIndex + 1 << std::endl;
    return 0;
}