#include <iostream>
using namespace std;

int main() {
    int num; cin >> num;
    int prev = num;
    int cnt = 0;
    while (prev != 0) {
        prev /= 10;
        cnt++;
    }
    
    int a[cnt];
    int i = cnt;
    
    while (num != 0) {
        a[i] = num % 10;
        num /= 10;
        --i;
    }
    
    for (int i = 1; i <= cnt; ++i) {
        if (a[i] == 6) {
            a[i] = 9;
            break;
        }
    }

    for (int i = 1; i <= cnt; ++i) {
        cout << a[i];
    }

    return 0;
}
