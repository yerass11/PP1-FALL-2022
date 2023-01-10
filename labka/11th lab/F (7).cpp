#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
int n,m,k;
vector<int> v;
cin>>n>>m>>k;
for(int i=1; i <= n && i <= m; i++) {
      if(n%i==0 && m%i==0) {;
        v.push_back(i);
      }
   }
   
// for(int i=1;i<=v.size();i++){

//         cout<<a[i]<<" ";
    
// }
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
     if(k-1==i){
        cout<<v[i]<<" ";
    }
}



}