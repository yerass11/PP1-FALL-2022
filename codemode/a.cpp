#include <iostream>
using namespace std;
int main(){
    int x, y; cin >> x >> y;
    int a[x][y];
    int vol = 1;
    for (int i = 0; i < x; i++){
        if (i % 2 == 0) {
            for (int j = 0; j < y; j++){
                a[i][j] = vol;
                vol++;
            }
        }
        else if (i % 2 == 0) {
            for (int j = y - 1; j > 0; j--){
                a[i][j] = vol;
                vol++;
            }
        }

    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y ; j++){
            cout << a[i][j] << ' ';  
        }
        cout << endl;
    }
    return 0;   
}