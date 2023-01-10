#include<iostream>
#include<stack>
using namespace std;
string s;
stack<char> st;
int main(){	
	cin >> s;
	for(int i = 0; i < s.size(); ++i){
		if(!st.size())
			st.push(s[i]);
		else if(st.top() == '1' && s[i] == '1'){
			st.pop();
		}
		else st.push(s[i]);
	}
	string ans = "";
	while(st.size()){
		ans += st.top();
		st.pop(); 
	}
	for(int i = (int)ans.size() - 1; i >= 0; --i)
		cout << ans[i];
	return 0;
}