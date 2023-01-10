#include <iostream>
#include <queue>
using namespace std;
int n;
queue <string> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		int type;
		cin >> type;
		if(type == 2)
			q.pop();
		else{
			string s;
			cin >> s;
			q.push(s);
		}	
		if(!q.empty())
			cout << q.front() << "\n";
		else
			cout << "queue is empty\n";
	}
	return 0;
}