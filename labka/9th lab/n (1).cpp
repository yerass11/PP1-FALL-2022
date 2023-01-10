#include <iostream>
#include <map>
using namespace std;
int n;
int a[1111];
map<int, int> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		q[a[i]] = 1;
	}
	int ans = 0;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < i; ++j)
			if(q[a[i]^a[j]]) ans++;
	cout << ans << "\n";
	return 0;
}