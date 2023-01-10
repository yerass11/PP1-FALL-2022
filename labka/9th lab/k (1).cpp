#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[100100];
int L[100100];
int R[100100];
vector<int> st;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		while(st.size() > 0 && a[st.back()] >= a[i])
			st.pop_back();
		if(st.size() > 0)
			L[i] = st.back()+1;
		else L[i] = 0;
			st.push_back(i);
	}
	st.clear();
	for(int i = n-1; i >= 0; i--){
		while(st.size() > 0 && a[st.back()] >= a[i])
			st.pop_back();
		if(st.size() > 0) R[i] = st.back()-1;
		else R[i] = n-1;
		st.push_back(i);		
	}
	ll ans = 0;
	for(int i = 0; i < n; i++)
		ans = max(ans,a[i] * 1ll * (R[i] - L[i] + 1));
	cout << ans << endl;
	st.clear();
	return 0;
}