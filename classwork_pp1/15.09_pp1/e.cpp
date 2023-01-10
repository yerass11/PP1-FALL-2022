//Given positive integers A and B (A > B). 
//On a segment of length A, 
//the maximum possible number of segments of length B 
//(without overlaps) is placed. 
//Using integer division, 
//find the number of segments B placed on segment A.
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << a / b;
    return 0;
}