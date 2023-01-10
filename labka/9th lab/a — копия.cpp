#include <bits/stdc++.h>
using namespace std;
int n;
pair <int, int> a[2222];
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n);
	for(int i = 0; i < n; ++i)
		cout << a[i].first << " " << a[i].second << "\n";
	return 0;
}