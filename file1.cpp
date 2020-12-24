#include <iostream>
#include <string>
#include <stack>

using namespace std;

string isBalanced(string s) {
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == '}'){
            if(st.empty()) return "NO";
            else if(st.top() == '{')
                st.pop();
            else return "NO";
        }
        else if(s[i] == ']'){
            if(st.empty()) return "NO";
            else if(st.top() == '[')
                st.pop();
            else return "NO";
        }
        else if(s[i] == ')'){
            if(st.empty()) return "NO";
            else if(st.top() == '(')
                st.pop();
            else return "NO";
        }
    }
    if(!st.empty()) return "NO";
    else return "YES";
}

int main(){
    cout << isBalanced("{[(])}") << endl;;
}