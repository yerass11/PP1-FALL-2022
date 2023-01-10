#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(int(s[i])+n<=90)
            cout<<char(int(s[i])+n);
        else
            cout<<char(int(s[i])+n-26);
    }
    return 0;
}