/*
Interesting problem

Given n numbers you need to count the number of even and the number of odd numbers from the given list.


*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int even = 0;
    int odd = 0;
    for (int i = 1; i <= n; i++){
        int a; cin >> a;
        if (a % 2 == 0){
            ++even;
        } else {
            ++odd;
    }
    a = 0;
    }
    cout << even << ' ' << odd;
    return 0;
}