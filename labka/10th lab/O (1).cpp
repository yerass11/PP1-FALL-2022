#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void binary(int b){
    int x = b;
    vi bin;
    while(x > 0){
        bin.pb(x%2);
        x /= 2;
    }
    reverse(all(bin));
    fr(i, bin.size()) cout << bin[i];
    cout << '\n';
}

void solve(){
int n; cin >> n;
vector<int> v;
while(n--){
    int x; cin >> x;
    v.pb(x);
}
for_each(v.begin(), v.end(), binary);
}


int main(){
    solve();
}