/*
Merge two arrays

Given two sorted integer arrays 
a
 and 
b
, merge 
a
 into 
b
 as one sorted array.


*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n; cin >> n;
int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

int m; cin >> m;
int b[m];
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

int k = n + m;
int c[k];
    for (int i = 0; i < k; i++){
        if(i < n) c[i] = a[i];
        else if(i >= n) c[i] = b[i - n];
    }

sort(c, c + k);
    
    for(int i = 0; i < k; i++) 
        cout << c[i] << " ";
    
    return 0;
}