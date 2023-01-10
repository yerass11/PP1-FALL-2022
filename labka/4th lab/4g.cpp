#include <iostream>

int main(){
    int n, max = 0;
    std::cin >> n;
    int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i + j == n - 1) std::cout << i + 1;
                else std::cout << '.';
            }
            std::cout << std::endl;
        }
    return 0;
}