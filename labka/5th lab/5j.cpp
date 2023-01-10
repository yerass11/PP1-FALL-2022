#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;
    string copy = s;
    reverse (s.begin(), s.end());
    if (s == copy){
        cout << "YES";
        return 0;
    }
    reverse (s.begin(), s.end());
    s = s + s[0];
    copy = s;
    reverse (s.begin(), s.end());
    cout << (s == copy ? "YES" : "NO");
    return 0;
}