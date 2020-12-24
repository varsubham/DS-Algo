#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(12);
    st.push(6);
    st.push(4);
    st.push(542);
    st.push(5);
    while(st.size()){
        int popped = st.top();
        st.pop();
        cout << popped << endl;
    }
    // string st;
    // int k = 4334;
    // st = to_string(k);
    // int s = st[1] - '0';
    // cout << s << endl;
}