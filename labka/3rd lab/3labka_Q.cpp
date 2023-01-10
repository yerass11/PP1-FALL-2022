/*
Is it Prime?

Given a single number 
x
 check if it is prime number or not. 
 A prime number (or a prime) is a natural number greater than 1 
 that cannot be formed by multiplying two smaller natural numbers.
*/
#include <iostream>
using namespace std;
int main(){
int n; cin >> n;
bool prime = true;
        if (n == 0 || n == 1) {
        prime = false;
        }
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
        prime = false
        break;
        }
    }
    if (prime)
        cout << "Yes";
    else
        cout << "No";
  return 0;
}