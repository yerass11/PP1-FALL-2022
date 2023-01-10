#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> a;
    set <int> :: iterator it;
    for (int i=0;i<n; i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for (it=a.begin(); it!=a.end(); it++){
        if (*it%2!=0){
            cout << *it<<" ";
        }
    }
}