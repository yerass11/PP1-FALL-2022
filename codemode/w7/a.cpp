#include <iostream>

using name





#include <iostream>
using namespace std;

void print(string text){
    cout << text << endl;
}
string getPrint(string text){
    return text;
}

int main(){
    print("Yera");    
    string s = getPrint("Hello");
    print(s);
    return 0;
}