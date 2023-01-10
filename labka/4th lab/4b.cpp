#include <iostream>

int main(){
    int n; std::cin >> n;
    int a[n][n];
    int FirstMax = -1e9;
    int ScndMax = -1e9;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > FirstMax){
                FirstMax = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > ScndMax && a[i][j] != FirstMax){
                ScndMax = a[i][j];
            } 
        }
    }
    if (ScndMax == -1e9) std::cout << 0;
    else std::cout << ScndMax;
    return 0;
}