#include <iostream>

using namespace std;

int main () {
    int n; cin >> n;
    int cnt = 0;
    while(n > 0){
        cnt = n / 25;
        cout << cnt << endl;;
        n = n - (n * (n / 25));
        
        cnt = 0;
        cnt = n / 10;
        cout << cnt << endl;
        n = n - (n * (n / 10));

        cnt = 0;
        cnt = n / 5;
        cout << cnt << endl;
        n = n - (n * (n / 5));

        cnt = 0;
        cnt = n / 1;
        cout << cnt << endl;
    }

    return 0;
}