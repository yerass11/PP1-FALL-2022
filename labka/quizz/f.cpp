// . Birthday party!

// Today is Aksunkar’s birthday! Aksunkar has a box. She wants to put balls in a box. 
//Help her write a program that determines if a given point falls into this field (rectangle). 
//The sides of the rectangle are parallel to the coordinate axes.

// Input format

// First, the coordinates of the upper left corner of the rectangle are entered from the keyboard, 
//then the lower right and, at the end, the coordinates of the point.

// Output format

// All coordinates are integers modulo not exceeding 10000. 
//The program should print the word yes if the point is inside the rectangle (the boundaries are counted),
// and no otherwise.
//INPUT
// 0 100 100 0 50 50
// Output

// yes
// Input
 
// 0 100 100 0 0 0
// Output

// yes
// Input

// -100 100 100 -100 -500 900
// Output

// no


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1, y1, x4, y4, x5, y5; 
        cin >> x1 >> y1 >> x4 >> y4 >> x5 >> y5;
        if (min(x1, x4) <= x5 && x5 <= max(x1, x4) && min(y1, y4) <= y5 && y5 <= max(y1, y4)) cout << "yes";
        else 
        cout << "no";


    return 0;
} 
