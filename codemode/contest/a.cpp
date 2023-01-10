#include <iostream>

using namespace std;

int main(){
    int l, r; cin >> l >> r;
    int cnt = 0;
    bool isPrime = true;
    
    for (int i = l; i <= r; i++){
        for (int j = 2; j <= l / 2; j++){
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            l++;
        }
        if (isPrime == true) cout << i << ' ';
    }

    return 0;
}