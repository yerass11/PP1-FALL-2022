#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> mm;
    int n; cin >> n;
    vector <string> v(n);
    for ( int i=0; i<n; i++ ){
        cin >> v[i];
    }
    for ( int i=0; i<n; i++ ){
        if(mm.find(v[i]) == mm.end()){
            cout << "new user added" << endl;
            mm[v[i]]++;
        }
        else if ( mm[v[i]]>=1 ) cout << "user already exists" << endl;
    }
    return 0;
}