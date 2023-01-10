#include <iostream>

using namespace std;

int main(){
    string s; std::cin >> s;
    int cap;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 97 && s[i] <= 122){
            cap = int(s[i] - 32);
            s[i] = char(cap);
        }
        std::cout << s[i];
    }

    return 0;
}