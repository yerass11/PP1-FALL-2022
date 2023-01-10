#include <iostream>

using namespace std;

int main(){
    string s; std::cin >> s;
    int small = 0, capital = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 65 && s[i] <= 90) ++capital;
        if (s[i] >= 97 && s[i] <= 122) ++small;
    }
    std::cout << small << ' ' << capital << std::endl;

    return 0;
}