/*
Maxmimum in array

Given an array consisting of integers. Write a program, which outputs maximum in array.


*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int max;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
        max = a[0];
    
    for (int i = 0; i < n; i++){
    if(a[i] > max){
        max = a[i];
    }
    }
    cout << max;
    return 0;
}