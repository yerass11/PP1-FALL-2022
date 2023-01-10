#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> mm;
    int n; cin >> n;
    vector <string> v(n);
    for ( int i=0; i<n; i++ ){
        cin >> v[i];
        mm.insert(make_pair(v[i], i+1));
    }
    map <string, int> :: iterator it; 
    for ( it=mm.begin(); it!=mm.end(); it++ ){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}