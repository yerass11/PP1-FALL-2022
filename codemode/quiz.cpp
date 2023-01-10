#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int k = n;
        if(n % 2 == 0){
            for(int i = 1; i <= n; i++){
                for (int j = 1; j <= n; j++){
                    if(j >= k){
                        cout << '*';
                    } else cout << '.';
                }
                cout << endl;
                        k--;
            }
        }
        if(n % 2 == 1){
            for(int i = 1; i <= n; i++){
                for (int j = 1; j <= n; j++){
                    if(j <= k){
                        cout << '*';
                    } else cout << '.';
                }
                cout << endl;
                        k--;
            }
        }

    return 0;
}