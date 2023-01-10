#include <iostream>



int main(){
    int a, b, c; std::cin >> a >> b >> c;
        if(a - b < c && a + b > c &&  a - c  < b &&  a + c > b && b - c < a && b + c > a) std::cout << "Yes";
        else std::cout << "No";
    return 0;
}