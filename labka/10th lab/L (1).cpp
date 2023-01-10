#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
int n; cin >> n;
int m = n, sz = 0;
while(m > 0){
    sz += m; 
    m--;
}
vector<int> v(sz);
int ind = 0, i = 0;
while(i <= n){
    fill(v.begin()+ind, v.begin()+ind+i, i);
    ind += i; i++;
}
fr(i, v.size()) cout << v[i] << " ";
}


int main(){
    solve();
}