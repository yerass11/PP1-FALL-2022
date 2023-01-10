#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        } 
    }
    int x = 0, y = n - 1;
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            if (i == x && j == y){
            cout << a[i][j] << ' ';
            x++;
            y--;
            }
        } 
        cout << endl;
    }
    
    
    return 0;
}
