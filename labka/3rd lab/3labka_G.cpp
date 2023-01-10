/*
MaxToMin

Given an array consisting of integers.
 Write a program, which will change all maximal elements to minimal elements of the array.
  Look to sample to better understand the conditions.
*/
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int max = 0;
    int min = 2 * 1e9;
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    for (int i = 0; i < n; i++){
      if (max < a[i]){
        max = a[i];
      }
      if (min > a[i]){
        min = a[i];
      }
    }
    for (int i = 0; i < n; i++){
      if (a[i] == max){
      a[i] = min;
      }
    }
    for (int i = 0; i < n; i++){
      cout << a[i] << ' ';
      
    }
    return 0;
}