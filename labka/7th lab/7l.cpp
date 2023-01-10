#include <iostream>
using namespace std;
string rec(string s, int i, int j){
    if(i > j)return "Yes";

    if(s[i] != s[j])return "No";
    return rec(s, i+1, j-1);
}
int main(){
    string s;
    cin>>s;
    int i = 0, j = s.size()-1;

    cout<<rec(s, i, j);
    
    return 0;
}