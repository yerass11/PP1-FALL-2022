#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<int> v;
vector<int> w;

int n,m,a,b;
cin>>n>>m;
for(int i=0;i<n;i++){
cin>>a;
v.push_back(a);
}
vector<int>:: iterator it;
 it =unique (v.begin(), v.begin()+n);
v.resize( distance(v.begin(),it) ); 
// for(it=v.begin();it!=v.end();it++){
//     cout<<*it<<" ";
// }
// cout<<v.size()<<endl;

for(int i=0;i<m;i++){
cin>>b;
w.push_back(b);
}
auto ip =unique (w.begin(), w.end());
w.resize( distance(w.begin(),ip) );
// for(ip=w.begin();ip!=w.end();ip++){
//     cout<<*ip<<" ";
// }cout<<w.size()<<endl;
int c=v.size()+w.size();
 vector<int> l(c);
//  vector<int> l(v);
// l.reserve(c);
//  l.insert(l.end(), v.begin(), v.end());
//  l.insert(l.end(),w.begin(), w.end());
//  merge(v.begin(),v.end(),w.begin(),w.end(),l.begin());
// for(int i=0;i<(a);i++){
//       cout<<l[i]<<" ";
//   }
for(int i = 0;i<c;i+=2){
    l[i] = v[i/2];}
for(int i = 1;i<c;i+=2){
    l[i] = w[i/2];}
vector<int>::iterator id=unique ( l.begin(),l.end());
l.resize(distance(l.begin(),id));
for(id=l.begin();id!=l.end();id++){
     cout<<*id<<" ";
 }






}