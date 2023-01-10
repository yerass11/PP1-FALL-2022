#include <iostream>

int main(){
    int n, m; std::cin >> n >> m;
    int a[n][m];
    int min;
    int xIndex = 1, yIndex = 1, summ = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        std::cin >> a[i][j];
        }
    }
    
    std::cout << "coordinates of min elements:" << std::endl;
    
    for (int i = 0; i < m; i++){
        min = a[0][i];
        yIndex = i + 1;
        for (int j = 0; j < n; j++){
            if (min > a[j][i]){
                min = a[j][i];
                xIndex = j + 1;
            } 
        }
        summ += min;
        std::cout << xIndex << ";" << yIndex << std::endl;
    }

    std::cout << std::endl << "Their sum:" << std::endl << summ;

    return 0;
}