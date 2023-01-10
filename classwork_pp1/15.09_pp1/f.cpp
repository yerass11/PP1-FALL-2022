//The number of some year (a positive integer) 
//is given. Determine the corresponding century number,
// given that, for example, 
//the beginning of the 20th century was 1901.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int cent = a / 100;
    
    if (a % 100 == 0){
        cout << cent;
    } else {
    cout << ++cent;
    }
    return 0;
}