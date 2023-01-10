#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#define pb push_back
#define ll long long
using namespace std;
int main(){
    map< pair<string,int> , int> mp;
    map< pair<string,int> , int>::iterator it;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string name1,name2;
        int point1,point2;
        cin>>name1>>point1>>name2>>point2;
        string names = name1 + " and " + name2;
        int totalpoints = point1+point2;
        if (mp.empty()) {
                         mp[make_pair(names,totalpoints)]=i;
        }
        for (it=mp.begin();it!=mp.end();it++){
            if (names==(*it).first.first){
                if (totalpoints!=(*it).first.second) {
                    mp[make_pair(names,totalpoints)] = i;
                }
            }
            else mp[make_pair(names,totalpoints)] = i;
        }
    }
    for (it=mp.begin();it!=mp.end();it++){
        cout<<(*it).first.first<<" "<<(*it).first.second<<endl;
    }
}