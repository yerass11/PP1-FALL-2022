#include <iostream>
#include <cmath>
int main(){
    int n; std::cin >> n;
        for (int i = 0; i <= n; i++){
            long long poww = pow(2, i);
            std::cout << poww << std::endl;
        }
    return 0;
}