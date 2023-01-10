#include<iostream> 
#include<algorithm>

using namespace std;

int main() {
    string s, t;
	cin >> s >> t;    
    int s1[100100],t1[100100];
	for(int i = 0; i < s.size(); ++i){
		s1[s[i] - 'a']++; 
	}
	for(int i = 0;i < t.size(); ++i){
		t1[t[i] - 'a']++;
	}
	for(char i = 'a';i <= 'z'; ++i) {
		if(s1[i - 'a'] != t1[i - 'a']) {
			cout << "NO";
			return(0);
		}
	}
	cout << "YES";
	return 0;
}