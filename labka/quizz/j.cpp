#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,s1,s2,s3,s0; cin >> n1 >> n2 >> n3 >> s1 >> s2 >> s3 >> s0;
        if(s0 >= (n1*s1) + (n2*s2) + (n3 * s3)) cout << "Yes" << endl;
        else cout << "No" << endl;

    return 0;
}