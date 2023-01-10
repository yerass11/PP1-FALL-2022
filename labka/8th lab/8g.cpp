#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n , z , x;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> z;
    int b=0,q=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>z){
            for(int j=2;j<sqrt(a[i]);j++){
                if(a[i] % j == 0)
                b++;
            }
            if(b==0){
                q++;
            }
        }
        b=0;
    }
    cout << q;
}