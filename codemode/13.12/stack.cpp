#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> st;
    string c;
    while (cin >> c) {
        if (c == "\n") {
            break;
        }
        if (c == "+") {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(second + first);
        }
        if (c == "-") {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(second - first);
        }
        if (c == "*") {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(second * first);
        }
        if (c == "/") {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(second / first);
        }
        if (c >= "0" && c <= "9") {
            st.push(stoi(c));
        }
        if (cin.get() == '\n') {
            break;
        }
    }

    cout << st.top() << endl;

    return 0;
}