#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) return false;
            
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    
    return st.empty();
}

int main() {
    string s;
    cout << "Enter brackets: ";
    cin >> s;
    
    cout << (isValid(s) ? "Valid!" : "Invalid!") << endl;
    return 0;
}