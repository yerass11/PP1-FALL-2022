#include <iostream>
#include <set>

using namespace std;

int main(){
    int n; cin >> n;
    set <int> st;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }

    int sum = 0;
    
    set <int>::iterator it;
    for (it = st.begin(); it != st.end(); ++it) {
        sum += *it;
    }

    cout << sum << endl;
    return 0;
}