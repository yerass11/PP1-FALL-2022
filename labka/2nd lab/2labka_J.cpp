/*
From zero to hero

Given n numbers you need to output the number of zeros among these numbers.
972
907 
900
10507
*/

#include <iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int all = 0;
        for (int i = 1; i <= n; ++i)
    {
            int b; cin >> b;
                if (b > 999 && b / 1000 % 10 == 0){
                    all++;
                }
                if (b > 999 && b / 100 % 10 == 0){
                all++;
                }
                if (b > 99 && b / 10 % 10 == 0){
                        all++;
                    }
                if (b > 9 && b % 10 == 0)
                        all++;
    }
    cout << all;
return 0;
}