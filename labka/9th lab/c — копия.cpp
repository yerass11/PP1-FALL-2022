#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int> ms;
    int n; cin >> n;
    vector <int> mv(n);
    for ( int i=0; i<n; i++ ) cin >> mv[i];
    for ( int i=0; i<n; i++ ){
        for ( int j=i+1; j<n; j++ ){
            if ( mv[i]==mv[j] ) ms.insert(mv[i]);
        }
    }
    cout << ms.size();
    return 0;
}