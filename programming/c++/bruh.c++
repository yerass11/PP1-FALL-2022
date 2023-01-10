#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << b << c << endl;
    a++;
    b--;
    cout << a << b << c << endl;
    a += 5;
    b *= 3;
    c /= 2;
     cout << a << b << c << endl;
      cout << ++a << --b << --c << endl;
}