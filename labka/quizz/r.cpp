#include <iostream>

int main(){
    int n; std::cin >> n;
    int sum = 0, mult = 1;
    while (n > 0){
        sum += n % 10;
        mult *= n % 10;
        n /= 10;
    }
    std::cout << sum + mult;

    return 0;
}