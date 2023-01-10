#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int max = 0;
    int min = 9;

    while (n != 0) {
        if (n % 10 > max) max = n % 10;
        if (n % 10 < min) min = n % 10;
        n /= 10;
    }
    cout << max << " " << min << endl;
    return 0;
}
