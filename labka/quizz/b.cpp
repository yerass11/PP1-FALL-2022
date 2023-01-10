#include <iostream>
using namespace std;
int main (){
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    int s, m, b;
        if ((a1 < a2) && (a1 < a3)){
            s = a1;
            if (a2 > a3){
                b = a2;
                m = a3;
            }
        }
        if ((a1 < a2) && (a3 < a1)){
            s = a1;
            if (a2 < a3){
                m = a2;
                b = a3;
            }
        }
        if ((a1 > a2) && (a3 > a1)){
            m = a1;
            if (a2 < a3){
                s = a2;
                b = a3;
            }
        }
        if ((a1 < a2) && (a3 < a1)){
            m = a1;
            if (a2 > a3){
                b = a2;
                s = a3;
            }
        }
        if ((a1 > a2) && (a1 > a3)){
            b = a1;
            if (a3 > a2){
                m = a3;
                s = a2;
            }
        }

        if ((a1 > a2) && (a1 > a3)){
            b = a1;
            if (a2 > a3){
                m = a2;
                s = a3;
            }
        }
    cout << b << ' ' << m << ' ' << s;
    return 0;
}