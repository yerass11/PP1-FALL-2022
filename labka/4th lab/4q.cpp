#include <iostream>

using namespace std;

int main(){
    int n; std::cin >> n;
    int m = 2 * n - 1;
    int left = n, right = n;
    int a[n][m];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            
            if (j >= left && j <= right) std::cout <<  '*';
            else std::cout << '.';
        }
        --left;
        ++right;
        std::cout << std::endl;
    }
    return 0;
}