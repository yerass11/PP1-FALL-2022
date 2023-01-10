#include <iostream>
using namespace std;

int main()
{
    int a, last;
    int b = 1e9;
    int cnt =0;
    while (cin >> a){
        if (a == 0){
            break;
        }
        
        if (a > b){
            cnt++;
        }
        
        b = a;
    }
    cout << cnt;
    
    return 0;
}
