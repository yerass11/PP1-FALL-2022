#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    bool flag=true;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++)
            if(arr[i][j+1]==arr[i][j]&&arr[i+1][j+1]==arr[i][j]&&arr[i+1][j]==arr[i][j]){
                flag=false;
                break;
            }
        if(!flag)
            break;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}