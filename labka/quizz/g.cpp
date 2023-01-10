#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int summ = 0;
    int maxx = -1e9;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            summ += a[i];
        }
        for (int i = 0; i < n; i++){
            if (a[i] > maxx) maxx = a[i];
        }    
        
        cout << summ << ' ' << maxx << endl;
    return 0;
}