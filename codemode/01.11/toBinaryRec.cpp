#include <iostream>
using namespace std;

string s = "";
string toBinRec(int n) {
    if (n == 0)
        return s;
    s = char((n % 2) + 48) + s;
    return toBinRec(n / 2);
}


int main() {
    int n; cin >> n;
    cout << toBinRec(n) << endl;
    return 0;
}
