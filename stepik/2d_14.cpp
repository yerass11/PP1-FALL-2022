#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    int r = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (j == 0 && i % 2 == 0 && j % 2 == 0){
                cout << r;
                ++r;
            }
            else if (j == 0 && i % 2 == 1 && j % 2 == 1){
                cout << r;
                ++r;
            }
            else if (j != 0 && i % 2 == 0 && j % 2 == 0){
                cout << setw(4) << r;
                ++r;
            }
            else if (j != 0 && i % 2 == 1 && j % 2 == 1){
                cout << setw(4) << r;
                ++r;
            }
            else if (j == 0){
                cout << 0;
            }
            else if (j != 0){
                cout << setw(4) << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
