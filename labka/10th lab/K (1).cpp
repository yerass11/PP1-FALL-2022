#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


bool isPrime(int x){
    if(x < 0) x *= -1;
    if(x == 2 || x == 3) return true;
    if(x == 1 || x == 0) return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void solve(){
int n; cin >> n;
vector<int> v;
fr(i, n){
    int x; cin >> x;
    v.pb(x);
}
cout << count_if(v.begin(), v.end(), isPrime);
}


int main(){
    solve();
}