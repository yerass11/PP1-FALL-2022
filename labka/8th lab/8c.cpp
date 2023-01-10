#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int b,c;
    cin >>b>>c;
    reverse(a.begin()+b,a.begin()+c+1);
    for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

}