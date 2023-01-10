#include <iostream>

int main(){
    int n; std::cin >> n;//1221
    int n1 = n % 10;
    int n2 = n / 10 % 10;
    int n3 = n / 100 % 10;
    int n4 = n / 1000;
        if (n1 == n4 && n2 == n3) std::cout << "YES";
        else std::cout << "NO";

    return 0;
}