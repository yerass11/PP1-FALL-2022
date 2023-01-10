#include <bits/stdc++.h>

using namespace std;

bool lastChance(string s1, string s2) {
        int n = s1.length();
        
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                
                swap(s1[i], s1[j]);
                
                if(s1 == s2) {
                    return true;
                }
                
                swap(s1[i], s1[j]);
            }
        }
        
        return false;
    }

int main(){
    string s1, s2; cin >> s1 >> s2;
    
    lastChance(s1, s2);
    cout << (lastChance(s1, s2) == true ? "yes" : "no");

    return 0;
}