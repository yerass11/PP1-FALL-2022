/*
Sum of array

Given an array consisting of integers. Write a program, which finds sum of all elements.
*/
#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}