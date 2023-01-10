#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int day;
	cin>>day;
	int total = 0;
	map<string, int> cities;
	for(int i=0;i<day;i++)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			string s;
			int students;
			cin>>s>>students;
			cities[s] += students;
			total+=students;
		}
	}
	map<string, int>::iterator it;
	for(it = cities.begin(); it!=cities.end();it++)
	{
		cout<<(*it).first <<" "<<(100*(double)(*it).second / (double)total)<<endl;
	}

	return 0;
}