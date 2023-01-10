#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int b;
    cin >>b;
    a.erase (a.begin()+b);
    for (int i=0; i<n-1; i++){
        cout<<a[i]<<" ";
    }

}