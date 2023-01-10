#include <iostream>

using namespace std;

int fibonacci(int n){
    int i=1;
    if (n==1){
        return 0;}
    if (n>=3){
        i++;
        return n-i;}
    else
    i=1;
    return n-(n-i);
    i++;
}

int main(){
    int n;
    cin>>n;

    cout << fibonacci(n);

    return 0;
}