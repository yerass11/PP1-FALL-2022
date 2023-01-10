/*
Great seven
Among n numbers you need to count the number of numbers that ends with 7.
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int a; cin >> a;
        
        if (a % 10 == 7){
            sum++;
        }
    }
    cout << sum;
    return 0;
}