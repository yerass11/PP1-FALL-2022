#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++){
        a[i][0] = i;
        a[0][i] = i;
        }
    for (int i = 1; i < n; i++){
        for (int j = 1; i < n; j++){
            a[i][j] = a[0][j] * a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; j++){
        cout << a[i][j];
        }
    }
    return 0;
}