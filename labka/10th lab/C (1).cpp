#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main(){
stack<char> st;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(st.empty()) st.push(s[i]);
         else if(!st.empty()){
           int n=(st.top()-'0')*10+(s[i]-'0');
           if(int(sqrt(n))*int(sqrt(n))==n){
        st.pop();
               }
            else{
                st.push(s[i]);
            }
            }
        }
if(st.empty()){
    cout<<"Stack is empty";
}else {
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

}