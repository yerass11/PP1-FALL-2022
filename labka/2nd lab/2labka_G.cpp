/*
Maxi

Given n integers. In this task, you should find the maximum from these numbers.


*/
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]){
            max = a[i];
        }

    }
        cout << max << endl;
}