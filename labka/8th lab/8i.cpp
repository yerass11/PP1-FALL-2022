#include <iostream>
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
    for (int i=0; i<b;i++){
        if(a[i]==b){
            cout <<"Yes";
            return 0;
        }}
        cout <<"No ";
    
}