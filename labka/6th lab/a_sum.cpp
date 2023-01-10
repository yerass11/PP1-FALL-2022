#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
    //cout << a + b << endl;
}

int main() {
    int a, b; cin >> a >> b;
    add(a, b);
    cout << add(a, b);
    return 0;
}
