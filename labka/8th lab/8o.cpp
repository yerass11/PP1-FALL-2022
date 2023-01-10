#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set <int> a;
    set <int> :: iterator it;
for (int i=0; i<s.size(); i++){
    a.insert(tolower(s[i]));
}

    cout<<a.size()<< endl;
for (it=a.begin(); it!=a.end(); it++){ 
    cout << char(*it)<< " ";}
}