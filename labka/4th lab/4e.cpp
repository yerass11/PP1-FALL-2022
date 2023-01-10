#include <iostream>

int main(){
    int n; std::cin >> n;
    int a[n][n];
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
            if (i >= j)
                std::cout << "[*]";
            }
            std::cout << std::endl;
        }

    return 0;
}