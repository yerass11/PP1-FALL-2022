#include <iostream>
using namespace std;
int main() {
  // put your code here
    int a1, a2, x, y;
    int b = a1 - x;
    int c = a2 - y;
    cin >> a1 >> a2 >> x >> y;
    if (a1 > a2) {
        cout << min(min(b, c), min(x, y));
    } else {
    cout << "non";
    }
  return 0;
}