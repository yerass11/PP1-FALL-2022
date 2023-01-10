//Leap year
//It is required to determine whether a given year is a leap. 
//A year is a leap if the number is divided by 4, 
//but not by 100, 
//and also if it is divided by 400.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a % 400 == 0){
        cout << "YES";
    } else if (a % 100 == 0 ) {
        cout << "NO";
    } else if (a % 4 == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}