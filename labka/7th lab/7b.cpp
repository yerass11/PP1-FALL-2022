#include <iostream>

using namespace std;

void rec(int n){
    if(n == 0)return;
    rec(n/2);
    cout<<n%2;

}
int main(){
    int n; cin>>n;
    
    rec(n);

    return 0;
}