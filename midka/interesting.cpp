#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    bool isInteresting = true;
    for (int i =0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n - 1; i >= 1; i--){
        if (a[i] > a[i-1]) isInteresting = true;
        else {
            cout << "Not Interesting";
            return 0;
        }
    }
    if (isInteresting == true) cout << "Interesting";
    
    return 0;
}
