#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int k = n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n; j++){
        if(j >= k)
        cout << '*';
        else cout << ' ';
        }
        cout << endl;
        k--;
    }

    return 0;
}