/*
Is it square?

Given a single number 
x
 check is it perfect square or not? Perfect square is numbers like 4, 9, 25.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    bool square = true;
    int stp = sqrt(n);
        for (int i = 0; i <= stp; i++){
            if (i * i == n){
            square = true;
            break;
            } else if (i * i != n){
                square = false;
            }

        }
        if(square){
            cout << "Yes";
        } else {
            cout << "No";
        }
            return 0;
}