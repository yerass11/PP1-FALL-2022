#include <iostream>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) cout << "YES";
    else cout << "NO";
    return 0;
}