#include<iostream>
#include<map>

using namespace std;

int n, m;
map<string, string> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		string login, password;
		cin >> login >> password;
		q[login] = password;
	}
	cin >> m;
	while(m--){
		string login, password;
		cin >> login >> password;
		if(!q.count(login))
			cout << "login error\n";
		else if(q[login] != password)
			cout << "password error\n";
		else
			cout << "correct password\n";	
	}               
	return 0;
}