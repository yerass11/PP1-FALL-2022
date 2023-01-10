#include <iostream>
using namespace std;

bool isDigit(char C){
    return (C >= '0' && C <= '9');
}

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; ++i){
        char c;
        cin >> c;
        if (isDigit(c) == 1) ++cnt;
    }
    cout << cnt << endl;
    
    return 0;
}
