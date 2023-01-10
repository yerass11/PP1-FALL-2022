#include <bits/stdc++.h>

using namespace std;

int main(){
    int  n; cin >> n;

    double totalCredit = 0;
    double total = 0;

    while (n--) {
        string s; cin >> s;
        string mark; cin >> mark;
        int credit; cin >> credit;
        totalCredit += credit;
        if (mark == "A") {
            total += credit * 4;
        }
        if (mark == "A-") {
            total += credit * 3.67;
        }
        if (mark == "B+") {
            total += credit * 3.33;
        }
        if (mark == "B") {
            total += credit * 3;
        }
        if (mark == "B-") {
            total += credit * 2.67;
        }
        if (mark == "C+") {
            total += credit * 2.33;
        }
        if (mark == "C") {
            total += credit * 2;
        }
        if (mark == "C-") {
            total += credit * 1.67;
        }
        if (mark == "D+") {
            total += credit * 1.33;
        }
        if (mark == "D") {
            total += credit * 1;
        }
        if (mark == "D-") {
            total += credit * 0.67;
        }
        if (mark == "F") {
            total += credit * 0;
        }
    }

    double GPA = total / totalCredit;

    cout << (GPA >= 1.65 ? "Shikuem" : "Alo, mama?");

    return 0;
}