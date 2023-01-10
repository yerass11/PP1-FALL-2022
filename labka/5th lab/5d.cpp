#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s; std::cin >> s;
    string copy = s;
    reverse(s.begin(), s.end()); 
    std::cout << (copy == s ? "YES" : "NO");
    return 0;
}