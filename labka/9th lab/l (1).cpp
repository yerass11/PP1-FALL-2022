#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int, int> a[555];
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		int x, y;
	    cin >> x >> y;
	    a[i].first = x + y;
	    a[i].second = i + 1;
	}
	sort(a, a + n);
	for(int i = 0; i < n; ++i)
		cout << a[i].second << " ";
	return 0;
}