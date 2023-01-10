#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    if (n == 1) cout << "0";
    else if (n % 2 == 0) cout << n / 2;
    else cout << n;


return 0;
}