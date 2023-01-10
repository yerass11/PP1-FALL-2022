#include <iostream>
using namespace std;

bool toUpper(char l) {
    if (l >= 'a' && l <= 'z') return true;
    else return false;
}


int main()
{
    char l;
    cin >> l;
    
    toUpper(l);
    cout << (toUpper(l) ? char(l - 32) : char(l));
    return 0;
}
