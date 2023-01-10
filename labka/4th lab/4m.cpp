#include <iostream>

int main() {
    int n; std::cin >> n;
    int a[n][n];
    
    int firstRow = 0, firstCol = 0;
    int lastRow = n - 1, lastCol = n - 1;
    
    int numb = 1;
    while(true) {
        for(int i = firstCol; i <= lastCol; i++) {
            a[firstRow][i] = numb;
            numb++;
        }

        if(firstRow == lastRow) {
            break;
        }
        firstRow++;

        for(int i = firstRow; i <= lastRow; i++) {
            a[i][lastCol] = numb;
            numb++;
        }

        if(firstCol == lastCol) {
            break;
        }
        lastCol--;

        for(int i = lastCol; i >= firstCol; i--) {
            a[lastRow][i] = numb;
            numb++;
        }

        if(firstRow == lastRow) {
            break;
        }
        lastRow--;

        for(int i = lastRow; i >= firstRow; i--) {
            a[i][firstCol] = numb;
            numb++;
        }

        if(firstCol == lastCol) {
            break;
        }
        firstCol++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}