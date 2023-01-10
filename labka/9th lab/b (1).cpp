#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n), evns, odds;
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
        if ( a[i]%2==0 ) evns.push_back( a[i] );
        if ( a[i]%2==1 ) odds.push_back( a[i] );
    }
    sort( evns.begin(), evns.end() );
    sort( odds.begin(), odds.end() );
    reverse( evns.begin(), evns.end() );
    for ( int i=0; i<evns.size(); i++ ){
        cout << evns[i] << " ";
    }
    for ( int i=0; i<odds.size(); i++ ){
        cout << odds[i] << " ";
    }
    return 0;
}