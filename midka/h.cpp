#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    while (n >= 1) {
        if (n % 2 == 0) {
            n /= 2;
            cnt++;
        } else if (n % 3 == 0) {
            n /= 3;
            cnt++;
        }
        else {
            n -= 1;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
