#include <iostream>

using namespace std;

int main() {
    string s, t;
	cin >> s >> t;

	if((int)t.size() % (int)s.size() != 0) {
		cout << "NO";
		return(0);
	}

	int repeat = (int)t.size() / (int)s.size();
	
    for(int i = repeat - 1; i < repeat; ++i){
		int l = i * (int)s.size();
		if(t.substr(l, (int)s.size()) != s){
			cout << "NO";
			return(0);
		}
	}
	cout << "YES";
	return 0;
}