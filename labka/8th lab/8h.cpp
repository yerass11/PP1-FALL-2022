#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int b;
    cin>>b;
    sort (a.begin(),a.end());
    //reverse (a.begin(),a.end());
    for (int i=0; i<b;i++){
        cout <<a[i]<<" ";
    }
}