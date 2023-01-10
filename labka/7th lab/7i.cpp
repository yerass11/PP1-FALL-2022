#include <iostream>

using namespace std;

long long rec(long long sum){
    int n; cin >> n;
    if(n == 0) return sum;
    sum += n;
    return rec(sum);
}
int main(){
    
    cout<<rec(0);
    
    return 0;
}