#include <iostream>

using namespace std;

int main() {
    string s;
    char x;
    int n;
	cin >> s >> x >> n;
	int cnt = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == x) ++cnt;
	}
	cout << (cnt == n ? "YES\n" : "NO\n");
	return 0;
}