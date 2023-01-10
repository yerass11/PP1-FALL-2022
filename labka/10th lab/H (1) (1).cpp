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
vector<int> v;
fr(i, n){
    int x; cin >> x;
    if(v.empty()) v.push_back(x);
    else if(find(v.begin(), v.end(), x) == v.end()) v.push_back(x);
}
do{
    fr(i, v.size()) cout << v[i] << " ";
    cout << "\n";
}
while(next_permutation(v.begin(), v.end()));
}


int main(){
    solve();
}