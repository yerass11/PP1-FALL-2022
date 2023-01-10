#include <iostream>

using namespace std;

int main(){
    double n; cin >> n;
    double cnt = 0, summ = 0;
        for (int i = 1; summ <= 500000; i++){
            summ = summ + 0.3 * n;
            n = 1.1 * n;
            cnt = i;
        }
    cout << cnt;
    
    return 0;
}
