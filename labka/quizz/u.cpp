#include <iostream>
int main(){
    double x, y; std::cin >> x >> y;
    for (int i = 1; i < 1e9; i++){
        if (x == y){
            std::cout << '1';
            break;
        }
        x = 1.1 * x;
        if (x >= y){
            std::cout << ++i;
            break;
        }
    }
    return 0;
}