#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s; cin >> s;
    bool equal = true;
    
    int a[10];
    for (int i = 0; i < 10; i++){
        a[i] = 0;
    }

    for (int i = 0; i < s.size(); i++){
        a[int(s[i] - '0')]++;
    }
    
    sort(a, a + 10);
    reverse(a, a + 10);

    for(int i = 0; i < 9; i++) {
        if(a[i] == 0) break;
        if(a[i] != a[i + 1] && a[i + 1] != 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}