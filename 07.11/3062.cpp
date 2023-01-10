#include <iostream>
using namespace std;

double stopp(double x, double y) {
    int cnt = 0;
    while (x < y) {
        x += x / 10;
        ++cnt;
    }
    return ++cnt;

}

int main() {
    double x, y; cin >> x >> y;

    stopp(x, y);
    cout << stopp(x, y);
    return 0;
}
