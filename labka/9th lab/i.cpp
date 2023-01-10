#include <iostream>
#include <map> 
using namespace std;

int main() {
    map<string, int> m;
    int n; cin >> n;
    while (n--) {
        string name; cin >> name;
        if (m[name] == 0) cout << "new user added\n";
        else cout << "user already exists\n";
        ++m[name];
    }
    return 0;
}