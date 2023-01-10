#include <iostream>
using namespace std;

double percentOfGirls(double all, double girls) {
    double gg = (girls / all) * 100;
    return gg;
}

int main() {
    double all, girls;
    cin >> all >> girls;
    
    percentOfGirls(all, girls);
    cout << percentOfGirls(all, girls);
    
    return 0;
}