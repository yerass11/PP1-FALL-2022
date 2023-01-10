#include <iostream>
#include <cmath>
#include <vector> 

using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    for (int i = 2; i < sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
    
}

int main(){
    int n; cin >> n;
    vector <int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int k; cin >> k;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > k && isPrime(v[i])) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}