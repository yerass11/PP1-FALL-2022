#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if (b > a) swap(a, b);
    for (int i = 1; i < a * b; ++i) {
        for (int j = 1; j < a * b; ++j) {
            if (a * i == b * j) {
                cout << a * i << endl;
                return 0;
            }
        }
    }

    return 0;
}