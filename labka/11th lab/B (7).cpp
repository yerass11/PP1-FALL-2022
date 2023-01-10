#include<iostream>

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin >> n;
	vector <int> v;
	for (int i=0;i<n;i++){
		int e;
		cin >> e;
		v.push_back(e);
	}
	sort(v.begin(),v.end());
	for (int i=0;i<n;i++){
		if (v[i]==v[i+1]) cnt++;
	}

	if (cnt>0)  cout << "NO";
	else{
		cout << "YES";
	}
}