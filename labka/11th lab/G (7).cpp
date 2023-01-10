#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,set<int>> mp;
    for(int i=0;i<n;i++){
        string name;
        int date;
        cin>>name>>date;
        mp[name].insert(date);
    }
    for(auto i:mp){
        if(i.second.size()>=3)
            cout<<i.first<<" +1\n";
        else
            cout<<i.first<<" NO BONUS\n";
    }
    return 0;
}