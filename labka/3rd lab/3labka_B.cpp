/*
Positive numbers

Given an array consisting of integers. Write a program, which outputs count of positive numbers in array.
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[n];
        if (a[n] > 0)
        cnt++;
    }
    cout << cnt;
}