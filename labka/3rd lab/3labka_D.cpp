/*
Position of maximum

Given an array consisting of integers. Write a program, which finds position of maximum element of array. 
If maximums is two or more you should output first position.
*/
#include <iostream>
using namespace std;
int main(){
        int n;
        cin >> n;
        int a[n];
    int max = -1e9 * 2;
    int index_max = -1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > max){
            max = a[i];
        index_max = i;
        }
}
    cout << index_max + 1;
return 0;
}
