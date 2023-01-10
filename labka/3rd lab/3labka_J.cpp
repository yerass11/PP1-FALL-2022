/*
Upper bound -1?

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.
*/
#include <iostream>
using namespace std;
int main(){
    int n, s; cin >> n >> s;
    int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            if (s == a[i]){
                cout << ++i;
            return 0;
            }
            else if(s < a[i]){
                cout << i;
                return 0;
            }  
        }   
       cout << n;  
 return 0;       
}