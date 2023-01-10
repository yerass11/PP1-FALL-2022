// stoi(s) == 1771
// s.pop_back() == abc -> ab
// s.replace(4, 5) == hello -> Yaslan
//

#include <iostream>
using namespace std;

int main(){
    //string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //string s2 = "abcdefghijklmnopqrstuvwxyz";
    string s; cin >> s;
    //int let, ter;
    int letter;
            if(int(s[0]) >= 97 && s[0] <= 122){
                letter = int(s[0] - 32);
            cout << char(letter);
            } else cout << s;
        
        
        
        
        
        
        
        // !for (int i = 0; i < s1.size(); i++){
        // ?   if(int(s1[i]) >= 65 && s1[i] <= 90){
        // todo      let = int(s1[i] + 32);
        //     }
        //     cout << char(let);
        // }
        // cout << endl << endl;
        // for (int i = 0; i < s2.size(); i++){
        //     if(int(s2[i]) >= 97 && s1[i] <= 122){
        //         ter = int(s2[i] - 32);
        //     }
        //     cout << char(ter);
        // }
        // cout << endl << endl;
    return 0;
}