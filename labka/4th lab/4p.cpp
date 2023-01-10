#include <iostream>

using namespace std;

int main(){
    int n; std::cin >> n;
    int a[n][n];
    int summ = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> a[i][j];
            if(i + j == n - 1) summ += a[i][j];
        }
    }
    std::cout << summ << std::endl;
    return 0;
}