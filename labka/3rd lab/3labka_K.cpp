/*
 Duplicates

Given a sorted array,
 write a program which will delete all duplicates of elements and just save one of them.
*/
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
        for (int i = 1; i <= n; i++){
                cin >> a[i];
        }    
        for (int i = 1; i <= n; i++){
            if(a[i] != a[i + 1]){
                cout << a[i] << ' ';
            }
        }
            return 0;
}