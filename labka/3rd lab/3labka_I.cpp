/*
Reverse elements on l...r

Given an array consisting of integers. Write program, which will reverse elements in interval 
l
, 
r
.


*/
#include <iostream>
using namespace std;
int main(){
    int n, l, r; cin >> n >> l >> r;
    int a[n];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for (int i = 1; i < l; i++){
            cout << a[i] << " ";
        }
        for (int i = r; i >= l; i--){
            cout << a[i] << " ";
        }
        for (int i = r + 1; i <= n; i++) {
            cout << a[i] << " ";
        }
    return 0;
}