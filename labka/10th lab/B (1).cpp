#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a=0;

unsigned long long f(){
    unsigned long long res=1;
    for(int i=1;i<=a;i++){
        res=res*a;
    }
    a++;
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<unsigned long long > v(n+1);
    generate(v.begin(),v.end(),f);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}