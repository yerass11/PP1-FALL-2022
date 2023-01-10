#include <iostream>
using namespace std;
int main(){
    int x, y, a, b; cin >> x >> y >> a >> b;
        if(x - a >= 0 && (x-a) + y - b >= 0) cout << "Yes";
            else cout << "No";

 return 0;   
}