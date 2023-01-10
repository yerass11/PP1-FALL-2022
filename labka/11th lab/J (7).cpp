#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
point initial;
bool f(point a,point b){
    float dist1=sqrt(((initial.x-a.x)*(initial.x-a.x))+((initial.y-a.y)*(initial.y-a.y)));
    float dist2=sqrt(((initial.x-b.x)*(initial.x-b.x))+((initial.y-b.y)*(initial.y-b.y)));
    if(dist1<dist2)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin>>initial.x>>initial.y;
    cin>>n;
    point points[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        points[i].x=a;
        points[i].y=b;
    }
    sort(points,points+n,f);
    for(auto i:points)
        cout<<i.x<<" "<<i.y<<endl;
    return 0;
}