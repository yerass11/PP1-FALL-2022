#include <iostream>
#include<vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int m;
    cin>>m;
    map<char,int> mm;
    for (int i=0;i<m;i++){
        string s;
        cin>>s;
        set<char> ss;
        for (int i=0;i<s.size();i++){
            ss.insert(s[i]);
        }
        set<char>:: iterator it;
        for (it=ss.begin(); it!=ss.end();it++){
            mm[*it]++;
        }
    }
    map<char,int> ::iterator itr;
    bool boo=false;
    for (itr=mm.begin();itr!=mm.end();itr++){
        if (mm[itr->first]==m){
            cout<<itr->first<<" ";
            boo=true;
        }
    }
    if (boo==false){
        cout<<"NO COMMON CHARACTERS";
    }
}