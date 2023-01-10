#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int k; cin >> k;
    int a = k % 26;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] + a >= 'a' && s[i] + a <= 'z') {
            s[i] = s[i] + a;
        } else s[i] = s[i] + a - 26;
    }
    
    cout << s << endl;
    return 0;
}
