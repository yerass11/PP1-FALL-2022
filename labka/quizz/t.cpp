#include <iostream>

int main(){
    int n; std::cin >> n;
    int a;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        std::cin >> a;
        while (a > 0){
        sum += a % 10;
        a /= 10;
        }
        if (sum % 2 == 0) std::cout << "Sum of digits is even!" << std::endl;
        else std::cout << "Sum of digits is odd!" << std::endl;  
        sum = 0;
        }   
    return 0;
}