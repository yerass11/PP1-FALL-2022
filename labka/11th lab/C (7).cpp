#include <iostream>
#include <map>
#include <algorithm>
#include<set>
#include<vector>
using namespace std;
int main(){
map<string,int > name;
map<int,string> percent;
vector<int> v;
vector<string> v1;
vector<pair<int,string> > st;
int n;
cin>>n;
double total=0;
for(int i=0;i<n;i++){
			string s;
			int students;
			cin>>s>>students;
			name[s] += students;
			total+=students;
            

	}
map<string, int>::iterator it;
for(it=name.begin(); it!=name.end();it++){
     st.push_back(make_pair((*it).second,(*it).first));
}	 
sort(st.begin(),st.end());

reverse(st.begin(),st.end());
for(int i=0;i<name.size();i++){
	cout<<st[i].second<<" "<<(100*(double)st[i].first /total)<<"%"<<endl;
}
}