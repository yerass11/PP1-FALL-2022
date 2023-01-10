#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    //int k = n / 5;
    for (int i = 5; i <= n; i += 5){
        cout << i << ' ';
    }
    return 0;
}