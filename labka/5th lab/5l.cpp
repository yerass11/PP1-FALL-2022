#include <iostream>

using namespace std;

int main() {
    string s;
	cin >> s;
	char less = s[0];
	for(int i = 1; i < s.size(); ++i){
		if(s[i] == less) continue;
		if(s[i] > less) less = s[i];
		else{
			cout << "NO";
			return(0);
		}
	}
	cout << "YES";
	return 0;
}