#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n, k, cnt=0;
    cin >> n >> k;
    long long a[n];
    for ( int i=0; i<n; i++ ) cin >> a[i];
    for ( int i=0; i<n; i++ ){
        if ( a[i]==k ) cnt++;
    }
    cout << cnt;
    return 0;
}