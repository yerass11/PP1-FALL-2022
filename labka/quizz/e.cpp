#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    bool sqr = true;
    for (int i = 1; i <= n / 2; i++){
        if(i * i == n){
            sqr = true;;
            break;
        }else {
                sqr = false;
            }
    }
        if(sqr) cout << "Perfecto";
            else cout << "Simple";



    return 0;
}