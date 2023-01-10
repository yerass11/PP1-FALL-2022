/*
Oddlover

Given an array consisting of integers. 
Write a program, which outputs all odd elements of array.

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i =0; i < n; i++){
    int a[n]; cin >> a[n];
    if(a[n] % 2 == 1){
        cout << a[n] << ' ';
    }

    }q
}