#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> mm;
    int n; cin >> n;
    vector <string> mv(n);
    for ( int i=0; i<n; i++ ){
        cin >> mv[i];
    }
    for ( int i=0; i<n; i++ ){
        if(mm.find(mv[i]) == mm.end())
            mm[mv[i]] = 1;
        else{
            mm[mv[i]]++;
        }
    }
    int cnt=0;
    map <string, int> :: iterator it;
    for ( it = mm.begin(); it!=mm.end(); it++ ){
        if ( (*it).second==3 ) cnt++;
    }
    cout << cnt;
    return 0;
}