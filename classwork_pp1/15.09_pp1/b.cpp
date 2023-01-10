//Given the length of a cube edge a.
// Find the volume of the cube V = a3 
//and its area surface S = 6 a2
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int V = a * a * a;
    int S = 6 * a * a;
    cout << V << endl << S << endl;
    return 0;
}