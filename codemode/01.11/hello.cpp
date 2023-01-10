#include <iostream>
using namespace std;

string greating(string name) {
    string t = "Hello, " + name;
    return t;
}

int main() {
    string name; cin >> name;
    cout << greating(name) << endl; 
    return 0;
}