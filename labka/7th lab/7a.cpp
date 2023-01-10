#include <iostream>

using namespace std;

int rec(int cur, int n){
    if(n == 0){
        return cur;
    }
    cur *= 2;
    rec(cur, n-1);
}

int main() {
	int n;
	cin >> n;
	
	int cur = 1;
	cout<<rec(cur, n);
	
	return 0;
}