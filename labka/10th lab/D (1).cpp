#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
using namespace std;

bool f(vector<int> t,vector<int> v){
    int a=0,b=0;
    for(int i=0;i<t.size();i++){
        a+=t[i];
    }
    for(int i=0;i<v.size();i++){
        b+=v[i];
    }
    if(a<b) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v;
    vector<int> t;

    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
        t.clear();
    }
    sort(v.begin(),v.end(),f);
   
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}