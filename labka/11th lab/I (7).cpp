#include<bits/stdc++.h>
using namespace std;
bool ispalindrom(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    bool flag=false;
    do{
        if(ispalindrom(s)){
            flag=true;
            break;
        }
    }while(next_permutation(s.begin(),s.begin()+s.size()));
    if(flag)
        cout<<"ZA WARUDO TOKI WO TOMARE";
    else
        cout<<"JOJO";
    return 0;
}