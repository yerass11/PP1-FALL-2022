#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(10) << fixed << sqrt( (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
    
    
    return 0;
}
