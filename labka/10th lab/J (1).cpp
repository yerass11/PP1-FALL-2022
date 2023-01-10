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
vector<int> v, ans;
int n, m; cin >> n >> m;
fr(i, n){
    int x; cin >> x;
    v.pb(x);
}
ans = v;
reverse(all(ans));
rotate(ans.begin(), ans.end()-m, ans.end());
fr(i, ans.size()) cout << ans[i] << " ";
}


int main(){
    solve();
}