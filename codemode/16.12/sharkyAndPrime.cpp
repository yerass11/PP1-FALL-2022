#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1)    return false;

    for (int i = 0; i < n / 2 + 1; ++i) {
        if (n % i == 0)     return false;
    }

    return true;
}

int main(){
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        if (isPrime(i) == true) {
            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size(); ++i) {

    }

    return 0;
}