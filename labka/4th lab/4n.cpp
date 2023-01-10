#include <iostream>
#include <cmath>
int main(){
    int n; std::cin >> n;
    int a[n];
    bool isPrime = true;

    for (int i = 2; i <= n; i++){
        for (int j = 2; j < sqrt(n); j++){
            if (i == j) break;
            if (i % j != 0){
                isPrime = true;
            } else if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) std::cout << i << " is prime" << std::endl;
    }
    return 0;
}