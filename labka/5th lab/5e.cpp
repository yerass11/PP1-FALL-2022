#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0) sumEven += int(s[i] - 48);
        else sumOdd += int(s[i] - 48);
    }
    cout << (sumEven == sumOdd ? "YES" : "NO");

    return 0;
}