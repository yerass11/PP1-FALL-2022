#include <iostream>
#include <cmath>
using namespace std;
int n;
void yera(int a[], int b[]) {
    for (int i = 0; i < n; i++){
        cout << abs(a[i] - b[i]);
    }
}