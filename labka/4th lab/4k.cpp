#include <iostream>

int main(){
    int n, m; std::cin >> n >> m;
    int a[n][m];
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        sum += a[i][j];
        }
        std::cout << "The sum of row number " << i + 1 << " is " << sum << std::endl;
        sum = 0;
    }
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
        sum += a[i][j];
        }
        std::cout << "The sum of column number " << j + 1 << " is " << sum << std::endl;
        sum = 0;
    }


    return 0;
}