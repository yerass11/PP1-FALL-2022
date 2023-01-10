#include <iostream>
#include <cmath>
using namespace std;

int abss(int n) {
    int a = abs(n);
    return a;
}

int main()
{
    int n; cin >> n;
    abss(n);
    cout << abss(n);
    return 0;
}
