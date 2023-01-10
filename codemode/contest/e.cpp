#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    string s[n * m - 1];
        for (int i = 0; i < n * m; i++){
                getline (cin, s[i]);
            }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << s[i][j] << ' ';
            }
            cout << endl;
        }
        
    return 0;
}