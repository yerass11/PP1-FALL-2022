#include <iostream>

int main(){
    int midka, endka, final; std::cin >> midka >> endka >> final;
    if(midka + endka >= 30 && final >= 20 && endka + final + midka >= 70) std::cout << "YES!";
    else std::cout << "NO.";
    return 0;
}