#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n = 3;
    int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
    sort (a, a + 3);
        for (int i = n - 1; i >= 0; i--){
            cout << a[i] << ' ';
        }
    return 0;
}