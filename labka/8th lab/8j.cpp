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
    //int b;
    //cin>>b;
    sort(a.begin(),a.end());
    cout << a[n-1]-a[0];
    
}