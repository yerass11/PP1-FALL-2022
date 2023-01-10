#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
        for(int i = 1; i < 1000000; i++){
            if (i % 7 == 0){
            continue;
            }
                else if (i % 2 == 1){
                    n = n + 3;
                }
                if (i % 2 == 0){
                    n = n - 4;
                }
                    if (n <= 0){
                        cout << ++i;
                        break;
                    }
        }   

return 0;
}