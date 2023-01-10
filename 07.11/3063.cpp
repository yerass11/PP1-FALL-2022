#include <iostream>
using namespace std;

int main() {
    int x, p, y;
    cin >> x >> p >> y;
    int cnt = 0;
    while (x < y){
        x += x / p;
        ++cnt;
    }
    cout << cnt + 1 << endl;
    return 0;
}
